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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextItem `
    ///
    pub fn new(other: anytype) QTextItem {
        comptime _ = @TypeOf(other)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextItem object and invalidate the source QTextItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextItem `
    ///
    pub fn new2(other: anytype) QTextItem {
        comptime _ = @TypeOf(other)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextItem object in C++ memory
    ///
    pub fn new3() QTextItem {
        return .{ .ptr = qtc.QTextItem_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextItem `
    ///
    pub fn new4(param1: anytype) QTextItem {
        comptime _ = @TypeOf(param1)._is_QTextItem;
        return .{ .ptr = qtc.QTextItem_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextItem `
    ///
    /// ` other: QTextItem `
    ///
    pub fn copyAssign(self: QTextItem, other: QTextItem) void {
        qtc.QTextItem_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextItem `
    ///
    /// ` other: QTextItem `
    ///
    pub fn moveAssign(self: QTextItem, other: QTextItem) void {
        qtc.QTextItem_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn descent(self: QTextItem) f64 {
        return qtc.QTextItem_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn ascent(self: QTextItem) f64 {
        return qtc.QTextItem_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn width(self: QTextItem) f64 {
        return qtc.QTextItem_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `renderFlags` instead
    ///
    pub const RenderFlags = renderFlags;

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
    pub fn renderFlags(self: QTextItem) i32 {
        return qtc.QTextItem_RenderFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QTextItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextItem `
    ///
    pub fn font(self: QTextItem) QFont {
        return .{ .ptr = qtc.QTextItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#dtor.QTextItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextItem `
    ///
    pub fn delete(self: QTextItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPaintEngine object in C++ memory
    ///
    pub fn new() QPaintEngine {
        return .{ .ptr = qtc.QPaintEngine_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPaintEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` features: flag of qpaintengine_enums.PaintEngineFeature `
    ///
    pub fn new2(features: i32) QPaintEngine {
        return .{ .ptr = qtc.QPaintEngine_new2(@bitCast(features)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn isActive(self: QPaintEngine) bool {
        return qtc.QPaintEngine_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` newState: bool `
    ///
    pub fn setActive(self: QPaintEngine, newState: bool) void {
        qtc.QPaintEngine_SetActive(@ptrCast(self.ptr), newState);
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` pdev: QPaintDevice `
    ///
    pub fn begin(self: QPaintEngine, pdev: anytype) bool {
        comptime _ = @TypeOf(pdev)._is_QPaintDevice;
        return qtc.QPaintEngine_Begin(@ptrCast(self.ptr), @ptrCast(pdev.ptr));
    }

    /// ### DEPRECATED: Use `onBegin` instead
    ///
    pub const OnBegin = onBegin;

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
    pub fn onBegin(self: QPaintEngine, callback: *const fn (QPaintEngine, QPaintDevice) callconv(.c) bool) void {
        qtc.QPaintEngine_OnBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBegin` instead
    ///
    pub const SuperBegin = superBegin;

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
    pub fn superBegin(self: QPaintEngine, pdev: anytype) bool {
        comptime _ = @TypeOf(pdev)._is_QPaintDevice;
        return qtc.QPaintEngine_SuperBegin(@ptrCast(self.ptr), @ptrCast(pdev.ptr));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn end(self: QPaintEngine) bool {
        return qtc.QPaintEngine_End(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnd` instead
    ///
    pub const OnEnd = onEnd;

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
    pub fn onEnd(self: QPaintEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.QPaintEngine_OnEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnd` instead
    ///
    pub const SuperEnd = superEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn superEnd(self: QPaintEngine) bool {
        return qtc.QPaintEngine_SuperEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateState` instead
    ///
    pub const UpdateState = updateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` state: QPaintEngineState `
    ///
    pub fn updateState(self: QPaintEngine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QPaintEngineState;
        qtc.QPaintEngine_UpdateState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateState` instead
    ///
    pub const OnUpdateState = onUpdateState;

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
    pub fn onUpdateState(self: QPaintEngine, callback: *const fn (QPaintEngine, QPaintEngineState) callconv(.c) void) void {
        qtc.QPaintEngine_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateState` instead
    ///
    pub const SuperUpdateState = superUpdateState;

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
    pub fn superUpdateState(self: QPaintEngine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QPaintEngineState;
        qtc.QPaintEngine_SuperUpdateState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `drawRects` instead
    ///
    pub const DrawRects = drawRects;

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
    pub fn drawRects(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPaintEngine_DrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `onDrawRects` instead
    ///
    pub const OnDrawRects = onDrawRects;

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
    pub fn onDrawRects(self: QPaintEngine, callback: *const fn (QPaintEngine, QRect, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawRects` instead
    ///
    pub const SuperDrawRects = superDrawRects;

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
    pub fn superDrawRects(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRect;
        qtc.QPaintEngine_SuperDrawRects(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawRects2` instead
    ///
    pub const DrawRects2 = drawRects2;

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
    pub fn drawRects2(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPaintEngine_DrawRects2(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `onDrawRects2` instead
    ///
    pub const OnDrawRects2 = onDrawRects2;

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
    pub fn onDrawRects2(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawRects2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawRects2` instead
    ///
    pub const SuperDrawRects2 = superDrawRects2;

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
    pub fn superDrawRects2(self: QPaintEngine, rects: anytype, rectCount: i32) void {
        comptime _ = @TypeOf(rects)._is_QRectF;
        qtc.QPaintEngine_SuperDrawRects2(@ptrCast(self.ptr), @ptrCast(rects.ptr), @bitCast(rectCount));
    }

    /// ### DEPRECATED: Use `drawLines` instead
    ///
    pub const DrawLines = drawLines;

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
    pub fn drawLines(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPaintEngine_DrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `onDrawLines` instead
    ///
    pub const OnDrawLines = onDrawLines;

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
    pub fn onDrawLines(self: QPaintEngine, callback: *const fn (QPaintEngine, QLine, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawLines` instead
    ///
    pub const SuperDrawLines = superDrawLines;

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
    pub fn superDrawLines(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLine;
        qtc.QPaintEngine_SuperDrawLines(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawLines2` instead
    ///
    pub const DrawLines2 = drawLines2;

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
    pub fn drawLines2(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPaintEngine_DrawLines2(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `onDrawLines2` instead
    ///
    pub const OnDrawLines2 = onDrawLines2;

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
    pub fn onDrawLines2(self: QPaintEngine, callback: *const fn (QPaintEngine, QLineF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawLines2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawLines2` instead
    ///
    pub const SuperDrawLines2 = superDrawLines2;

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
    pub fn superDrawLines2(self: QPaintEngine, lines: anytype, lineCount: i32) void {
        comptime _ = @TypeOf(lines)._is_QLineF;
        qtc.QPaintEngine_SuperDrawLines2(@ptrCast(self.ptr), @ptrCast(lines.ptr), @bitCast(lineCount));
    }

    /// ### DEPRECATED: Use `drawEllipse` instead
    ///
    pub const DrawEllipse = drawEllipse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRectF `
    ///
    pub fn drawEllipse(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPaintEngine_DrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `onDrawEllipse` instead
    ///
    pub const OnDrawEllipse = onDrawEllipse;

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
    pub fn onDrawEllipse(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawEllipse` instead
    ///
    pub const SuperDrawEllipse = superDrawEllipse;

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
    pub fn superDrawEllipse(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        qtc.QPaintEngine_SuperDrawEllipse(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawEllipse2` instead
    ///
    pub const DrawEllipse2 = drawEllipse2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` r: QRect `
    ///
    pub fn drawEllipse2(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPaintEngine_DrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `onDrawEllipse2` instead
    ///
    pub const OnDrawEllipse2 = onDrawEllipse2;

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
    pub fn onDrawEllipse2(self: QPaintEngine, callback: *const fn (QPaintEngine, QRect) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawEllipse2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawEllipse2` instead
    ///
    pub const SuperDrawEllipse2 = superDrawEllipse2;

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
    pub fn superDrawEllipse2(self: QPaintEngine, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPaintEngine_SuperDrawEllipse2(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `drawPath` instead
    ///
    pub const DrawPath = drawPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn drawPath(self: QPaintEngine, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPaintEngine_DrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `onDrawPath` instead
    ///
    pub const OnDrawPath = onDrawPath;

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
    pub fn onDrawPath(self: QPaintEngine, callback: *const fn (QPaintEngine, QPainterPath) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPath` instead
    ///
    pub const SuperDrawPath = superDrawPath;

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
    pub fn superDrawPath(self: QPaintEngine, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QPaintEngine_SuperDrawPath(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `drawPoints` instead
    ///
    pub const DrawPoints = drawPoints;

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
    pub fn drawPoints(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_DrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `onDrawPoints` instead
    ///
    pub const OnDrawPoints = onDrawPoints;

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
    pub fn onDrawPoints(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPoints` instead
    ///
    pub const SuperDrawPoints = superDrawPoints;

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
    pub fn superDrawPoints(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_SuperDrawPoints(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPoints2` instead
    ///
    pub const DrawPoints2 = drawPoints2;

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
    pub fn drawPoints2(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_DrawPoints2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `onDrawPoints2` instead
    ///
    pub const OnDrawPoints2 = onDrawPoints2;

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
    pub fn onDrawPoints2(self: QPaintEngine, callback: *const fn (QPaintEngine, QPoint, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPoints2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPoints2` instead
    ///
    pub const SuperDrawPoints2 = superDrawPoints2;

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
    pub fn superDrawPoints2(self: QPaintEngine, points: anytype, pointCount: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_SuperDrawPoints2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount));
    }

    /// ### DEPRECATED: Use `drawPolygon` instead
    ///
    pub const DrawPolygon = drawPolygon;

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
    pub fn drawPolygon(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_DrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onDrawPolygon` instead
    ///
    pub const OnDrawPolygon = onDrawPolygon;

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
    pub fn onDrawPolygon(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPolygon` instead
    ///
    pub const SuperDrawPolygon = superDrawPolygon;

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
    pub fn superDrawPolygon(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPointF;
        qtc.QPaintEngine_SuperDrawPolygon(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawPolygon2` instead
    ///
    pub const DrawPolygon2 = drawPolygon2;

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
    pub fn drawPolygon2(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_DrawPolygon2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onDrawPolygon2` instead
    ///
    pub const OnDrawPolygon2 = onDrawPolygon2;

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
    pub fn onDrawPolygon2(self: QPaintEngine, callback: *const fn (QPaintEngine, QPoint, i32, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPolygon2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPolygon2` instead
    ///
    pub const SuperDrawPolygon2 = superDrawPolygon2;

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
    pub fn superDrawPolygon2(self: QPaintEngine, points: anytype, pointCount: i32, mode: i32) void {
        comptime _ = @TypeOf(points)._is_QPoint;
        qtc.QPaintEngine_SuperDrawPolygon2(@ptrCast(self.ptr), @ptrCast(points.ptr), @bitCast(pointCount), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawPixmap` instead
    ///
    pub const DrawPixmap = drawPixmap;

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
    pub fn drawPixmap(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_DrawPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `onDrawPixmap` instead
    ///
    pub const OnDrawPixmap = onDrawPixmap;

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
    pub fn onDrawPixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QPixmap, QRectF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawPixmap` instead
    ///
    pub const SuperDrawPixmap = superDrawPixmap;

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
    pub fn superDrawPixmap(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QPixmap;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_SuperDrawPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr));
    }

    /// ### DEPRECATED: Use `drawTextItem` instead
    ///
    pub const DrawTextItem = drawTextItem;

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
    pub fn drawTextItem(self: QPaintEngine, p: anytype, textItem: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(textItem)._is_QTextItem;
        qtc.QPaintEngine_DrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(textItem.ptr));
    }

    /// ### DEPRECATED: Use `onDrawTextItem` instead
    ///
    pub const OnDrawTextItem = onDrawTextItem;

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
    pub fn onDrawTextItem(self: QPaintEngine, callback: *const fn (QPaintEngine, QPointF, QTextItem) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTextItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawTextItem` instead
    ///
    pub const SuperDrawTextItem = superDrawTextItem;

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
    pub fn superDrawTextItem(self: QPaintEngine, p: anytype, textItem: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        comptime _ = @TypeOf(textItem)._is_QTextItem;
        qtc.QPaintEngine_SuperDrawTextItem(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(textItem.ptr));
    }

    /// ### DEPRECATED: Use `drawTiledPixmap` instead
    ///
    pub const DrawTiledPixmap = drawTiledPixmap;

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
    pub fn drawTiledPixmap(self: QPaintEngine, r: anytype, pixmap: anytype, s: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(s)._is_QPointF;
        qtc.QPaintEngine_DrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pixmap.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `onDrawTiledPixmap` instead
    ///
    pub const OnDrawTiledPixmap = onDrawTiledPixmap;

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
    pub fn onDrawTiledPixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QPixmap, QPointF) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawTiledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawTiledPixmap` instead
    ///
    pub const SuperDrawTiledPixmap = superDrawTiledPixmap;

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
    pub fn superDrawTiledPixmap(self: QPaintEngine, r: anytype, pixmap: anytype, s: anytype) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(s)._is_QPointF;
        qtc.QPaintEngine_SuperDrawTiledPixmap(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pixmap.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `drawImage` instead
    ///
    pub const DrawImage = drawImage;

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
    pub fn drawImage(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_DrawImage(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onDrawImage` instead
    ///
    pub const OnDrawImage = onDrawImage;

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
    pub fn onDrawImage(self: QPaintEngine, callback: *const fn (QPaintEngine, QRectF, QImage, QRectF, i32) callconv(.c) void) void {
        qtc.QPaintEngine_OnDrawImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawImage` instead
    ///
    pub const SuperDrawImage = superDrawImage;

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
    pub fn superDrawImage(self: QPaintEngine, r: anytype, pm: anytype, sr: anytype, flags: i32) void {
        comptime _ = @TypeOf(r)._is_QRectF;
        comptime _ = @TypeOf(pm)._is_QImage;
        comptime _ = @TypeOf(sr)._is_QRectF;
        qtc.QPaintEngine_SuperDrawImage(@ptrCast(self.ptr), @ptrCast(r.ptr), @ptrCast(pm.ptr), @ptrCast(sr.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `setPaintDevice` instead
    ///
    pub const SetPaintDevice = setPaintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn setPaintDevice(self: QPaintEngine, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QPaintEngine_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `paintDevice` instead
    ///
    pub const PaintDevice = paintDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn paintDevice(self: QPaintEngine) QPaintDevice {
        return .{ .ptr = qtc.QPaintEngine_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSystemClip` instead
    ///
    pub const SetSystemClip = setSystemClip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` baseClip: QRegion `
    ///
    pub fn setSystemClip(self: QPaintEngine, baseClip: anytype) void {
        comptime _ = @TypeOf(baseClip)._is_QRegion;
        qtc.QPaintEngine_SetSystemClip(@ptrCast(self.ptr), @ptrCast(baseClip.ptr));
    }

    /// ### DEPRECATED: Use `systemClip` instead
    ///
    pub const SystemClip = systemClip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn systemClip(self: QPaintEngine) QRegion {
        return .{ .ptr = qtc.QPaintEngine_SystemClip(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSystemRect` instead
    ///
    pub const SetSystemRect = setSystemRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` rect: QRect `
    ///
    pub fn setSystemRect(self: QPaintEngine, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPaintEngine_SetSystemRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `systemRect` instead
    ///
    pub const SystemRect = systemRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn systemRect(self: QPaintEngine) QRect {
        return .{ .ptr = qtc.QPaintEngine_SystemRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `coordinateOffset` instead
    ///
    pub const CoordinateOffset = coordinateOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn coordinateOffset(self: QPaintEngine) QPoint {
        return .{ .ptr = qtc.QPaintEngine_CoordinateOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCoordinateOffset` instead
    ///
    pub const OnCoordinateOffset = onCoordinateOffset;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCoordinateOffset(self: QPaintEngine, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QPaintEngine_OnCoordinateOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCoordinateOffset` instead
    ///
    pub const SuperCoordinateOffset = superCoordinateOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn superCoordinateOffset(self: QPaintEngine) QPoint {
        return .{ .ptr = qtc.QPaintEngine_SuperCoordinateOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPaintEngine) i32 {
        return qtc.QPaintEngine_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

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
    pub fn onType(self: QPaintEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QPaintEngine_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

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
    pub fn superType(self: QPaintEngine) i32 {
        return qtc.QPaintEngine_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fixNegRect` instead
    ///
    pub const FixNegRect = fixNegRect;

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
    pub fn fixNegRect(self: QPaintEngine, x: *i32, y: *i32, w: *i32, h: *i32) void {
        qtc.QPaintEngine_FixNegRect(@ptrCast(self.ptr), @ptrCast(x), @ptrCast(y), @ptrCast(w), @ptrCast(h));
    }

    /// ### DEPRECATED: Use `testDirty` instead
    ///
    pub const TestDirty = testDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn testDirty(self: QPaintEngine, df: i32) bool {
        return qtc.QPaintEngine_TestDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### DEPRECATED: Use `setDirty` instead
    ///
    pub const SetDirty = setDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn setDirty(self: QPaintEngine, df: i32) void {
        qtc.QPaintEngine_SetDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### DEPRECATED: Use `clearDirty` instead
    ///
    pub const ClearDirty = clearDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` df: flag of qpaintengine_enums.DirtyFlag `
    ///
    pub fn clearDirty(self: QPaintEngine, df: i32) void {
        qtc.QPaintEngine_ClearDirty(@ptrCast(self.ptr), @bitCast(df));
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` feature: flag of qpaintengine_enums.PaintEngineFeature `
    ///
    pub fn hasFeature(self: QPaintEngine, feature: i32) bool {
        return qtc.QPaintEngine_HasFeature(@ptrCast(self.ptr), @bitCast(feature));
    }

    /// ### DEPRECATED: Use `painter` instead
    ///
    pub const Painter = painter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#painter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn painter(self: QPaintEngine) QPainter {
        return .{ .ptr = qtc.QPaintEngine_Painter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `syncState` instead
    ///
    pub const SyncState = syncState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn syncState(self: QPaintEngine) void {
        qtc.QPaintEngine_SyncState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExtended` instead
    ///
    pub const IsExtended = isExtended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn isExtended(self: QPaintEngine) bool {
        return qtc.QPaintEngine_IsExtended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createPixmap` instead
    ///
    pub const CreatePixmap = createPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngine `
    ///
    /// ` size: QSize `
    ///
    pub fn createPixmap(self: QPaintEngine, size: anytype) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPaintEngine_CreatePixmap(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreatePixmap` instead
    ///
    pub const OnCreatePixmap = onCreatePixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreatePixmap(self: QPaintEngine, callback: *const fn (QPaintEngine, QSize) callconv(.c) QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreatePixmap` instead
    ///
    pub const SuperCreatePixmap = superCreatePixmap;

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
    pub fn superCreatePixmap(self: QPaintEngine, size: anytype) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QPaintEngine_SuperCreatePixmap(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### DEPRECATED: Use `createPixmapFromImage` instead
    ///
    pub const CreatePixmapFromImage = createPixmapFromImage;

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
    pub fn createPixmapFromImage(self: QPaintEngine, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPaintEngine_CreatePixmapFromImage(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onCreatePixmapFromImage` instead
    ///
    pub const OnCreatePixmapFromImage = onCreatePixmapFromImage;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreatePixmapFromImage(self: QPaintEngine, callback: *const fn (QPaintEngine, QImage, i32) callconv(.c) QPixmap) void {
        qtc.QPaintEngine_OnCreatePixmapFromImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreatePixmapFromImage` instead
    ///
    pub const SuperCreatePixmapFromImage = superCreatePixmapFromImage;

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
    pub fn superCreatePixmapFromImage(self: QPaintEngine, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPaintEngine_SuperCreatePixmapFromImage(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#dtor.QPaintEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEngine `
    ///
    pub fn delete(self: QPaintEngine) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPaintEngineState object in C++ memory
    ///
    pub fn new() QPaintEngineState {
        return .{ .ptr = qtc.QPaintEngineState_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPaintEngineState object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn new2(other: anytype) QPaintEngineState {
        comptime _ = @TypeOf(other)._is_QPaintEngineState;
        return .{ .ptr = qtc.QPaintEngineState_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPaintEngineState object and invalidate the source QPaintEngineState object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn new3(other: anytype) QPaintEngineState {
        comptime _ = @TypeOf(other)._is_QPaintEngineState;
        return .{ .ptr = qtc.QPaintEngineState_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn copyAssign(self: QPaintEngineState, other: QPaintEngineState) void {
        qtc.QPaintEngineState_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPaintEngineState `
    ///
    /// ` other: QPaintEngineState `
    ///
    pub fn moveAssign(self: QPaintEngineState, other: QPaintEngineState) void {
        qtc.QPaintEngineState_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn pen(self: QPaintEngineState) QPen {
        return .{ .ptr = qtc.QPaintEngineState_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn brush(self: QPaintEngineState) QBrush {
        return .{ .ptr = qtc.QPaintEngineState_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `brushOrigin` instead
    ///
    pub const BrushOrigin = brushOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn brushOrigin(self: QPaintEngineState) QPointF {
        return .{ .ptr = qtc.QPaintEngineState_BrushOrigin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundBrush` instead
    ///
    pub const BackgroundBrush = backgroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn backgroundBrush(self: QPaintEngineState) QBrush {
        return .{ .ptr = qtc.QPaintEngineState_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundMode` instead
    ///
    pub const BackgroundMode = backgroundMode;

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
    pub fn backgroundMode(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_BackgroundMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn font(self: QPaintEngineState) QFont {
        return .{ .ptr = qtc.QPaintEngineState_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn transform(self: QPaintEngineState) QTransform {
        return .{ .ptr = qtc.QPaintEngineState_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipOperation` instead
    ///
    pub const ClipOperation = clipOperation;

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
    pub fn clipOperation(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_ClipOperation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipRegion` instead
    ///
    pub const ClipRegion = clipRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn clipRegion(self: QPaintEngineState) QRegion {
        return .{ .ptr = qtc.QPaintEngineState_ClipRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn clipPath(self: QPaintEngineState) QPainterPath {
        return .{ .ptr = qtc.QPaintEngineState_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isClipEnabled` instead
    ///
    pub const IsClipEnabled = isClipEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn isClipEnabled(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_IsClipEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `renderHints` instead
    ///
    pub const RenderHints = renderHints;

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
    pub fn renderHints(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_RenderHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `compositionMode` instead
    ///
    pub const CompositionMode = compositionMode;

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
    pub fn compositionMode(self: QPaintEngineState) i32 {
        return qtc.QPaintEngineState_CompositionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn opacity(self: QPaintEngineState) f64 {
        return qtc.QPaintEngineState_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `painter` instead
    ///
    pub const Painter = painter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn painter(self: QPaintEngineState) QPainter {
        return .{ .ptr = qtc.QPaintEngineState_Painter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `brushNeedsResolving` instead
    ///
    pub const BrushNeedsResolving = brushNeedsResolving;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn brushNeedsResolving(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_BrushNeedsResolving(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `penNeedsResolving` instead
    ///
    pub const PenNeedsResolving = penNeedsResolving;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn penNeedsResolving(self: QPaintEngineState) bool {
        return qtc.QPaintEngineState_PenNeedsResolving(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#dtor.QPaintEngineState)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPaintEngineState `
    ///
    pub fn delete(self: QPaintEngineState) void {
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
