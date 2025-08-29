const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextlayout_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextinlineobject.html
pub const qtextinlineobject = struct {
    /// New constructs a new QTextInlineObject object.
    ///
    /// ``` other: QtC.QTextInlineObject ```
    pub fn New(other: ?*anyopaque) QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextInlineObject object and invalidates the source QTextInlineObject object.
    ///
    /// ``` other: QtC.QTextInlineObject ```
    pub fn New2(other: ?*anyopaque) QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextInlineObject object.
    ///
    ///
    pub fn New3() QtC.QTextInlineObject {
        return qtc.QTextInlineObject_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTextInlineObject, other: QtC.QTextInlineObject ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextInlineObject_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTextInlineObject, other: QtC.QTextInlineObject ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextInlineObject_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextInlineObject_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QTextInlineObject_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QTextInlineObject_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Ascent(self: ?*anyopaque) f64 {
        return qtc.QTextInlineObject_Ascent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Descent(self: ?*anyopaque) f64 {
        return qtc.QTextInlineObject_Descent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QTextInlineObject_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textDirection)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn TextDirection(self: ?*anyopaque) i32 {
        return qtc.QTextInlineObject_TextDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
    ///
    /// ``` self: QtC.QTextInlineObject, w: f64 ```
    pub fn SetWidth(self: ?*anyopaque, w: f64) void {
        qtc.QTextInlineObject_SetWidth(@ptrCast(self), @floatCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
    ///
    /// ``` self: QtC.QTextInlineObject, a: f64 ```
    pub fn SetAscent(self: ?*anyopaque, a: f64) void {
        qtc.QTextInlineObject_SetAscent(@ptrCast(self), @floatCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
    ///
    /// ``` self: QtC.QTextInlineObject, d: f64 ```
    pub fn SetDescent(self: ?*anyopaque, d: f64) void {
        qtc.QTextInlineObject_SetDescent(@ptrCast(self), @floatCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn TextPosition(self: ?*anyopaque) i32 {
        return qtc.QTextInlineObject_TextPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return qtc.QTextInlineObject_FormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn Format(self: ?*anyopaque) QtC.QTextFormat {
        return qtc.QTextInlineObject_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#dtor.QTextInlineObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextInlineObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextInlineObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlayout.html
pub const qtextlayout = struct {
    /// New constructs a new QTextLayout object.
    ///
    ///
    pub fn New() QtC.QTextLayout {
        return qtc.QTextLayout_new();
    }

    /// New2 constructs a new QTextLayout object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTextLayout_new2(text_str);
    }

    /// New3 constructs a new QTextLayout object.
    ///
    /// ``` text: []const u8, font: QtC.QFont ```
    pub fn New3(text: []const u8, font: ?*anyopaque) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTextLayout_new3(text_str, @ptrCast(font));
    }

    /// New4 constructs a new QTextLayout object.
    ///
    /// ``` b: QtC.QTextBlock ```
    pub fn New4(b: ?*anyopaque) QtC.QTextLayout {
        return qtc.QTextLayout_new4(@ptrCast(b));
    }

    /// New5 constructs a new QTextLayout object.
    ///
    /// ``` text: []const u8, font: QtC.QFont, paintdevice: QtC.QPaintDevice ```
    pub fn New5(text: []const u8, font: ?*anyopaque, paintdevice: ?*anyopaque) QtC.QTextLayout {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QTextLayout_new5(text_str, @ptrCast(font), @ptrCast(paintdevice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
    ///
    /// ``` self: QtC.QTextLayout, f: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, f: ?*anyopaque) void {
        qtc.QTextLayout_SetFont(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#font)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QTextLayout_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
    ///
    /// ``` self: QtC.QTextLayout, rawFont: QtC.QRawFont ```
    pub fn SetRawFont(self: ?*anyopaque, rawFont: ?*anyopaque) void {
        qtc.QTextLayout_SetRawFont(@ptrCast(self), @ptrCast(rawFont));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setText)
    ///
    /// ``` self: QtC.QTextLayout, stringVal: []const u8 ```
    pub fn SetText(self: ?*anyopaque, stringVal: []const u8) void {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        qtc.QTextLayout_SetText(@ptrCast(self), stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#text)
    ///
    /// ``` self: QtC.QTextLayout, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextLayout_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
    ///
    /// ``` self: QtC.QTextLayout, option: QtC.QTextOption ```
    pub fn SetTextOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QTextLayout_SetTextOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn TextOption(self: ?*anyopaque) QtC.QTextOption {
        return qtc.QTextLayout_TextOption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
    ///
    /// ``` self: QtC.QTextLayout, position: i32, text: []const u8 ```
    pub fn SetPreeditArea(self: ?*anyopaque, position: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextLayout_SetPreeditArea(@ptrCast(self), @intCast(position), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn PreeditAreaPosition(self: ?*anyopaque) i32 {
        return qtc.QTextLayout_PreeditAreaPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
    ///
    /// ``` self: QtC.QTextLayout, allocator: std.mem.Allocator ```
    pub fn PreeditAreaText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextLayout_PreeditAreaText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlayout.PreeditAreaText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
    ///
    /// ``` self: QtC.QTextLayout, overrides: []QtC.QTextLayout__FormatRange ```
    pub fn SetFormats(self: ?*anyopaque, overrides: []QtC.QTextLayout__FormatRange) void {
        const overrides_list = qtc.libqt_list{
            .len = overrides.len,
            .data = @ptrCast(overrides.ptr),
        };
        qtc.QTextLayout_SetFormats(@ptrCast(self), overrides_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#formats)
    ///
    /// ``` self: QtC.QTextLayout, allocator: std.mem.Allocator ```
    pub fn Formats(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextLayout__FormatRange {
        const _arr: qtc.libqt_list = qtc.QTextLayout_Formats(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextLayout__FormatRange, _arr.len) catch @panic("qtextlayout.Formats: Memory allocation failed");
        const _data: [*]QtC.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn ClearFormats(self: ?*anyopaque) void {
        qtc.QTextLayout_ClearFormats(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
    ///
    /// ``` self: QtC.QTextLayout, enable: bool ```
    pub fn SetCacheEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QTextLayout_SetCacheEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn CacheEnabled(self: ?*anyopaque) bool {
        return qtc.QTextLayout_CacheEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
    ///
    /// ``` self: QtC.QTextLayout, style: qnamespace_enums.CursorMoveStyle ```
    pub fn SetCursorMoveStyle(self: ?*anyopaque, style: i32) void {
        qtc.QTextLayout_SetCursorMoveStyle(@ptrCast(self), @intCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cursorMoveStyle)
    ///
    /// ``` self: QtC.QTextLayout ```
    ///
    /// Returns: ``` qnamespace_enums.CursorMoveStyle ```
    pub fn CursorMoveStyle(self: ?*anyopaque) i32 {
        return qtc.QTextLayout_CursorMoveStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn BeginLayout(self: ?*anyopaque) void {
        qtc.QTextLayout_BeginLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn EndLayout(self: ?*anyopaque) void {
        qtc.QTextLayout_EndLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn ClearLayout(self: ?*anyopaque) void {
        qtc.QTextLayout_ClearLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn CreateLine(self: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLayout_CreateLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn LineCount(self: ?*anyopaque) i32 {
        return qtc.QTextLayout_LineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
    ///
    /// ``` self: QtC.QTextLayout, i: i32 ```
    pub fn LineAt(self: ?*anyopaque, i: i32) QtC.QTextLine {
        return qtc.QTextLayout_LineAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
    ///
    /// ``` self: QtC.QTextLayout, pos: i32 ```
    pub fn LineForTextPosition(self: ?*anyopaque, pos: i32) QtC.QTextLine {
        return qtc.QTextLayout_LineForTextPosition(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, pos: i32 ```
    pub fn IsValidCursorPosition(self: ?*anyopaque, pos: i32) bool {
        return qtc.QTextLayout_IsValidCursorPosition(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32 ```
    pub fn NextCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition(@ptrCast(self), @intCast(oldPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32 ```
    pub fn PreviousCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition(@ptrCast(self), @intCast(oldPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32 ```
    pub fn LeftCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_LeftCursorPosition(@ptrCast(self), @intCast(oldPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32 ```
    pub fn RightCursorPosition(self: ?*anyopaque, oldPos: i32) i32 {
        return qtc.QTextLayout_RightCursorPosition(@ptrCast(self), @intCast(oldPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPainter, pos: QtC.QPointF ```
    pub fn Draw(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTextLayout_Draw(@ptrCast(self), @ptrCast(p), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPainter, pos: QtC.QPointF, cursorPosition: i32 ```
    pub fn DrawCursor(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, cursorPosition: i32) void {
        qtc.QTextLayout_DrawCursor(@ptrCast(self), @ptrCast(p), @ptrCast(pos), @intCast(cursorPosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPainter, pos: QtC.QPointF, cursorPosition: i32, width: i32 ```
    pub fn DrawCursor2(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, cursorPosition: i32, width: i32) void {
        qtc.QTextLayout_DrawCursor2(@ptrCast(self), @ptrCast(p), @ptrCast(pos), @intCast(cursorPosition), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#position)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTextLayout_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPointF ```
    pub fn SetPosition(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QTextLayout_SetPosition(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QTextLayout_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return qtc.QTextLayout_MinimumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return qtc.QTextLayout_MaximumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLayout, from: i32, length: i32, flags: flag of qtextlayout_enums.GlyphRunRetrievalFlag, allocator: std.mem.Allocator ```
    pub fn GlyphRuns(self: ?*anyopaque, from: i32, length: i32, flags: u16, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns(@ptrCast(self), @intCast(from), @intCast(length), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLayout, allocator: std.mem.Allocator ```
    pub fn GlyphRuns2(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns2(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns2: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
    ///
    /// ``` self: QtC.QTextLayout, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QTextLayout_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32, mode: qtextlayout_enums.CursorMode ```
    pub fn NextCursorPosition2(self: ?*anyopaque, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition2(@ptrCast(self), @intCast(oldPos), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
    ///
    /// ``` self: QtC.QTextLayout, oldPos: i32, mode: qtextlayout_enums.CursorMode ```
    pub fn PreviousCursorPosition2(self: ?*anyopaque, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition2(@ptrCast(self), @intCast(oldPos), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPainter, pos: QtC.QPointF, selections: []QtC.QTextLayout__FormatRange ```
    pub fn Draw3(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, selections: []QtC.QTextLayout__FormatRange) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextLayout_Draw3(@ptrCast(self), @ptrCast(p), @ptrCast(pos), selections_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ``` self: QtC.QTextLayout, p: QtC.QPainter, pos: QtC.QPointF, selections: []QtC.QTextLayout__FormatRange, clip: QtC.QRectF ```
    pub fn Draw4(self: ?*anyopaque, p: ?*anyopaque, pos: ?*anyopaque, selections: []QtC.QTextLayout__FormatRange, clip: ?*anyopaque) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextLayout_Draw4(@ptrCast(self), @ptrCast(p), @ptrCast(pos), selections_list, @ptrCast(clip));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLayout, from: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns1(self: ?*anyopaque, from: i32, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns1(@ptrCast(self), @intCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns1: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLayout, from: i32, length: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns22(self: ?*anyopaque, from: i32, length: i32, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns22(@ptrCast(self), @intCast(from), @intCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextlayout.GlyphRuns22: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#dtor.QTextLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextline.html
pub const qtextline = struct {
    /// New constructs a new QTextLine object.
    ///
    /// ``` other: QtC.QTextLine ```
    pub fn New(other: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLine_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextLine object and invalidates the source QTextLine object.
    ///
    /// ``` other: QtC.QTextLine ```
    pub fn New2(other: ?*anyopaque) QtC.QTextLine {
        return qtc.QTextLine_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextLine object.
    ///
    ///
    pub fn New3() QtC.QTextLine {
        return qtc.QTextLine_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QTextLine, other: QtC.QTextLine ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLine_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QTextLine, other: QtC.QTextLine ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextLine_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#isValid)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QTextLine_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#rect)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QTextLine_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#x)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QTextLine_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#y)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#width)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#ascent)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Ascent(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Ascent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#descent)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Descent(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Descent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#height)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leading)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Leading(self: ?*anyopaque) f64 {
        return qtc.QTextLine_Leading(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
    ///
    /// ``` self: QtC.QTextLine, included: bool ```
    pub fn SetLeadingIncluded(self: ?*anyopaque, included: bool) void {
        qtc.QTextLine_SetLeadingIncluded(@ptrCast(self), included);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn LeadingIncluded(self: ?*anyopaque) bool {
        return qtc.QTextLine_LeadingIncluded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn NaturalTextWidth(self: ?*anyopaque) f64 {
        return qtc.QTextLine_NaturalTextWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn HorizontalAdvance(self: ?*anyopaque) f64 {
        return qtc.QTextLine_HorizontalAdvance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn NaturalTextRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QTextLine_NaturalTextRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ``` self: QtC.QTextLine, cursorPos: *i32 ```
    pub fn CursorToX(self: ?*anyopaque, cursorPos: *i32) f64 {
        return qtc.QTextLine_CursorToX(@ptrCast(self), @ptrCast(cursorPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ``` self: QtC.QTextLine, cursorPos: i32 ```
    pub fn CursorToX2(self: ?*anyopaque, cursorPos: i32) f64 {
        return qtc.QTextLine_CursorToX2(@ptrCast(self), @intCast(cursorPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ``` self: QtC.QTextLine, x: f64 ```
    pub fn XToCursor(self: ?*anyopaque, x: f64) i32 {
        return qtc.QTextLine_XToCursor(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
    ///
    /// ``` self: QtC.QTextLine, width: f64 ```
    pub fn SetLineWidth(self: ?*anyopaque, width: f64) void {
        qtc.QTextLine_SetLineWidth(@ptrCast(self), @floatCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
    ///
    /// ``` self: QtC.QTextLine, columns: i32 ```
    pub fn SetNumColumns(self: ?*anyopaque, columns: i32) void {
        qtc.QTextLine_SetNumColumns(@ptrCast(self), @intCast(columns));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
    ///
    /// ``` self: QtC.QTextLine, columns: i32, alignmentWidth: f64 ```
    pub fn SetNumColumns2(self: ?*anyopaque, columns: i32, alignmentWidth: f64) void {
        qtc.QTextLine_SetNumColumns2(@ptrCast(self), @intCast(columns), @floatCast(alignmentWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setPosition)
    ///
    /// ``` self: QtC.QTextLine, pos: QtC.QPointF ```
    pub fn SetPosition(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QTextLine_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#position)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.QTextLine_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textStart)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn TextStart(self: ?*anyopaque) i32 {
        return qtc.QTextLine_TextStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textLength)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn TextLength(self: ?*anyopaque) i32 {
        return qtc.QTextLine_TextLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn LineNumber(self: ?*anyopaque) i32 {
        return qtc.QTextLine_LineNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#draw)
    ///
    /// ``` self: QtC.QTextLine, painter: QtC.QPainter, position: QtC.QPointF ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque, position: ?*anyopaque) void {
        qtc.QTextLine_Draw(@ptrCast(self), @ptrCast(painter), @ptrCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLine, from: i32, length: i32, flags: flag of qtextlayout_enums.GlyphRunRetrievalFlag, allocator: std.mem.Allocator ```
    pub fn GlyphRuns(self: ?*anyopaque, from: i32, length: i32, flags: u16, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns(@ptrCast(self), @intCast(from), @intCast(length), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLine, allocator: std.mem.Allocator ```
    pub fn GlyphRuns2(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns2(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns2: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ``` self: QtC.QTextLine, cursorPos: *i32, edge: qtextlayout_enums.Edge ```
    pub fn CursorToX22(self: ?*anyopaque, cursorPos: *i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX22(@ptrCast(self), @ptrCast(cursorPos), @intCast(edge));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ``` self: QtC.QTextLine, cursorPos: i32, edge: qtextlayout_enums.Edge ```
    pub fn CursorToX23(self: ?*anyopaque, cursorPos: i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX23(@ptrCast(self), @intCast(cursorPos), @intCast(edge));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ``` self: QtC.QTextLine, x: f64, param2: qtextlayout_enums.CursorPosition ```
    pub fn XToCursor2(self: ?*anyopaque, x: f64, param2: i32) i32 {
        return qtc.QTextLine_XToCursor2(@ptrCast(self), @floatCast(x), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLine, from: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns1(self: ?*anyopaque, from: i32, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns1(@ptrCast(self), @intCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns1: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ``` self: QtC.QTextLine, from: i32, length: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns22(self: ?*anyopaque, from: i32, length: i32, allocator: std.mem.Allocator) []QtC.QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns22(@ptrCast(self), @intCast(from), @intCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGlyphRun, _arr.len) catch @panic("qtextline.GlyphRuns22: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#dtor.QTextLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextLine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlayout-formatrange.html
pub const qtextlayout__formatrange = struct {
    /// New constructs a new QTextLayout::FormatRange object.
    ///
    ///
    pub fn New() QtC.QTextLayout__FormatRange {
        return qtc.QTextLayout__FormatRange_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange ```
    pub fn Start(self: ?*anyopaque) i32 {
        return qtc.QTextLayout__FormatRange_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange, start: i32 ```
    pub fn SetStart(self: ?*anyopaque, start: i32) void {
        qtc.QTextLayout__FormatRange_SetStart(@ptrCast(self), @intCast(start));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange ```
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QTextLayout__FormatRange_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange, length: i32 ```
    pub fn SetLength(self: ?*anyopaque, length: i32) void {
        qtc.QTextLayout__FormatRange_SetLength(@ptrCast(self), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange ```
    pub fn Format(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QTextLayout__FormatRange_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ``` self: QtC.QTextLayout__FormatRange, format: QtC.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: QtC.QTextCharFormat) void {
        qtc.QTextLayout__FormatRange_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextLayout__FormatRange ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextLayout__FormatRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextlayout.html#types
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
