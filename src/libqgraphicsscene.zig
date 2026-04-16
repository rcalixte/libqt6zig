const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QGraphicsEllipseItem = @import("libqt6").QGraphicsEllipseItem;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsItemGroup = @import("libqt6").QGraphicsItemGroup;
const QGraphicsLineItem = @import("libqt6").QGraphicsLineItem;
const QGraphicsPathItem = @import("libqt6").QGraphicsPathItem;
const QGraphicsPixmapItem = @import("libqt6").QGraphicsPixmapItem;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QGraphicsRectItem = @import("libqt6").QGraphicsRectItem;
const QGraphicsSceneContextMenuEvent = @import("libqt6").QGraphicsSceneContextMenuEvent;
const QGraphicsSceneDragDropEvent = @import("libqt6").QGraphicsSceneDragDropEvent;
const QGraphicsSceneHelpEvent = @import("libqt6").QGraphicsSceneHelpEvent;
const QGraphicsSceneMouseEvent = @import("libqt6").QGraphicsSceneMouseEvent;
const QGraphicsSceneWheelEvent = @import("libqt6").QGraphicsSceneWheelEvent;
const QGraphicsSimpleTextItem = @import("libqt6").QGraphicsSimpleTextItem;
const QGraphicsTextItem = @import("libqt6").QGraphicsTextItem;
const QGraphicsView = @import("libqt6").QGraphicsView;
const QGraphicsWidget = @import("libqt6").QGraphicsWidget;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QLineF = @import("libqt6").QLineF;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPalette = @import("libqt6").QPalette;
const QPen = @import("libqt6").QPen;
const QPixmap = @import("libqt6").QPixmap;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qgraphicsscene_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)
pub const QGraphicsScene = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsScene,

    pub const _is_QGraphicsScene = {};
    pub const _is_QObject = {};

    /// New constructs a new QGraphicsScene object.
    ///
    pub fn New() QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsScene_new() };
    }

    /// New2 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sceneRect: QRectF `
    ///
    pub fn New2(sceneRect: anytype) QGraphicsScene {
        comptime _ = @TypeOf(sceneRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_new2(@ptrCast(sceneRect.ptr)) };
    }

    /// New3 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn New3(x: f64, y: f64, width: f64, height: f64) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsScene_new3(@bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height)) };
    }

    /// New4 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new4(@ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sceneRect: QRectF `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(sceneRect: anytype, parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(sceneRect)._is_QRectF;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new5(@ptrCast(sceneRect.ptr), @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(x: f64, y: f64, width: f64, height: f64, parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new6(@bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn MetaObject(self: QGraphicsScene) QMetaObject {
        return .{ .ptr = qtc.QGraphicsScene_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGraphicsScene, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsScene_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn SuperMetaObject(self: QGraphicsScene) QMetaObject {
        return .{ .ptr = qtc.QGraphicsScene_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsScene_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGraphicsScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsScene, callback: *const fn (QGraphicsScene, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGraphicsScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SceneRect(self: QGraphicsScene) QRectF {
        return .{ .ptr = qtc.QGraphicsScene_SceneRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Width(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Height(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetSceneRect(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SetSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetSceneRect2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_SetSceneRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render(self: QGraphicsScene, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsScene_Render(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsscene_enums.ItemIndexMethod `
    ///
    pub fn ItemIndexMethod(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_ItemIndexMethod(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` method: qgraphicsscene_enums.ItemIndexMethod `
    ///
    pub fn SetItemIndexMethod(self: QGraphicsScene, method: i32) void {
        qtc.QGraphicsScene_SetItemIndexMethod(@ptrCast(self.ptr), @bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn BspTreeDepth(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_BspTreeDepth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` depth: i32 `
    ///
    pub fn SetBspTreeDepth(self: QGraphicsScene, depth: i32) void {
        qtc.QGraphicsScene_SetBspTreeDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ItemsBoundingRect(self: QGraphicsScene) QRectF {
        return .{ .ptr = qtc.QGraphicsScene_ItemsBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    pub fn Items2(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Items3(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items3: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn Items5(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items5(@ptrCast(self.ptr), @ptrCast(path.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items5: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Items6(self: QGraphicsScene, allocator: std.mem.Allocator, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items6: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn CollidingItems(self: QGraphicsScene, allocator: std.mem.Allocator, item: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems(@ptrCast(self.ptr), @ptrCast(item.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` pos: QPointF `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn ItemAt(self: QGraphicsScene, pos: anytype, deviceTransform: anytype) QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsScene_ItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr), @ptrCast(deviceTransform.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn ItemAt2(self: QGraphicsScene, x: f64, y: f64, deviceTransform: anytype) QGraphicsItem {
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsScene_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(deviceTransform.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SelectionArea(self: QGraphicsScene) QPainterPath {
        return .{ .ptr = qtc.QGraphicsScene_SelectionArea(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn SetSelectionArea(self: QGraphicsScene, path: anytype, deviceTransform: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        qtc.QGraphicsScene_SetSelectionArea(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(deviceTransform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn SetSelectionArea2(self: QGraphicsScene, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea2(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` items: []QGraphicsItem `
    ///
    pub fn CreateItemGroup(self: QGraphicsScene, items: []QGraphicsItem) QGraphicsItemGroup {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QGraphicsScene_CreateItemGroup(@ptrCast(self.ptr), items_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` group: QGraphicsItemGroup `
    ///
    pub fn DestroyItemGroup(self: QGraphicsScene, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QGraphicsItemGroup;
        qtc.QGraphicsScene_DestroyItemGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn AddItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsScene_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn AddEllipse(self: QGraphicsScene, rect: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` line: QLineF `
    ///
    pub fn AddLine(self: QGraphicsScene, line: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(line)._is_QLineF;
        return .{ .ptr = qtc.QGraphicsScene_AddLine(@ptrCast(self.ptr), @ptrCast(line.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn AddPath(self: QGraphicsScene, path: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsScene_AddPath(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn AddPixmap(self: QGraphicsScene, pixmap: anytype) QGraphicsPixmapItem {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QGraphicsScene_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn AddRect(self: QGraphicsScene, rect: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_AddRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddText(self: QGraphicsScene, text: []const u8) QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QGraphicsScene_AddText(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSimpleText(self: QGraphicsScene, text: []const u8) QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QGraphicsScene_AddSimpleText(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddWidget(self: QGraphicsScene, widget: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsScene_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddEllipse2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) QGraphicsEllipseItem {
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn AddLine2(self: QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64) QGraphicsLineItem {
        return .{ .ptr = qtc.QGraphicsScene_AddLine2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddRect2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) QGraphicsRectItem {
        return .{ .ptr = qtc.QGraphicsScene_AddRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn RemoveItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsScene_RemoveItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn FocusItem(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_FocusItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetFocusItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsScene_SetFocusItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn HasFocus(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_HasFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SetFocus(self: QGraphicsScene) void {
        qtc.QGraphicsScene_SetFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ClearFocus(self: QGraphicsScene) void {
        qtc.QGraphicsScene_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetStickyFocus(self: QGraphicsScene, enabled: bool) void {
        qtc.QGraphicsScene_SetStickyFocus(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn StickyFocus(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_StickyFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn MouseGrabberItem(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_MouseGrabberItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn BackgroundBrush(self: QGraphicsScene) QBrush {
        return .{ .ptr = qtc.QGraphicsScene_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackgroundBrush(self: QGraphicsScene, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsScene_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ForegroundBrush(self: QGraphicsScene) QBrush {
        return .{ .ptr = qtc.QGraphicsScene_ForegroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForegroundBrush(self: QGraphicsScene, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsScene_SetForegroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QGraphicsScene, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsScene_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QGraphicsScene, callback: *const fn (QGraphicsScene, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsScene_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QGraphicsScene, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsScene_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Views(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsView {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Views(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsView, _arr.len) catch @panic("qgraphicsscene.Views: Memory allocation failed");
        const _data: [*]QtC.QGraphicsView = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Update(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Update(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Invalidate(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Invalidate(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Style(self: QGraphicsScene) QStyle {
        return .{ .ptr = qtc.QGraphicsScene_Style(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QGraphicsScene, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QGraphicsScene_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Font(self: QGraphicsScene) QFont {
        return .{ .ptr = qtc.QGraphicsScene_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QGraphicsScene, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGraphicsScene_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Palette(self: QGraphicsScene) QPalette {
        return .{ .ptr = qtc.QGraphicsScene_Palette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QGraphicsScene, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QGraphicsScene_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn IsActive(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ActivePanel(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_ActivePanel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn SetActivePanel(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsScene_SetActivePanel(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ActiveWindow(self: QGraphicsScene) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsScene_ActiveWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` widget: QGraphicsWidget `
    ///
    pub fn SetActiveWindow(self: QGraphicsScene, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QGraphicsWidget;
        qtc.QGraphicsScene_SetActiveWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` event: QEvent `
    ///
    pub fn SendEvent(self: QGraphicsScene, item: anytype, event: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsScene_SendEvent(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn MinimumRenderSize(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_MinimumRenderSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` minSize: f64 `
    ///
    pub fn SetMinimumRenderSize(self: QGraphicsScene, minSize: f64) void {
        qtc.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self.ptr), @bitCast(minSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn FocusOnTouch(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_FocusOnTouch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFocusOnTouch(self: QGraphicsScene, enabled: bool) void {
        qtc.QGraphicsScene_SetFocusOnTouch(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Update2(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Update2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Invalidate2(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Invalidate2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Advance(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Advance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn ClearSelection(self: QGraphicsScene) void {
        qtc.QGraphicsScene_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Clear(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsScene, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsScene_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsScene, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsScene_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsScene, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsScene_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsScene, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsScene_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsScene_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsScene_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsScene_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsScene_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsScene_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QGraphicsScene_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneHelpEvent `
    ///
    pub fn HelpEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHelpEvent;
        qtc.QGraphicsScene_HelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneHelpEvent) callconv(.c) void `
    ///
    pub fn OnHelpEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneHelpEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHelpEvent` instead
    ///
    pub const QBaseHelpEvent = SuperHelpEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneHelpEvent `
    ///
    pub fn SuperHelpEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneHelpEvent;
        qtc.QGraphicsScene_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsScene_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsScene_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsScene_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QGraphicsScene_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsScene_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsScene_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsScene_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QGraphicsScene_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawBackground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawBackground` instead
    ///
    pub const QBaseDrawBackground = SuperDrawBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawBackground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawForeground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_DrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, painter: QPainter, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnDrawForeground(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawForeground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawForeground` instead
    ///
    pub const QBaseDrawForeground = SuperDrawForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SuperDrawForeground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SuperDrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DrawItems(self: QGraphicsScene, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsScene_DrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, painter: QPainter, numItems: i32, items: *QGraphicsItem.ptr, options: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDrawItems(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, i32, *?*anyopaque, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawItems` instead
    ///
    pub const QBaseDrawItems = SuperDrawItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDrawItems(self: QGraphicsScene, painter: anytype, numItems: i32, items: *?*anyopaque, options: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsScene_SuperDrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(items), @ptrCast(options.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QGraphicsScene, next: bool) bool {
        return qtc.QGraphicsScene_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QGraphicsScene, callback: *const fn (QGraphicsScene, bool) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QGraphicsScene, next: bool) bool {
        return qtc.QGraphicsScene_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` region: []QRectF `
    ///
    pub fn Changed(self: QGraphicsScene, region: []QRectF) void {
        const region_list = qtc.libqt_list{
            .len = region.len,
            .data = @ptrCast(region.ptr),
        };
        qtc.QGraphicsScene_Changed(@ptrCast(self.ptr), region_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, region: qtc.libqt_list ([]QRectF)) callconv(.c) void `
    ///
    pub fn OnChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SceneRectChanged(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SceneRectChanged(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, rect: QRectF) callconv(.c) void `
    ///
    pub fn OnSceneRectChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SelectionChanged(self: QGraphicsScene) void {
        qtc.QGraphicsScene_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` newFocus: QGraphicsItem `
    ///
    /// ` oldFocus: QGraphicsItem `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn FocusItemChanged(self: QGraphicsScene, newFocus: anytype, oldFocus: anytype, reason: i32) void {
        comptime _ = @TypeOf(newFocus)._is_QGraphicsItem;
        comptime _ = @TypeOf(oldFocus)._is_QGraphicsItem;
        qtc.QGraphicsScene_FocusItemChanged(@ptrCast(self.ptr), @ptrCast(newFocus.ptr), @ptrCast(oldFocus.ptr), @bitCast(reason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, newFocus: QGraphicsItem, oldFocus: QGraphicsItem, reason: qnamespace_enums.FocusReason) callconv(.c) void `
    ///
    pub fn OnFocusItemChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsItem, QGraphicsItem, i32) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    pub fn Render2(self: QGraphicsScene, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.QGraphicsScene_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRectF `
    ///
    pub fn Render3(self: QGraphicsScene, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.QGraphicsScene_Render3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRectF `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Render4(self: QGraphicsScene, painter: anytype, target: anytype, source: anytype, aspectRatioMode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.QGraphicsScene_Render4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(aspectRatioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Items1(self: QGraphicsScene, allocator: std.mem.Allocator, order: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items1(@ptrCast(self.ptr), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items22(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items22(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items22: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Items32(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items32(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items32: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn Items42(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items42(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items42: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items23(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items23(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items23: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Items33(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items33(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items33: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rect: QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn Items43(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items43(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items43: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn Items25(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items25(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items25: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Items35(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items35(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items35: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn Items45(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items45(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items45: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn Items7(self: QGraphicsScene, allocator: std.mem.Allocator, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items7: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidingItems2(self: QGraphicsScene, allocator: std.mem.Allocator, item: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    pub fn SetSelectionArea22(self: QGraphicsScene, path: anytype, selectionOperation: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea22(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SetSelectionArea3(self: QGraphicsScene, path: anytype, selectionOperation: i32, mode: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea3(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` deviceTransform: QTransform `
    ///
    pub fn SetSelectionArea4(self: QGraphicsScene, path: anytype, selectionOperation: i32, mode: i32, deviceTransform: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        qtc.QGraphicsScene_SetSelectionArea4(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation), @bitCast(mode), @ptrCast(deviceTransform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddEllipse22(self: QGraphicsScene, rect: anytype, pen: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pen: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn AddEllipse3(self: QGraphicsScene, rect: anytype, pen: anytype, brush: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` line: QLineF `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddLine22(self: QGraphicsScene, line: anytype, pen: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(line)._is_QLineF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddLine22(@ptrCast(self.ptr), @ptrCast(line.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddPath2(self: QGraphicsScene, path: anytype, pen: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` pen: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn AddPath3(self: QGraphicsScene, path: anytype, pen: anytype, brush: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddPath3(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddRect22(self: QGraphicsScene, rect: anytype, pen: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddRect22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    /// ` pen: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn AddRect3(self: QGraphicsScene, rect: anytype, pen: anytype, brush: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QFont `
    ///
    pub fn AddText2(self: QGraphicsScene, text: []const u8, font: anytype) QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QGraphicsScene_AddText2(@ptrCast(self.ptr), text_str, @ptrCast(font.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QFont `
    ///
    pub fn AddSimpleText2(self: QGraphicsScene, text: []const u8, font: anytype) QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QGraphicsScene_AddSimpleText2(@ptrCast(self.ptr), text_str, @ptrCast(font.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` widget: QWidget `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn AddWidget2(self: QGraphicsScene, widget: anytype, wFlags: i32) QGraphicsProxyWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsScene_AddWidget2(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(wFlags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddEllipse5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn AddEllipse6(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype, brush: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddLine5(self: QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64, pen: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddLine5(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QPen `
    ///
    pub fn AddRect5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QPen `
    ///
    /// ` brush: QBrush `
    ///
    pub fn AddRect6(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype, brush: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddRect6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocusItem2(self: QGraphicsScene, item: anytype, focusReason: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsScene_SetFocusItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(focusReason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: QGraphicsScene, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` layers: flag of qgraphicsscene_enums.SceneLayer `
    ///
    pub fn Invalidate5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, layers: i32) void {
        qtc.QGraphicsScene_Invalidate5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(layers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Update1(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Invalidate1(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Invalidate1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    /// ` layers: flag of qgraphicsscene_enums.SceneLayer `
    ///
    pub fn Invalidate22(self: QGraphicsScene, rect: anytype, layers: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Invalidate22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(layers));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGraphicsScene, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGraphicsScene, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn IsWidgetType(self: QGraphicsScene) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn IsWindowType(self: QGraphicsScene) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn IsQuickItemType(self: QGraphicsScene) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SignalsBlocked(self: QGraphicsScene) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGraphicsScene, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Thread(self: QGraphicsScene) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsScene, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGraphicsScene, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGraphicsScene, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGraphicsScene, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGraphicsScene, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGraphicsScene, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsscene.Children: Memory allocation failed");
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
    /// ` self: QGraphicsScene `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsScene, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGraphicsScene, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGraphicsScene, obj: anytype) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsScene, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn Disconnect3(self: QGraphicsScene) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGraphicsScene, receiver: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn DumpObjectTree(self: QGraphicsScene) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn DumpObjectInfo(self: QGraphicsScene) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGraphicsScene, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsScene, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGraphicsScene, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsscene.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsscene.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsScene `
    ///
    pub fn BindingStorage(self: QGraphicsScene) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn BindingStorage2(self: QGraphicsScene) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Destroyed(self: QGraphicsScene) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGraphicsScene, callback: *const fn (QGraphicsScene) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Parent(self: QGraphicsScene) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGraphicsScene, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn DeleteLater(self: QGraphicsScene) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGraphicsScene, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGraphicsScene, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsScene, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsScene, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGraphicsScene, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsScene, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsScene, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsScene, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsScene_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsScene_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsScene_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsScene_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsScene_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsScene, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsScene_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsScene_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Sender(self: QGraphicsScene) QObject {
        return .{ .ptr = qtc.QGraphicsScene_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsScene `
    ///
    pub fn SuperSender(self: QGraphicsScene) QObject {
        return .{ .ptr = qtc.QGraphicsScene_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGraphicsScene, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsScene_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn SenderSignalIndex(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn SuperSenderSignalIndex(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGraphicsScene, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsScene_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGraphicsScene, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGraphicsScene, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGraphicsScene, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsScene_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGraphicsScene, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsScene_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dtor.QGraphicsScene)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn Delete(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#public-types)
pub const enums = struct {
    pub const ItemIndexMethod = enum(i32) {
        pub const BspTreeIndex: i32 = 0;
        pub const NoIndex: i32 = -1;
    };

    pub const SceneLayer = enum(i32) {
        pub const ItemLayer: i32 = 1;
        pub const BackgroundLayer: i32 = 2;
        pub const ForegroundLayer: i32 = 4;
        pub const AllLayers: i32 = 65535;
    };
};
