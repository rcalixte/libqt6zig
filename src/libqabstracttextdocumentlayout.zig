const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QSizeF = @import("libqt6").QSizeF;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextInlineObject = @import("libqt6").QTextInlineObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html)
pub const QAbstractTextDocumentLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractTextDocumentLayout,

    pub const _is_QAbstractTextDocumentLayout = {};
    pub const _is_QObject = {};

    /// New constructs a new QAbstractTextDocumentLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn New(doc: anytype) QAbstractTextDocumentLayout {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_new(@ptrCast(doc.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn MetaObject(self: QAbstractTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAbstractTextDocumentLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SuperMetaObject(self: QAbstractTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractTextDocumentLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QAbstractTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractTextDocumentLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QAbstractTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` context: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn Draw(self: QAbstractTextDocumentLayout, painter: anytype, context: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(context)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(context.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, painter: QPainter, context: QAbstractTextDocumentLayout__PaintContext) callconv(.c) void `
    ///
    pub fn OnDraw(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPainter, QAbstractTextDocumentLayout__PaintContext) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` context: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn SuperDraw(self: QAbstractTextDocumentLayout, painter: anytype, context: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(context)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(context.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` point: QPointF `
    ///
    /// ` accuracy: qnamespace_enums.HitTestAccuracy `
    ///
    pub fn HitTest(self: QAbstractTextDocumentLayout, point: anytype, accuracy: i32) i32 {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QAbstractTextDocumentLayout_HitTest(@ptrCast(self.ptr), @ptrCast(point.ptr), @bitCast(accuracy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, point: QPointF, accuracy: qnamespace_enums.HitTestAccuracy) callconv(.c) i32 `
    ///
    pub fn OnHitTest(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPointF, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHitTest` instead
    ///
    pub const QBaseHitTest = SuperHitTest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#hitTest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` point: QPointF `
    ///
    /// ` accuracy: qnamespace_enums.HitTestAccuracy `
    ///
    pub fn SuperHitTest(self: QAbstractTextDocumentLayout, point: anytype, accuracy: i32) i32 {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QAbstractTextDocumentLayout_SuperHitTest(@ptrCast(self.ptr), @ptrCast(point.ptr), @bitCast(accuracy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    pub fn AnchorAt(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    pub fn ImageAt(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.ImageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn FormatAt(self: QAbstractTextDocumentLayout, pos: anytype) QTextFormat {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn BlockWithMarkerAt(self: QAbstractTextDocumentLayout, pos: anytype) QTextBlock {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn PageCount(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_PageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPageCount(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnPageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPageCount` instead
    ///
    pub const QBasePageCount = SuperPageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SuperPageCount(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperPageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn DocumentSize(self: QAbstractTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_DocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSizeF `
    ///
    pub fn OnDocumentSize(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QSizeF) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentSize` instead
    ///
    pub const QBaseDocumentSize = SuperDocumentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SuperDocumentSize(self: QAbstractTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperDocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` frame: QTextFrame `
    ///
    pub fn FrameBoundingRect(self: QAbstractTextDocumentLayout, frame: anytype) QRectF {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FrameBoundingRect(@ptrCast(self.ptr), @ptrCast(frame.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, frame: QTextFrame) callconv(.c) QRectF `
    ///
    pub fn OnFrameBoundingRect(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextFrame) callconv(.c) QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFrameBoundingRect` instead
    ///
    pub const QBaseFrameBoundingRect = SuperFrameBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` frame: QTextFrame `
    ///
    pub fn SuperFrameBoundingRect(self: QAbstractTextDocumentLayout, frame: anytype) QRectF {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperFrameBoundingRect(@ptrCast(self.ptr), @ptrCast(frame.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingRect(self: QAbstractTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, block: QTextBlock) callconv(.c) QRectF `
    ///
    pub fn OnBlockBoundingRect(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextBlock) callconv(.c) QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingRect` instead
    ///
    pub const QBaseBlockBoundingRect = SuperBlockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingRect(self: QAbstractTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn SetPaintDevice(self: QAbstractTextDocumentLayout, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn PaintDevice(self: QAbstractTextDocumentLayout) QPaintDevice {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Document(self: QAbstractTextDocumentLayout) QTextDocument {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    /// ` component: QObject `
    ///
    pub fn RegisterHandler(self: QAbstractTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn UnregisterHandler(self: QAbstractTextDocumentLayout, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self.ptr), @bitCast(objectType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn HandlerForObject(self: QAbstractTextDocumentLayout, objectType: i32) QTextObjectInterface {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self.ptr), @bitCast(objectType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Update(self: QAbstractTextDocumentLayout) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout) callconv(.c) void `
    ///
    pub fn OnUpdate(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn UpdateBlock(self: QAbstractTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, block: QTextBlock) callconv(.c) void `
    ///
    pub fn OnUpdateBlock(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextBlock) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` newSize: QSizeF `
    ///
    pub fn DocumentSizeChanged(self: QAbstractTextDocumentLayout, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSizeF;
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, newSize: QSizeF) callconv(.c) void `
    ///
    pub fn OnDocumentSizeChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QSizeF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` newPages: i32 `
    ///
    pub fn PageCountChanged(self: QAbstractTextDocumentLayout, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self.ptr), @bitCast(newPages));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, newPages: i32) callconv(.c) void `
    ///
    pub fn OnPageCountChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` from: i32 `
    ///
    /// ` charsRemoved: i32 `
    ///
    /// ` charsAdded: i32 `
    ///
    pub fn DocumentChanged(self: QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_DocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) callconv(.c) void `
    ///
    pub fn OnDocumentChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentChanged` instead
    ///
    pub const QBaseDocumentChanged = SuperDocumentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` from: i32 `
    ///
    /// ` charsRemoved: i32 `
    ///
    /// ` charsAdded: i32 `
    ///
    pub fn SuperDocumentChanged(self: QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_SuperDocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn ResizeInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_ResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, item: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnResizeInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnResizeInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeInlineObject` instead
    ///
    pub const QBaseResizeInlineObject = SuperResizeInlineObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperResizeInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn PositionInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_PositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, item: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnPositionInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnPositionInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPositionInlineObject` instead
    ///
    pub const QBasePositionInlineObject = SuperPositionInlineObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperPositionInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperPositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn DrawInlineObject(self: QAbstractTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_DrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, painter: QPainter, rect: QRectF, object: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnDrawInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPainter, QRectF, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDrawInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawInlineObject` instead
    ///
    pub const QBaseDrawInlineObject = SuperDrawInlineObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperDrawInlineObject(self: QAbstractTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperDrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn FormatIndex(self: QAbstractTextDocumentLayout, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_FormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, pos: i32) callconv(.c) i32 `
    ///
    pub fn OnFormatIndex(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnFormatIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormatIndex` instead
    ///
    pub const QBaseFormatIndex = SuperFormatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormatIndex(self: QAbstractTextDocumentLayout, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperFormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: QAbstractTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) QTextCharFormat) void {
        qtc.QAbstractTextDocumentLayout_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: QAbstractTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    /// ` component: QObject `
    ///
    pub fn UnregisterHandler2(self: QAbstractTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: QRectF `
    ///
    pub fn Update1(self: QAbstractTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: QRectF) callconv(.c) void `
    ///
    pub fn OnUpdate1(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QRectF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracttextdocumentlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractTextDocumentLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn IsWidgetType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn IsWindowType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn IsQuickItemType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SignalsBlocked(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractTextDocumentLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Thread(self: QAbstractTextDocumentLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractTextDocumentLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractTextDocumentLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractTextDocumentLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstracttextdocumentlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractTextDocumentLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractTextDocumentLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractTextDocumentLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractTextDocumentLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Disconnect3(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractTextDocumentLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn DumpObjectTree(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn DumpObjectInfo(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractTextDocumentLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractTextDocumentLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn BindingStorage(self: QAbstractTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn BindingStorage2(self: QAbstractTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Destroyed(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Parent(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractTextDocumentLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn DeleteLater(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractTextDocumentLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractTextDocumentLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractTextDocumentLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractTextDocumentLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractTextDocumentLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractTextDocumentLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractTextDocumentLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractTextDocumentLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QAbstractTextDocumentLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QEvent) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractTextDocumentLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QAbstractTextDocumentLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QAbstractTextDocumentLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QAbstractTextDocumentLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QAbstractTextDocumentLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QAbstractTextDocumentLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QChildEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QAbstractTextDocumentLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QAbstractTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QAbstractTextDocumentLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Sender(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SuperSender(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAbstractTextDocumentLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SenderSignalIndex(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn SuperSenderSignalIndex(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QAbstractTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QAbstractTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QAbstractTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractTextDocumentLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QAbstractTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractTextDocumentLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#dtor.QAbstractTextDocumentLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn Delete(self: QAbstractTextDocumentLayout) void {
        qtc.QAbstractTextDocumentLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html)
pub const QTextObjectInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextObjectInterface,

    pub const _is_QTextObjectInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#intrinsicSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObjectInterface `
    ///
    /// ` doc: QTextDocument `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn IntrinsicSize(self: QTextObjectInterface, doc: anytype, posInDocument: i32, format: anytype) QSizeF {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        return .{ .ptr = qtc.QTextObjectInterface_IntrinsicSize(@ptrCast(self.ptr), @ptrCast(doc.ptr), @bitCast(posInDocument), @ptrCast(format.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#drawObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObjectInterface `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` doc: QTextDocument `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn DrawObject(self: QTextObjectInterface, painter: anytype, rect: anytype, doc: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QTextObjectInterface_DrawObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(doc.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObjectInterface `
    ///
    /// ` param1: QTextObjectInterface `
    ///
    pub fn OperatorAssign(self: QTextObjectInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextObjectInterface;
        qtc.QTextObjectInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#dtor.QTextObjectInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextObjectInterface `
    ///
    pub fn Delete(self: QTextObjectInterface) void {
        qtc.QTextObjectInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html)
pub const QAbstractTextDocumentLayout__Selection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractTextDocumentLayout__Selection,

    pub const _is_QAbstractTextDocumentLayout__Selection = {};

    /// New constructs a new QAbstractTextDocumentLayout::Selection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn New(param1: anytype) QAbstractTextDocumentLayout__Selection {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__Selection;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QAbstractTextDocumentLayout::Selection object.
    ///
    pub fn New2() QAbstractTextDocumentLayout__Selection {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn Cursor(self: QAbstractTextDocumentLayout__Selection) QTextCursor {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SetCursor(self: QAbstractTextDocumentLayout__Selection, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QAbstractTextDocumentLayout__Selection_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn Format(self: QAbstractTextDocumentLayout__Selection) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetFormat(self: QAbstractTextDocumentLayout__Selection, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QAbstractTextDocumentLayout__Selection_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` param1: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn OperatorAssign(self: QAbstractTextDocumentLayout__Selection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__Selection;
        qtc.QAbstractTextDocumentLayout__Selection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn Delete(self: QAbstractTextDocumentLayout__Selection) void {
        qtc.QAbstractTextDocumentLayout__Selection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html)
pub const QAbstractTextDocumentLayout__PaintContext = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractTextDocumentLayout__PaintContext,

    pub const _is_QAbstractTextDocumentLayout__PaintContext = {};

    /// New constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    pub fn New() QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_new() };
    }

    /// New2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn New2(param1: anytype) QAbstractTextDocumentLayout__PaintContext {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__PaintContext;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn CursorPosition(self: QAbstractTextDocumentLayout__PaintContext) i32 {
        return qtc.QAbstractTextDocumentLayout__PaintContext_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn SetCursorPosition(self: QAbstractTextDocumentLayout__PaintContext, cursorPosition: i32) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn Palette(self: QAbstractTextDocumentLayout__PaintContext) QPalette {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_Palette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QAbstractTextDocumentLayout__PaintContext, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QAbstractTextDocumentLayout__PaintContext_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn Clip(self: QAbstractTextDocumentLayout__PaintContext) QRectF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_Clip(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` clip: QRectF `
    ///
    pub fn SetClip(self: QAbstractTextDocumentLayout__PaintContext, clip: anytype) void {
        comptime _ = @TypeOf(clip)._is_QRectF;
        qtc.QAbstractTextDocumentLayout__PaintContext_SetClip(@ptrCast(self.ptr), @ptrCast(clip.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Selections(self: QAbstractTextDocumentLayout__PaintContext, allocator: std.mem.Allocator) []QAbstractTextDocumentLayout__Selection {
        const selections_arr: qtc.libqt_list = qtc.QAbstractTextDocumentLayout__PaintContext_Selections(@ptrCast(self.ptr));
        defer qtc.libqt_free(selections_arr.data);
        const selections_ret = allocator.alloc(QAbstractTextDocumentLayout__Selection, selections_arr.len) catch @panic("qabstracttextdocumentlayout__paintcontext.Selections: Memory allocation failed");
        const selections_data: [*]QtC.QAbstractTextDocumentLayout__Selection = @ptrCast(@alignCast(selections_arr.data));
        for (0..selections_arr.len) |ii|
            selections_ret[ii] = .{ .ptr = selections_data[ii] };
        return selections_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` selections: []QAbstractTextDocumentLayout__Selection `
    ///
    pub fn SetSelections(self: QAbstractTextDocumentLayout__PaintContext, selections: []QAbstractTextDocumentLayout__Selection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QAbstractTextDocumentLayout__PaintContext_SetSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` param1: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn OperatorAssign(self: QAbstractTextDocumentLayout__PaintContext, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn Delete(self: QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_Delete(@ptrCast(self.ptr));
    }
};
