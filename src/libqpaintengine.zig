const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QFont = @import("libqt6").QFont;
const QImage = @import("libqt6").QImage;
const QLine = @import("libqt6").QLine;
const QLineF = @import("libqt6").QLineF;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPen = @import("libqt6").QPen;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QTransform = @import("libqt6").QTransform;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintengine_enums = enums;
const qpainter_enums = @import("libqpainter.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html)
pub const QTextItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextItem,

    pub const _is_QTextItem = {};

    /// New constructs a new QTextItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextItem `
    ///
    pub fn New(other: anytype) QTextItem {
        comptime _ = @TypeOf(other)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextItem object and invalidates the source QTextItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextItem `
    ///
    pub fn New2(other: anytype) QTextItem {
        comptime _ = @TypeOf(other)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextItem object.
    ///
    pub fn New3() QTextItem {
        return .{ .ptr = qtc.QTextItem_new3() };
    }

    /// New4 constructs a new QTextItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextItem `
    ///
    pub fn New4(param1: anytype) QTextItem {
        comptime _ = @TypeOf(param1)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextItem `
    ///
    /// ` other: QTextItem `
    ///
    pub fn CopyAssign(self: QTextItem, other: QTextItem) void {
        qtc.QTextItem_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextItem `
    ///
    /// ` other: QTextItem `
    ///
    pub fn MoveAssign(self: QTextItem, other: QTextItem) void {
        qtc.QTextItem_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn Descent(self: QTextItem) f64 {
        return qtc.QTextItem_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn Ascent(self: QTextItem) f64 {
        return qtc.QTextItem_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn Width(self: QTextItem) f64 {
        return qtc.QTextItem_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#renderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpaintengine_enums.RenderFlag `
    ///
    pub fn RenderFlags(self: QTextItem) i32 {
        return qtc.QTextItem_RenderFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTextItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn Font(self: QTextItem) QFont {
        return .{ .ptr = qtc.QTextItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#dtor.QTextItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextItem `
    ///
    pub fn Delete(self: QTextItem) void {
        qtc.QTextItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html)
pub const QPaintEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPaintEngine,

    pub const _is_QPaintEngine = {};

    /// New constructs a new QPaintEngine object.
    ///
    pub fn New() QPaintEngine {
        return .{ .ptr = qtc.QPaintEngine_new() };
    }

    /// New2 constructs a new QPaintEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` features: flag of qpaintengine_enums.PaintEngineFeature `
    ///
    pub fn New2(features: i32) QPaintEngine {
        return .{ .ptr = qtc.QPaintEngine_new2(@bitCast(features)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn IsActive(self: QPaintEngine) bool {
        return qtc.QPaintEngine_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` newState: bool `
    ///
    pub fn SetActive(self: QPaintEngine, newState: bool) void {
        qtc.QPaintEngine_SetActive(@ptrCast(self.ptr), newState);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` pdev: QPaintDevice `
    ///
    pub fn Begin(self: QPaintEngine, pdev: anytype) bool {
        comptime _ = @TypeOf(pdev)._is_QPaintDevice;
        return qtc.QPaintEngine_Begin(@ptrCast(self.ptr), @ptrCast(pdev.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, pdev: QPaintDevice) callconv(.c) bool `
    ///
    pub fn OnBegin(self: QPaintEngine, callback: *const fn (QPaintEngine, QPaintDevice) callconv(.c) bool) void {
        qtc.QPaintEngine_OnBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBegin` instead
    ///
    pub const QBaseBegin = SuperBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` pdev: QPaintDevice `
    ///
    pub fn SuperBegin(self: QPaintEngine, pdev: anytype) bool {
        comptime _ = @TypeOf(pdev)._is_QPaintDevice;
        return qtc.QPaintEngine_SuperBegin(@ptrCast(self.ptr), @ptrCast(pdev.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn End(self: QPaintEngine) bool {
        return qtc.QPaintEngine_End(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnEnd(self: QPaintEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.QPaintEngine_OnEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnd` instead
    ///
    pub const QBaseEnd = SuperEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn SuperEnd(self: QPaintEngine) bool {
        return qtc.QPaintEngine_SuperEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` state: QPaintEngineState `
    ///
    pub fn UpdateState(self: QPaintEngine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QPaintEngineState;
        qtc.QPaintEngine_UpdateState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, state: QPaintEngineState) callconv(.c) void `
    ///
    pub fn OnUpdateState(self: QPaintEngine, callback: *const fn (QPaintEngine, QPaintEngineState) callconv(.c) void) void {
        qtc.QPaintEngine_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateState` instead
    ///
    pub const QBaseUpdateState = SuperUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` state: QPaintEngineState `
    ///
    pub fn SuperUpdateState(self: QPaintEngine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QPaintEngineState;
        qtc.QPaintEngine_SuperUpdateState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rects: QRect `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPaintEngine_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, rects: QRect, rectCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawRects(self: QPaintEngine, callback: *const fn (QPaintEngine, QRect, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawRects` instead
    ///
    pub const QBaseDrawRects = SuperDrawRects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rects: QRect `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn SuperDrawRects(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPaintEngine_SuperDrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rects: QRectF `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn DrawRects2(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPaintEngine_DrawRects2(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, rects: QRectF, rectCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawRects2(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawRects2` instead
    ///
    pub const QBaseDrawRects2 = SuperDrawRects2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rects: QRectF `
    ///
    /// ` rectCount: i32 `
    ///
    pub fn SuperDrawRects2(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPaintEngine_SuperDrawRects2(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` lines: QLine `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPaintEngine_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, lines: QLine, lineCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawLines(self: QPaintEngine, callback: *const fn (QPaintEngine, QLine, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawLines` instead
    ///
    pub const QBaseDrawLines = SuperDrawLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` lines: QLine `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn SuperDrawLines(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPaintEngine_SuperDrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` lines: QLineF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn DrawLines2(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPaintEngine_DrawLines2(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, lines: QLineF, lineCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawLines2(self: QPaintEngine, callback: *const fn (QPaintEngine, QLineF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawLines2` instead
    ///
    pub const QBaseDrawLines2 = SuperDrawLines2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` lines: QLineF `
    ///
    /// ` lineCount: i32 `
    ///
    pub fn SuperDrawLines2(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPaintEngine_SuperDrawLines2(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    pub fn DrawEllipse(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPaintEngine_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, r: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawEllipse(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawEllipse` instead
    ///
    pub const QBaseDrawEllipse = SuperDrawEllipse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    pub fn SuperDrawEllipse(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPaintEngine_SuperDrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRect `
    ///
    pub fn DrawEllipse2(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPaintEngine_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, r: QRect) callconv(.c) void `
    ///
    pub fn OnDrawEllipse2(self: QPaintEngine, callback: *const fn (QPaintEngine, QRect) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawEllipse2` instead
    ///
    pub const QBaseDrawEllipse2 = SuperDrawEllipse2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRect `
    ///
    pub fn SuperDrawEllipse2(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPaintEngine_SuperDrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn DrawPath(self: QPaintEngine, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPaintEngine_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, path: QPainterPath) callconv(.c) void `
    ///
    pub fn OnDrawPath(self: QPaintEngine, callback: *const fn (QPaintEngine, QPainterPath) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPath` instead
    ///
    pub const QBaseDrawPath = SuperDrawPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn SuperDrawPath(self: QPaintEngine, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPaintEngine_SuperDrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, points: QPointF, pointCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawPoints(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPoints` instead
    ///
    pub const QBaseDrawPoints = SuperDrawPoints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn SuperDrawPoints(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_SuperDrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn DrawPoints2(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_DrawPoints2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, points: QPoint, pointCount: i32) callconv(.c) void `
    ///
    pub fn OnDrawPoints2(self: QPaintEngine, callback: *const fn (QPaintEngine, QPoint, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPoints2` instead
    ///
    pub const QBaseDrawPoints2 = SuperDrawPoints2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    pub fn SuperDrawPoints2(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_SuperDrawPoints2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` mode: qpaintengine_enums.PolygonDrawMode `
    ///
    pub fn DrawPolygon(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, points: QPointF, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode) callconv(.c) void `
    ///
    pub fn OnDrawPolygon(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPolygon` instead
    ///
    pub const QBaseDrawPolygon = SuperDrawPolygon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPointF `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` mode: qpaintengine_enums.PolygonDrawMode `
    ///
    pub fn SuperDrawPolygon(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_SuperDrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` mode: qpaintengine_enums.PolygonDrawMode `
    ///
    pub fn DrawPolygon2(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_DrawPolygon2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, points: QPoint, pointCount: i32, mode: qpaintengine_enums.PolygonDrawMode) callconv(.c) void `
    ///
    pub fn OnDrawPolygon2(self: QPaintEngine, callback: *const fn (QPaintEngine, QPoint, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPolygon2` instead
    ///
    pub const QBaseDrawPolygon2 = SuperDrawPolygon2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` points: QPoint `
    ///
    /// ` pointCount: i32 `
    ///
    /// ` mode: qpaintengine_enums.PolygonDrawMode `
    ///
    pub fn SuperDrawPolygon2(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_SuperDrawPolygon2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRectF `
    ///
    pub fn DrawPixmap(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_DrawPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, r: QRectF, pm: QPixmap, sr: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawPixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QPixmap, QRectF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawPixmap` instead
    ///
    pub const QBaseDrawPixmap = SuperDrawPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` sr: QRectF `
    ///
    pub fn SuperDrawPixmap(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_SuperDrawPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` p: QPointF `
    ///
    /// ` textItem: QTextItem `
    ///
    pub fn DrawTextItem(self: QPaintEngine, p: anytype, textItem: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(textItem)._is_QTextItem;
        qtc.QPaintEngine_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(textItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, p: QPointF, textItem: QTextItem) callconv(.c) void `
    ///
    pub fn OnDrawTextItem(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, QTextItem) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTextItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawTextItem` instead
    ///
    pub const QBaseDrawTextItem = SuperDrawTextItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` p: QPointF `
    ///
    /// ` textItem: QTextItem `
    ///
    pub fn SuperDrawTextItem(self: QPaintEngine, p: anytype, textItem: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(textItem)._is_QTextItem;
        qtc.QPaintEngine_SuperDrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(textItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` s: QPointF `
    ///
    pub fn DrawTiledPixmap(self: QPaintEngine, r: anytype, pixmap: anytype, s: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(s)._is_QPointF;
        qtc.QPaintEngine_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pixmap.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, r: QRectF, pixmap: QPixmap, s: QPointF) callconv(.c) void `
    ///
    pub fn OnDrawTiledPixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QPixmap, QPointF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTiledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawTiledPixmap` instead
    ///
    pub const QBaseDrawTiledPixmap = SuperDrawTiledPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` s: QPointF `
    ///
    pub fn SuperDrawTiledPixmap(self: QPaintEngine, r: anytype, pixmap: anytype, s: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(s)._is_QPointF;
        qtc.QPaintEngine_SuperDrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pixmap.ptr), @ptrCast(s.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pm: QImage `
    ///
    /// ` sr: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn DrawImage(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_DrawImage(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, r: QRectF, pm: QImage, sr: QRectF, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) void `
    ///
    pub fn OnDrawImage(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QImage, QRectF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawImage` instead
    ///
    pub const QBaseDrawImage = SuperDrawImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    /// ` pm: QImage `
    ///
    /// ` sr: QRectF `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn SuperDrawImage(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_SuperDrawImage(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn SetPaintDevice(self: QPaintEngine, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QPaintEngine_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn PaintDevice(self: QPaintEngine) QPaintDevice {
        return .{ .ptr = qtc.QPaintEngine_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` baseClip: QRegion `
    ///
    pub fn SetSystemClip(self: QPaintEngine, baseClip: anytype) void {
        comptime _ = @TypeOf(baseClip)._is_QRegion;
        qtc.QPaintEngine_SetSystemClip(@ptrCast(self.ptr), @ptrCast(baseClip.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn SystemClip(self: QPaintEngine) QRegion {
        return .{ .ptr = qtc.QPaintEngine_SystemClip(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetSystemRect(self: QPaintEngine, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPaintEngine_SetSystemRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn SystemRect(self: QPaintEngine) QRect {
        return .{ .ptr = qtc.QPaintEngine_SystemRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn CoordinateOffset(self: QPaintEngine) QPoint {
        return .{ .ptr = qtc.QPaintEngine_CoordinateOffset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    pub fn OnCoordinateOffset(self: QPaintEngine, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QPaintEngine_OnCoordinateOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCoordinateOffset` instead
    ///
    pub const QBaseCoordinateOffset = SuperCoordinateOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn SuperCoordinateOffset(self: QPaintEngine) QPoint {
        return .{ .ptr = qtc.QPaintEngine_SuperCoordinateOffset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ## Returns:
    ///
    /// ` qpaintengine_enums.Type `
    ///
    pub fn Type(self: QPaintEngine) i32 {
        return qtc.QPaintEngine_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QPaintEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QPaintEngine_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ## Returns:
    ///
    /// ` qpaintengine_enums.Type `
    ///
    pub fn SuperType(self: QPaintEngine) i32 {
        return qtc.QPaintEngine_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#fix_neg_rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` x: *i32 `
    ///
    /// ` y: *i32 `
    ///
    /// ` w: *i32 `
    ///
    /// ` h: *i32 `
    ///
    pub fn FixNegRect(self: QPaintEngine, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QPaintEngine_FixNegRect(@ptrCast(self.ptr), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn TestDirty(self: QPaintEngine, df: i32) bool {
        return qtc.QPaintEngine_TestDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn SetDirty(self: QPaintEngine, df: i32) void {
        qtc.QPaintEngine_SetDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn ClearDirty(self: QPaintEngine, df: i32) void {
        qtc.QPaintEngine_ClearDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` feature: flag of qpaintengine_enums.PaintEngineFeature `
    ///
    pub fn HasFeature(self: QPaintEngine, feature: i32) bool {
        return qtc.QPaintEngine_HasFeature(@ptrCast(self.ptr), @bitCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#painter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn Painter(self: QPaintEngine) QPainter {
        return .{ .ptr = qtc.QPaintEngine_Painter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn SyncState(self: QPaintEngine) void {
        qtc.QPaintEngine_SyncState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn IsExtended(self: QPaintEngine) bool {
        return qtc.QPaintEngine_IsExtended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` size: QSize `
    ///
    pub fn CreatePixmap(self: QPaintEngine, size: anytype) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPaintEngine_CreatePixmap(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, size: QSize) callconv(.c) QPixmap `
    ///
    pub fn OnCreatePixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QSize) callconv(.c) QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreatePixmap` instead
    ///
    pub const QBaseCreatePixmap = SuperCreatePixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` size: QSize `
    ///
    pub fn SuperCreatePixmap(self: QPaintEngine, size: anytype) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPaintEngine_SuperCreatePixmap(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn CreatePixmapFromImage(self: QPaintEngine, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPaintEngine_CreatePixmapFromImage(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` callback: *const fn (self: QPaintEngine, image: QImage, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) QPixmap `
    ///
    pub fn OnCreatePixmapFromImage(self: QPaintEngine, callback: *const fn (QPaintEngine, QImage, i32) callconv(.c) QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmapFromImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreatePixmapFromImage` instead
    ///
    pub const QBaseCreatePixmapFromImage = SuperCreatePixmapFromImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn SuperCreatePixmapFromImage(self: QPaintEngine, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPaintEngine_SuperCreatePixmapFromImage(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#dtor.QPaintEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn Delete(self: QPaintEngine) void {
        qtc.QPaintEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html)
pub const QPaintEngineState = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPaintEngineState,

    pub const _is_QPaintEngineState = {};

    /// New constructs a new QPaintEngineState object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn New(other: anytype) QPaintEngineState {
        comptime _ = @TypeOf(other)._is_QPaintEngineState;
        return .{ .ptr = qtc.QPaintEngineState_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPaintEngineState object and invalidates the source QPaintEngineState object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn New2(other: anytype) QPaintEngineState {
        comptime _ = @TypeOf(other)._is_QPaintEngineState;
        return .{ .ptr = qtc.QPaintEngineState_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn CopyAssign(self: QPaintEngineState, other: QPaintEngineState) void {
        qtc.QPaintEngineState_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn MoveAssign(self: QPaintEngineState, other: QPaintEngineState) void {
        qtc.QPaintEngineState_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn State(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Pen(self: QPaintEngineState) QPen {
        return .{ .ptr = qtc.QPaintEngineState_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Brush(self: QPaintEngineState) QBrush {
        return .{ .ptr = qtc.QPaintEngineState_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn BrushOrigin(self: QPaintEngineState) QPointF {
        return .{ .ptr = qtc.QPaintEngineState_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn BackgroundBrush(self: QPaintEngineState) QBrush {
        return .{ .ptr = qtc.QPaintEngineState_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.BGMode `
    ///
    pub fn BackgroundMode(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_BackgroundMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Font(self: QPaintEngineState) QFont {
        return .{ .ptr = qtc.QPaintEngineState_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Transform(self: QPaintEngineState) QTransform {
        return .{ .ptr = qtc.QPaintEngineState_Transform(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipOperation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ClipOperation `
    ///
    pub fn ClipOperation(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_ClipOperation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn ClipRegion(self: QPaintEngineState) QRegion {
        return .{ .ptr = qtc.QPaintEngineState_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn ClipPath(self: QPaintEngineState) QPainterPath {
        return .{ .ptr = qtc.QPaintEngineState_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn IsClipEnabled(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_IsClipEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#renderHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpainter_enums.RenderHint `
    ///
    pub fn RenderHints(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_RenderHints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#compositionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ## Returns:
    ///
    /// ` qpainter_enums.CompositionMode `
    ///
    pub fn CompositionMode(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_CompositionMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Opacity(self: QPaintEngineState) f64 {
        return qtc.QPaintEngineState_Opacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Painter(self: QPaintEngineState) QPainter {
        return .{ .ptr = qtc.QPaintEngineState_Painter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn BrushNeedsResolving(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_BrushNeedsResolving(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn PenNeedsResolving(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_PenNeedsResolving(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#dtor.QPaintEngineState)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn Delete(self: QPaintEngineState) void {
        qtc.QPaintEngineState_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#public-types)
pub const enums = struct {
    pub const RenderFlag = enum(i32) {
        pub const RightToLeft: i32 = 1;
        pub const Overline: i32 = 16;
        pub const Underline: i32 = 32;
        pub const StrikeOut: i32 = 64;
        pub const Dummy: i32 = -1;
    };

    pub const PaintEngineFeature = enum(i32) {
        pub const PrimitiveTransform: i32 = 1;
        pub const PatternTransform: i32 = 2;
        pub const PixmapTransform: i32 = 4;
        pub const PatternBrush: i32 = 8;
        pub const LinearGradientFill: i32 = 16;
        pub const RadialGradientFill: i32 = 32;
        pub const ConicalGradientFill: i32 = 64;
        pub const AlphaBlend: i32 = 128;
        pub const PorterDuff: i32 = 256;
        pub const PainterPaths: i32 = 512;
        pub const Antialiasing: i32 = 1024;
        pub const BrushStroke: i32 = 2048;
        pub const ConstantOpacity: i32 = 4096;
        pub const MaskedBrush: i32 = 8192;
        pub const PerspectiveTransform: i32 = 16384;
        pub const BlendModes: i32 = 32768;
        pub const ObjectBoundingModeGradients: i32 = 65536;
        pub const RasterOpModes: i32 = 131072;
        pub const PaintOutsidePaintEvent: i32 = 536870912;
        pub const AllFeatures: i32 = -1;
    };

    pub const DirtyFlag = enum(i32) {
        pub const DirtyPen: i32 = 1;
        pub const DirtyBrush: i32 = 2;
        pub const DirtyBrushOrigin: i32 = 4;
        pub const DirtyFont: i32 = 8;
        pub const DirtyBackground: i32 = 16;
        pub const DirtyBackgroundMode: i32 = 32;
        pub const DirtyTransform: i32 = 64;
        pub const DirtyClipRegion: i32 = 128;
        pub const DirtyClipPath: i32 = 256;
        pub const DirtyHints: i32 = 512;
        pub const DirtyCompositionMode: i32 = 1024;
        pub const DirtyClipEnabled: i32 = 2048;
        pub const DirtyOpacity: i32 = 4096;
        pub const AllDirty: i32 = 65535;
    };

    pub const PolygonDrawMode = enum(i32) {
        pub const OddEvenMode: i32 = 0;
        pub const WindingMode: i32 = 1;
        pub const ConvexMode: i32 = 2;
        pub const PolylineMode: i32 = 3;
    };

    pub const Type = enum(i32) {
        pub const X11: i32 = 0;
        pub const Windows: i32 = 1;
        pub const QuickDraw: i32 = 2;
        pub const CoreGraphics: i32 = 3;
        pub const MacPrinter: i32 = 4;
        pub const QWindowSystem: i32 = 5;
        pub const OpenGL: i32 = 6;
        pub const Picture: i32 = 7;
        pub const SVG: i32 = 8;
        pub const Raster: i32 = 9;
        pub const Direct3D: i32 = 10;
        pub const Pdf: i32 = 11;
        pub const OpenVG: i32 = 12;
        pub const OpenGL2: i32 = 13;
        pub const PaintBuffer: i32 = 14;
        pub const Blitter: i32 = 15;
        pub const Direct2D: i32 = 16;
        pub const User: i32 = 50;
        pub const MaxUser: i32 = 100;
    };
};
