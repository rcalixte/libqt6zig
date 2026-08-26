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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    pub fn new() QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsScene_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _sceneRect: QRectF `
    ///
    pub fn new2(_sceneRect: anytype) QGraphicsScene {
        comptime _ = @TypeOf(_sceneRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_new2(@ptrCast(_sceneRect.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    pub fn new3(x: f64, y: f64, _width: f64, _height: f64) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsScene_new3(@bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _sceneRect: QRectF `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_sceneRect: anytype, _parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(_sceneRect)._is_QRectF;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new5(@ptrCast(_sceneRect.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QGraphicsScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` _width: f64 `
    ///
    /// ` _height: f64 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(x: f64, y: f64, _width: f64, _height: f64, _parent: anytype) QGraphicsScene {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsScene_new6(@bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn metaObject(self: QGraphicsScene) QMetaObject {
        return .{ .ptr = qtc.QGraphicsScene_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsScene, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsScene_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn superMetaObject(self: QGraphicsScene) QMetaObject {
        return .{ .ptr = qtc.QGraphicsScene_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsScene_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QGraphicsScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsScene, callback: *const fn (QGraphicsScene, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QGraphicsScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsScene.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sceneRect` instead
    ///
    pub const SceneRect = sceneRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn sceneRect(self: QGraphicsScene) QRectF {
        return .{ .ptr = qtc.QGraphicsScene_SceneRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn width(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn height(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSceneRect` instead
    ///
    pub const SetSceneRect = setSceneRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setSceneRect(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SetSceneRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setSceneRect2` instead
    ///
    pub const SetSceneRect2 = setSceneRect2;

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
    pub fn setSceneRect2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_SetSceneRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render(self: QGraphicsScene, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsScene_Render(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `itemIndexMethod` instead
    ///
    pub const ItemIndexMethod = itemIndexMethod;

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
    pub fn itemIndexMethod(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_ItemIndexMethod(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemIndexMethod` instead
    ///
    pub const SetItemIndexMethod = setItemIndexMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` method: qgraphicsscene_enums.ItemIndexMethod `
    ///
    pub fn setItemIndexMethod(self: QGraphicsScene, method: i32) void {
        qtc.QGraphicsScene_SetItemIndexMethod(@ptrCast(self.ptr), @bitCast(method));
    }

    /// ### DEPRECATED: Use `bspTreeDepth` instead
    ///
    pub const BspTreeDepth = bspTreeDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn bspTreeDepth(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_BspTreeDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBspTreeDepth` instead
    ///
    pub const SetBspTreeDepth = setBspTreeDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` depth: i32 `
    ///
    pub fn setBspTreeDepth(self: QGraphicsScene, depth: i32) void {
        qtc.QGraphicsScene_SetBspTreeDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `itemsBoundingRect` instead
    ///
    pub const ItemsBoundingRect = itemsBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn itemsBoundingRect(self: QGraphicsScene) QRectF {
        return .{ .ptr = qtc.QGraphicsScene_ItemsBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items2` instead
    ///
    pub const Items2 = items2;

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
    pub fn items2(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items2: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items3` instead
    ///
    pub const Items3 = items3;

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
    pub fn items3(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items3(@ptrCast(self.ptr), @ptrCast(rect.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items3: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items5` instead
    ///
    pub const Items5 = items5;

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
    pub fn items5(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items5(@ptrCast(self.ptr), @ptrCast(path.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items5: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items6` instead
    ///
    pub const Items6 = items6;

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
    pub fn items6(self: QGraphicsScene, allocator: std.mem.Allocator, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items6: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `collidingItems` instead
    ///
    pub const CollidingItems = collidingItems;

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
    pub fn collidingItems(self: QGraphicsScene, allocator: std.mem.Allocator, item: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems(@ptrCast(self.ptr), @ptrCast(item_.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.collidingItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

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
    pub fn itemAt(self: QGraphicsScene, pos: anytype, deviceTransform: anytype) QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsScene_ItemAt(@ptrCast(self.ptr), @ptrCast(pos.ptr), @ptrCast(deviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

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
    pub fn itemAt2(self: QGraphicsScene, x: f64, y: f64, deviceTransform: anytype) QGraphicsItem {
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsScene_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(deviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedItems(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.selectedItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectionArea` instead
    ///
    pub const SelectionArea = selectionArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn selectionArea(self: QGraphicsScene) QPainterPath {
        return .{ .ptr = qtc.QGraphicsScene_SelectionArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionArea` instead
    ///
    pub const SetSelectionArea = setSelectionArea;

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
    pub fn setSelectionArea(self: QGraphicsScene, path: anytype, deviceTransform: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        qtc.QGraphicsScene_SetSelectionArea(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(deviceTransform.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionArea2` instead
    ///
    pub const SetSelectionArea2 = setSelectionArea2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn setSelectionArea2(self: QGraphicsScene, path: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea2(@ptrCast(self.ptr), @ptrCast(path.ptr));
    }

    /// ### DEPRECATED: Use `createItemGroup` instead
    ///
    pub const CreateItemGroup = createItemGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _items: []QGraphicsItem `
    ///
    pub fn createItemGroup(self: QGraphicsScene, _items: []QGraphicsItem) QGraphicsItemGroup {
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = @ptrCast(_items.ptr),
        };
        return .{ .ptr = qtc.QGraphicsScene_CreateItemGroup(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `destroyItemGroup` instead
    ///
    pub const DestroyItemGroup = destroyItemGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` group: QGraphicsItemGroup `
    ///
    pub fn destroyItemGroup(self: QGraphicsScene, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QGraphicsItemGroup;
        qtc.QGraphicsScene_DestroyItemGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn addItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsScene_AddItem(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `addEllipse` instead
    ///
    pub const AddEllipse = addEllipse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn addEllipse(self: QGraphicsScene, rect: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `addLine` instead
    ///
    pub const AddLine = addLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` line: QLineF `
    ///
    pub fn addLine(self: QGraphicsScene, line: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(line)._is_QLineF;
        return .{ .ptr = qtc.QGraphicsScene_AddLine(@ptrCast(self.ptr), @ptrCast(line.ptr)) };
    }

    /// ### DEPRECATED: Use `addPath` instead
    ///
    pub const AddPath = addPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn addPath(self: QGraphicsScene, path: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsScene_AddPath(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `addPixmap` instead
    ///
    pub const AddPixmap = addPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn addPixmap(self: QGraphicsScene, pixmap: anytype) QGraphicsPixmapItem {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QGraphicsScene_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect` instead
    ///
    pub const AddRect = addRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn addRect(self: QGraphicsScene, rect: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsScene_AddRect(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `addText` instead
    ///
    pub const AddText = addText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addText(self: QGraphicsScene, text: []const u8) QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QGraphicsScene_AddText(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addSimpleText` instead
    ///
    pub const AddSimpleText = addSimpleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addSimpleText(self: QGraphicsScene, text: []const u8) QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QGraphicsScene_AddSimpleText(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` widget: QWidget `
    ///
    pub fn addWidget(self: QGraphicsScene, widget: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsScene_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `addEllipse2` instead
    ///
    pub const AddEllipse2 = addEllipse2;

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
    pub fn addEllipse2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) QGraphicsEllipseItem {
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `addLine2` instead
    ///
    pub const AddLine2 = addLine2;

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
    pub fn addLine2(self: QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64) QGraphicsLineItem {
        return .{ .ptr = qtc.QGraphicsScene_AddLine2(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2)) };
    }

    /// ### DEPRECATED: Use `addRect2` instead
    ///
    pub const AddRect2 = addRect2;

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
    pub fn addRect2(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) QGraphicsRectItem {
        return .{ .ptr = qtc.QGraphicsScene_AddRect2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn removeItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsScene_RemoveItem(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `focusItem` instead
    ///
    pub const FocusItem = focusItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn focusItem(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_FocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusItem` instead
    ///
    pub const SetFocusItem = setFocusItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setFocusItem(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsScene_SetFocusItem(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn hasFocus(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn setFocus(self: QGraphicsScene) void {
        qtc.QGraphicsScene_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn clearFocus(self: QGraphicsScene) void {
        qtc.QGraphicsScene_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStickyFocus` instead
    ///
    pub const SetStickyFocus = setStickyFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn setStickyFocus(self: QGraphicsScene, enabled: bool) void {
        qtc.QGraphicsScene_SetStickyFocus(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `stickyFocus` instead
    ///
    pub const StickyFocus = stickyFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn stickyFocus(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_StickyFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mouseGrabberItem` instead
    ///
    pub const MouseGrabberItem = mouseGrabberItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn mouseGrabberItem(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_MouseGrabberItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundBrush` instead
    ///
    pub const BackgroundBrush = backgroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn backgroundBrush(self: QGraphicsScene) QBrush {
        return .{ .ptr = qtc.QGraphicsScene_BackgroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundBrush` instead
    ///
    pub const SetBackgroundBrush = setBackgroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackgroundBrush(self: QGraphicsScene, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsScene_SetBackgroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foregroundBrush` instead
    ///
    pub const ForegroundBrush = foregroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn foregroundBrush(self: QGraphicsScene) QBrush {
        return .{ .ptr = qtc.QGraphicsScene_ForegroundBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setForegroundBrush` instead
    ///
    pub const SetForegroundBrush = setForegroundBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForegroundBrush(self: QGraphicsScene, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QGraphicsScene_SetForegroundBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QGraphicsScene, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsScene_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QGraphicsScene, callback: *const fn (QGraphicsScene, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsScene_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: QGraphicsScene, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsScene_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `views` instead
    ///
    pub const Views = views;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn views(self: QGraphicsScene, allocator: std.mem.Allocator) []QGraphicsView {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Views(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsView, _arr.len) catch @panic("QGraphicsScene.views: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsView = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

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
    pub fn update(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Update(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

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
    pub fn invalidate(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Invalidate(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn style(self: QGraphicsScene) QStyle {
        return .{ .ptr = qtc.QGraphicsScene_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QGraphicsScene, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QGraphicsScene_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn font(self: QGraphicsScene) QFont {
        return .{ .ptr = qtc.QGraphicsScene_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QGraphicsScene, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGraphicsScene_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn palette(self: QGraphicsScene) QPalette {
        return .{ .ptr = qtc.QGraphicsScene_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QGraphicsScene, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QGraphicsScene_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn isActive(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activePanel` instead
    ///
    pub const ActivePanel = activePanel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn activePanel(self: QGraphicsScene) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsScene_ActivePanel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActivePanel` instead
    ///
    pub const SetActivePanel = setActivePanel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setActivePanel(self: QGraphicsScene, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsScene_SetActivePanel(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `activeWindow` instead
    ///
    pub const ActiveWindow = activeWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn activeWindow(self: QGraphicsScene) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsScene_ActiveWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActiveWindow` instead
    ///
    pub const SetActiveWindow = setActiveWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` widget: QGraphicsWidget `
    ///
    pub fn setActiveWindow(self: QGraphicsScene, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QGraphicsWidget;
        qtc.QGraphicsScene_SetActiveWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `sendEvent` instead
    ///
    pub const SendEvent = sendEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sendEvent(self: QGraphicsScene, item: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsScene_SendEvent(@ptrCast(self.ptr), @ptrCast(item_.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `minimumRenderSize` instead
    ///
    pub const MinimumRenderSize = minimumRenderSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn minimumRenderSize(self: QGraphicsScene) f64 {
        return qtc.QGraphicsScene_MinimumRenderSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumRenderSize` instead
    ///
    pub const SetMinimumRenderSize = setMinimumRenderSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` minSize: f64 `
    ///
    pub fn setMinimumRenderSize(self: QGraphicsScene, minSize: f64) void {
        qtc.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self.ptr), @bitCast(minSize));
    }

    /// ### DEPRECATED: Use `focusOnTouch` instead
    ///
    pub const FocusOnTouch = focusOnTouch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn focusOnTouch(self: QGraphicsScene) bool {
        return qtc.QGraphicsScene_FocusOnTouch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusOnTouch` instead
    ///
    pub const SetFocusOnTouch = setFocusOnTouch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFocusOnTouch(self: QGraphicsScene, enabled: bool) void {
        qtc.QGraphicsScene_SetFocusOnTouch(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn update2(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Update2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidate2` instead
    ///
    pub const Invalidate2 = invalidate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn invalidate2(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Invalidate2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `advance` instead
    ///
    pub const Advance = advance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn advance(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Advance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn clearSelection(self: QGraphicsScene) void {
        qtc.QGraphicsScene_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn clear(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsScene, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsScene_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsScene, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsScene_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsScene, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsScene_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsScene, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsScene_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsScene_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsScene_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragEnterEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragEnterEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragMoveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragMoveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragLeaveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragLeaveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dropEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDropEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsScene_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsScene_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsScene_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsScene_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsScene_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `helpEvent` instead
    ///
    pub const HelpEvent = helpEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneHelpEvent `
    ///
    pub fn helpEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHelpEvent;
        qtc.QGraphicsScene_HelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHelpEvent` instead
    ///
    pub const OnHelpEvent = onHelpEvent;

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
    pub fn onHelpEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneHelpEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnHelpEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHelpEvent` instead
    ///
    pub const SuperHelpEvent = superHelpEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneHelpEvent `
    ///
    pub fn superHelpEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHelpEvent;
        qtc.QGraphicsScene_SuperHelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsScene_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsScene_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsScene_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsScene_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mousePressEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMousePressEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsScene_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn wheelEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsScene_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn superWheelEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsScene_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsScene_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsScene_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `drawBackground` instead
    ///
    pub const DrawBackground = drawBackground;

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
    pub fn drawBackground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_DrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onDrawBackground` instead
    ///
    pub const OnDrawBackground = onDrawBackground;

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
    pub fn onDrawBackground(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawBackground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawBackground` instead
    ///
    pub const SuperDrawBackground = superDrawBackground;

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
    pub fn superDrawBackground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SuperDrawBackground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawForeground` instead
    ///
    pub const DrawForeground = drawForeground;

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
    pub fn drawForeground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_DrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onDrawForeground` instead
    ///
    pub const OnDrawForeground = onDrawForeground;

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
    pub fn onDrawForeground(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawForeground(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawForeground` instead
    ///
    pub const SuperDrawForeground = superDrawForeground;

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
    pub fn superDrawForeground(self: QGraphicsScene, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SuperDrawForeground(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `drawItems` instead
    ///
    pub const DrawItems = drawItems;

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
    /// ` _items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn drawItems(self: QGraphicsScene, painter: anytype, numItems: i32, _items: *?*anyopaque, options: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsScene_DrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(_items), @ptrCast(options.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDrawItems` instead
    ///
    pub const OnDrawItems = onDrawItems;

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
    pub fn onDrawItems(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QPainter, i32, *?*anyopaque, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawItems` instead
    ///
    pub const SuperDrawItems = superDrawItems;

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
    /// ` _items: *QGraphicsItem.ptr `
    ///
    /// ` options: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDrawItems(self: QGraphicsScene, painter: anytype, numItems: i32, _items: *?*anyopaque, options: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsScene_SuperDrawItems(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(numItems), @ptrCast(_items), @ptrCast(options.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QGraphicsScene, next: bool) bool {
        return qtc.QGraphicsScene_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QGraphicsScene, callback: *const fn (QGraphicsScene, bool) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QGraphicsScene, next: bool) bool {
        return qtc.QGraphicsScene_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` region: []QRectF `
    ///
    pub fn changed(self: QGraphicsScene, region: []QRectF) void {
        const region_list = qtc.libqt_list{
            .len = region.len,
            .data = @ptrCast(region.ptr),
        };
        qtc.QGraphicsScene_Changed(@ptrCast(self.ptr), region_list);
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, region: qtc.libqt_list ([]QRectF)) callconv(.c) void `
    ///
    pub fn onChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneRectChanged` instead
    ///
    pub const SceneRectChanged = sceneRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn sceneRectChanged(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_SceneRectChanged(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSceneRectChanged` instead
    ///
    pub const OnSceneRectChanged = onSceneRectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, rect: QRectF) callconv(.c) void `
    ///
    pub fn onSceneRectChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn selectionChanged(self: QGraphicsScene) void {
        qtc.QGraphicsScene_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusItemChanged` instead
    ///
    pub const FocusItemChanged = focusItemChanged;

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
    pub fn focusItemChanged(self: QGraphicsScene, newFocus: anytype, oldFocus: anytype, reason: i32) void {
        comptime _ = @TypeOf(newFocus)._is_QGraphicsItem;
        const newFocus_ = if (@hasDecl(@TypeOf(newFocus), "asQGraphicsItem")) newFocus.asQGraphicsItem() else newFocus;
        comptime _ = @TypeOf(oldFocus)._is_QGraphicsItem;
        const oldFocus_ = if (@hasDecl(@TypeOf(oldFocus), "asQGraphicsItem")) oldFocus.asQGraphicsItem() else oldFocus;
        qtc.QGraphicsScene_FocusItemChanged(@ptrCast(self.ptr), @ptrCast(newFocus_.ptr), @ptrCast(oldFocus_.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `onFocusItemChanged` instead
    ///
    pub const OnFocusItemChanged = onFocusItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, newFocus: QGraphicsItem, oldFocus: QGraphicsItem, reason: qnamespace_enums.FocusReason) callconv(.c) void `
    ///
    pub fn onFocusItemChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QGraphicsItem, QGraphicsItem, i32) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsScene.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsScene.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

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
    pub fn render2(self: QGraphicsScene, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.QGraphicsScene_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

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
    pub fn render3(self: QGraphicsScene, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.QGraphicsScene_Render3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `render4` instead
    ///
    pub const Render4 = render4;

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
    pub fn render4(self: QGraphicsScene, painter: anytype, target: anytype, source: anytype, aspectRatioMode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.QGraphicsScene_Render4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(aspectRatioMode));
    }

    /// ### DEPRECATED: Use `items1` instead
    ///
    pub const Items1 = items1;

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
    pub fn items1(self: QGraphicsScene, allocator: std.mem.Allocator, order: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items1(@ptrCast(self.ptr), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items1: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items22` instead
    ///
    pub const Items22 = items22;

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
    pub fn items22(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items22(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items22: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items32` instead
    ///
    pub const Items32 = items32;

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
    pub fn items32(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items32(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items32: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items42` instead
    ///
    pub const Items42 = items42;

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
    pub fn items42(self: QGraphicsScene, allocator: std.mem.Allocator, pos: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(pos)._is_QPointF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items42(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items42: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items23` instead
    ///
    pub const Items23 = items23;

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
    pub fn items23(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items23(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items23: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items33` instead
    ///
    pub const Items33 = items33;

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
    pub fn items33(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items33(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items33: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items43` instead
    ///
    pub const Items43 = items43;

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
    pub fn items43(self: QGraphicsScene, allocator: std.mem.Allocator, rect: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items43(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items43: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items25` instead
    ///
    pub const Items25 = items25;

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
    pub fn items25(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items25(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items25: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items35` instead
    ///
    pub const Items35 = items35;

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
    pub fn items35(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32, order: i32) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items35(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items35: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items45` instead
    ///
    pub const Items45 = items45;

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
    pub fn items45(self: QGraphicsScene, allocator: std.mem.Allocator, path: anytype, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items45(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items45: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items7` instead
    ///
    pub const Items7 = items7;

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
    pub fn items7(self: QGraphicsScene, allocator: std.mem.Allocator, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32, deviceTransform: anytype) []QGraphicsItem {
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.items7: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `collidingItems2` instead
    ///
    pub const CollidingItems2 = collidingItems2;

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
    pub fn collidingItems2(self: QGraphicsScene, allocator: std.mem.Allocator, item: anytype, mode: i32) []QGraphicsItem {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems2(@ptrCast(self.ptr), @ptrCast(item_.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsScene.collidingItems2: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectionArea22` instead
    ///
    pub const SetSelectionArea22 = setSelectionArea22;

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
    pub fn setSelectionArea22(self: QGraphicsScene, path: anytype, selectionOperation: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea22(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation));
    }

    /// ### DEPRECATED: Use `setSelectionArea3` instead
    ///
    pub const SetSelectionArea3 = setSelectionArea3;

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
    pub fn setSelectionArea3(self: QGraphicsScene, path: anytype, selectionOperation: i32, mode: i32) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        qtc.QGraphicsScene_SetSelectionArea3(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setSelectionArea4` instead
    ///
    pub const SetSelectionArea4 = setSelectionArea4;

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
    pub fn setSelectionArea4(self: QGraphicsScene, path: anytype, selectionOperation: i32, mode: i32, deviceTransform: anytype) void {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(deviceTransform)._is_QTransform;
        qtc.QGraphicsScene_SetSelectionArea4(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(selectionOperation), @bitCast(mode), @ptrCast(deviceTransform.ptr));
    }

    /// ### DEPRECATED: Use `addEllipse22` instead
    ///
    pub const AddEllipse22 = addEllipse22;

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
    pub fn addEllipse22(self: QGraphicsScene, rect: anytype, pen: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addEllipse3` instead
    ///
    pub const AddEllipse3 = addEllipse3;

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
    pub fn addEllipse3(self: QGraphicsScene, rect: anytype, pen: anytype, brush: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `addLine22` instead
    ///
    pub const AddLine22 = addLine22;

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
    pub fn addLine22(self: QGraphicsScene, line: anytype, pen: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(line)._is_QLineF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddLine22(@ptrCast(self.ptr), @ptrCast(line.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addPath2` instead
    ///
    pub const AddPath2 = addPath2;

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
    pub fn addPath2(self: QGraphicsScene, path: anytype, pen: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddPath2(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addPath3` instead
    ///
    pub const AddPath3 = addPath3;

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
    pub fn addPath3(self: QGraphicsScene, path: anytype, pen: anytype, brush: anytype) QGraphicsPathItem {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddPath3(@ptrCast(self.ptr), @ptrCast(path.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect22` instead
    ///
    pub const AddRect22 = addRect22;

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
    pub fn addRect22(self: QGraphicsScene, rect: anytype, pen: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddRect22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect3` instead
    ///
    pub const AddRect3 = addRect3;

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
    pub fn addRect3(self: QGraphicsScene, rect: anytype, pen: anytype, brush: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddRect3(@ptrCast(self.ptr), @ptrCast(rect.ptr), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `addText2` instead
    ///
    pub const AddText2 = addText2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _font: QFont `
    ///
    pub fn addText2(self: QGraphicsScene, text: []const u8, _font: anytype) QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(_font)._is_QFont;
        return .{ .ptr = qtc.QGraphicsScene_AddText2(@ptrCast(self.ptr), text_str, @ptrCast(_font.ptr)) };
    }

    /// ### DEPRECATED: Use `addSimpleText2` instead
    ///
    pub const AddSimpleText2 = addSimpleText2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _font: QFont `
    ///
    pub fn addSimpleText2(self: QGraphicsScene, text: []const u8, _font: anytype) QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(_font)._is_QFont;
        return .{ .ptr = qtc.QGraphicsScene_AddSimpleText2(@ptrCast(self.ptr), text_str, @ptrCast(_font.ptr)) };
    }

    /// ### DEPRECATED: Use `addWidget2` instead
    ///
    pub const AddWidget2 = addWidget2;

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
    pub fn addWidget2(self: QGraphicsScene, widget: anytype, wFlags: i32) QGraphicsProxyWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsScene_AddWidget2(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(wFlags)) };
    }

    /// ### DEPRECATED: Use `addEllipse5` instead
    ///
    pub const AddEllipse5 = addEllipse5;

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
    pub fn addEllipse5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addEllipse6` instead
    ///
    pub const AddEllipse6 = addEllipse6;

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
    pub fn addEllipse6(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype, brush: anytype) QGraphicsEllipseItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddEllipse6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `addLine5` instead
    ///
    pub const AddLine5 = addLine5;

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
    pub fn addLine5(self: QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64, pen: anytype) QGraphicsLineItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddLine5(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect5` instead
    ///
    pub const AddRect5 = addRect5;

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
    pub fn addRect5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        return .{ .ptr = qtc.QGraphicsScene_AddRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr)) };
    }

    /// ### DEPRECATED: Use `addRect6` instead
    ///
    pub const AddRect6 = addRect6;

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
    pub fn addRect6(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: anytype, brush: anytype) QGraphicsRectItem {
        comptime _ = @TypeOf(pen)._is_QPen;
        comptime _ = @TypeOf(brush)._is_QBrush;
        return .{ .ptr = qtc.QGraphicsScene_AddRect6(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen.ptr), @ptrCast(brush.ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusItem2` instead
    ///
    pub const SetFocusItem2 = setFocusItem2;

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
    pub fn setFocusItem2(self: QGraphicsScene, item: anytype, focusReason: i32) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsScene_SetFocusItem2(@ptrCast(self.ptr), @ptrCast(item_.ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `setFocus1` instead
    ///
    pub const SetFocus1 = setFocus1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus1(self: QGraphicsScene, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `invalidate5` instead
    ///
    pub const Invalidate5 = invalidate5;

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
    pub fn invalidate5(self: QGraphicsScene, x: f64, y: f64, w: f64, h: f64, layers: i32) void {
        qtc.QGraphicsScene_Invalidate5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(layers));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn update1(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Update1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `invalidate1` instead
    ///
    pub const Invalidate1 = invalidate1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsScene `
    ///
    /// ` rect: QRectF `
    ///
    pub fn invalidate1(self: QGraphicsScene, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Invalidate1(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `invalidate22` instead
    ///
    pub const Invalidate22 = invalidate22;

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
    pub fn invalidate22(self: QGraphicsScene, rect: anytype, layers: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsScene_Invalidate22(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(layers));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsScene, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsScene.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsScene `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsScene, name: []const u8) void {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn isWidgetType(self: QGraphicsScene) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn isWindowType(self: QGraphicsScene) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn isQuickItemType(self: QGraphicsScene) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn signalsBlocked(self: QGraphicsScene) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsScene, b: bool) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn thread(self: QGraphicsScene) QThread {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsScene, _thread: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsScene, interval: i32) i32 {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsScene, time: i64) i32 {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsScene, id: i32) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsScene, id: i32) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsScene, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsScene.children: Memory allocation failed");
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsScene, _parent: anytype) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsScene, filterObj: anytype) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsScene, obj: anytype) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsScene, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn disconnect3(self: QGraphicsScene) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsScene, receiver: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn dumpObjectTree(self: QGraphicsScene) void {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn dumpObjectInfo(self: QGraphicsScene) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsScene, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsScene, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsScene, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsScene.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsScene.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsScene `
    ///
    pub fn bindingStorage(self: QGraphicsScene) QBindingStorage {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn bindingStorage2(self: QGraphicsScene) QBindingStorage {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn destroyed(self: QGraphicsScene) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsScene, callback: *const fn (QGraphicsScene) callconv(.c) void) void {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn parent(self: QGraphicsScene) QObject {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsScene, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    pub fn deleteLater(self: QGraphicsScene) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsScene, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsScene, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsScene, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsScene, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsScene, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsScene, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsScene, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsScene, param1: anytype) void {
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
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsScene_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsScene_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsScene_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsScene_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsScene_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsScene_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QEvent) callconv(.c) void) void {
        qtc.QGraphicsScene_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsScene_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsScene_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn sender(self: QGraphicsScene) QObject {
        return .{ .ptr = qtc.QGraphicsScene_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsScene `
    ///
    pub fn superSender(self: QGraphicsScene) QObject {
        return .{ .ptr = qtc.QGraphicsScene_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsScene, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsScene_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn senderSignalIndex(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsScene) i32 {
        return qtc.QGraphicsScene_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsScene, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsScene_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsScene, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsScene, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsScene, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsScene_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsScene, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsScene_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QGraphicsScene, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsScene, callback: *const fn (QGraphicsScene, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QGraphicsScene, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsScene, callback: *const fn (QGraphicsScene, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dtor.QGraphicsScene)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsScene `
    ///
    pub fn delete(self: QGraphicsScene) void {
        qtc.QGraphicsScene_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#public-types)
pub const enums = struct {
    pub const ItemIndexMethod = enum {
        pub const BspTreeIndex: i32 = 0;
        pub const NoIndex: i32 = -1;
    };

    pub const SceneLayer = enum {
        pub const ItemLayer: i32 = 1;
        pub const BackgroundLayer: i32 = 2;
        pub const ForegroundLayer: i32 = 4;
        pub const AllLayers: i32 = 65535;
    };
};
