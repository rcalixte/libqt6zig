const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html
pub const qabstracttextdocumentlayout = struct {
    /// New constructs a new QAbstractTextDocumentLayout object.
    ///
    /// ``` doc: QtC.QTextDocument ```
    pub fn New(doc: ?*anyopaque) QtC.QAbstractTextDocumentLayout {
        return qtc.QAbstractTextDocumentLayout_new(@ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractTextDocumentLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractTextDocumentLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractTextDocumentLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractTextDocumentLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, context: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Draw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, context: QtC.QAbstractTextDocumentLayout__PaintContext) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, context: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseDraw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, point: QtC.QPointF, accuracy: qnamespace_enums.HitTestAccuracy ```
    pub fn HitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i64) i32 {
        return qtc.QAbstractTextDocumentLayout_HitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, point: QtC.QPointF, accuracy: qnamespace_enums.HitTestAccuracy) callconv(.c) i32 ```
    pub fn OnHitTest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnHitTest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, point: QtC.QPointF, accuracy: qnamespace_enums.HitTestAccuracy ```
    pub fn QBaseHitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i64) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseHitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: QtC.QPointF, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: QtC.QPointF, allocator: std.mem.Allocator ```
    pub fn ImageAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.ImageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: QtC.QPointF ```
    pub fn FormatAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextFormat {
        return qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: QtC.QPointF ```
    pub fn BlockWithMarkerAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextBlock {
        return qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn PageCount(self: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_PageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnPageCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnPageCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn QBasePageCount(self: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_QBasePageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn DocumentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QAbstractTextDocumentLayout_DocumentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn () callconv(.c) QtC.QSizeF ```
    pub fn OnDocumentSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSizeF) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn QBaseDocumentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QAbstractTextDocumentLayout_QBaseDocumentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, frame: QtC.QTextFrame ```
    pub fn FrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_FrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, frame: QtC.QTextFrame) callconv(.c) QtC.QRectF ```
    pub fn OnFrameBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, frame: QtC.QTextFrame ```
    pub fn QBaseFrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_QBaseFrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock) callconv(.c) QtC.QRectF ```
    pub fn OnBlockBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QAbstractTextDocumentLayout_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, device: QtC.QPaintDevice ```
    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn PaintDevice(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, objectType: i32, component: QtC.QObject ```
    pub fn RegisterHandler(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, objectType: i32 ```
    pub fn UnregisterHandler(self: ?*anyopaque, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self), @intCast(objectType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, objectType: i32 ```
    pub fn HandlerForObject(self: ?*anyopaque, objectType: i32) QtC.QTextObjectInterface {
        return qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self), @intCast(objectType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout) callconv(.c) void ```
    pub fn OnUpdate(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn UpdateBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock) callconv(.c) void ```
    pub fn OnUpdateBlock(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, newSize: QtC.QSizeF ```
    pub fn DocumentSizeChanged(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self), @ptrCast(newSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, newSize: QtC.QSizeF) callconv(.c) void ```
    pub fn OnDocumentSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, newPages: i32 ```
    pub fn PageCountChanged(self: ?*anyopaque, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self), @intCast(newPages));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, newPages: i32) callconv(.c) void ```
    pub fn OnPageCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn DocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_DocumentChanged(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) callconv(.c) void ```
    pub fn OnDocumentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn QBaseDocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_QBaseDocumentChanged(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn ResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_ResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnResizeInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnResizeInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBaseResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn PositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_PositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnPositionInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnPositionInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBasePositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBasePositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn DrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnDrawInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDrawInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBaseDrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseDrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn FormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_FormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, pos: i32) callconv(.c) i32 ```
    pub fn OnFormatIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnFormatIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseFormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QAbstractTextDocumentLayout_Format(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, pos: i32) callconv(.c) QtC.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.QAbstractTextDocumentLayout_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QAbstractTextDocumentLayout_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractTextDocumentLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractTextDocumentLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, objectType: i32, component: QtC.QObject ```
    pub fn UnregisterHandler2(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, param1: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, param1: QtC.QRectF) callconv(.c) void ```
    pub fn OnUpdate1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, name: []const u8 ```
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
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstracttextdocumentlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractTextDocumentLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstracttextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstracttextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
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
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QAbstractTextDocumentLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, param1: QtC.QObject ```
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

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAbstractTextDocumentLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QAbstractTextDocumentLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QAbstractTextDocumentLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QAbstractTextDocumentLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#dtor.QAbstractTextDocumentLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextobjectinterface.html
pub const qtextobjectinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
    ///
    /// ``` self: QtC.QTextObjectInterface, doc: QtC.QTextDocument, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn IntrinsicSize(self: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) QtC.QSizeF {
        return qtc.QTextObjectInterface_IntrinsicSize(@ptrCast(self), @ptrCast(doc), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
    ///
    /// ``` self: QtC.QTextObjectInterface, painter: QtC.QPainter, rect: QtC.QRectF, doc: QtC.QTextDocument, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn DrawObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QTextObjectInterface_DrawObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(doc), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator=)
    ///
    /// ``` self: QtC.QTextObjectInterface, param1: QtC.QTextObjectInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextObjectInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#dtor.QTextObjectInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextObjectInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextObjectInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html
pub const qabstracttextdocumentlayout__selection = struct {
    /// New constructs a new QAbstractTextDocumentLayout::Selection object.
    ///
    /// ``` param1: QtC.QAbstractTextDocumentLayout__Selection ```
    pub fn New(param1: ?*anyopaque) QtC.QAbstractTextDocumentLayout__Selection {
        return qtc.QAbstractTextDocumentLayout__Selection_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__selection.html#operator=)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout__Selection, param1: QtC.QAbstractTextDocumentLayout__Selection ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__Selection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout__Selection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__Selection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html
pub const qabstracttextdocumentlayout__paintcontext = struct {
    /// New constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    ///
    pub fn New() QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QAbstractTextDocumentLayout__PaintContext_new();
    }

    /// New2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    /// ``` param1: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn New2(param1: ?*anyopaque) QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QAbstractTextDocumentLayout__PaintContext_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__paintcontext.html#operator=)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout__PaintContext, param1: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_Delete(@ptrCast(self));
    }
};
