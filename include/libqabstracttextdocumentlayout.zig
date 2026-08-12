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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractTextDocumentLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn new(doc: anytype) QAbstractTextDocumentLayout {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_new(@ptrCast(doc.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn metaObject(self: QAbstractTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAbstractTextDocumentLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn superMetaObject(self: QAbstractTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractTextDocumentLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QAbstractTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractTextDocumentLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QAbstractTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QAbstractTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

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
    pub fn draw(self: QAbstractTextDocumentLayout, painter: anytype, context: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(context)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

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
    pub fn onDraw(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPainter, QAbstractTextDocumentLayout__PaintContext) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

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
    pub fn superDraw(self: QAbstractTextDocumentLayout, painter: anytype, context: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(context)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `hitTest` instead
    ///
    pub const HitTest = hitTest;

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
    pub fn hitTest(self: QAbstractTextDocumentLayout, point: anytype, accuracy: i32) i32 {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QAbstractTextDocumentLayout_HitTest(@ptrCast(self.ptr), @ptrCast(point.ptr), @bitCast(accuracy));
    }

    /// ### DEPRECATED: Use `onHitTest` instead
    ///
    pub const OnHitTest = onHitTest;

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
    pub fn onHitTest(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPointF, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHitTest` instead
    ///
    pub const SuperHitTest = superHitTest;

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
    pub fn superHitTest(self: QAbstractTextDocumentLayout, point: anytype, accuracy: i32) i32 {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QAbstractTextDocumentLayout_SuperHitTest(@ptrCast(self.ptr), @ptrCast(point.ptr), @bitCast(accuracy));
    }

    /// ### DEPRECATED: Use `anchorAt` instead
    ///
    pub const AnchorAt = anchorAt;

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
    pub fn anchorAt(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.anchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageAt` instead
    ///
    pub const ImageAt = imageAt;

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
    pub fn imageAt(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.imageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatAt` instead
    ///
    pub const FormatAt = formatAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn formatAt(self: QAbstractTextDocumentLayout, pos: anytype) QTextFormat {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `blockWithMarkerAt` instead
    ///
    pub const BlockWithMarkerAt = blockWithMarkerAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn blockWithMarkerAt(self: QAbstractTextDocumentLayout, pos: anytype) QTextBlock {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `pageCount` instead
    ///
    pub const PageCount = pageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn pageCount(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_PageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPageCount` instead
    ///
    pub const OnPageCount = onPageCount;

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
    pub fn onPageCount(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnPageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPageCount` instead
    ///
    pub const SuperPageCount = superPageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn superPageCount(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperPageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentSize` instead
    ///
    pub const DocumentSize = documentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn documentSize(self: QAbstractTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_DocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDocumentSize` instead
    ///
    pub const OnDocumentSize = onDocumentSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDocumentSize(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QSizeF) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDocumentSize` instead
    ///
    pub const SuperDocumentSize = superDocumentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn superDocumentSize(self: QAbstractTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperDocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameBoundingRect` instead
    ///
    pub const FrameBoundingRect = frameBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#frameBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` frame: QTextFrame `
    ///
    pub fn frameBoundingRect(self: QAbstractTextDocumentLayout, frame: anytype) QRectF {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FrameBoundingRect(@ptrCast(self.ptr), @ptrCast(frame.ptr)) };
    }

    /// ### DEPRECATED: Use `onFrameBoundingRect` instead
    ///
    pub const OnFrameBoundingRect = onFrameBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFrameBoundingRect(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextFrame) callconv(.c) QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFrameBoundingRect` instead
    ///
    pub const SuperFrameBoundingRect = superFrameBoundingRect;

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
    pub fn superFrameBoundingRect(self: QAbstractTextDocumentLayout, frame: anytype) QRectF {
        comptime _ = @TypeOf(frame)._is_QTextFrame;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperFrameBoundingRect(@ptrCast(self.ptr), @ptrCast(frame.ptr)) };
    }

    /// ### DEPRECATED: Use `blockBoundingRect` instead
    ///
    pub const BlockBoundingRect = blockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingRect(self: QAbstractTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingRect` instead
    ///
    pub const OnBlockBoundingRect = onBlockBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingRect(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextBlock) callconv(.c) QRectF) void {
        qtc.QAbstractTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBlockBoundingRect` instead
    ///
    pub const SuperBlockBoundingRect = superBlockBoundingRect;

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
    pub fn superBlockBoundingRect(self: QAbstractTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `setPaintDevice` instead
    ///
    pub const SetPaintDevice = setPaintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn setPaintDevice(self: QAbstractTextDocumentLayout, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `paintDevice` instead
    ///
    pub const PaintDevice = paintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn paintDevice(self: QAbstractTextDocumentLayout) QPaintDevice {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn document(self: QAbstractTextDocumentLayout) QTextDocument {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `registerHandler` instead
    ///
    pub const RegisterHandler = registerHandler;

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
    pub fn registerHandler(self: QAbstractTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### DEPRECATED: Use `unregisterHandler` instead
    ///
    pub const UnregisterHandler = unregisterHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn unregisterHandler(self: QAbstractTextDocumentLayout, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self.ptr), @bitCast(objectType));
    }

    /// ### DEPRECATED: Use `handlerForObject` instead
    ///
    pub const HandlerForObject = handlerForObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn handlerForObject(self: QAbstractTextDocumentLayout, objectType: i32) QTextObjectInterface {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self.ptr), @bitCast(objectType)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn update(self: QAbstractTextDocumentLayout) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate` instead
    ///
    pub const OnUpdate = onUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout) callconv(.c) void `
    ///
    pub fn onUpdate(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBlock` instead
    ///
    pub const UpdateBlock = updateBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn updateBlock(self: QAbstractTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBlock` instead
    ///
    pub const OnUpdateBlock = onUpdateBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, block: QTextBlock) callconv(.c) void `
    ///
    pub fn onUpdateBlock(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextBlock) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentSizeChanged` instead
    ///
    pub const DocumentSizeChanged = documentSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` newSize: QSizeF `
    ///
    pub fn documentSizeChanged(self: QAbstractTextDocumentLayout, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSizeF;
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentSizeChanged` instead
    ///
    pub const OnDocumentSizeChanged = onDocumentSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, newSize: QSizeF) callconv(.c) void `
    ///
    pub fn onDocumentSizeChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QSizeF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pageCountChanged` instead
    ///
    pub const PageCountChanged = pageCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` newPages: i32 `
    ///
    pub fn pageCountChanged(self: QAbstractTextDocumentLayout, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self.ptr), @bitCast(newPages));
    }

    /// ### DEPRECATED: Use `onPageCountChanged` instead
    ///
    pub const OnPageCountChanged = onPageCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, newPages: i32) callconv(.c) void `
    ///
    pub fn onPageCountChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentChanged` instead
    ///
    pub const DocumentChanged = documentChanged;

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
    pub fn documentChanged(self: QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_DocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### DEPRECATED: Use `onDocumentChanged` instead
    ///
    pub const OnDocumentChanged = onDocumentChanged;

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
    pub fn onDocumentChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDocumentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDocumentChanged` instead
    ///
    pub const SuperDocumentChanged = superDocumentChanged;

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
    pub fn superDocumentChanged(self: QAbstractTextDocumentLayout, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QAbstractTextDocumentLayout_SuperDocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### DEPRECATED: Use `resizeInlineObject` instead
    ///
    pub const ResizeInlineObject = resizeInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn resizeInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_ResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onResizeInlineObject` instead
    ///
    pub const OnResizeInlineObject = onResizeInlineObject;

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
    pub fn onResizeInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnResizeInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeInlineObject` instead
    ///
    pub const SuperResizeInlineObject = superResizeInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superResizeInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `positionInlineObject` instead
    ///
    pub const PositionInlineObject = positionInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn positionInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_PositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onPositionInlineObject` instead
    ///
    pub const OnPositionInlineObject = onPositionInlineObject;

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
    pub fn onPositionInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnPositionInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPositionInlineObject` instead
    ///
    pub const SuperPositionInlineObject = superPositionInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superPositionInlineObject(self: QAbstractTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperPositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `drawInlineObject` instead
    ///
    pub const DrawInlineObject = drawInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn drawInlineObject(self: QAbstractTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_DrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onDrawInlineObject` instead
    ///
    pub const OnDrawInlineObject = onDrawInlineObject;

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
    pub fn onDrawInlineObject(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QPainter, QRectF, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDrawInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawInlineObject` instead
    ///
    pub const SuperDrawInlineObject = superDrawInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superDrawInlineObject(self: QAbstractTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QAbstractTextDocumentLayout_SuperDrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn formatIndex(self: QAbstractTextDocumentLayout, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_FormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `onFormatIndex` instead
    ///
    pub const OnFormatIndex = onFormatIndex;

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
    pub fn onFormatIndex(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnFormatIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormatIndex` instead
    ///
    pub const SuperFormatIndex = superFormatIndex;

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
    pub fn superFormatIndex(self: QAbstractTextDocumentLayout, pos: i32) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperFormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn format(self: QAbstractTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, i32) callconv(.c) QTextCharFormat) void {
        qtc.QAbstractTextDocumentLayout_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    pub fn superFormat(self: QAbstractTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `unregisterHandler2` instead
    ///
    pub const UnregisterHandler2 = unregisterHandler2;

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
    pub fn unregisterHandler2(self: QAbstractTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` param1: QRectF `
    ///
    pub fn update1(self: QAbstractTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate1` instead
    ///
    pub const OnUpdate1 = onUpdate1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QAbstractTextDocumentLayout, param1: QRectF) callconv(.c) void `
    ///
    pub fn onUpdate1(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QRectF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractTextDocumentLayout.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QAbstractTextDocumentLayout, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn isWidgetType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn isWindowType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn isQuickItemType(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn signalsBlocked(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QAbstractTextDocumentLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn thread(self: QAbstractTextDocumentLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractTextDocumentLayout, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QAbstractTextDocumentLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QAbstractTextDocumentLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QAbstractTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QAbstractTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractTextDocumentLayout.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractTextDocumentLayout, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QAbstractTextDocumentLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QAbstractTextDocumentLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractTextDocumentLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn disconnect3(self: QAbstractTextDocumentLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QAbstractTextDocumentLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn dumpObjectTree(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn dumpObjectInfo(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QAbstractTextDocumentLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QAbstractTextDocumentLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QAbstractTextDocumentLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractTextDocumentLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractTextDocumentLayout.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn bindingStorage(self: QAbstractTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn bindingStorage2(self: QAbstractTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn destroyed(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn parent(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QAbstractTextDocumentLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn deleteLater(self: QAbstractTextDocumentLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QAbstractTextDocumentLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QAbstractTextDocumentLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractTextDocumentLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QAbstractTextDocumentLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QAbstractTextDocumentLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QAbstractTextDocumentLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QAbstractTextDocumentLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QAbstractTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractTextDocumentLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QAbstractTextDocumentLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QEvent) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractTextDocumentLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QAbstractTextDocumentLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractTextDocumentLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAbstractTextDocumentLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAbstractTextDocumentLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAbstractTextDocumentLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAbstractTextDocumentLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QChildEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAbstractTextDocumentLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QAbstractTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAbstractTextDocumentLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QEvent) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QAbstractTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractTextDocumentLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QAbstractTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAbstractTextDocumentLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QAbstractTextDocumentLayout) i32 {
        return qtc.QAbstractTextDocumentLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QAbstractTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QAbstractTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QAbstractTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractTextDocumentLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAbstractTextDocumentLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QAbstractTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractTextDocumentLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QAbstractTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractTextDocumentLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QAbstractTextDocumentLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QAbstractTextDocumentLayout, callback: *const fn (QAbstractTextDocumentLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#dtor.QAbstractTextDocumentLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout `
    ///
    pub fn delete(self: QAbstractTextDocumentLayout) void {
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

    /// ### DEPRECATED: Use `intrinsicSize` instead
    ///
    pub const IntrinsicSize = intrinsicSize;

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
    /// ` _format: QTextFormat `
    ///
    pub fn intrinsicSize(self: QTextObjectInterface, doc: anytype, posInDocument: i32, _format: anytype) QSizeF {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        return .{ .ptr = qtc.QTextObjectInterface_IntrinsicSize(@ptrCast(self.ptr), @ptrCast(doc.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `drawObject` instead
    ///
    pub const DrawObject = drawObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn drawObject(self: QTextObjectInterface, painter: anytype, rect: anytype, doc: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QTextObjectInterface_DrawObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(doc.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObjectInterface `
    ///
    /// ` param1: QTextObjectInterface `
    ///
    pub fn operatorAssign(self: QTextObjectInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextObjectInterface;
        qtc.QTextObjectInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobjectinterface.html#dtor.QTextObjectInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextObjectInterface `
    ///
    pub fn delete(self: QTextObjectInterface) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractTextDocumentLayout::Selection object in C++ memory
    ///
    pub fn new() QAbstractTextDocumentLayout__Selection {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractTextDocumentLayout::Selection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn new2(param1: anytype) QAbstractTextDocumentLayout__Selection {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__Selection;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn cursor(self: QAbstractTextDocumentLayout__Selection) QTextCursor {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#cursor-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn setCursor(self: QAbstractTextDocumentLayout__Selection, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QAbstractTextDocumentLayout__Selection_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn format(self: QAbstractTextDocumentLayout__Selection) QTextCharFormat {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__Selection_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: QAbstractTextDocumentLayout__Selection, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.QAbstractTextDocumentLayout__Selection_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-selection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    /// ` param1: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn operatorAssign(self: QAbstractTextDocumentLayout__Selection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__Selection;
        qtc.QAbstractTextDocumentLayout__Selection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout__Selection `
    ///
    pub fn delete(self: QAbstractTextDocumentLayout__Selection) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractTextDocumentLayout::PaintContext object in C++ memory
    ///
    pub fn new() QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractTextDocumentLayout::PaintContext object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn new2(param1: anytype) QAbstractTextDocumentLayout__PaintContext {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__PaintContext;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn cursorPosition(self: QAbstractTextDocumentLayout__PaintContext) i32 {
        return qtc.QAbstractTextDocumentLayout__PaintContext_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#cursorPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` _cursorPosition: i32 `
    ///
    pub fn setCursorPosition(self: QAbstractTextDocumentLayout__PaintContext, _cursorPosition: i32) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(@ptrCast(self.ptr), @bitCast(_cursorPosition));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn palette(self: QAbstractTextDocumentLayout__PaintContext) QPalette {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QAbstractTextDocumentLayout__PaintContext, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QAbstractTextDocumentLayout__PaintContext_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `clip` instead
    ///
    pub const Clip = clip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn clip(self: QAbstractTextDocumentLayout__PaintContext) QRectF {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout__PaintContext_Clip(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setClip` instead
    ///
    pub const SetClip = setClip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#clip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` _clip: QRectF `
    ///
    pub fn setClip(self: QAbstractTextDocumentLayout__PaintContext, _clip: anytype) void {
        comptime _ = @TypeOf(_clip)._is_QRectF;
        qtc.QAbstractTextDocumentLayout__PaintContext_SetClip(@ptrCast(self.ptr), @ptrCast(_clip.ptr));
    }

    /// ### DEPRECATED: Use `selections` instead
    ///
    pub const Selections = selections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selections(self: QAbstractTextDocumentLayout__PaintContext, allocator: std.mem.Allocator) []QAbstractTextDocumentLayout__Selection {
        const selections_arr: qtc.libqt_list = qtc.QAbstractTextDocumentLayout__PaintContext_Selections(@ptrCast(self.ptr));
        defer qtc.libqt_free(selections_arr.data);
        const selections_ret = allocator.alloc(QAbstractTextDocumentLayout__Selection, selections_arr.len) catch @panic("QAbstractTextDocumentLayout__PaintContext.selections: Memory allocation failed");
        const selections_data_val: [*]QtC.QAbstractTextDocumentLayout__Selection = @ptrCast(@alignCast(selections_arr.data));
        for (0..selections_arr.len) |j|
            selections_ret[j] = .{ .ptr = selections_data_val[j] };
        return selections_ret;
    }

    /// ### DEPRECATED: Use `setSelections` instead
    ///
    pub const SetSelections = setSelections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#selections-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` _selections: []QAbstractTextDocumentLayout__Selection `
    ///
    pub fn setSelections(self: QAbstractTextDocumentLayout__PaintContext, _selections: []QAbstractTextDocumentLayout__Selection) void {
        const selections_list = qtc.libqt_list{
            .len = _selections.len,
            .data = @ptrCast(_selections.ptr),
        };
        qtc.QAbstractTextDocumentLayout__PaintContext_SetSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout-paintcontext.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    /// ` param1: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn operatorAssign(self: QAbstractTextDocumentLayout__PaintContext, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn delete(self: QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QAbstractTextDocumentLayout__PaintContext_Delete(@ptrCast(self.ptr));
    }
};
