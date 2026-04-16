const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QCursor = @import("libqt6").QCursor;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsItemGroup = @import("libqt6").QGraphicsItemGroup;
const QGraphicsObject = @import("libqt6").QGraphicsObject;
const QGraphicsScene = @import("libqt6").QGraphicsScene;
const QGraphicsSceneContextMenuEvent = @import("libqt6").QGraphicsSceneContextMenuEvent;
const QGraphicsSceneDragDropEvent = @import("libqt6").QGraphicsSceneDragDropEvent;
const QGraphicsSceneHoverEvent = @import("libqt6").QGraphicsSceneHoverEvent;
const QGraphicsSceneMouseEvent = @import("libqt6").QGraphicsSceneMouseEvent;
const QGraphicsSceneWheelEvent = @import("libqt6").QGraphicsSceneWheelEvent;
const QGraphicsTransform = @import("libqt6").QGraphicsTransform;
const QGraphicsWidget = @import("libqt6").QGraphicsWidget;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QVideoSink = @import("libqt6").QVideoSink;
const QWidget = @import("libqt6").QWidget;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html)
pub const QGraphicsVideoItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsVideoItem,

    pub const _is_QGraphicsVideoItem = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};

    /// New constructs a new QGraphicsVideoItem object.
    ///
    pub fn New() QGraphicsVideoItem {
        return .{ .ptr = qtc.QGraphicsVideoItem_new() };
    }

    /// New2 constructs a new QGraphicsVideoItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn New2(parent: anytype) QGraphicsVideoItem {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsVideoItem_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn MetaObject(self: QGraphicsVideoItem) QMetaObject {
        return .{ .ptr = qtc.QGraphicsVideoItem_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsVideoItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperMetaObject(self: QGraphicsVideoItem) QMetaObject {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsVideoItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsVideoItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsVideoItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsVideoItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsVideoItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGraphicsVideoItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsVideoItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsVideoItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGraphicsVideoItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsVideoItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsvideoitem.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#videoSink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn VideoSink(self: QGraphicsVideoItem) QVideoSink {
        return .{ .ptr = qtc.QGraphicsVideoItem_VideoSink(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#aspectRatioMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.AspectRatioMode `
    ///
    pub fn AspectRatioMode(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsVideoItem_AspectRatioMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setAspectRatioMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` mode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn SetAspectRatioMode(self: QGraphicsVideoItem, mode: i32) void {
        qtc.QGraphicsVideoItem_SetAspectRatioMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Offset(self: QGraphicsVideoItem) QPointF {
        return .{ .ptr = qtc.QGraphicsVideoItem_Offset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` offset: QPointF `
    ///
    pub fn SetOffset(self: QGraphicsVideoItem, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QGraphicsVideoItem_SetOffset(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Size(self: QGraphicsVideoItem) QSizeF {
        return .{ .ptr = qtc.QGraphicsVideoItem_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetSize(self: QGraphicsVideoItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsVideoItem_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn NativeSize(self: QGraphicsVideoItem) QSizeF {
        return .{ .ptr = qtc.QGraphicsVideoItem_NativeSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn BoundingRect(self: QGraphicsVideoItem) QRectF {
        return .{ .ptr = qtc.QGraphicsVideoItem_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    pub fn OnBoundingRect(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsVideoItem_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBoundingRect` instead
    ///
    pub const QBaseBoundingRect = SuperBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperBoundingRect(self: QGraphicsVideoItem) QRectF {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn Paint(self: QGraphicsVideoItem, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsVideoItem_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnPaint(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperPaint(self: QGraphicsVideoItem, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsVideoItem_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Type(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsVideoItem_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsVideoItem_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperType(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsVideoItem_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` size: QSizeF `
    ///
    pub fn NativeSizeChanged(self: QGraphicsVideoItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsVideoItem_NativeSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, size: QSizeF) callconv(.c) void `
    ///
    pub fn OnNativeSizeChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QSizeF) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_Connect_NativeSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsVideoItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsVideoItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn ItemChange(self: QGraphicsVideoItem, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsVideoItem_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnItemChange(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsVideoItem_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemChange` instead
    ///
    pub const QBaseItemChange = SuperItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperItemChange(self: QGraphicsVideoItem, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsvideoitem.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsvideoitem.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QGraphicsVideoItem, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QGraphicsVideoItem, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ParentChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnParentChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn OpacityChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn VisibleChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn EnabledChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn XChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnXChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn YChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnYChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ZChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnZChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn RotationChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ScaleChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnScaleChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ChildrenChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnChildrenChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn WidthChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn HeightChanged(self: QGraphicsVideoItem) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QGraphicsVideoItem, typeVal: i32, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsvideoitem.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGraphicsVideoItem, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsWidgetType(self: QGraphicsVideoItem) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsWindowType(self: QGraphicsVideoItem) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsQuickItemType(self: QGraphicsVideoItem) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SignalsBlocked(self: QGraphicsVideoItem) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGraphicsVideoItem, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Thread(self: QGraphicsVideoItem) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsVideoItem, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGraphicsVideoItem, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGraphicsVideoItem, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGraphicsVideoItem, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGraphicsVideoItem, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsvideoitem.Children: Memory allocation failed");
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsVideoItem, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGraphicsVideoItem, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGraphicsVideoItem, obj: anytype) void {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsVideoItem, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Disconnect3(self: QGraphicsVideoItem) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGraphicsVideoItem, receiver: anytype) bool {
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn DumpObjectTree(self: QGraphicsVideoItem) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn DumpObjectInfo(self: QGraphicsVideoItem) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGraphicsVideoItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsVideoItem, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGraphicsVideoItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsvideoitem.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsvideoitem.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn BindingStorage(self: QGraphicsVideoItem) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn BindingStorage2(self: QGraphicsVideoItem) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Destroyed(self: QGraphicsVideoItem) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Parent(self: QGraphicsVideoItem) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGraphicsVideoItem, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn DeleteLater(self: QGraphicsVideoItem) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGraphicsVideoItem, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGraphicsVideoItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsVideoItem, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsVideoItem, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGraphicsVideoItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsVideoItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsVideoItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsVideoItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Scene(self: QGraphicsVideoItem) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ParentItem(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn TopLevelItem(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ParentObject(self: QGraphicsVideoItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ParentWidget(self: QGraphicsVideoItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn TopLevelWidget(self: QGraphicsVideoItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Window(self: QGraphicsVideoItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Panel(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn SetParentItem(self: QGraphicsVideoItem, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildItems(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsvideoitem.ChildItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsWidget(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsWindow(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsPanel(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ToGraphicsObject(self: QGraphicsVideoItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ToGraphicsObject2(self: QGraphicsVideoItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Group(self: QGraphicsVideoItem) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` group: QGraphicsItemGroup `
    ///
    pub fn SetGroup(self: QGraphicsVideoItem, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn Flags(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlag(self: QGraphicsVideoItem, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlags(self: QGraphicsVideoItem, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn CacheMode(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn SetCacheMode(self: QGraphicsVideoItem, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn PanelModality(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn SetPanelModality(self: QGraphicsVideoItem, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.ptr), @bitCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsBlockedByModalPanel(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsvideoitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QGraphicsVideoItem, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Cursor(self: QGraphicsVideoItem) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QGraphicsVideoItem, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn HasCursor(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn UnsetCursor(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsVisible(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` parent: QGraphicsItem `
    ///
    pub fn IsVisibleTo(self: QGraphicsVideoItem, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QGraphicsVideoItem, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Hide(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Show(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsEnabled(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QGraphicsVideoItem, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsSelected(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` selected: bool `
    ///
    pub fn SetSelected(self: QGraphicsVideoItem, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.ptr), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn AcceptDrops(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QGraphicsVideoItem, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Opacity(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn EffectiveOpacity(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QGraphicsVideoItem, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn GraphicsEffect(self: QGraphicsVideoItem) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QGraphicsVideoItem, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn AcceptedMouseButtons(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetAcceptedMouseButtons(self: QGraphicsVideoItem, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn AcceptHoverEvents(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptHoverEvents(self: QGraphicsVideoItem, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn AcceptTouchEvents(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptTouchEvents(self: QGraphicsVideoItem, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn FiltersChildEvents(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFiltersChildEvents(self: QGraphicsVideoItem, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn HandlesChildEvents(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHandlesChildEvents(self: QGraphicsVideoItem, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsActive(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: QGraphicsVideoItem, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.ptr), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn HasFocus(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SetFocus(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ClearFocus(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn FocusProxy(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetFocusProxy(self: QGraphicsVideoItem, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn FocusItem(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn FocusScopeItem(self: QGraphicsVideoItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn GrabMouse(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn UngrabMouse(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn GrabKeyboard(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn UngrabKeyboard(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Pos(self: QGraphicsVideoItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn X(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: QGraphicsVideoItem, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Y(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: QGraphicsVideoItem, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ScenePos(self: QGraphicsVideoItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsVideoItem, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetPos2(self: QGraphicsVideoItem, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn MoveBy(self: QGraphicsVideoItem, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn EnsureVisible(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Transform(self: QGraphicsVideoItem) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SceneTransform(self: QGraphicsVideoItem) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn DeviceTransform(self: QGraphicsVideoItem, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn ItemTransform(self: QGraphicsVideoItem, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn SetTransform(self: QGraphicsVideoItem, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ResetTransform(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetRotation(self: QGraphicsVideoItem, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Rotation(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: QGraphicsVideoItem, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.ptr), @bitCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Scale(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transformations(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("qgraphicsvideoitem.Transformations: Memory allocation failed");
        const _data: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` transformations: []QGraphicsTransform `
    ///
    pub fn SetTransformations(self: QGraphicsVideoItem, transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.ptr), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn TransformOriginPoint(self: QGraphicsVideoItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` origin: QPointF `
    ///
    pub fn SetTransformOriginPoint(self: QGraphicsVideoItem, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn SetTransformOriginPoint2(self: QGraphicsVideoItem, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.ptr), @bitCast(ax), @bitCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ZValue(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` z: f64 `
    ///
    pub fn SetZValue(self: QGraphicsVideoItem, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.ptr), @bitCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn StackBefore(self: QGraphicsVideoItem, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.ptr), @ptrCast(sibling.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ChildrenBoundingRect(self: QGraphicsVideoItem) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SceneBoundingRect(self: QGraphicsVideoItem) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsClipped(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn ClipPath(self: QGraphicsVideoItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems(self: QGraphicsVideoItem, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsvideoitem.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsObscured(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn IsObscured2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn BoundingRegion(self: QGraphicsVideoItem, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn BoundingRegionGranularity(self: QGraphicsVideoItem) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` granularity: f64 `
    ///
    pub fn SetBoundingRegionGranularity(self: QGraphicsVideoItem, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.ptr), @bitCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Update(self: QGraphicsVideoItem) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Update2(self: QGraphicsVideoItem, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Scroll(self: QGraphicsVideoItem, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToItem(self: QGraphicsVideoItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToParent(self: QGraphicsVideoItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapToScene(self: QGraphicsVideoItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToItem(self: QGraphicsVideoItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToParent(self: QGraphicsVideoItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectToScene(self: QGraphicsVideoItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToItem4(self: QGraphicsVideoItem, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToParent4(self: QGraphicsVideoItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapToScene4(self: QGraphicsVideoItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromItem(self: QGraphicsVideoItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromParent(self: QGraphicsVideoItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn MapFromScene(self: QGraphicsVideoItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromItem(self: QGraphicsVideoItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromParent(self: QGraphicsVideoItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn MapRectFromScene(self: QGraphicsVideoItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromItem4(self: QGraphicsVideoItem, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromParent4(self: QGraphicsVideoItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn MapFromScene4(self: QGraphicsVideoItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToItem5(self: QGraphicsVideoItem, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToParent5(self: QGraphicsVideoItem, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToScene5(self: QGraphicsVideoItem, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToItem2(self: QGraphicsVideoItem, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToParent2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToScene2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromItem5(self: QGraphicsVideoItem, item: anytype, x: f64, y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromParent5(self: QGraphicsVideoItem, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: QGraphicsVideoItem, x: f64, y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromItem2(self: QGraphicsVideoItem, item: anytype, x: f64, y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromParent2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromScene2(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn IsAncestorOf(self: QGraphicsVideoItem, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn CommonAncestorItem(self: QGraphicsVideoItem, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn IsUnderMouse(self: QGraphicsVideoItem) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` key: i32 `
    ///
    pub fn Data(self: QGraphicsVideoItem, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetData(self: QGraphicsVideoItem, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QGraphicsVideoItem, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn InstallSceneEventFilter(self: QGraphicsVideoItem, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn RemoveSceneEventFilter(self: QGraphicsVideoItem, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: QGraphicsVideoItem, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn SetCacheMode2(self: QGraphicsVideoItem, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn IsBlockedByModalPanel1(self: QGraphicsVideoItem, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.ptr), @ptrCast(blockingPanel));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: QGraphicsVideoItem, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn EnsureVisible1(self: QGraphicsVideoItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: QGraphicsVideoItem, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible3(self: QGraphicsVideoItem, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible5(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible6(self: QGraphicsVideoItem, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn ItemTransform2(self: QGraphicsVideoItem, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.ptr), @ptrCast(other.ptr), @ptrCast(ok)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: QGraphicsVideoItem, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidingItems1(self: QGraphicsVideoItem, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsvideoitem.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn IsObscured1(self: QGraphicsVideoItem, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Update1(self: QGraphicsVideoItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Scroll3(self: QGraphicsVideoItem, dx: f64, dy: f64, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` ev: QEvent `
    ///
    pub fn Event(self: QGraphicsVideoItem, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.QGraphicsVideoItem_Event(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` ev: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsVideoItem, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.QGraphicsVideoItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, ev: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsVideoItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsVideoItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsVideoItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsVideoItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsVideoItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsVideoItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGraphicsVideoItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsVideoItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGraphicsVideoItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsVideoItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGraphicsVideoItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsVideoItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGraphicsVideoItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsVideoItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn Advance(self: QGraphicsVideoItem, phase: i32) void {
        qtc.QGraphicsVideoItem_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `SuperAdvance` instead
    ///
    pub const QBaseAdvance = SuperAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn SuperAdvance(self: QGraphicsVideoItem, phase: i32) void {
        qtc.QGraphicsVideoItem_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, phase: i32) callconv(.c) void `
    ///
    pub fn OnAdvance(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Shape(self: QGraphicsVideoItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsVideoItem_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperShape` instead
    ///
    pub const QBaseShape = SuperShape;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperShape(self: QGraphicsVideoItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperShape(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnShape(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsVideoItem_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn Contains(self: QGraphicsVideoItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsVideoItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `SuperContains` instead
    ///
    pub const QBaseContains = SuperContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn SuperContains(self: QGraphicsVideoItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsVideoItem_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, point: QPointF) callconv(.c) bool `
    ///
    pub fn OnContains(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QPointF) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithItem(self: QGraphicsVideoItem, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QGraphicsVideoItem_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithItem` instead
    ///
    pub const QBaseCollidesWithItem = SuperCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithItem(self: QGraphicsVideoItem, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QGraphicsVideoItem_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, other: QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithItem(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithPath(self: QGraphicsVideoItem, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsVideoItem_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperCollidesWithPath` instead
    ///
    pub const QBaseCollidesWithPath = SuperCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithPath(self: QGraphicsVideoItem, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsVideoItem_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, path: QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithPath(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn IsObscuredBy(self: QGraphicsVideoItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QGraphicsVideoItem_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsObscuredBy` instead
    ///
    pub const QBaseIsObscuredBy = SuperIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SuperIsObscuredBy(self: QGraphicsVideoItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QGraphicsVideoItem_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, item: QGraphicsItem) callconv(.c) bool `
    ///
    pub fn OnIsObscuredBy(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsItem) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn OpaqueArea(self: QGraphicsVideoItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsVideoItem_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperOpaqueArea` instead
    ///
    pub const QBaseOpaqueArea = SuperOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperOpaqueArea(self: QGraphicsVideoItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    pub fn OnOpaqueArea(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsVideoItem_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEventFilter(self: QGraphicsVideoItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSceneEventFilter` instead
    ///
    pub const QBaseSceneEventFilter = SuperSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEventFilter(self: QGraphicsVideoItem, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, watched: QGraphicsItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEventFilter(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SceneEvent(self: QGraphicsVideoItem, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_SceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSceneEvent` instead
    ///
    pub const QBaseSceneEvent = SuperSceneEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperSceneEvent(self: QGraphicsVideoItem, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsVideoItem_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsVideoItem_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsVideoItem_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsVideoItem_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsVideoItem_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsVideoItem_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsVideoItem_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsVideoItem_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverEnterEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverEnterEvent` instead
    ///
    pub const QBaseHoverEnterEvent = SuperHoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverEnterEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverEnterEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverMoveEvent` instead
    ///
    pub const QBaseHoverMoveEvent = SuperHoverMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverMoveEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn HoverLeaveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHoverLeaveEvent` instead
    ///
    pub const QBaseHoverLeaveEvent = SuperHoverLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverLeaveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsVideoItem_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverLeaveEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsVideoItem_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsVideoItem_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsVideoItem_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsVideoItem_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsVideoItem_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsVideoItem_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsVideoItem_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsVideoItem_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QGraphicsVideoItem, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsVideoItem_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QGraphicsVideoItem, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsVideoItem_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QGraphicsVideoItem, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsVideoItem_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SupportsExtension(self: QGraphicsVideoItem, extension: i32) bool {
        return qtc.QGraphicsVideoItem_SupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
    }

    /// ### DEPRECATED: Use `SuperSupportsExtension` instead
    ///
    pub const QBaseSupportsExtension = SuperSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SuperSupportsExtension(self: QGraphicsVideoItem, extension: i32) bool {
        return qtc.QGraphicsVideoItem_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn OnSupportsExtension(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SetExtension(self: QGraphicsVideoItem, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsVideoItem_SetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetExtension` instead
    ///
    pub const QBaseSetExtension = SuperSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperSetExtension(self: QGraphicsVideoItem, extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsVideoItem_SuperSetExtension(@ptrCast(self.ptr), @bitCast(extension), @ptrCast(variant.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, extension: qgraphicsitem_enums.Extension, variant: QVariant) callconv(.c) void `
    ///
    pub fn OnSetExtension(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, i32, QVariant) callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn Extension(self: QGraphicsVideoItem, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsVideoItem_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperExtension` instead
    ///
    pub const QBaseExtension = SuperExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn SuperExtension(self: QGraphicsVideoItem, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, variant: QVariant) callconv(.c) QVariant `
    ///
    pub fn OnExtension(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsVideoItem_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn UpdateMicroFocus(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperUpdateMicroFocus(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Sender(self: QGraphicsVideoItem) QObject {
        return .{ .ptr = qtc.QGraphicsVideoItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperSender(self: QGraphicsVideoItem) QObject {
        return .{ .ptr = qtc.QGraphicsVideoItem_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsVideoItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SenderSignalIndex(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsVideoItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperSenderSignalIndex(self: QGraphicsVideoItem) i32 {
        return qtc.QGraphicsVideoItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsVideoItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGraphicsVideoItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsVideoItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGraphicsVideoItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsVideoItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsVideoItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGraphicsVideoItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsVideoItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGraphicsVideoItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsVideoItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsVideoItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn AddToIndex(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_AddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddToIndex` instead
    ///
    pub const QBaseAddToIndex = SuperAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperAddToIndex(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddToIndex(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn RemoveFromIndex(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_RemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveFromIndex` instead
    ///
    pub const QBaseRemoveFromIndex = SuperRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperRemoveFromIndex(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveFromIndex(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn PrepareGeometryChange(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_PrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPrepareGeometryChange` instead
    ///
    pub const QBasePrepareGeometryChange = SuperPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn SuperPrepareGeometryChange(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareGeometryChange(self: QGraphicsVideoItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsVideoItem_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    /// ` callback: *const fn (self: QGraphicsVideoItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGraphicsVideoItem, callback: *const fn (QGraphicsVideoItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#dtor.QGraphicsVideoItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsVideoItem `
    ///
    pub fn Delete(self: QGraphicsVideoItem) void {
        qtc.QGraphicsVideoItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#public-types)
pub const enums = struct {
    pub const QGraphicsVideoItem = enum(i32) {
        pub const Type: i32 = 14;
    };
};
