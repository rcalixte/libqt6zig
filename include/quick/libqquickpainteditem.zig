const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QHoverEvent = @import("libqt6").QHoverEvent;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QJSValue = @import("libqt6").QJSValue;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPointF = @import("libqt6").QPointF;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QQuickItem = @import("libqt6").QQuickItem;
const QQuickItem__ItemChangeData = @import("libqt6").QQuickItem__ItemChangeData;
const QQuickItem__UpdatePaintNodeData = @import("libqt6").QQuickItem__UpdatePaintNodeData;
const QQuickWindow = @import("libqt6").QQuickWindow;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSGNode = @import("libqt6").QSGNode;
const QSGTextureProvider = @import("libqt6").QSGTextureProvider;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquickitem_enums = @import("libqquickitem.zig").enums;
const qquickpainteditem_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html)
pub const QQuickPaintedItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickPaintedItem,

    pub const _is_QQuickPaintedItem = {};
    pub const _is_QQuickItem = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickPaintedItem object in C++ memory
    ///
    pub fn new() QQuickPaintedItem {
        return .{ .ptr = qtc.QQuickPaintedItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickPaintedItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn new2(_parent: anytype) QQuickPaintedItem {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickPaintedItem_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn metaObject(self: QQuickPaintedItem) QMetaObject {
        return .{ .ptr = qtc.QQuickPaintedItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickPaintedItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickPaintedItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superMetaObject(self: QQuickPaintedItem) QMetaObject {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickPaintedItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickPaintedItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickPaintedItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickPaintedItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickPaintedItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickPaintedItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickPaintedItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickPaintedItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickPaintedItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickPaintedItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickPaintedItem_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickPaintedItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn update(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opaquePainting` instead
    ///
    pub const OpaquePainting = opaquePainting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#opaquePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn opaquePainting(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_OpaquePainting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpaquePainting` instead
    ///
    pub const SetOpaquePainting = setOpaquePainting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setOpaquePainting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` opaqueVal: bool `
    ///
    pub fn setOpaquePainting(self: QQuickPaintedItem, opaqueVal: bool) void {
        qtc.QQuickPaintedItem_SetOpaquePainting(@ptrCast(self.ptr), opaqueVal);
    }

    /// ### DEPRECATED: Use `antialiasing` instead
    ///
    pub const Antialiasing = antialiasing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#antialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn antialiasing(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_Antialiasing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAntialiasing` instead
    ///
    pub const SetAntialiasing = setAntialiasing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setAntialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` enable: bool `
    ///
    pub fn setAntialiasing(self: QQuickPaintedItem, enable: bool) void {
        qtc.QQuickPaintedItem_SetAntialiasing(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `mipmap` instead
    ///
    pub const Mipmap = mipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#mipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn mipmap(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_Mipmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipmap` instead
    ///
    pub const SetMipmap = setMipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` enable: bool `
    ///
    pub fn setMipmap(self: QQuickPaintedItem, enable: bool) void {
        qtc.QQuickPaintedItem_SetMipmap(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `performanceHints` instead
    ///
    pub const PerformanceHints = performanceHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#performanceHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qquickpainteditem_enums.PerformanceHint `
    ///
    pub fn performanceHints(self: QQuickPaintedItem) i32 {
        return qtc.QQuickPaintedItem_PerformanceHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPerformanceHint` instead
    ///
    pub const SetPerformanceHint = setPerformanceHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` hint: qquickpainteditem_enums.PerformanceHint `
    ///
    pub fn setPerformanceHint(self: QQuickPaintedItem, hint: i32) void {
        qtc.QQuickPaintedItem_SetPerformanceHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setPerformanceHints` instead
    ///
    pub const SetPerformanceHints = setPerformanceHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` hints: flag of qquickpainteditem_enums.PerformanceHint `
    ///
    pub fn setPerformanceHints(self: QQuickPaintedItem, hints: i32) void {
        qtc.QQuickPaintedItem_SetPerformanceHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `contentsBoundingRect` instead
    ///
    pub const ContentsBoundingRect = contentsBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn contentsBoundingRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickPaintedItem_ContentsBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsSize` instead
    ///
    pub const ContentsSize = contentsSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn contentsSize(self: QQuickPaintedItem) QSize {
        return .{ .ptr = qtc.QQuickPaintedItem_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsSize` instead
    ///
    pub const SetContentsSize = setContentsSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setContentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _contentsSize: QSize `
    ///
    pub fn setContentsSize(self: QQuickPaintedItem, _contentsSize: anytype) void {
        comptime _ = @TypeOf(_contentsSize)._is_QSize;
        qtc.QQuickPaintedItem_SetContentsSize(@ptrCast(self.ptr), @ptrCast(_contentsSize.ptr));
    }

    /// ### DEPRECATED: Use `resetContentsSize` instead
    ///
    pub const ResetContentsSize = resetContentsSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#resetContentsSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn resetContentsSize(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ResetContentsSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contentsScale` instead
    ///
    pub const ContentsScale = contentsScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn contentsScale(self: QQuickPaintedItem) f64 {
        return qtc.QQuickPaintedItem_ContentsScale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContentsScale` instead
    ///
    pub const SetContentsScale = setContentsScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setContentsScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _contentsScale: f64 `
    ///
    pub fn setContentsScale(self: QQuickPaintedItem, _contentsScale: f64) void {
        qtc.QQuickPaintedItem_SetContentsScale(@ptrCast(self.ptr), @bitCast(_contentsScale));
    }

    /// ### DEPRECATED: Use `textureSize` instead
    ///
    pub const TextureSize = textureSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn textureSize(self: QQuickPaintedItem) QSize {
        return .{ .ptr = qtc.QQuickPaintedItem_TextureSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextureSize` instead
    ///
    pub const SetTextureSize = setTextureSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setTextureSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _size: QSize `
    ///
    pub fn setTextureSize(self: QQuickPaintedItem, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QQuickPaintedItem_SetTextureSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `fillColor` instead
    ///
    pub const FillColor = fillColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn fillColor(self: QQuickPaintedItem) QColor {
        return .{ .ptr = qtc.QQuickPaintedItem_FillColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFillColor` instead
    ///
    pub const SetFillColor = setFillColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setFillColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _fillColor: QColor `
    ///
    pub fn setFillColor(self: QQuickPaintedItem, _fillColor: anytype) void {
        comptime _ = @TypeOf(_fillColor)._is_QColor;
        qtc.QQuickPaintedItem_SetFillColor(@ptrCast(self.ptr), @ptrCast(_fillColor.ptr));
    }

    /// ### DEPRECATED: Use `renderTarget` instead
    ///
    pub const RenderTarget = renderTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` qquickpainteditem_enums.RenderTarget `
    ///
    pub fn renderTarget(self: QQuickPaintedItem) i32 {
        return qtc.QQuickPaintedItem_RenderTarget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRenderTarget` instead
    ///
    pub const SetRenderTarget = setRenderTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setRenderTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` target: qquickpainteditem_enums.RenderTarget `
    ///
    pub fn setRenderTarget(self: QQuickPaintedItem, target: i32) void {
        qtc.QQuickPaintedItem_SetRenderTarget(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` painter: QPainter `
    ///
    pub fn paint(self: QQuickPaintedItem, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QQuickPaintedItem_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, painter: QPainter) callconv(.c) void `
    ///
    pub fn onPaint(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QPainter) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superPaint(self: QQuickPaintedItem, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QQuickPaintedItem_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `isTextureProvider` instead
    ///
    pub const IsTextureProvider = isTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isTextureProvider(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_IsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsTextureProvider` instead
    ///
    pub const OnIsTextureProvider = onIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsTextureProvider(self: QQuickPaintedItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnIsTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsTextureProvider` instead
    ///
    pub const SuperIsTextureProvider = superIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superIsTextureProvider(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_SuperIsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureProvider` instead
    ///
    pub const TextureProvider = textureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn textureProvider(self: QQuickPaintedItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickPaintedItem_TextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureProvider` instead
    ///
    pub const OnTextureProvider = onTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSGTextureProvider `
    ///
    pub fn onTextureProvider(self: QQuickPaintedItem, callback: *const fn () callconv(.c) QSGTextureProvider) void {
        qtc.QQuickPaintedItem_OnTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextureProvider` instead
    ///
    pub const SuperTextureProvider = superTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superTextureProvider(self: QQuickPaintedItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperTextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fillColorChanged` instead
    ///
    pub const FillColorChanged = fillColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn fillColorChanged(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_FillColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFillColorChanged` instead
    ///
    pub const OnFillColorChanged = onFillColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onFillColorChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickPaintedItem_Connect_FillColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentsSizeChanged` instead
    ///
    pub const ContentsSizeChanged = contentsSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn contentsSizeChanged(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ContentsSizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContentsSizeChanged` instead
    ///
    pub const OnContentsSizeChanged = onContentsSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onContentsSizeChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickPaintedItem_Connect_ContentsSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentsScaleChanged` instead
    ///
    pub const ContentsScaleChanged = contentsScaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn contentsScaleChanged(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ContentsScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContentsScaleChanged` instead
    ///
    pub const OnContentsScaleChanged = onContentsScaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onContentsScaleChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickPaintedItem_Connect_ContentsScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `renderTargetChanged` instead
    ///
    pub const RenderTargetChanged = renderTargetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTargetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn renderTargetChanged(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_RenderTargetChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRenderTargetChanged` instead
    ///
    pub const OnRenderTargetChanged = onRenderTargetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTargetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onRenderTargetChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickPaintedItem_Connect_RenderTargetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureSizeChanged` instead
    ///
    pub const TextureSizeChanged = textureSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn textureSizeChanged(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_TextureSizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextureSizeChanged` instead
    ///
    pub const OnTextureSizeChanged = onTextureSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onTextureSizeChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickPaintedItem_Connect_TextureSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updatePaintNode` instead
    ///
    pub const UpdatePaintNode = updatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn updatePaintNode(self: QQuickPaintedItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickPaintedItem_UpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdatePaintNode` instead
    ///
    pub const OnUpdatePaintNode = onUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QSGNode, param2: QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode `
    ///
    pub fn onUpdatePaintNode(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QSGNode, QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode) void {
        qtc.QQuickPaintedItem_OnUpdatePaintNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdatePaintNode` instead
    ///
    pub const SuperUpdatePaintNode = superUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn superUpdatePaintNode(self: QQuickPaintedItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickPaintedItem_SuperUpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn releaseResources(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseResources` instead
    ///
    pub const OnReleaseResources = onReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReleaseResources(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnReleaseResources(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseResources` instead
    ///
    pub const SuperReleaseResources = superReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superReleaseResources(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn itemChange(self: QQuickPaintedItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickPaintedItem_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: qquickitem_enums.ItemChange, param2: QQuickItem__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, i32, QQuickItem__ItemChangeData) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuickPaintedItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickPaintedItem_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickPaintedItem_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickPaintedItem.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickPaintedItem_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickPaintedItem.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn update1(self: QQuickPaintedItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QQuickPaintedItem_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setPerformanceHint2` instead
    ///
    pub const SetPerformanceHint2 = setPerformanceHint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` hint: qquickpainteditem_enums.PerformanceHint `
    ///
    /// ` enabled: bool `
    ///
    pub fn setPerformanceHint2(self: QQuickPaintedItem, hint: i32, enabled: bool) void {
        qtc.QQuickPaintedItem_SetPerformanceHint2(@ptrCast(self.ptr), @bitCast(hint), enabled);
    }

    /// Inherited from QQuickItem
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn asQQmlParserStatus(self: QQuickPaintedItem) QQmlParserStatus {
        return .{ .ptr = qtc.QQuickItem_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuickItem
    ///
    /// Downcasts to a QQuickPaintedItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuickPaintedItem {
        comptime _ = @TypeOf(_qqmlparserstatus)._is_QQmlParserStatus;
        return .{ .ptr = @ptrCast(qtc.QQuickItem_FromQQmlParserStatus(@ptrCast(_qqmlparserstatus.ptr))) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn window(self: QQuickPaintedItem) QQuickWindow {
        return .{ .ptr = qtc.QQuickItem_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn parentItem(self: QQuickPaintedItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn setParentItem(self: QQuickPaintedItem, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        qtc.QQuickItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackBefore(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_StackBefore(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `stackAfter` instead
    ///
    pub const StackAfter = stackAfter;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackAfter(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_StackAfter(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn childrenRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickItem_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuickPaintedItem, allocator: std.mem.Allocator) []QQuickItem {
        const _arr: qtc.libqt_list = qtc.QQuickItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuickItem, _arr.len) catch @panic("QQuickPaintedItem.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QQuickItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clip` instead
    ///
    pub const Clip = clip;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn clip(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_Clip(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClip` instead
    ///
    pub const SetClip = setClip;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _clip: bool `
    ///
    pub fn setClip(self: QQuickPaintedItem, _clip: bool) void {
        qtc.QQuickItem_SetClip(@ptrCast(self.ptr), _clip);
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuickPaintedItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickItem_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickPaintedItem.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuickPaintedItem, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QQuickItem_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn baselineOffset(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _baselineOffset: f64 `
    ///
    pub fn setBaselineOffset(self: QQuickPaintedItem, _baselineOffset: f64) void {
        qtc.QQuickItem_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(_baselineOffset));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn x(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn y(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn position(self: QQuickPaintedItem) QPointF {
        return .{ .ptr = qtc.QQuickItem_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QQuickPaintedItem, _x: f64) void {
        qtc.QQuickItem_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QQuickPaintedItem, _y: f64) void {
        qtc.QQuickItem_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _position: QPointF `
    ///
    pub fn setPosition(self: QQuickPaintedItem, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QPointF;
        qtc.QQuickItem_SetPosition(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn width(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QQuickPaintedItem, _width: f64) void {
        qtc.QQuickItem_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `resetWidth` instead
    ///
    pub const ResetWidth = resetWidth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn resetWidth(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ResetWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImplicitWidth` instead
    ///
    pub const SetImplicitWidth = setImplicitWidth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _implicitWidth: f64 `
    ///
    pub fn setImplicitWidth(self: QQuickPaintedItem, _implicitWidth: f64) void {
        qtc.QQuickItem_SetImplicitWidth(@ptrCast(self.ptr), @bitCast(_implicitWidth));
    }

    /// ### DEPRECATED: Use `implicitWidth` instead
    ///
    pub const ImplicitWidth = implicitWidth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn implicitWidth(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_ImplicitWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn height(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QQuickPaintedItem, _height: f64) void {
        qtc.QQuickItem_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `resetHeight` instead
    ///
    pub const ResetHeight = resetHeight;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn resetHeight(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ResetHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImplicitHeight` instead
    ///
    pub const SetImplicitHeight = setImplicitHeight;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _implicitHeight: f64 `
    ///
    pub fn setImplicitHeight(self: QQuickPaintedItem, _implicitHeight: f64) void {
        qtc.QQuickItem_SetImplicitHeight(@ptrCast(self.ptr), @bitCast(_implicitHeight));
    }

    /// ### DEPRECATED: Use `implicitHeight` instead
    ///
    pub const ImplicitHeight = implicitHeight;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn implicitHeight(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_ImplicitHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn size(self: QQuickPaintedItem) QSizeF {
        return .{ .ptr = qtc.QQuickItem_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setSize(self: QQuickPaintedItem, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QQuickItem_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `transformOrigin` instead
    ///
    pub const TransformOrigin = transformOrigin;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOrigin(self: QQuickPaintedItem) i32 {
        return qtc.QQuickItem_TransformOrigin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOrigin` instead
    ///
    pub const SetTransformOrigin = setTransformOrigin;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _transformOrigin: qquickitem_enums.TransformOrigin `
    ///
    pub fn setTransformOrigin(self: QQuickPaintedItem, _transformOrigin: i32) void {
        qtc.QQuickItem_SetTransformOrigin(@ptrCast(self.ptr), @bitCast(_transformOrigin));
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn transformOriginPoint(self: QQuickPaintedItem) QPointF {
        return .{ .ptr = qtc.QQuickItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _transformOriginPoint: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QQuickPaintedItem, _transformOriginPoint: anytype) void {
        comptime _ = @TypeOf(_transformOriginPoint)._is_QPointF;
        qtc.QQuickItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(_transformOriginPoint.ptr));
    }

    /// ### DEPRECATED: Use `z` instead
    ///
    pub const Z = z;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn z(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Z(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZ` instead
    ///
    pub const SetZ = setZ;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _z: f64 `
    ///
    pub fn setZ(self: QQuickPaintedItem, _z: f64) void {
        qtc.QQuickItem_SetZ(@ptrCast(self.ptr), @bitCast(_z));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn rotation(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn setRotation(self: QQuickPaintedItem, _rotation: f64) void {
        qtc.QQuickItem_SetRotation(@ptrCast(self.ptr), @bitCast(_rotation));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn scale(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Scale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QQuickPaintedItem, _scale: f64) void {
        qtc.QQuickItem_SetScale(@ptrCast(self.ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn opacity(self: QQuickPaintedItem) f64 {
        return qtc.QQuickItem_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QQuickPaintedItem, _opacity: f64) void {
        qtc.QQuickItem_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isVisible(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QQuickPaintedItem, visible: bool) void {
        qtc.QQuickItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isEnabled(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QQuickPaintedItem, enabled: bool) void {
        qtc.QQuickItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `smooth` instead
    ///
    pub const Smooth = smooth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn smooth(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_Smooth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSmooth` instead
    ///
    pub const SetSmooth = setSmooth;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _smooth: bool `
    ///
    pub fn setSmooth(self: QQuickPaintedItem, _smooth: bool) void {
        qtc.QQuickItem_SetSmooth(@ptrCast(self.ptr), _smooth);
    }

    /// ### DEPRECATED: Use `activeFocusOnTab` instead
    ///
    pub const ActiveFocusOnTab = activeFocusOnTab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn activeFocusOnTab(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_ActiveFocusOnTab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveFocusOnTab` instead
    ///
    pub const SetActiveFocusOnTab = setActiveFocusOnTab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _activeFocusOnTab: bool `
    ///
    pub fn setActiveFocusOnTab(self: QQuickPaintedItem, _activeFocusOnTab: bool) void {
        qtc.QQuickItem_SetActiveFocusOnTab(@ptrCast(self.ptr), _activeFocusOnTab);
    }

    /// ### DEPRECATED: Use `resetAntialiasing` instead
    ///
    pub const ResetAntialiasing = resetAntialiasing;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn resetAntialiasing(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ResetAntialiasing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qquickitem_enums.Flag `
    ///
    pub fn flags(self: QQuickPaintedItem) i32 {
        return qtc.QQuickItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    pub fn setFlag(self: QQuickPaintedItem, flag: i32) void {
        qtc.QQuickItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _flags: flag of qquickitem_enums.Flag `
    ///
    pub fn setFlags(self: QQuickPaintedItem, _flags: i32) void {
        qtc.QQuickItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `viewportItem` instead
    ///
    pub const ViewportItem = viewportItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn viewportItem(self: QQuickPaintedItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ViewportItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasActiveFocus` instead
    ///
    pub const HasActiveFocus = hasActiveFocus;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn hasActiveFocus(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_HasActiveFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn hasFocus(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` focus: bool `
    ///
    pub fn setFocus(self: QQuickPaintedItem, focus: bool) void {
        qtc.QQuickItem_SetFocus(@ptrCast(self.ptr), focus);
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` focus: bool `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QQuickPaintedItem, focus: bool, reason: i32) void {
        qtc.QQuickItem_SetFocus2(@ptrCast(self.ptr), focus, @bitCast(reason));
    }

    /// ### DEPRECATED: Use `isFocusScope` instead
    ///
    pub const IsFocusScope = isFocusScope;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isFocusScope(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_IsFocusScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scopedFocusItem` instead
    ///
    pub const ScopedFocusItem = scopedFocusItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn scopedFocusItem(self: QQuickPaintedItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ScopedFocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QQuickPaintedItem) i32 {
        return qtc.QQuickItem_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QQuickPaintedItem, policy: i32) void {
        qtc.QQuickItem_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` child: QQuickItem `
    ///
    pub fn isAncestorOf(self: QQuickPaintedItem, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QQuickItem;
        return qtc.QQuickItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QQuickPaintedItem) i32 {
        return qtc.QQuickItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QQuickPaintedItem, buttons: i32) void {
        qtc.QQuickItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn acceptHoverEvents(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QQuickPaintedItem, enabled: bool) void {
        qtc.QQuickItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn acceptTouchEvents(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` accept: bool `
    ///
    pub fn setAcceptTouchEvents(self: QQuickPaintedItem, accept: bool) void {
        qtc.QQuickItem_SetAcceptTouchEvents(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn cursor(self: QQuickPaintedItem) QCursor {
        return .{ .ptr = qtc.QQuickItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QQuickPaintedItem, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QQuickItem_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn unsetCursor(self: QQuickPaintedItem) void {
        qtc.QQuickItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isUnderMouse(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn grabMouse(self: QQuickPaintedItem) void {
        qtc.QQuickItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn ungrabMouse(self: QQuickPaintedItem) void {
        qtc.QQuickItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keepMouseGrab` instead
    ///
    pub const KeepMouseGrab = keepMouseGrab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn keepMouseGrab(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_KeepMouseGrab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepMouseGrab` instead
    ///
    pub const SetKeepMouseGrab = setKeepMouseGrab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _keepMouseGrab: bool `
    ///
    pub fn setKeepMouseGrab(self: QQuickPaintedItem, _keepMouseGrab: bool) void {
        qtc.QQuickItem_SetKeepMouseGrab(@ptrCast(self.ptr), _keepMouseGrab);
    }

    /// ### DEPRECATED: Use `filtersChildMouseEvents` instead
    ///
    pub const FiltersChildMouseEvents = filtersChildMouseEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn filtersChildMouseEvents(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_FiltersChildMouseEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildMouseEvents` instead
    ///
    pub const SetFiltersChildMouseEvents = setFiltersChildMouseEvents;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` filter: bool `
    ///
    pub fn setFiltersChildMouseEvents(self: QQuickPaintedItem, filter: bool) void {
        qtc.QQuickItem_SetFiltersChildMouseEvents(@ptrCast(self.ptr), filter);
    }

    /// ### DEPRECATED: Use `grabTouchPoints` instead
    ///
    pub const GrabTouchPoints = grabTouchPoints;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` ids: []i32 `
    ///
    pub fn grabTouchPoints(self: QQuickPaintedItem, ids: []i32) void {
        const ids_list = qtc.libqt_list{
            .len = ids.len,
            .data = ids.ptr,
        };
        qtc.QQuickItem_GrabTouchPoints(@ptrCast(self.ptr), ids_list);
    }

    /// ### DEPRECATED: Use `ungrabTouchPoints` instead
    ///
    pub const UngrabTouchPoints = ungrabTouchPoints;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn ungrabTouchPoints(self: QQuickPaintedItem) void {
        qtc.QQuickItem_UngrabTouchPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keepTouchGrab` instead
    ///
    pub const KeepTouchGrab = keepTouchGrab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn keepTouchGrab(self: QQuickPaintedItem) bool {
        return qtc.QQuickItem_KeepTouchGrab(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepTouchGrab` instead
    ///
    pub const SetKeepTouchGrab = setKeepTouchGrab;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _keepTouchGrab: bool `
    ///
    pub fn setKeepTouchGrab(self: QQuickPaintedItem, _keepTouchGrab: bool) void {
        qtc.QQuickItem_SetKeepTouchGrab(@ptrCast(self.ptr), _keepTouchGrab);
    }

    /// ### DEPRECATED: Use `grabToImage` instead
    ///
    pub const GrabToImage = grabToImage;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: QJSValue `
    ///
    pub fn grabToImage(self: QQuickPaintedItem, callback: anytype) bool {
        comptime _ = @TypeOf(callback)._is_QJSValue;
        return qtc.QQuickItem_GrabToImage(@ptrCast(self.ptr), @ptrCast(callback.ptr));
    }

    /// ### DEPRECATED: Use `containmentMask` instead
    ///
    pub const ContainmentMask = containmentMask;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn containmentMask(self: QQuickPaintedItem) QObject {
        return .{ .ptr = qtc.QQuickItem_ContainmentMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContainmentMask` instead
    ///
    pub const SetContainmentMask = setContainmentMask;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` mask: QObject `
    ///
    pub fn setContainmentMask(self: QQuickPaintedItem, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QObject;
        qtc.QQuickItem_SetContainmentMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: *bool `
    ///
    pub fn itemTransform(self: QQuickPaintedItem, param1: anytype, param2: *bool) QTransform {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QQuickPaintedItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToItem(self: QQuickPaintedItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToScene(self: QQuickPaintedItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QQuickPaintedItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QQuickPaintedItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QQuickPaintedItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `polish` instead
    ///
    pub const Polish = polish;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn polish(self: QQuickPaintedItem) void {
        qtc.QQuickItem_Polish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mapFromItem2` instead
    ///
    pub const MapFromItem2 = mapFromItem2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem2(self: QQuickPaintedItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem3` instead
    ///
    pub const MapFromItem3 = mapFromItem3;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem3(self: QQuickPaintedItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapFromItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapFromItem4(self: QQuickPaintedItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn mapFromItem5(self: QQuickPaintedItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `mapToItem2` instead
    ///
    pub const MapToItem2 = mapToItem2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem2(self: QQuickPaintedItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem3` instead
    ///
    pub const MapToItem3 = mapToItem3;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem3(self: QQuickPaintedItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapToItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapToItem4(self: QQuickPaintedItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QQuickItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn mapToItem5(self: QQuickPaintedItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromGlobal2(self: QQuickPaintedItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QQuickItem_MapFromGlobal2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal3` instead
    ///
    pub const MapFromGlobal3 = mapFromGlobal3;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromGlobal3(self: QQuickPaintedItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapFromGlobal3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToGlobal2(self: QQuickPaintedItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QQuickItem_MapToGlobal2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal3` instead
    ///
    pub const MapToGlobal3 = mapToGlobal3;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToGlobal3(self: QQuickPaintedItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QQuickItem_MapToGlobal3(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `forceActiveFocus` instead
    ///
    pub const ForceActiveFocus = forceActiveFocus;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn forceActiveFocus(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ForceActiveFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forceActiveFocus2` instead
    ///
    pub const ForceActiveFocus2 = forceActiveFocus2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn forceActiveFocus2(self: QQuickPaintedItem, reason: i32) void {
        qtc.QQuickItem_ForceActiveFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `nextItemInFocusChain` instead
    ///
    pub const NextItemInFocusChain = nextItemInFocusChain;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn nextItemInFocusChain(self: QQuickPaintedItem) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_NextItemInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn childAt(self: QQuickPaintedItem, _x: f64, _y: f64) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn ensurePolished(self: QQuickPaintedItem) void {
        qtc.QQuickItem_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpItemTree` instead
    ///
    pub const DumpItemTree = dumpItemTree;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn dumpItemTree(self: QQuickPaintedItem) void {
        qtc.QQuickItem_DumpItemTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childrenRectChanged` instead
    ///
    pub const ChildrenRectChanged = childrenRectChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QRectF `
    ///
    pub fn childrenRectChanged(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QQuickItem_ChildrenRectChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenRectChanged` instead
    ///
    pub const OnChildrenRectChanged = onChildrenRectChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QRectF) callconv(.c) void `
    ///
    pub fn onChildrenRectChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QRectF) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ChildrenRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baselineOffsetChanged` instead
    ///
    pub const BaselineOffsetChanged = baselineOffsetChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: f64 `
    ///
    pub fn baselineOffsetChanged(self: QQuickPaintedItem, param1: f64) void {
        qtc.QQuickItem_BaselineOffsetChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onBaselineOffsetChanged` instead
    ///
    pub const OnBaselineOffsetChanged = onBaselineOffsetChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: f64) callconv(.c) void `
    ///
    pub fn onBaselineOffsetChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, f64) callconv(.c) void) void {
        qtc.QQuickItem_Connect_BaselineOffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn stateChanged(self: QQuickPaintedItem, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QQuickItem_StateChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QQuickItem_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusChanged` instead
    ///
    pub const FocusChanged = focusChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn focusChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_FocusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onFocusChanged` instead
    ///
    pub const OnFocusChanged = onFocusChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onFocusChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_FocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFocusChanged` instead
    ///
    pub const ActiveFocusChanged = activeFocusChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_ActiveFocusChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveFocusChanged` instead
    ///
    pub const OnActiveFocusChanged = onActiveFocusChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ActiveFocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPolicyChanged` instead
    ///
    pub const FocusPolicyChanged = focusPolicyChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicyChanged(self: QQuickPaintedItem, param1: i32) void {
        qtc.QQuickItem_FocusPolicyChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onFocusPolicyChanged` instead
    ///
    pub const OnFocusPolicyChanged = onFocusPolicyChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: qnamespace_enums.FocusPolicy) callconv(.c) void `
    ///
    pub fn onFocusPolicyChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, i32) callconv(.c) void) void {
        qtc.QQuickItem_Connect_FocusPolicyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFocusOnTabChanged` instead
    ///
    pub const ActiveFocusOnTabChanged = activeFocusOnTabChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusOnTabChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_ActiveFocusOnTabChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveFocusOnTabChanged` instead
    ///
    pub const OnActiveFocusOnTabChanged = onActiveFocusOnTabChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusOnTabChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ActiveFocusOnTabChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn parentChanged(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        qtc.QQuickItem_ParentChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QQuickItem) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QQuickItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transformOriginChanged` instead
    ///
    pub const TransformOriginChanged = transformOriginChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOriginChanged(self: QQuickPaintedItem, param1: i32) void {
        qtc.QQuickItem_TransformOriginChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onTransformOriginChanged` instead
    ///
    pub const OnTransformOriginChanged = onTransformOriginChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: qquickitem_enums.TransformOrigin) callconv(.c) void `
    ///
    pub fn onTransformOriginChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, i32) callconv(.c) void) void {
        qtc.QQuickItem_Connect_TransformOriginChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smoothChanged` instead
    ///
    pub const SmoothChanged = smoothChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn smoothChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_SmoothChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onSmoothChanged` instead
    ///
    pub const OnSmoothChanged = onSmoothChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onSmoothChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_SmoothChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `antialiasingChanged` instead
    ///
    pub const AntialiasingChanged = antialiasingChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn antialiasingChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_AntialiasingChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onAntialiasingChanged` instead
    ///
    pub const OnAntialiasingChanged = onAntialiasingChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onAntialiasingChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_AntialiasingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clipChanged` instead
    ///
    pub const ClipChanged = clipChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: bool `
    ///
    pub fn clipChanged(self: QQuickPaintedItem, param1: bool) void {
        qtc.QQuickItem_ClipChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onClipChanged` instead
    ///
    pub const OnClipChanged = onClipChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: bool) callconv(.c) void `
    ///
    pub fn onClipChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, bool) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ClipChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowChanged` instead
    ///
    pub const WindowChanged = windowChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _window: QQuickWindow `
    ///
    pub fn windowChanged(self: QQuickPaintedItem, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QQuickWindow;
        qtc.QQuickItem_WindowChanged(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `onWindowChanged` instead
    ///
    pub const OnWindowChanged = onWindowChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, window: QQuickWindow) callconv(.c) void `
    ///
    pub fn onWindowChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QQuickWindow) callconv(.c) void) void {
        qtc.QQuickItem_Connect_WindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn childrenChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn opacityChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn enabledChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn visibleChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChildrenChanged` instead
    ///
    pub const VisibleChildrenChanged = visibleChildrenChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn visibleChildrenChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_VisibleChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChildrenChanged` instead
    ///
    pub const OnVisibleChildrenChanged = onVisibleChildrenChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onVisibleChildrenChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_VisibleChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn rotationChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn scaleChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn xChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onXChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn yChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onYChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn widthChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn heightChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn zChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onZChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `implicitWidthChanged` instead
    ///
    pub const ImplicitWidthChanged = implicitWidthChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn implicitWidthChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ImplicitWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImplicitWidthChanged` instead
    ///
    pub const OnImplicitWidthChanged = onImplicitWidthChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onImplicitWidthChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ImplicitWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `implicitHeightChanged` instead
    ///
    pub const ImplicitHeightChanged = implicitHeightChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn implicitHeightChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ImplicitHeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImplicitHeightChanged` instead
    ///
    pub const OnImplicitHeightChanged = onImplicitHeightChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onImplicitHeightChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ImplicitHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `containmentMaskChanged` instead
    ///
    pub const ContainmentMaskChanged = containmentMaskChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn containmentMaskChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_ContainmentMaskChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContainmentMaskChanged` instead
    ///
    pub const OnContainmentMaskChanged = onContainmentMaskChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onContainmentMaskChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_ContainmentMaskChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn paletteChanged(self: QQuickPaintedItem) void {
        qtc.QQuickItem_PaletteChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteCreated` instead
    ///
    pub const PaletteCreated = paletteCreated;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn paletteCreated(self: QQuickPaintedItem) void {
        qtc.QQuickItem_PaletteCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteCreated` instead
    ///
    pub const OnPaletteCreated = onPaletteCreated;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onPaletteCreated(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
        qtc.QQuickItem_Connect_PaletteCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QQuickPaintedItem, flag: i32, enabled: bool) void {
        qtc.QQuickItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `grabToImage22` instead
    ///
    pub const GrabToImage22 = grabToImage22;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: QJSValue `
    ///
    /// ` targetSize: QSize `
    ///
    pub fn grabToImage22(self: QQuickPaintedItem, callback: anytype, targetSize: anytype) bool {
        comptime _ = @TypeOf(callback)._is_QJSValue;
        comptime _ = @TypeOf(targetSize)._is_QSize;
        return qtc.QQuickItem_GrabToImage22(@ptrCast(self.ptr), @ptrCast(callback.ptr), @ptrCast(targetSize.ptr));
    }

    /// ### DEPRECATED: Use `nextItemInFocusChain1` instead
    ///
    pub const NextItemInFocusChain1 = nextItemInFocusChain1;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` forward: bool `
    ///
    pub fn nextItemInFocusChain1(self: QQuickPaintedItem, forward: bool) QQuickItem {
        return .{ .ptr = qtc.QQuickItem_NextItemInFocusChain1(@ptrCast(self.ptr), forward) };
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickPaintedItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickPaintedItem.objectName: Memory allocation failed");
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickPaintedItem, name: []const u8) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isWidgetType(self: QQuickPaintedItem) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isWindowType(self: QQuickPaintedItem) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isQuickItemType(self: QQuickPaintedItem) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn signalsBlocked(self: QQuickPaintedItem) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickPaintedItem, b: bool) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn thread(self: QQuickPaintedItem) QThread {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickPaintedItem, _thread: anytype) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickPaintedItem, interval: i32) i32 {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickPaintedItem, time: i64) i32 {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickPaintedItem, id: i32) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickPaintedItem, id: i32) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickPaintedItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickPaintedItem.children: Memory allocation failed");
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickPaintedItem, _parent: anytype) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickPaintedItem, filterObj: anytype) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickPaintedItem, obj: anytype) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickPaintedItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn disconnect3(self: QQuickPaintedItem) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickPaintedItem, receiver: anytype) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn dumpObjectTree(self: QQuickPaintedItem) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn dumpObjectInfo(self: QQuickPaintedItem) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickPaintedItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickPaintedItem, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickPaintedItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickPaintedItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickPaintedItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn bindingStorage(self: QQuickPaintedItem) QBindingStorage {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn bindingStorage2(self: QQuickPaintedItem) QBindingStorage {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn destroyed(self: QQuickPaintedItem) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem) callconv(.c) void) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn parent(self: QQuickPaintedItem) QObject {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickPaintedItem, classname: [:0]const u8) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn deleteLater(self: QQuickPaintedItem) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickPaintedItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickPaintedItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickPaintedItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickPaintedItem, signal: [:0]const u8) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickPaintedItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickPaintedItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickPaintedItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickPaintedItem, param1: anytype) void {
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn boundingRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickPaintedItem_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superBoundingRect` instead
    ///
    pub const SuperBoundingRect = superBoundingRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superBoundingRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRect` instead
    ///
    pub const OnBoundingRect = onBoundingRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QQuickPaintedItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickPaintedItem_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clipRect` instead
    ///
    pub const ClipRect = clipRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn clipRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickPaintedItem_ClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superClipRect` instead
    ///
    pub const SuperClipRect = superClipRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superClipRect(self: QQuickPaintedItem) QRectF {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClipRect` instead
    ///
    pub const OnClipRect = onClipRect;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClipRect(self: QQuickPaintedItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickPaintedItem_OnClipRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QQuickPaintedItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickPaintedItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `superContains` instead
    ///
    pub const SuperContains = superContains;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QQuickPaintedItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickPaintedItem_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QPointF) callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QQuickPaintedItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickPaintedItem_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QQuickPaintedItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, i32) callconv(.c) QVariant) void {
        qtc.QQuickPaintedItem_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQuickPaintedItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickPaintedItem_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQuickPaintedItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickPaintedItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometryChange` instead
    ///
    pub const GeometryChange = geometryChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn geometryChange(self: QQuickPaintedItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickPaintedItem_GeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `superGeometryChange` instead
    ///
    pub const SuperGeometryChange = superGeometryChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn superGeometryChange(self: QQuickPaintedItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickPaintedItem_SuperGeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChange` instead
    ///
    pub const OnGeometryChange = onGeometryChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, newGeometry: QRectF, oldGeometry: QRectF) callconv(.c) void `
    ///
    pub fn onGeometryChange(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QRectF, QRectF) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn classBegin(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superClassBegin(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn componentComplete(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superComponentComplete(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickPaintedItem_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickPaintedItem_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickPaintedItem_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickPaintedItem_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickPaintedItem_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickPaintedItem_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QInputMethodEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickPaintedItem_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickPaintedItem_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickPaintedItem_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickPaintedItem_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickPaintedItem_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseUngrabEvent` instead
    ///
    pub const MouseUngrabEvent = mouseUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn mouseUngrabEvent(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_MouseUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superMouseUngrabEvent` instead
    ///
    pub const SuperMouseUngrabEvent = superMouseUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superMouseUngrabEvent(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperMouseUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMouseUngrabEvent` instead
    ///
    pub const OnMouseUngrabEvent = onMouseUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMouseUngrabEvent(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnMouseUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `touchUngrabEvent` instead
    ///
    pub const TouchUngrabEvent = touchUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn touchUngrabEvent(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_TouchUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superTouchUngrabEvent` instead
    ///
    pub const SuperTouchUngrabEvent = superTouchUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superTouchUngrabEvent(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperTouchUngrabEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTouchUngrabEvent` instead
    ///
    pub const OnTouchUngrabEvent = onTouchUngrabEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onTouchUngrabEvent(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnTouchUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickPaintedItem_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickPaintedItem_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QWheelEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickPaintedItem_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickPaintedItem_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QTouchEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverEnterEvent` instead
    ///
    pub const HoverEnterEvent = hoverEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverEnterEvent` instead
    ///
    pub const SuperHoverEnterEvent = superHoverEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverEnterEvent` instead
    ///
    pub const OnHoverEnterEvent = onHoverEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverMoveEvent` instead
    ///
    pub const HoverMoveEvent = hoverMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverMoveEvent` instead
    ///
    pub const SuperHoverMoveEvent = superHoverMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverMoveEvent` instead
    ///
    pub const OnHoverMoveEvent = onHoverMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverLeaveEvent` instead
    ///
    pub const HoverLeaveEvent = hoverLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverLeaveEvent` instead
    ///
    pub const SuperHoverLeaveEvent = superHoverLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickPaintedItem_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverLeaveEvent` instead
    ///
    pub const OnHoverLeaveEvent = onHoverLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickPaintedItem_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickPaintedItem_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QDragEnterEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickPaintedItem_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickPaintedItem_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QDragMoveEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickPaintedItem_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickPaintedItem_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn dropEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickPaintedItem_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn superDropEvent(self: QQuickPaintedItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickPaintedItem_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QDropEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childMouseEventFilter` instead
    ///
    pub const ChildMouseEventFilter = childMouseEventFilter;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn childMouseEventFilter(self: QQuickPaintedItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickPaintedItem_ChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superChildMouseEventFilter` instead
    ///
    pub const SuperChildMouseEventFilter = superChildMouseEventFilter;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superChildMouseEventFilter(self: QQuickPaintedItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickPaintedItem_SuperChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onChildMouseEventFilter` instead
    ///
    pub const OnChildMouseEventFilter = onChildMouseEventFilter;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: QQuickItem, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onChildMouseEventFilter(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QQuickItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnChildMouseEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updatePolish` instead
    ///
    pub const UpdatePolish = updatePolish;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn updatePolish(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_UpdatePolish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdatePolish` instead
    ///
    pub const SuperUpdatePolish = superUpdatePolish;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superUpdatePolish(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperUpdatePolish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdatePolish` instead
    ///
    pub const OnUpdatePolish = onUpdatePolish;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdatePolish(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnUpdatePolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickPaintedItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickPaintedItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickPaintedItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickPaintedItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickPaintedItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickPaintedItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickPaintedItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickPaintedItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QChildEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickPaintedItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickPaintedItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickPaintedItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QEvent) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickPaintedItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickPaintedItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickPaintedItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickPaintedItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickPaintedItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickPaintedItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickPaintedItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickPaintedItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isComponentComplete` instead
    ///
    pub const IsComponentComplete = isComponentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn isComponentComplete(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_IsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsComponentComplete` instead
    ///
    pub const SuperIsComponentComplete = superIsComponentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superIsComponentComplete(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_SuperIsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsComponentComplete` instead
    ///
    pub const OnIsComponentComplete = onIsComponentComplete;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsComponentComplete(self: QQuickPaintedItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnIsComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateInputMethod` instead
    ///
    pub const UpdateInputMethod = updateInputMethod;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn updateInputMethod(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_UpdateInputMethod(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateInputMethod` instead
    ///
    pub const SuperUpdateInputMethod = superUpdateInputMethod;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superUpdateInputMethod(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_SuperUpdateInputMethod(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateInputMethod` instead
    ///
    pub const OnUpdateInputMethod = onUpdateInputMethod;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateInputMethod(self: QQuickPaintedItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnUpdateInputMethod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthValid` instead
    ///
    pub const WidthValid = widthValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn widthValid(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_WidthValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superWidthValid` instead
    ///
    pub const SuperWidthValid = superWidthValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superWidthValid(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_SuperWidthValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthValid` instead
    ///
    pub const OnWidthValid = onWidthValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onWidthValid(self: QQuickPaintedItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnWidthValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightValid` instead
    ///
    pub const HeightValid = heightValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn heightValid(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_HeightValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHeightValid` instead
    ///
    pub const SuperHeightValid = superHeightValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superHeightValid(self: QQuickPaintedItem) bool {
        return qtc.QQuickPaintedItem_SuperHeightValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightValid` instead
    ///
    pub const OnHeightValid = onHeightValid;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHeightValid(self: QQuickPaintedItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnHeightValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setImplicitSize` instead
    ///
    pub const SetImplicitSize = setImplicitSize;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn setImplicitSize(self: QQuickPaintedItem, param1: f64, param2: f64) void {
        qtc.QQuickPaintedItem_SetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `superSetImplicitSize` instead
    ///
    pub const SuperSetImplicitSize = superSetImplicitSize;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickPaintedItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn superSetImplicitSize(self: QQuickPaintedItem, param1: f64, param2: f64) void {
        qtc.QQuickPaintedItem_SuperSetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onSetImplicitSize` instead
    ///
    pub const OnSetImplicitSize = onSetImplicitSize;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, param1: f64, param2: f64) callconv(.c) void `
    ///
    pub fn onSetImplicitSize(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, f64, f64) callconv(.c) void) void {
        qtc.QQuickPaintedItem_OnSetImplicitSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn sender(self: QQuickPaintedItem) QObject {
        return .{ .ptr = qtc.QQuickPaintedItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superSender(self: QQuickPaintedItem) QObject {
        return .{ .ptr = qtc.QQuickPaintedItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickPaintedItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickPaintedItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn senderSignalIndex(self: QQuickPaintedItem) i32 {
        return qtc.QQuickPaintedItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    pub fn superSenderSignalIndex(self: QQuickPaintedItem) i32 {
        return qtc.QQuickPaintedItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickPaintedItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickPaintedItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickPaintedItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickPaintedItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickPaintedItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickPaintedItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickPaintedItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickPaintedItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickPaintedItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickPaintedItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickPaintedItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickPaintedItem`
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickPaintedItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickPaintedItem `
    ///
    /// ` callback: *const fn (self: QQuickPaintedItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickPaintedItem, callback: *const fn (QQuickPaintedItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#dtor.QQuickPaintedItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickPaintedItem `
    ///
    pub fn delete(self: QQuickPaintedItem) void {
        qtc.QQuickPaintedItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#public-types)
pub const enums = struct {
    pub const RenderTarget = enum {
        pub const Image: i32 = 0;
        pub const FramebufferObject: i32 = 1;
        pub const InvertedYFramebufferObject: i32 = 2;
    };

    pub const PerformanceHint = enum {
        pub const FastFBOResizing: i32 = 1;
    };
};
