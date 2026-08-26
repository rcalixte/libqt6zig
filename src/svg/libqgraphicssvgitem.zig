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
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QSvgRenderer = @import("libqt6").QSvgRenderer;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html)
pub const QGraphicsSvgItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSvgItem,

    pub const _is_QGraphicsSvgItem = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSvgItem object in C++ memory
    ///
    pub fn new() QGraphicsSvgItem {
        return .{ .ptr = qtc.QGraphicsSvgItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSvgItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn new2(fileName: []const u8) QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QGraphicsSvgItem_new2(fileName_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGraphicsSvgItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parentItem: QGraphicsItem `
    ///
    pub fn new3(_parentItem: anytype) QGraphicsSvgItem {
        comptime _ = @TypeOf(_parentItem)._is_QGraphicsItem;
        const _parentItem_ = if (@hasDecl(@TypeOf(_parentItem), "asQGraphicsItem")) _parentItem.asQGraphicsItem() else _parentItem;

        return .{ .ptr = qtc.QGraphicsSvgItem_new3(@ptrCast(_parentItem_.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGraphicsSvgItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _parentItem: QGraphicsItem `
    ///
    pub fn new4(fileName: []const u8, _parentItem: anytype) QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(_parentItem)._is_QGraphicsItem;
        const _parentItem_ = if (@hasDecl(@TypeOf(_parentItem), "asQGraphicsItem")) _parentItem.asQGraphicsItem() else _parentItem;

        return .{ .ptr = qtc.QGraphicsSvgItem_new4(fileName_str, @ptrCast(_parentItem_.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn metaObject(self: QGraphicsSvgItem) QMetaObject {
        return .{ .ptr = qtc.QGraphicsSvgItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsSvgItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superMetaObject(self: QGraphicsSvgItem) QMetaObject {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsSvgItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsSvgItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsSvgItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsSvgItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsSvgItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsSvgItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsSvgItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSharedRenderer` instead
    ///
    pub const SetSharedRenderer = setSharedRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _renderer: QSvgRenderer `
    ///
    pub fn setSharedRenderer(self: QGraphicsSvgItem, _renderer: anytype) void {
        comptime _ = @TypeOf(_renderer)._is_QSvgRenderer;
        qtc.QGraphicsSvgItem_SetSharedRenderer(@ptrCast(self.ptr), @ptrCast(_renderer.ptr));
    }

    /// ### DEPRECATED: Use `renderer` instead
    ///
    pub const Renderer = renderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn renderer(self: QGraphicsSvgItem) QSvgRenderer {
        return .{ .ptr = qtc.QGraphicsSvgItem_Renderer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setElementId` instead
    ///
    pub const SetElementId = setElementId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setElementId(self: QGraphicsSvgItem, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGraphicsSvgItem_SetElementId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `elementId` instead
    ///
    pub const ElementId = elementId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn elementId(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsSvgItem_ElementId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.elementId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCachingEnabled` instead
    ///
    pub const SetCachingEnabled = setCachingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` cachingEnabled: bool `
    ///
    pub fn setCachingEnabled(self: QGraphicsSvgItem, cachingEnabled: bool) void {
        qtc.QGraphicsSvgItem_SetCachingEnabled(@ptrCast(self.ptr), cachingEnabled);
    }

    /// ### DEPRECATED: Use `isCachingEnabled` instead
    ///
    pub const IsCachingEnabled = isCachingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isCachingEnabled(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsSvgItem_IsCachingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumCacheSize` instead
    ///
    pub const SetMaximumCacheSize = setMaximumCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` size: QSize `
    ///
    pub fn setMaximumCacheSize(self: QGraphicsSvgItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QGraphicsSvgItem_SetMaximumCacheSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `maximumCacheSize` instead
    ///
    pub const MaximumCacheSize = maximumCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn maximumCacheSize(self: QGraphicsSvgItem) QSize {
        return .{ .ptr = qtc.QGraphicsSvgItem_MaximumCacheSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn boundingRect(self: QGraphicsSvgItem) QRectF {
        return .{ .ptr = qtc.QGraphicsSvgItem_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRect` instead
    ///
    pub const OnBoundingRect = onBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsSvgItem_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBoundingRect` instead
    ///
    pub const SuperBoundingRect = superBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superBoundingRect(self: QGraphicsSvgItem) QRectF {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn paint(self: QGraphicsSvgItem, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSvgItem_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn onPaint(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superPaint(self: QGraphicsSvgItem, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSvgItem_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn type0(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsSvgItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superType(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsSvgItem_SuperType(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsObject
    ///
    /// Upcasts to a QGraphicsItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn asQGraphicsItem(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsObject_AsQGraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsObject
    ///
    /// Downcasts to a QGraphicsSvgItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qgraphicsitem: QGraphicsItem `
    ///
    pub fn fromQGraphicsItem(_qgraphicsitem: anytype) QGraphicsSvgItem {
        comptime _ = @TypeOf(_qgraphicsitem)._is_QGraphicsItem;
        return .{ .ptr = @ptrCast(qtc.QGraphicsObject_FromQGraphicsItem(@ptrCast(_qgraphicsitem.ptr))) };
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QGraphicsSvgItem, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QGraphicsSvgItem, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn parentChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn opacityChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn visibleChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn enabledChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn xChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onXChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn yChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onYChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn zChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onZChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn rotationChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn scaleChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn childrenChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn widthChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn heightChanged(self: QGraphicsSvgItem) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QGraphicsSvgItem, typeVal: i32, _flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(_flags));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsSvgItem, name: []const u8) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isWidgetType(self: QGraphicsSvgItem) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isWindowType(self: QGraphicsSvgItem) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isQuickItemType(self: QGraphicsSvgItem) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn signalsBlocked(self: QGraphicsSvgItem) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsSvgItem, b: bool) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn thread(self: QGraphicsSvgItem) QThread {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsSvgItem, _thread: anytype) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsSvgItem, interval: i32) i32 {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsSvgItem, time: i64) i32 {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsSvgItem, id: i32) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsSvgItem, id: i32) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsSvgItem.children: Memory allocation failed");
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsSvgItem, _parent: anytype) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsSvgItem, filterObj: anytype) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsSvgItem, obj: anytype) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsSvgItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn disconnect3(self: QGraphicsSvgItem) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsSvgItem, receiver: anytype) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn dumpObjectTree(self: QGraphicsSvgItem) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn dumpObjectInfo(self: QGraphicsSvgItem) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsSvgItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsSvgItem, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsSvgItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsSvgItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsSvgItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn bindingStorage(self: QGraphicsSvgItem) QBindingStorage {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn bindingStorage2(self: QGraphicsSvgItem) QBindingStorage {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn destroyed(self: QGraphicsSvgItem) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem) callconv(.c) void) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn parent(self: QGraphicsSvgItem) QObject {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsSvgItem, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn deleteLater(self: QGraphicsSvgItem) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsSvgItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsSvgItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsSvgItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsSvgItem, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsSvgItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsSvgItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsSvgItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsSvgItem, param1: anytype) void {
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn scene(self: QGraphicsSvgItem) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn parentItem(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelItem` instead
    ///
    pub const TopLevelItem = topLevelItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn topLevelItem(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentObject` instead
    ///
    pub const ParentObject = parentObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn parentObject(self: QGraphicsSvgItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn parentWidget(self: QGraphicsSvgItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn topLevelWidget(self: QGraphicsSvgItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn window(self: QGraphicsSvgItem) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `panel` instead
    ///
    pub const Panel = panel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn panel(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn setParentItem(self: QGraphicsSvgItem, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_parent_.ptr));
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsSvgItem.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isWidget` instead
    ///
    pub const IsWidget = isWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isWidget(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isWindow(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isPanel` instead
    ///
    pub const IsPanel = isPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isPanel(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `toGraphicsObject` instead
    ///
    pub const ToGraphicsObject = toGraphicsObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn toGraphicsObject(self: QGraphicsSvgItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `toGraphicsObject2` instead
    ///
    pub const ToGraphicsObject2 = toGraphicsObject2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn toGraphicsObject2(self: QGraphicsSvgItem) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn group(self: QGraphicsSvgItem) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _group: QGraphicsItemGroup `
    ///
    pub fn setGroup(self: QGraphicsSvgItem, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn flags(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlag(self: QGraphicsSvgItem, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlags(self: QGraphicsSvgItem, _flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `cacheMode` instead
    ///
    pub const CacheMode = cacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn cacheMode(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setCacheMode` instead
    ///
    pub const SetCacheMode = setCacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn setCacheMode(self: QGraphicsSvgItem, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `panelModality` instead
    ///
    pub const PanelModality = panelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn panelModality(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setPanelModality` instead
    ///
    pub const SetPanelModality = setPanelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn setPanelModality(self: QGraphicsSvgItem, _panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_panelModality));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel` instead
    ///
    pub const IsBlockedByModalPanel = isBlockedByModalPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isBlockedByModalPanel(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsSvgItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QGraphicsSvgItem, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.asQGraphicsItem().ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn cursor(self: QGraphicsSvgItem) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QGraphicsSvgItem, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `hasCursor` instead
    ///
    pub const HasCursor = hasCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn hasCursor(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn unsetCursor(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isVisible(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn isVisibleTo(self: QGraphicsSvgItem, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_parent_.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QGraphicsSvgItem, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.asQGraphicsItem().ptr), visible);
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn hide(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn show(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isEnabled(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QGraphicsSvgItem, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isSelected(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` selected: bool `
    ///
    pub fn setSelected(self: QGraphicsSvgItem, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.asQGraphicsItem().ptr), selected);
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn acceptDrops(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QGraphicsSvgItem, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.asQGraphicsItem().ptr), on);
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn opacity(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `effectiveOpacity` instead
    ///
    pub const EffectiveOpacity = effectiveOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn effectiveOpacity(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QGraphicsSvgItem, _opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn graphicsEffect(self: QGraphicsSvgItem) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QGraphicsSvgItem, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QGraphicsSvgItem, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn acceptHoverEvents(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QGraphicsSvgItem, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn acceptTouchEvents(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptTouchEvents(self: QGraphicsSvgItem, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `filtersChildEvents` instead
    ///
    pub const FiltersChildEvents = filtersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn filtersChildEvents(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildEvents` instead
    ///
    pub const SetFiltersChildEvents = setFiltersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFiltersChildEvents(self: QGraphicsSvgItem, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `handlesChildEvents` instead
    ///
    pub const HandlesChildEvents = handlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn handlesChildEvents(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setHandlesChildEvents` instead
    ///
    pub const SetHandlesChildEvents = setHandlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHandlesChildEvents(self: QGraphicsSvgItem, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isActive(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` active: bool `
    ///
    pub fn setActive(self: QGraphicsSvgItem, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.asQGraphicsItem().ptr), active);
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn hasFocus(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn setFocus(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn clearFocus(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn focusProxy(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setFocusProxy(self: QGraphicsSvgItem, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `focusItem` instead
    ///
    pub const FocusItem = focusItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn focusItem(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `focusScopeItem` instead
    ///
    pub const FocusScopeItem = focusScopeItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn focusScopeItem(self: QGraphicsSvgItem) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn grabMouse(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn ungrabMouse(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn grabKeyboard(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ungrabKeyboard` instead
    ///
    pub const UngrabKeyboard = ungrabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn ungrabKeyboard(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn pos(self: QGraphicsSvgItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn x(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QGraphicsSvgItem, _x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn y(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QGraphicsSvgItem, _y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn scenePos(self: QGraphicsSvgItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSvgItem, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `setPos2` instead
    ///
    pub const SetPos2 = setPos2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn setPos2(self: QGraphicsSvgItem, _x: f64, _y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `moveBy` instead
    ///
    pub const MoveBy = moveBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn moveBy(self: QGraphicsSvgItem, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `ensureVisible` instead
    ///
    pub const EnsureVisible = ensureVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn ensureVisible(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible2` instead
    ///
    pub const EnsureVisible2 = ensureVisible2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn ensureVisible2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn transform(self: QGraphicsSvgItem) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `sceneTransform` instead
    ///
    pub const SceneTransform = sceneTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn sceneTransform(self: QGraphicsSvgItem) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn deviceTransform(self: QGraphicsSvgItem, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn itemTransform(self: QGraphicsSvgItem, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn setTransform(self: QGraphicsSvgItem, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn resetTransform(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` angle: f64 `
    ///
    pub fn setRotation(self: QGraphicsSvgItem, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn rotation(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QGraphicsSvgItem, _scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn scale(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `transformations` instead
    ///
    pub const Transformations = transformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn transformations(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("QGraphicsSvgItem.transformations: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTransformations` instead
    ///
    pub const SetTransformations = setTransformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _transformations: []QGraphicsTransform `
    ///
    pub fn setTransformations(self: QGraphicsSvgItem, _transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = _transformations.len,
            .data = @ptrCast(_transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.asQGraphicsItem().ptr), transformations_list);
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn transformOriginPoint(self: QGraphicsSvgItem) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` origin: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QGraphicsSvgItem, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(origin.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint2` instead
    ///
    pub const SetTransformOriginPoint2 = setTransformOriginPoint2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn setTransformOriginPoint2(self: QGraphicsSvgItem, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(ax), @bitCast(ay));
    }

    /// ### DEPRECATED: Use `zValue` instead
    ///
    pub const ZValue = zValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn zValue(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setZValue` instead
    ///
    pub const SetZValue = setZValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` z: f64 `
    ///
    pub fn setZValue(self: QGraphicsSvgItem, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn stackBefore(self: QGraphicsSvgItem, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        const sibling_ = if (@hasDecl(@TypeOf(sibling), "asQGraphicsItem")) sibling.asQGraphicsItem() else sibling;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(sibling_.ptr));
    }

    /// ### DEPRECATED: Use `childrenBoundingRect` instead
    ///
    pub const ChildrenBoundingRect = childrenBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn childrenBoundingRect(self: QGraphicsSvgItem) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `sceneBoundingRect` instead
    ///
    pub const SceneBoundingRect = sceneBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn sceneBoundingRect(self: QGraphicsSvgItem) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `isClipped` instead
    ///
    pub const IsClipped = isClipped;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isClipped(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn clipPath(self: QGraphicsSvgItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `collidingItems` instead
    ///
    pub const CollidingItems = collidingItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn collidingItems(self: QGraphicsSvgItem, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsSvgItem.collidingItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured` instead
    ///
    pub const IsObscured = isObscured;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isObscured(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isObscured2` instead
    ///
    pub const IsObscured2 = isObscured2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn isObscured2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `boundingRegion` instead
    ///
    pub const BoundingRegion = boundingRegion;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn boundingRegion(self: QGraphicsSvgItem, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRegionGranularity` instead
    ///
    pub const BoundingRegionGranularity = boundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn boundingRegionGranularity(self: QGraphicsSvgItem) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setBoundingRegionGranularity` instead
    ///
    pub const SetBoundingRegionGranularity = setBoundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` granularity: f64 `
    ///
    pub fn setBoundingRegionGranularity(self: QGraphicsSvgItem, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(granularity));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn update(self: QGraphicsSvgItem) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn update2(self: QGraphicsSvgItem, _x: f64, _y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn scroll(self: QGraphicsSvgItem, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `mapToItem` instead
    ///
    pub const MapToItem = mapToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem(self: QGraphicsSvgItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToParent(self: QGraphicsSvgItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QGraphicsSvgItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToItem(self: QGraphicsSvgItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent` instead
    ///
    pub const MapRectToParent = mapRectToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToParent(self: QGraphicsSvgItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToScene(self: QGraphicsSvgItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToItem4(self: QGraphicsSvgItem, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent4` instead
    ///
    pub const MapToParent4 = mapToParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToParent4(self: QGraphicsSvgItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene4` instead
    ///
    pub const MapToScene4 = mapToScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToScene4(self: QGraphicsSvgItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem` instead
    ///
    pub const MapFromItem = mapFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem(self: QGraphicsSvgItem, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromParent(self: QGraphicsSvgItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QGraphicsSvgItem, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QGraphicsSvgItem, item: anytype, rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent` instead
    ///
    pub const MapRectFromParent = mapRectFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromParent(self: QGraphicsSvgItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QGraphicsSvgItem, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromItem4(self: QGraphicsSvgItem, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent4` instead
    ///
    pub const MapFromParent4 = mapFromParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromParent4(self: QGraphicsSvgItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene4` instead
    ///
    pub const MapFromScene4 = mapFromScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromScene4(self: QGraphicsSvgItem, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem5(self: QGraphicsSvgItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToParent5` instead
    ///
    pub const MapToParent5 = mapToParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToParent5(self: QGraphicsSvgItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToScene5` instead
    ///
    pub const MapToScene5 = mapToScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToScene5(self: QGraphicsSvgItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem2` instead
    ///
    pub const MapRectToItem2 = mapRectToItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToItem2(self: QGraphicsSvgItem, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent2` instead
    ///
    pub const MapRectToParent2 = mapRectToParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToParent2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene2` instead
    ///
    pub const MapRectToScene2 = mapRectToScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToScene2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem5(self: QGraphicsSvgItem, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromParent5` instead
    ///
    pub const MapFromParent5 = mapFromParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromParent5(self: QGraphicsSvgItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromScene5` instead
    ///
    pub const MapFromScene5 = mapFromScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromScene5(self: QGraphicsSvgItem, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem2` instead
    ///
    pub const MapRectFromItem2 = mapRectFromItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromItem2(self: QGraphicsSvgItem, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent2` instead
    ///
    pub const MapRectFromParent2 = mapRectFromParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromParent2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene2` instead
    ///
    pub const MapRectFromScene2 = mapRectFromScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromScene2(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn isAncestorOf(self: QGraphicsSvgItem, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        const child_ = if (@hasDecl(@TypeOf(child), "asQGraphicsItem")) child.asQGraphicsItem() else child;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(child_.ptr));
    }

    /// ### DEPRECATED: Use `commonAncestorItem` instead
    ///
    pub const CommonAncestorItem = commonAncestorItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn commonAncestorItem(self: QGraphicsSvgItem, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr)) };
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn isUnderMouse(self: QGraphicsSvgItem) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` key: i32 `
    ///
    pub fn data(self: QGraphicsSvgItem, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setData(self: QGraphicsSvgItem, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QGraphicsSvgItem, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `installSceneEventFilter` instead
    ///
    pub const InstallSceneEventFilter = installSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn installSceneEventFilter(self: QGraphicsSvgItem, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        const filterItem_ = if (@hasDecl(@TypeOf(filterItem), "asQGraphicsItem")) filterItem.asQGraphicsItem() else filterItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(filterItem_.ptr));
    }

    /// ### DEPRECATED: Use `removeSceneEventFilter` instead
    ///
    pub const RemoveSceneEventFilter = removeSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn removeSceneEventFilter(self: QGraphicsSvgItem, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        const filterItem_ = if (@hasDecl(@TypeOf(filterItem), "asQGraphicsItem")) filterItem.asQGraphicsItem() else filterItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(filterItem_.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QGraphicsSvgItem, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `setCacheMode2` instead
    ///
    pub const SetCacheMode2 = setCacheMode2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn setCacheMode2(self: QGraphicsSvgItem, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel1` instead
    ///
    pub const IsBlockedByModalPanel1 = isBlockedByModalPanel1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn isBlockedByModalPanel1(self: QGraphicsSvgItem, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(blockingPanel));
    }

    /// ### DEPRECATED: Use `setFocus1` instead
    ///
    pub const SetFocus1 = setFocus1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus1(self: QGraphicsSvgItem, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `ensureVisible1` instead
    ///
    pub const EnsureVisible1 = ensureVisible1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn ensureVisible1(self: QGraphicsSvgItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible22` instead
    ///
    pub const EnsureVisible22 = ensureVisible22;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible22(self: QGraphicsSvgItem, rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible3` instead
    ///
    pub const EnsureVisible3 = ensureVisible3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible3(self: QGraphicsSvgItem, rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `ensureVisible5` instead
    ///
    pub const EnsureVisible5 = ensureVisible5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible5(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible6` instead
    ///
    pub const EnsureVisible6 = ensureVisible6;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible6(self: QGraphicsSvgItem, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `itemTransform2` instead
    ///
    pub const ItemTransform2 = itemTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn itemTransform2(self: QGraphicsSvgItem, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr), @ptrCast(ok)) };
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn setTransform2(self: QGraphicsSvgItem, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `collidingItems1` instead
    ///
    pub const CollidingItems1 = collidingItems1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidingItems1(self: QGraphicsSvgItem, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsSvgItem.collidingItems1: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured1` instead
    ///
    pub const IsObscured1 = isObscured1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn isObscured1(self: QGraphicsSvgItem, rect: anytype) bool {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn update1(self: QGraphicsSvgItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `scroll3` instead
    ///
    pub const Scroll3 = scroll3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QRectF `
    ///
    pub fn scroll3(self: QGraphicsSvgItem, dx: f64, dy: f64, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` ev: QEvent `
    ///
    pub fn event(self: QGraphicsSvgItem, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.QGraphicsSvgItem_Event(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` ev: QEvent `
    ///
    pub fn superEvent(self: QGraphicsSvgItem, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.QGraphicsSvgItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, ev: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsSvgItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsSvgItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsSvgItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsSvgItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsSvgItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsSvgItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsSvgItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsSvgItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsSvgItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsSvgItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsSvgItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsSvgItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsSvgItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsSvgItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsSvgItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsSvgItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `advance` instead
    ///
    pub const Advance = advance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn advance(self: QGraphicsSvgItem, phase: i32) void {
        qtc.QGraphicsSvgItem_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `superAdvance` instead
    ///
    pub const SuperAdvance = superAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn superAdvance(self: QGraphicsSvgItem, phase: i32) void {
        qtc.QGraphicsSvgItem_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `onAdvance` instead
    ///
    pub const OnAdvance = onAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, phase: i32) callconv(.c) void `
    ///
    pub fn onAdvance(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn shape(self: QGraphicsSvgItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsSvgItem_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superShape` instead
    ///
    pub const SuperShape = superShape;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superShape(self: QGraphicsSvgItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperShape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onShape` instead
    ///
    pub const OnShape = onShape;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onShape(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsSvgItem_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QGraphicsSvgItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsSvgItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `superContains` instead
    ///
    pub const SuperContains = superContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QGraphicsSvgItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsSvgItem_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QPointF) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithItem` instead
    ///
    pub const CollidesWithItem = collidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithItem(self: QGraphicsSvgItem, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return qtc.QGraphicsSvgItem_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other_.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithItem` instead
    ///
    pub const SuperCollidesWithItem = superCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn superCollidesWithItem(self: QGraphicsSvgItem, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return qtc.QGraphicsSvgItem_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other_.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithItem` instead
    ///
    pub const OnCollidesWithItem = onCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, other: QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn onCollidesWithItem(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithPath` instead
    ///
    pub const CollidesWithPath = collidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithPath(self: QGraphicsSvgItem, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsSvgItem_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithPath` instead
    ///
    pub const SuperCollidesWithPath = superCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn superCollidesWithPath(self: QGraphicsSvgItem, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsSvgItem_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithPath` instead
    ///
    pub const OnCollidesWithPath = onCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, path: QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn onCollidesWithPath(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isObscuredBy` instead
    ///
    pub const IsObscuredBy = isObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn isObscuredBy(self: QGraphicsSvgItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return qtc.QGraphicsSvgItem_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `superIsObscuredBy` instead
    ///
    pub const SuperIsObscuredBy = superIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superIsObscuredBy(self: QGraphicsSvgItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return qtc.QGraphicsSvgItem_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `onIsObscuredBy` instead
    ///
    pub const OnIsObscuredBy = onIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, item: QGraphicsItem) callconv(.c) bool `
    ///
    pub fn onIsObscuredBy(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsItem) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opaqueArea` instead
    ///
    pub const OpaqueArea = opaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn opaqueArea(self: QGraphicsSvgItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsSvgItem_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superOpaqueArea` instead
    ///
    pub const SuperOpaqueArea = superOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superOpaqueArea(self: QGraphicsSvgItem) QPainterPath {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOpaqueArea` instead
    ///
    pub const OnOpaqueArea = onOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpaqueArea(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsSvgItem_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEventFilter` instead
    ///
    pub const SceneEventFilter = sceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sceneEventFilter(self: QGraphicsSvgItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        const watched_ = if (@hasDecl(@TypeOf(watched), "asQGraphicsItem")) watched.asQGraphicsItem() else watched;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched_.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEventFilter` instead
    ///
    pub const SuperSceneEventFilter = superSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superSceneEventFilter(self: QGraphicsSvgItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        const watched_ = if (@hasDecl(@TypeOf(watched), "asQGraphicsItem")) watched.asQGraphicsItem() else watched;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched_.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEventFilter` instead
    ///
    pub const OnSceneEventFilter = onSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, watched: QGraphicsItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn onSceneEventFilter(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEvent` instead
    ///
    pub const SceneEvent = sceneEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sceneEvent(self: QGraphicsSvgItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_SceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEvent` instead
    ///
    pub const SuperSceneEvent = superSceneEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superSceneEvent(self: QGraphicsSvgItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsSvgItem_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEvent` instead
    ///
    pub const OnSceneEvent = onSceneEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn onSceneEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsSvgItem_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsSvgItem_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragEnterEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragEnterEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragLeaveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragLeaveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dropEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDropEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsSvgItem_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsSvgItem_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsSvgItem_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsSvgItem_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsSvgItem_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverEnterEvent` instead
    ///
    pub const HoverEnterEvent = hoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverEnterEvent` instead
    ///
    pub const SuperHoverEnterEvent = superHoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverEnterEvent` instead
    ///
    pub const OnHoverEnterEvent = onHoverEnterEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverMoveEvent` instead
    ///
    pub const HoverMoveEvent = hoverMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverMoveEvent` instead
    ///
    pub const SuperHoverMoveEvent = superHoverMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverMoveEvent` instead
    ///
    pub const OnHoverMoveEvent = onHoverMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hoverLeaveEvent` instead
    ///
    pub const HoverLeaveEvent = hoverLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHoverLeaveEvent` instead
    ///
    pub const SuperHoverLeaveEvent = superHoverLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsSvgItem_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverLeaveEvent` instead
    ///
    pub const OnHoverLeaveEvent = onHoverLeaveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsSvgItem_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsSvgItem_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsSvgItem_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsSvgItem_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mousePressEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMousePressEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsSvgItem_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn wheelEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsSvgItem_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn superWheelEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsSvgItem_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsSvgItem_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QGraphicsSvgItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsSvgItem_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QGraphicsSvgItem, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsSvgItem_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QGraphicsSvgItem, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsSvgItem_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn itemChange(self: QGraphicsSvgItem, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsSvgItem_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn superItemChange(self: QGraphicsSvgItem, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemChange(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsSvgItem_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportsExtension` instead
    ///
    pub const SupportsExtension = supportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn supportsExtension(self: QGraphicsSvgItem, _extension: i32) bool {
        return qtc.QGraphicsSvgItem_SupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `superSupportsExtension` instead
    ///
    pub const SuperSupportsExtension = superSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn superSupportsExtension(self: QGraphicsSvgItem, _extension: i32) bool {
        return qtc.QGraphicsSvgItem_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `onSupportsExtension` instead
    ///
    pub const OnSupportsExtension = onSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn onSupportsExtension(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setExtension` instead
    ///
    pub const SetExtension = setExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn setExtension(self: QGraphicsSvgItem, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsSvgItem_SetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `superSetExtension` instead
    ///
    pub const SuperSetExtension = superSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn superSetExtension(self: QGraphicsSvgItem, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsSvgItem_SuperSetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `onSetExtension` instead
    ///
    pub const OnSetExtension = onSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension, variant: QVariant) callconv(.c) void `
    ///
    pub fn onSetExtension(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, i32, QVariant) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `extension` instead
    ///
    pub const Extension = extension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn extension(self: QGraphicsSvgItem, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsSvgItem_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `superExtension` instead
    ///
    pub const SuperExtension = superExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` variant: QVariant `
    ///
    pub fn superExtension(self: QGraphicsSvgItem, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `onExtension` instead
    ///
    pub const OnExtension = onExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, variant: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onExtension(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsSvgItem_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn updateMicroFocus(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superUpdateMicroFocus(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn sender(self: QGraphicsSvgItem) QObject {
        return .{ .ptr = qtc.QGraphicsSvgItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superSender(self: QGraphicsSvgItem) QObject {
        return .{ .ptr = qtc.QGraphicsSvgItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsSvgItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn senderSignalIndex(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsSvgItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsSvgItem) i32 {
        return qtc.QGraphicsSvgItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsSvgItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsSvgItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsSvgItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsSvgItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsSvgItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsSvgItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addToIndex` instead
    ///
    pub const AddToIndex = addToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn addToIndex(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_AddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAddToIndex` instead
    ///
    pub const SuperAddToIndex = superAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superAddToIndex(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAddToIndex` instead
    ///
    pub const OnAddToIndex = onAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAddToIndex(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeFromIndex` instead
    ///
    pub const RemoveFromIndex = removeFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn removeFromIndex(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_RemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveFromIndex` instead
    ///
    pub const SuperRemoveFromIndex = superRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superRemoveFromIndex(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveFromIndex` instead
    ///
    pub const OnRemoveFromIndex = onRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRemoveFromIndex(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `prepareGeometryChange` instead
    ///
    pub const PrepareGeometryChange = prepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn prepareGeometryChange(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_PrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPrepareGeometryChange` instead
    ///
    pub const SuperPrepareGeometryChange = superPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn superPrepareGeometryChange(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrepareGeometryChange` instead
    ///
    pub const OnPrepareGeometryChange = onPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPrepareGeometryChange(self: QGraphicsSvgItem, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QGraphicsSvgItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsSvgItem, callback: *const fn (QGraphicsSvgItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#dtor.QGraphicsSvgItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSvgItem `
    ///
    pub fn delete(self: QGraphicsSvgItem) void {
        qtc.QGraphicsSvgItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#public-types)
pub const enums = struct {
    pub const QGraphicsSvgItem = enum {
        pub const Type: i32 = 13;
    };
};
