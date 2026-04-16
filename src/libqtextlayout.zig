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

    /// New constructs a new QTextInlineObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn New(other: anytype) QTextInlineObject {
        comptime _ = @TypeOf(other)._is_QTextInlineObject;
        return .{ .ptr = qtc.QTextInlineObject_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextInlineObject object and invalidates the source QTextInlineObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn New2(other: anytype) QTextInlineObject {
        comptime _ = @TypeOf(other)._is_QTextInlineObject;
        return .{ .ptr = qtc.QTextInlineObject_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextInlineObject object.
    ///
    pub fn New3() QTextInlineObject {
        return .{ .ptr = qtc.QTextInlineObject_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn CopyAssign(self: QTextInlineObject, other: QTextInlineObject) void {
        qtc.QTextInlineObject_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn MoveAssign(self: QTextInlineObject, other: QTextInlineObject) void {
        qtc.QTextInlineObject_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn IsValid(self: QTextInlineObject) bool {
        return qtc.QTextInlineObject_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Rect(self: QTextInlineObject) QRectF {
        return .{ .ptr = qtc.QTextInlineObject_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Width(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Ascent(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Descent(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Height(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Height(@ptrCast(self.ptr));
    }

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
    pub fn TextDirection(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_TextDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` w: f64 `
    ///
    pub fn SetWidth(self: QTextInlineObject, w: f64) void {
        qtc.QTextInlineObject_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` a: f64 `
    ///
    pub fn SetAscent(self: QTextInlineObject, a: f64) void {
        qtc.QTextInlineObject_SetAscent(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` d: f64 `
    ///
    pub fn SetDescent(self: QTextInlineObject, d: f64) void {
        qtc.QTextInlineObject_SetDescent(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn TextPosition(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_TextPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn FormatIndex(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Format(self: QTextInlineObject) QTextFormat {
        return .{ .ptr = qtc.QTextInlineObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#dtor.QTextInlineObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn Delete(self: QTextInlineObject) void {
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

    /// New constructs a new QTextLayout object.
    ///
    pub fn New() QTextLayout {
        return .{ .ptr = qtc.QTextLayout_new() };
    }

    /// New2 constructs a new QTextLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTextLayout_new2(text_str) };
    }

    /// New3 constructs a new QTextLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QFont `
    ///
    pub fn New3(text: []const u8, font: anytype) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QTextLayout_new3(text_str, @ptrCast(font.ptr)) };
    }

    /// New4 constructs a new QTextLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b: QTextBlock `
    ///
    pub fn New4(b: anytype) QTextLayout {
        comptime _ = @TypeOf(b)._is_QTextBlock;
        return .{ .ptr = qtc.QTextLayout_new4(@ptrCast(b.ptr)) };
    }

    /// New5 constructs a new QTextLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QFont `
    ///
    /// ` paintdevice: QPaintDevice `
    ///
    pub fn New5(text: []const u8, font: anytype, paintdevice: anytype) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(paintdevice)._is_QPaintDevice;
        return .{ .ptr = qtc.QTextLayout_new5(text_str, @ptrCast(font.ptr), @ptrCast(paintdevice.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` f: QFont `
    ///
    pub fn SetFont(self: QTextLayout, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QTextLayout_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn Font(self: QTextLayout) QFont {
        return .{ .ptr = qtc.QTextLayout_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` rawFont: QRawFont `
    ///
    pub fn SetRawFont(self: QTextLayout, rawFont: anytype) void {
        comptime _ = @TypeOf(rawFont)._is_QRawFont;
        qtc.QTextLayout_SetRawFont(@ptrCast(self.ptr), @ptrCast(rawFont.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn SetText(self: QTextLayout, stringVal: []const u8) void {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        qtc.QTextLayout_SetText(@ptrCast(self.ptr), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTextLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextLayout_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` option: QTextOption `
    ///
    pub fn SetTextOption(self: QTextLayout, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QTextOption;
        qtc.QTextLayout_SetTextOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn TextOption(self: QTextLayout) QTextOption {
        return .{ .ptr = qtc.QTextLayout_TextOption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPreeditArea(self: QTextLayout, position: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextLayout_SetPreeditArea(@ptrCast(self.ptr), @bitCast(position), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn PreeditAreaPosition(self: QTextLayout) i32 {
        return qtc.QTextLayout_PreeditAreaPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreeditAreaText(self: QTextLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextLayout_PreeditAreaText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.PreeditAreaText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` overrides: []QTextLayout__FormatRange `
    ///
    pub fn SetFormats(self: QTextLayout, overrides: []QTextLayout__FormatRange) void {
        const overrides_list = qtc.libqt_list{
            .len = overrides.len,
            .data = @ptrCast(overrides.ptr),
        };
        qtc.QTextLayout_SetFormats(@ptrCast(self.ptr), overrides_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#formats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Formats(self: QTextLayout, allocator: std.mem.Allocator) []QTextLayout__FormatRange {
        const _arr: qtc.libqt_list = qtc.QTextLayout_Formats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLayout__FormatRange, _arr.len) catch @panic("qtextlayout.Formats: Memory allocation failed");
        const _data: [*]QtC.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn ClearFormats(self: QTextLayout) void {
        qtc.QTextLayout_ClearFormats(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCacheEnabled(self: QTextLayout, enable: bool) void {
        qtc.QTextLayout_SetCacheEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn CacheEnabled(self: QTextLayout) bool {
        return qtc.QTextLayout_CacheEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn SetCursorMoveStyle(self: QTextLayout, style: i32) void {
        qtc.QTextLayout_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

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
    pub fn CursorMoveStyle(self: QTextLayout) i32 {
        return qtc.QTextLayout_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn BeginLayout(self: QTextLayout) void {
        qtc.QTextLayout_BeginLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn EndLayout(self: QTextLayout) void {
        qtc.QTextLayout_EndLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn ClearLayout(self: QTextLayout) void {
        qtc.QTextLayout_ClearLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn CreateLine(self: QTextLayout) QTextLine {
        return .{ .ptr = qtc.QTextLayout_CreateLine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn LineCount(self: QTextLayout) i32 {
        return qtc.QTextLayout_LineCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` i: i32 `
    ///
    pub fn LineAt(self: QTextLayout, i: i32) QTextLine {
        return .{ .ptr = qtc.QTextLayout_LineAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn LineForTextPosition(self: QTextLayout, pos: i32) QTextLine {
        return .{ .ptr = qtc.QTextLayout_LineForTextPosition(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn IsValidCursorPosition(self: QTextLayout, pos: i32) bool {
        return qtc.QTextLayout_IsValidCursorPosition(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn NextCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn PreviousCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn LeftCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_LeftCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn RightCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_RightCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

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
    pub fn Draw(self: QTextLayout, p: anytype, pos: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_Draw(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn DrawCursor(self: QTextLayout, p: anytype, pos: anytype, cursorPosition: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_DrawCursor(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), @bitCast(cursorPosition));
    }

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
    /// ` width: i32 `
    ///
    pub fn DrawCursor2(self: QTextLayout, p: anytype, pos: anytype, cursorPosition: i32, width: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_DrawCursor2(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), @bitCast(cursorPosition), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn Position(self: QTextLayout) QPointF {
        return .{ .ptr = qtc.QTextLayout_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPointF `
    ///
    pub fn SetPosition(self: QTextLayout, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QTextLayout_SetPosition(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn BoundingRect(self: QTextLayout) QRectF {
        return .{ .ptr = qtc.QTextLayout_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn MinimumWidth(self: QTextLayout) f64 {
        return qtc.QTextLayout_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn MaximumWidth(self: QTextLayout) f64 {
        return qtc.QTextLayout_MaximumWidth(@ptrCast(self.ptr));
    }

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
    pub fn GlyphRuns(self: QTextLayout, allocator: std.mem.Allocator, from: i32, length: i32, flags: u16) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns(@ptrCast(self.ptr), @bitCast(from), @bitCast(length), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlyphRuns2(self: QTextLayout, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns2: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` flags: i32 `
    ///
    pub fn SetFlags(self: QTextLayout, flags: i32) void {
        qtc.QTextLayout_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn NextCursorPosition2(self: QTextLayout, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition2(@ptrCast(self.ptr), @bitCast(oldPos), @bitCast(mode));
    }

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
    pub fn PreviousCursorPosition2(self: QTextLayout, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition2(@ptrCast(self.ptr), @bitCast(oldPos), @bitCast(mode));
    }

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
    pub fn Draw3(self: QTextLayout, p: anytype, pos: anytype, selections: []QTextLayout__FormatRange) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextLayout_Draw3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), selections_list);
    }

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
    pub fn Draw4(self: QTextLayout, p: anytype, pos: anytype, selections: []QTextLayout__FormatRange, clip: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        comptime _ = @TypeOf(clip)._is_QRectF;
        qtc.QTextLayout_Draw4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), selections_list, @ptrCast(clip.ptr));
    }

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
    pub fn GlyphRuns1(self: QTextLayout, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns1: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn GlyphRuns22(self: QTextLayout, allocator: std.mem.Allocator, from: i32, length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns22(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns22: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#dtor.QTextLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLayout `
    ///
    pub fn Delete(self: QTextLayout) void {
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

    /// New constructs a new QTextLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLine `
    ///
    pub fn New(other: anytype) QTextLine {
        comptime _ = @TypeOf(other)._is_QTextLine;
        return .{ .ptr = qtc.QTextLine_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextLine object and invalidates the source QTextLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLine `
    ///
    pub fn New2(other: anytype) QTextLine {
        comptime _ = @TypeOf(other)._is_QTextLine;
        return .{ .ptr = qtc.QTextLine_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextLine object.
    ///
    pub fn New3() QTextLine {
        return .{ .ptr = qtc.QTextLine_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLine `
    ///
    /// ` other: QTextLine `
    ///
    pub fn CopyAssign(self: QTextLine, other: QTextLine) void {
        qtc.QTextLine_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLine `
    ///
    /// ` other: QTextLine `
    ///
    pub fn MoveAssign(self: QTextLine, other: QTextLine) void {
        qtc.QTextLine_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn IsValid(self: QTextLine) bool {
        return qtc.QTextLine_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Rect(self: QTextLine) QRectF {
        return .{ .ptr = qtc.QTextLine_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn X(self: QTextLine) f64 {
        return qtc.QTextLine_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Y(self: QTextLine) f64 {
        return qtc.QTextLine_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Width(self: QTextLine) f64 {
        return qtc.QTextLine_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Ascent(self: QTextLine) f64 {
        return qtc.QTextLine_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Descent(self: QTextLine) f64 {
        return qtc.QTextLine_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Height(self: QTextLine) f64 {
        return qtc.QTextLine_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Leading(self: QTextLine) f64 {
        return qtc.QTextLine_Leading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` included: bool `
    ///
    pub fn SetLeadingIncluded(self: QTextLine, included: bool) void {
        qtc.QTextLine_SetLeadingIncluded(@ptrCast(self.ptr), included);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn LeadingIncluded(self: QTextLine) bool {
        return qtc.QTextLine_LeadingIncluded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn NaturalTextWidth(self: QTextLine) f64 {
        return qtc.QTextLine_NaturalTextWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn HorizontalAdvance(self: QTextLine) f64 {
        return qtc.QTextLine_HorizontalAdvance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn NaturalTextRect(self: QTextLine) QRectF {
        return .{ .ptr = qtc.QTextLine_NaturalTextRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: *i32 `
    ///
    pub fn CursorToX(self: QTextLine, cursorPos: *i32) f64 {
        return qtc.QTextLine_CursorToX(@ptrCast(self.ptr), @ptrCast(cursorPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn CursorToX2(self: QTextLine, cursorPos: i32) f64 {
        return qtc.QTextLine_CursorToX2(@ptrCast(self.ptr), @bitCast(cursorPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` x: f64 `
    ///
    pub fn XToCursor(self: QTextLine, x: f64) i32 {
        return qtc.QTextLine_XToCursor(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` width: f64 `
    ///
    pub fn SetLineWidth(self: QTextLine, width: f64) void {
        qtc.QTextLine_SetLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetNumColumns(self: QTextLine, columns: i32) void {
        qtc.QTextLine_SetNumColumns(@ptrCast(self.ptr), @bitCast(columns));
    }

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
    pub fn SetNumColumns2(self: QTextLine, columns: i32, alignmentWidth: f64) void {
        qtc.QTextLine_SetNumColumns2(@ptrCast(self.ptr), @bitCast(columns), @bitCast(alignmentWidth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPosition(self: QTextLine, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLine_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn Position(self: QTextLine) QPointF {
        return .{ .ptr = qtc.QTextLine_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn TextStart(self: QTextLine) i32 {
        return qtc.QTextLine_TextStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn TextLength(self: QTextLine) i32 {
        return qtc.QTextLine_TextLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn LineNumber(self: QTextLine) i32 {
        return qtc.QTextLine_LineNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` position: QPointF `
    ///
    pub fn Draw(self: QTextLine, painter: anytype, position: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(position)._is_QPointF;
        qtc.QTextLine_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(position.ptr));
    }

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
    pub fn GlyphRuns(self: QTextLine, allocator: std.mem.Allocator, from: i32, length: i32, flags: u16) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns(@ptrCast(self.ptr), @bitCast(from), @bitCast(length), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlyphRuns2(self: QTextLine, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns2: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn CursorToX22(self: QTextLine, cursorPos: *i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX22(@ptrCast(self.ptr), @ptrCast(cursorPos), @bitCast(edge));
    }

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
    pub fn CursorToX23(self: QTextLine, cursorPos: i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX23(@ptrCast(self.ptr), @bitCast(cursorPos), @bitCast(edge));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` x: f64 `
    ///
    /// ` param2: qtextlayout_enums.CursorPosition `
    ///
    pub fn XToCursor2(self: QTextLine, x: f64, param2: i32) i32 {
        return qtc.QTextLine_XToCursor2(@ptrCast(self.ptr), @bitCast(x), @bitCast(param2));
    }

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
    pub fn GlyphRuns1(self: QTextLine, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns1: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn GlyphRuns22(self: QTextLine, allocator: std.mem.Allocator, from: i32, length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns22(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns22: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#dtor.QTextLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLine `
    ///
    pub fn Delete(self: QTextLine) void {
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

    /// New constructs a new QTextLayout::FormatRange object.
    ///
    pub fn New() QTextLayout__FormatRange {
        return .{ .ptr = qtc.QTextLayout__FormatRange_new() };
    }

    /// New2 constructs a new QTextLayout::FormatRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextLayout__FormatRange `
    ///
    pub fn New2(param1: anytype) QTextLayout__FormatRange {
        comptime _ = @TypeOf(param1)._is_QTextLayout__FormatRange;
        return .{ .ptr = qtc.QTextLayout__FormatRange_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn Start(self: QTextLayout__FormatRange) i32 {
        return qtc.QTextLayout__FormatRange_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` start: i32 `
    ///
    pub fn SetStart(self: QTextLayout__FormatRange, start: i32) void {
        qtc.QTextLayout__FormatRange_SetStart(@ptrCast(self.ptr), @bitCast(start));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn Length(self: QTextLayout__FormatRange) i32 {
        return qtc.QTextLayout__FormatRange_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` length: i32 `
    ///
    pub fn SetLength(self: QTextLayout__FormatRange, length: i32) void {
        qtc.QTextLayout__FormatRange_SetLength(@ptrCast(self.ptr), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn Format(self: QTextLayout__FormatRange) QTextCharFormat {
        return .{ .ptr = qtc.QTextLayout__FormatRange_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: QTextLayout__FormatRange, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextLayout__FormatRange_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn Delete(self: QTextLayout__FormatRange) void {
        qtc.QTextLayout__FormatRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)
pub const enums = struct {
    pub const GlyphRunRetrievalFlag = enum(u16) {
        pub const RetrieveGlyphIndexes: u16 = 1;
        pub const RetrieveGlyphPositions: u16 = 2;
        pub const RetrieveStringIndexes: u16 = 4;
        pub const RetrieveString: u16 = 8;
        pub const DefaultRetrievalFlags: u16 = 3;
        pub const RetrieveAll: u16 = 65535;
    };

    pub const CursorMode = enum(i32) {
        pub const SkipCharacters: i32 = 0;
        pub const SkipWords: i32 = 1;
    };

    pub const Edge = enum(i32) {
        pub const Leading: i32 = 0;
        pub const Trailing: i32 = 1;
    };

    pub const CursorPosition = enum(i32) {
        pub const CursorBetweenCharacters: i32 = 0;
        pub const CursorOnCharacter: i32 = 1;
    };
};
