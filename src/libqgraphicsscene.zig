const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicsscene_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html)
pub const qgraphicsscene = struct {
    /// New constructs a new QGraphicsScene object.
    ///
    pub fn New() QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new();
    }

    /// New2 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sceneRect: QtC.QRectF `
    ///
    pub fn New2(sceneRect: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new2(@ptrCast(sceneRect));
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
    pub fn New3(x: f64, y: f64, width: f64, height: f64) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new3(@bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// New4 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QGraphicsScene object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sceneRect: QtC.QRectF `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New5(sceneRect: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new5(@ptrCast(sceneRect), @ptrCast(parent));
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
    /// ` parent: QtC.QObject `
    ///
    pub fn New6(x: f64, y: f64, width: f64, height: f64, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new6(@bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsScene_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QGraphicsScene_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsScene_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsScene_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsScene_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SceneRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsScene_SceneRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn SetSceneRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_SetSceneRect2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn Render(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsScene_Render(@ptrCast(self), @ptrCast(painter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsscene_enums.ItemIndexMethod `
    ///
    pub fn ItemIndexMethod(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_ItemIndexMethod(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` method: qgraphicsscene_enums.ItemIndexMethod `
    ///
    pub fn SetItemIndexMethod(self: ?*anyopaque, method: i32) void {
        qtc.QGraphicsScene_SetItemIndexMethod(@ptrCast(self), @bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn BspTreeDepth(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_BspTreeDepth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` depth: i32 `
    ///
    pub fn SetBspTreeDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QGraphicsScene_SetBspTreeDepth(@ptrCast(self), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ItemsBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsScene_ItemsBoundingRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items2(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items2(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items3(self: ?*anyopaque, rect: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items3(@ptrCast(self), @ptrCast(rect));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items3: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items5(self: ?*anyopaque, path: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items5(@ptrCast(self), @ptrCast(path));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items5: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
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
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items6(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items6: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems(self: ?*anyopaque, item: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems(@ptrCast(self), @ptrCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    pub fn ItemAt(self: ?*anyopaque, pos: ?*anyopaque, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt(@ptrCast(self), @ptrCast(pos), @ptrCast(deviceTransform));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    pub fn ItemAt2(self: ?*anyopaque, x: f64, y: f64, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt2(@ptrCast(self), @bitCast(x), @bitCast(y), @ptrCast(deviceTransform));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_SelectedItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SelectionArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsScene_SelectionArea(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    pub fn SetSelectionArea(self: ?*anyopaque, path: ?*anyopaque, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea(@ptrCast(self), @ptrCast(path), @ptrCast(deviceTransform));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn SetSelectionArea2(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea2(@ptrCast(self), @ptrCast(path));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` items: []QtC.QGraphicsItem `
    ///
    pub fn CreateItemGroup(self: ?*anyopaque, items: []?*anyopaque) QtC.QGraphicsItemGroup {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QGraphicsScene_CreateItemGroup(@ptrCast(self), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` group: QtC.QGraphicsItemGroup `
    ///
    pub fn DestroyItemGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsScene_DestroyItemGroup(@ptrCast(self), @ptrCast(group));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` line: QtC.QLineF `
    ///
    pub fn AddLine(self: ?*anyopaque, line: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine(@ptrCast(self), @ptrCast(line));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath(@ptrCast(self), @ptrCast(path));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsScene_AddPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSimpleText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddSimpleText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn AddLine2(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine2(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_FocusItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetFocusItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFocusItem(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_HasFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsScene_ClearFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetStickyFocus(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetStickyFocus(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn StickyFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_StickyFocus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn MouseGrabberItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_MouseGrabberItem(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QGraphicsScene_BackgroundBrush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ForegroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QGraphicsScene_ForegroundBrush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetForegroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetForegroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QGraphicsScene_InputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant `
    ///
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsScene_OnInputMethodQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QGraphicsScene_SuperInputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Views(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsView {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Views(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsView, _arr.len) catch @panic("qgraphicsscene.Views: Memory allocation failed");
        const _data: [*]QtC.QGraphicsView = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Update(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Update(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn Invalidate(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Invalidate(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QGraphicsScene_Style(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` style: QtC.QStyle `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsScene_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QGraphicsScene_Font(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QGraphicsScene_Palette(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` palette: QtC.QPalette `
    ///
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsScene_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ActivePanel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ActivePanel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetActivePanel(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActivePanel(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ActiveWindow(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsScene_ActiveWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` widget: QtC.QGraphicsWidget `
    ///
    pub fn SetActiveWindow(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActiveWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SendEvent(self: ?*anyopaque, item: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SendEvent(@ptrCast(self), @ptrCast(item), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn MinimumRenderSize(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_MinimumRenderSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` minSize: f64 `
    ///
    pub fn SetMinimumRenderSize(self: ?*anyopaque, minSize: f64) void {
        qtc.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self), @bitCast(minSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn FocusOnTouch(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_FocusOnTouch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFocusOnTouch(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetFocusOnTouch(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Update2(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Update2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Invalidate2(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Invalidate2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Advance(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Advance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QGraphicsScene_ClearSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnContextMenuEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDropEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_HelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneHelpEvent) callconv(.c) void `
    ///
    pub fn OnHelpEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnHelpEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn SuperHelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperHelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnInputMethodEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnDrawBackground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawBackground(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SuperDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn DrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnDrawForeground(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawForeground(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SuperDrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QtC.QGraphicsItem `
    ///
    /// ` options: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn DrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: *?*anyopaque, options: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawItems(@ptrCast(self), @ptrCast(painter), @bitCast(numItems), @ptrCast(items), @ptrCast(options), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#drawItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, painter: QtC.QPainter, numItems: i32, items: *QtC.QGraphicsItem, options: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnDrawItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, *?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawItems(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` numItems: i32 `
    ///
    /// ` items: *QtC.QGraphicsItem `
    ///
    /// ` options: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperDrawItems(self: ?*anyopaque, painter: ?*anyopaque, numItems: i32, items: *?*anyopaque, options: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDrawItems(@ptrCast(self), @ptrCast(painter), @bitCast(numItems), @ptrCast(items), @ptrCast(options), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_SuperFocusNextPrevChild(@ptrCast(self), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` region: []QtC.QRectF `
    ///
    pub fn Changed(self: ?*anyopaque, region: []QtC.QRectF) void {
        const region_list = qtc.libqt_list{
            .len = region.len,
            .data = @ptrCast(region.ptr),
        };
        qtc.QGraphicsScene_Changed(@ptrCast(self), region_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, region: qtc.libqt_list ([]QtC.QRectF)) callconv(.c) void `
    ///
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_Changed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SceneRectChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SceneRectChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, rect: QtC.QRectF) callconv(.c) void `
    ///
    pub fn OnSceneRectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QGraphicsScene_SelectionChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` newFocus: QtC.QGraphicsItem `
    ///
    /// ` oldFocus: QtC.QGraphicsItem `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn FocusItemChanged(self: ?*anyopaque, newFocus: ?*anyopaque, oldFocus: ?*anyopaque, reason: i32) void {
        qtc.QGraphicsScene_FocusItemChanged(@ptrCast(self), @ptrCast(newFocus), @ptrCast(oldFocus), @bitCast(reason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, newFocus: QtC.QGraphicsItem, oldFocus: QtC.QGraphicsItem, reason: qnamespace_enums.FocusReason) callconv(.c) void `
    ///
    pub fn OnFocusItemChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` target: QtC.QRectF `
    ///
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QGraphicsScene_Render2(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` target: QtC.QRectF `
    ///
    /// ` source: QtC.QRectF `
    ///
    pub fn Render3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsScene_Render3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` target: QtC.QRectF `
    ///
    /// ` source: QtC.QRectF `
    ///
    /// ` aspectRatioMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Render4(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque, aspectRatioMode: i32) void {
        qtc.QGraphicsScene_Render4(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source), @bitCast(aspectRatioMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items1(self: ?*anyopaque, order: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items1(@ptrCast(self), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items22(self: ?*anyopaque, pos: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items22(@ptrCast(self), @ptrCast(pos), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items22: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items32(self: ?*anyopaque, pos: ?*anyopaque, mode: i32, order: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items32(@ptrCast(self), @ptrCast(pos), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items32: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` pos: QtC.QPointF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items42(self: ?*anyopaque, pos: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items42(@ptrCast(self), @ptrCast(pos), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items42: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items23(self: ?*anyopaque, rect: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items23(@ptrCast(self), @ptrCast(rect), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items23: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items33(self: ?*anyopaque, rect: ?*anyopaque, mode: i32, order: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items33(@ptrCast(self), @ptrCast(rect), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items33: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items43(self: ?*anyopaque, rect: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items43(@ptrCast(self), @ptrCast(rect), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items43: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items25(self: ?*anyopaque, path: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items25(@ptrCast(self), @ptrCast(path), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items25: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items35(self: ?*anyopaque, path: ?*anyopaque, mode: i32, order: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items35(@ptrCast(self), @ptrCast(path), @bitCast(mode), @bitCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items35: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items45(self: ?*anyopaque, path: ?*anyopaque, mode: i32, order: i32, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items45(@ptrCast(self), @ptrCast(path), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items45: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
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
    /// ` deviceTransform: QtC.QTransform `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i32, order: i32, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items7(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items7: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems2(self: ?*anyopaque, item: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems2(@ptrCast(self), @ptrCast(item), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    pub fn SetSelectionArea22(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32) void {
        qtc.QGraphicsScene_SetSelectionArea22(@ptrCast(self), @ptrCast(path), @bitCast(selectionOperation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SetSelectionArea3(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32, mode: i32) void {
        qtc.QGraphicsScene_SetSelectionArea3(@ptrCast(self), @ptrCast(path), @bitCast(selectionOperation), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` selectionOperation: qnamespace_enums.ItemSelectionOperation `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` deviceTransform: QtC.QTransform `
    ///
    pub fn SetSelectionArea4(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i32, mode: i32, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea4(@ptrCast(self), @ptrCast(path), @bitCast(selectionOperation), @bitCast(mode), @ptrCast(deviceTransform));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddEllipse22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` pen: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn AddEllipse3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` line: QtC.QLineF `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddLine22(self: ?*anyopaque, line: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine22(@ptrCast(self), @ptrCast(line), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddPath2(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath2(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` pen: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn AddPath3(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath3(@ptrCast(self), @ptrCast(path), @ptrCast(pen), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddRect22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` pen: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn AddRect3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn AddText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` text: []const u8 `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn AddSimpleText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddSimpleText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn AddWidget2(self: ?*anyopaque, widget: ?*anyopaque, wFlags: i32) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget2(@ptrCast(self), @ptrCast(widget), @bitCast(wFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddEllipse5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse5(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn AddEllipse6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse6(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddLine5(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine5(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn AddRect5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect5(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` pen: QtC.QPen `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn AddRect6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect6(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocusItem2(self: ?*anyopaque, item: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocusItem2(@ptrCast(self), @ptrCast(item), @bitCast(focusReason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsScene_SetFocus1(@ptrCast(self), @bitCast(focusReason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
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
    pub fn Invalidate5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, layers: i32) void {
        qtc.QGraphicsScene_Invalidate5(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(layers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Invalidate1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Invalidate1(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` layers: flag of qgraphicsscene_enums.SceneLayer `
    ///
    pub fn Invalidate22(self: ?*anyopaque, rect: ?*anyopaque, layers: i32) void {
        qtc.QGraphicsScene_Invalidate22(@ptrCast(self), @ptrCast(rect), @bitCast(layers));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicsscene.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsScene_Sender(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsScene_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsScene_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsScene_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsScene_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsScene `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsScene, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsScene `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Delete(@ptrCast(self));
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
