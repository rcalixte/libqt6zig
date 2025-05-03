const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html
pub const qabstracttextdocumentlayout = struct {
    /// New constructs a new QAbstractTextDocumentLayout object.
    ///
    /// ``` doc: ?*C.QTextDocument ```
    pub fn New(doc: ?*anyopaque) ?*C.QAbstractTextDocumentLayout {
        return C.QAbstractTextDocumentLayout_new(@ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QAbstractTextDocumentLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QAbstractTextDocumentLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QAbstractTextDocumentLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, painter: ?*C.QPainter, context: ?*C.QAbstractTextDocumentLayout__PaintContext ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_Draw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QPainter, ?*C.QAbstractTextDocumentLayout__PaintContext) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, painter: ?*C.QPainter, context: ?*C.QAbstractTextDocumentLayout__PaintContext ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque, context: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseDraw(@ptrCast(self), @ptrCast(painter), @ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, point: ?*C.QPointF, accuracy: qnamespace_enums.HitTestAccuracy ```
    pub fn HitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i64) i32 {
        return C.QAbstractTextDocumentLayout_HitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QPointF, qnamespace_enums.HitTestAccuracy) callconv(.c) i32 ```
    pub fn OnHitTest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnHitTest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, point: ?*C.QPointF, accuracy: qnamespace_enums.HitTestAccuracy ```
    pub fn QBaseHitTest(self: ?*anyopaque, point: ?*anyopaque, accuracy: i64) i32 {
        return C.QAbstractTextDocumentLayout_QBaseHitTest(@ptrCast(self), @ptrCast(point), @intCast(accuracy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: ?*C.QPointF, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: ?*C.QPointF, allocator: std.mem.Allocator ```
    pub fn ImageAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self), @ptrCast(pos));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: ?*C.QPointF ```
    pub fn FormatAt(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QTextFormat {
        return C.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: ?*C.QPointF ```
    pub fn BlockWithMarkerAt(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QTextBlock {
        return C.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn PageCount(self: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_PageCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnPageCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnPageCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn QBasePageCount(self: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_QBasePageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn DocumentSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QAbstractTextDocumentLayout_DocumentSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn () callconv(.c) ?*C.QSizeF ```
    pub fn OnDocumentSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSizeF) void {
        C.QAbstractTextDocumentLayout_OnDocumentSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn QBaseDocumentSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QAbstractTextDocumentLayout_QBaseDocumentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, frame: ?*C.QTextFrame ```
    pub fn FrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) ?*C.QRectF {
        return C.QAbstractTextDocumentLayout_FrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTextFrame) callconv(.c) ?*C.QRectF ```
    pub fn OnFrameBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRectF) void {
        C.QAbstractTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, frame: ?*C.QTextFrame ```
    pub fn QBaseFrameBoundingRect(self: ?*anyopaque, frame: ?*anyopaque) ?*C.QRectF {
        return C.QAbstractTextDocumentLayout_QBaseFrameBoundingRect(@ptrCast(self), @ptrCast(frame));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, block: ?*C.QTextBlock ```
    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) ?*C.QRectF {
        return C.QAbstractTextDocumentLayout_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTextBlock) callconv(.c) ?*C.QRectF ```
    pub fn OnBlockBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRectF) void {
        C.QAbstractTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, block: ?*C.QTextBlock ```
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) ?*C.QRectF {
        return C.QAbstractTextDocumentLayout_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, device: ?*C.QPaintDevice ```
    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn PaintDevice(self: ?*anyopaque) ?*C.QPaintDevice {
        return C.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QAbstractTextDocumentLayout_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, objectType: i32, component: ?*C.QObject ```
    pub fn RegisterHandler(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, objectType: i32 ```
    pub fn UnregisterHandler(self: ?*anyopaque, objectType: i32) void {
        C.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self), @intCast(objectType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, objectType: i32 ```
    pub fn HandlerForObject(self: ?*anyopaque, objectType: i32) ?*C.QTextObjectInterface {
        return C.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self), @intCast(objectType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_Update(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout) callconv(.c) void ```
    pub fn OnUpdate(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, block: ?*C.QTextBlock ```
    pub fn UpdateBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self), @ptrCast(block));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTextBlock) callconv(.c) void ```
    pub fn OnUpdateBlock(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, newSize: ?*C.QSizeF ```
    pub fn DocumentSizeChanged(self: ?*anyopaque, newSize: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self), @ptrCast(newSize));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QSizeF) callconv(.c) void ```
    pub fn OnDocumentSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, newPages: i32 ```
    pub fn PageCountChanged(self: ?*anyopaque, newPages: i32) void {
        C.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self), @intCast(newPages));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, i32) callconv(.c) void ```
    pub fn OnPageCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn DocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        C.QAbstractTextDocumentLayout_DocumentChanged(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, i32, i32, i32) callconv(.c) void ```
    pub fn OnDocumentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnDocumentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32 ```
    pub fn QBaseDocumentChanged(self: ?*anyopaque, from: i32, charsRemoved: i32, charsAdded: i32) void {
        C.QAbstractTextDocumentLayout_QBaseDocumentChanged(@ptrCast(self), @intCast(from), @intCast(charsRemoved), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn ResizeInlineObject(self: ?*anyopaque, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_ResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTextInlineObject, i32, ?*C.QTextFormat) callconv(.c) void ```
    pub fn OnResizeInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnResizeInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn QBaseResizeInlineObject(self: ?*anyopaque, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn PositionInlineObject(self: ?*anyopaque, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_PositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTextInlineObject, i32, ?*C.QTextFormat) callconv(.c) void ```
    pub fn OnPositionInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnPositionInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn QBasePositionInlineObject(self: ?*anyopaque, item: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBasePositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, painter: ?*C.QPainter, rect: ?*C.QRectF, object: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn DrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_DrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QPainter, ?*C.QRectF, ?*C.QTextInlineObject, i32, ?*C.QTextFormat) callconv(.c) void ```
    pub fn OnDrawInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*C.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnDrawInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, painter: ?*C.QPainter, rect: ?*C.QRectF, object: ?*C.QTextInlineObject, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn QBaseDrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: ?*C.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseDrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn FormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return C.QAbstractTextDocumentLayout_FormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, i32) callconv(.c) i32 ```
    pub fn OnFormatIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnFormatIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return C.QAbstractTextDocumentLayout_QBaseFormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) ?*C.QTextCharFormat {
        return C.QAbstractTextDocumentLayout_Format(@ptrCast(self), @intCast(pos));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, i32) callconv(.c) ?*C.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QTextCharFormat) void {
        C.QAbstractTextDocumentLayout_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) ?*C.QTextCharFormat {
        return C.QAbstractTextDocumentLayout_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAbstractTextDocumentLayout_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QAbstractTextDocumentLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, objectType: i32, component: ?*C.QObject ```
    pub fn UnregisterHandler2(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, param1: ?*C.QRectF ```
    pub fn Update1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_Update1(@ptrCast(self), @ptrCast(param1));
    }

    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QRectF) callconv(.c) void ```
    pub fn OnUpdate1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QAbstractTextDocumentLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractTextDocumentLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractTextDocumentLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractTextDocumentLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QAbstractTextDocumentLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QAbstractTextDocumentLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QAbstractTextDocumentLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAbstractTextDocumentLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAbstractTextDocumentLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAbstractTextDocumentLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QAbstractTextDocumentLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAbstractTextDocumentLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout, slot: fn (?*C.QAbstractTextDocumentLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractTextDocumentLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextobjectinterface.html
pub const qtextobjectinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
    ///
    /// ``` self: ?*C.QTextObjectInterface, doc: ?*C.QTextDocument, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn IntrinsicSize(self: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) ?*C.QSizeF {
        return C.QTextObjectInterface_IntrinsicSize(@ptrCast(self), @ptrCast(doc), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
    ///
    /// ``` self: ?*C.QTextObjectInterface, painter: ?*C.QPainter, rect: ?*C.QRectF, doc: ?*C.QTextDocument, posInDocument: i32, format: ?*C.QTextFormat ```
    pub fn DrawObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, doc: ?*anyopaque, posInDocument: i32, format: ?*anyopaque) void {
        C.QTextObjectInterface_DrawObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(doc), @intCast(posInDocument), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator=)
    ///
    /// ``` self: ?*C.QTextObjectInterface, param1: ?*C.QTextObjectInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTextObjectInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextObjectInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextObjectInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html
pub const qabstracttextdocumentlayout__selection = struct {
    /// New constructs a new QAbstractTextDocumentLayout::Selection object.
    ///
    /// ``` param1: ?*C.QAbstractTextDocumentLayout__Selection ```
    pub fn New(param1: ?*anyopaque) ?*C.QAbstractTextDocumentLayout__Selection {
        return C.QAbstractTextDocumentLayout__Selection_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__selection.html#operator=)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout__Selection, param1: ?*C.QAbstractTextDocumentLayout__Selection ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout__Selection_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout__Selection ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout__Selection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html
pub const qabstracttextdocumentlayout__paintcontext = struct {
    /// New constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    ///
    pub fn New() ?*C.QAbstractTextDocumentLayout__PaintContext {
        return C.QAbstractTextDocumentLayout__PaintContext_new();
    }

    /// New2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    /// ``` param1: ?*C.QAbstractTextDocumentLayout__PaintContext ```
    pub fn New2(param1: ?*anyopaque) ?*C.QAbstractTextDocumentLayout__PaintContext {
        return C.QAbstractTextDocumentLayout__PaintContext_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout__paintcontext.html#operator=)
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout__PaintContext, param1: ?*C.QAbstractTextDocumentLayout__PaintContext ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractTextDocumentLayout__PaintContext ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractTextDocumentLayout__PaintContext_Delete(@ptrCast(self));
    }
};
