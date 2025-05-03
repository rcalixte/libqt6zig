const C = @import("qt6c");
const qgraphicsscene_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicsscene.html
pub const qgraphicsscene = struct {
    /// New constructs a new QGraphicsScene object.
    ///
    ///
    pub fn New() ?*C.QGraphicsScene {
        return C.QGraphicsScene_new();
    }

    /// New2 constructs a new QGraphicsScene object.
    ///
    /// ``` sceneRect: ?*C.QRectF ```
    pub fn New2(sceneRect: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsScene_new2(@ptrCast(sceneRect));
    }

    /// New3 constructs a new QGraphicsScene object.
    ///
    /// ``` x: f64, y: f64, width: f64, height: f64 ```
    pub fn New3(x: f64, y: f64, width: f64, height: f64) ?*C.QGraphicsScene {
        return C.QGraphicsScene_new3(@floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// New4 constructs a new QGraphicsScene object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New4(parent: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsScene_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QGraphicsScene object.
    ///
    /// ``` sceneRect: ?*C.QRectF, parent: ?*C.QObject ```
    pub fn New5(sceneRect: ?*anyopaque, parent: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsScene_new5(@ptrCast(sceneRect), @ptrCast(parent));
    }

    /// New6 constructs a new QGraphicsScene object.
    ///
    /// ``` x: f64, y: f64, width: f64, height: f64, parent: ?*C.QObject ```
    pub fn New6(x: f64, y: f64, width: f64, height: f64, parent: ?*anyopaque) ?*C.QGraphicsScene {
        return C.QGraphicsScene_new6(@floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGraphicsScene_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsScene, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGraphicsScene_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsScene_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QGraphicsScene_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsScene_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGraphicsScene_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SceneRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsScene_SceneRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Width(self: ?*anyopaque) f64 {
        return C.QGraphicsScene_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Height(self: ?*anyopaque) f64 {
        return C.QGraphicsScene_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn SetSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_SetSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetSceneRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsScene_SetSceneRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter ```
    pub fn Render(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QGraphicsScene_Render(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ItemIndexMethod(self: ?*anyopaque) i64 {
        return C.QGraphicsScene_ItemIndexMethod(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
    ///
    /// ``` self: ?*C.QGraphicsScene, method: qgraphicsscene_enums.ItemIndexMethod ```
    pub fn SetItemIndexMethod(self: ?*anyopaque, method: i64) void {
        C.QGraphicsScene_SetItemIndexMethod(@ptrCast(self), @intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn BspTreeDepth(self: ?*anyopaque) i32 {
        return C.QGraphicsScene_BspTreeDepth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
    ///
    /// ``` self: ?*C.QGraphicsScene, depth: i32 ```
    pub fn SetBspTreeDepth(self: ?*anyopaque, depth: i32) void {
        C.QGraphicsScene_SetBspTreeDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ItemsBoundingRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsScene_ItemsBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, pos: ?*C.QPointF, allocator: std.mem.Allocator ```
    pub fn ItemsWithPos(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_ItemsWithPos(@ptrCast(self), @ptrCast(pos));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, allocator: std.mem.Allocator ```
    pub fn ItemsWithRect(self: ?*anyopaque, rect: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_ItemsWithRect(@ptrCast(self), @ptrCast(rect));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, allocator: std.mem.Allocator ```
    pub fn ItemsWithPath(self: ?*anyopaque, path: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_ItemsWithPath(@ptrCast(self), @ptrCast(path));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i64, order: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(mode), @intCast(order));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, item: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_CollidingItems(@ptrCast(self), @ptrCast(item));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ``` self: ?*C.QGraphicsScene, pos: ?*C.QPointF, deviceTransform: ?*C.QTransform ```
    pub fn ItemAt(self: ?*anyopaque, pos: ?*anyopaque, deviceTransform: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsScene_ItemAt(@ptrCast(self), @ptrCast(pos), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, deviceTransform: ?*C.QTransform ```
    pub fn ItemAt2(self: ?*anyopaque, x: f64, y: f64, deviceTransform: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsScene_ItemAt2(@ptrCast(self), @floatCast(x), @floatCast(y), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_SelectedItems(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SelectionArea(self: ?*anyopaque) ?*C.QPainterPath {
        return C.QGraphicsScene_SelectionArea(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, deviceTransform: ?*C.QTransform ```
    pub fn SetSelectionArea(self: ?*anyopaque, path: ?*anyopaque, deviceTransform: ?*anyopaque) void {
        C.QGraphicsScene_SetSelectionArea(@ptrCast(self), @ptrCast(path), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath ```
    pub fn SetSelectionAreaWithPath(self: ?*anyopaque, path: ?*anyopaque) void {
        C.QGraphicsScene_SetSelectionAreaWithPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
    ///
    /// ``` self: ?*C.QGraphicsScene, items: []?*C.QGraphicsItem ```
    pub fn CreateItemGroup(self: ?*anyopaque, items: []?*anyopaque) ?*C.QGraphicsItemGroup {
        const items_list = C.struct_libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return C.QGraphicsScene_CreateItemGroup(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
    ///
    /// ``` self: ?*C.QGraphicsScene, group: ?*C.QGraphicsItemGroup ```
    pub fn DestroyItemGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        C.QGraphicsScene_DestroyItemGroup(@ptrCast(self), @ptrCast(group));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsScene_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: ?*C.QGraphicsScene, line: ?*C.QLineF ```
    pub fn AddLine(self: ?*anyopaque, line: ?*anyopaque) ?*C.QGraphicsLineItem {
        return C.QGraphicsScene_AddLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath ```
    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) ?*C.QGraphicsPathItem {
        return C.QGraphicsScene_AddPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
    ///
    /// ``` self: ?*C.QGraphicsScene, pixmap: ?*C.QPixmap ```
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) ?*C.QGraphicsPixmapItem {
        return C.QGraphicsScene_AddPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ``` self: ?*C.QGraphicsScene, text: []const u8 ```
    pub fn AddText(self: ?*anyopaque, text: []const u8) ?*C.QGraphicsTextItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QGraphicsScene_AddText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ``` self: ?*C.QGraphicsScene, text: []const u8 ```
    pub fn AddSimpleText(self: ?*anyopaque, text: []const u8) ?*C.QGraphicsSimpleTextItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QGraphicsScene_AddSimpleText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ``` self: ?*C.QGraphicsScene, widget: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) ?*C.QGraphicsProxyWidget {
        return C.QGraphicsScene_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: ?*C.QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn AddLine2(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) ?*C.QGraphicsLineItem {
        return C.QGraphicsScene_AddLine2(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem ```
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsScene_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn FocusItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsScene_FocusItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem ```
    pub fn SetFocusItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsScene_SetFocusItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QGraphicsScene_HasFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QGraphicsScene_SetFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QGraphicsScene_ClearFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene, enabled: bool ```
    pub fn SetStickyFocus(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsScene_SetStickyFocus(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn StickyFocus(self: ?*anyopaque) bool {
        return C.QGraphicsScene_StickyFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn MouseGrabberItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsScene_MouseGrabberItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn BackgroundBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QGraphicsScene_BackgroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
    ///
    /// ``` self: ?*C.QGraphicsScene, brush: ?*C.QBrush ```
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QGraphicsScene_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ForegroundBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QGraphicsScene_ForegroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
    ///
    /// ``` self: ?*C.QGraphicsScene, brush: ?*C.QBrush ```
    pub fn SetForegroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QGraphicsScene_SetForegroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// ``` self: ?*C.QGraphicsScene, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QGraphicsScene_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QGraphicsScene_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) ?*C.QVariant {
        return C.QGraphicsScene_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn Views(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsView {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Views(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsView, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsView = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn Update(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsScene_Update(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn Invalidate(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        C.QGraphicsScene_Invalidate(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QGraphicsScene_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
    ///
    /// ``` self: ?*C.QGraphicsScene, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QGraphicsScene_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QGraphicsScene_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
    ///
    /// ``` self: ?*C.QGraphicsScene, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QGraphicsScene_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QGraphicsScene_Palette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
    ///
    /// ``` self: ?*C.QGraphicsScene, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QGraphicsScene_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QGraphicsScene_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ActivePanel(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsScene_ActivePanel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem ```
    pub fn SetActivePanel(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsScene_SetActivePanel(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ActiveWindow(self: ?*anyopaque) ?*C.QGraphicsWidget {
        return C.QGraphicsScene_ActiveWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
    ///
    /// ``` self: ?*C.QGraphicsScene, widget: ?*C.QGraphicsWidget ```
    pub fn SetActiveWindow(self: ?*anyopaque, widget: ?*anyopaque) void {
        C.QGraphicsScene_SetActiveWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem, event: ?*C.QEvent ```
    pub fn SendEvent(self: ?*anyopaque, item: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsScene_SendEvent(@ptrCast(self), @ptrCast(item), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn MinimumRenderSize(self: ?*anyopaque) f64 {
        return C.QGraphicsScene_MinimumRenderSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
    ///
    /// ``` self: ?*C.QGraphicsScene, minSize: f64 ```
    pub fn SetMinimumRenderSize(self: ?*anyopaque, minSize: f64) void {
        C.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self), @floatCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn FocusOnTouch(self: ?*anyopaque) bool {
        return C.QGraphicsScene_FocusOnTouch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
    ///
    /// ``` self: ?*C.QGraphicsScene, enabled: bool ```
    pub fn SetFocusOnTouch(self: ?*anyopaque, enabled: bool) void {
        C.QGraphicsScene_SetFocusOnTouch(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Update2(self: ?*anyopaque) void {
        C.QGraphicsScene_Update2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Invalidate2(self: ?*anyopaque) void {
        C.QGraphicsScene_Invalidate2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Advance(self: ?*anyopaque) void {
        C.QGraphicsScene_Advance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        C.QGraphicsScene_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QGraphicsScene_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsScene_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsScene_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsScene_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// ``` self: ?*C.QGraphicsScene, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsScene_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsScene_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGraphicsScene_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneHelpEvent ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_HelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneHelpEvent) callconv(.c) void ```
    pub fn OnHelpEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnHelpEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneHelpEvent ```
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseHelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QPainter, ?*C.QRectF) callconv(.c) void ```
    pub fn OnDrawBackground(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDrawBackground(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn DrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_DrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QPainter, ?*C.QRectF) callconv(.c) void ```
    pub fn OnDrawForeground(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDrawForeground(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, rect: ?*C.QRectF ```
    pub fn QBaseDrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// ``` self: ?*C.QGraphicsScene, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QGraphicsScene_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsScene, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QGraphicsScene_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ``` self: ?*C.QGraphicsScene, region: []?*C.QRectF ```
    pub fn Changed(self: ?*anyopaque, region: []?*C.QRectF) void {
        const region_list = C.struct_libqt_list{
            .len = region.len,
            .data = @ptrCast(region.ptr),
        };
        C.QGraphicsScene_Changed(@ptrCast(self), region_list);
    }

    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, []?*C.QRectF) callconv(.c) void ```
    pub fn OnChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QRectF) callconv(.c) void) void {
        C.QGraphicsScene_Connect_Changed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn SceneRectChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_SceneRectChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QRectF) callconv(.c) void ```
    pub fn OnSceneRectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        C.QGraphicsScene_SelectionChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ``` self: ?*C.QGraphicsScene, newFocus: ?*C.QGraphicsItem, oldFocus: ?*C.QGraphicsItem, reason: qnamespace_enums.FocusReason ```
    pub fn FocusItemChanged(self: ?*anyopaque, newFocus: ?*anyopaque, oldFocus: ?*anyopaque, reason: i64) void {
        C.QGraphicsScene_FocusItemChanged(@ptrCast(self), @ptrCast(newFocus), @ptrCast(oldFocus), @intCast(reason));
    }

    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QGraphicsItem, ?*C.QGraphicsItem, qnamespace_enums.FocusReason) callconv(.c) void ```
    pub fn OnFocusItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsScene_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsScene_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, target: ?*C.QRectF ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        C.QGraphicsScene_Render2(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, target: ?*C.QRectF, source: ?*C.QRectF ```
    pub fn Render3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        C.QGraphicsScene_Render3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: ?*C.QGraphicsScene, painter: ?*C.QPainter, target: ?*C.QRectF, source: ?*C.QRectF, aspectRatioMode: qnamespace_enums.AspectRatioMode ```
    pub fn Render4(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque, aspectRatioMode: i64) void {
        C.QGraphicsScene_Render4(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source), @intCast(aspectRatioMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items1(self: ?*anyopaque, order: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items1(@ptrCast(self), @intCast(order));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, pos: ?*C.QPointF, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items22(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items22(@ptrCast(self), @ptrCast(pos), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, pos: ?*C.QPointF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items3(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items3(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, pos: ?*C.QPointF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: ?*C.QTransform, allocator: std.mem.Allocator ```
    pub fn Items4(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items4(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items23(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items23(@ptrCast(self), @ptrCast(rect), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items32(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items32(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: ?*C.QTransform, allocator: std.mem.Allocator ```
    pub fn Items42(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items42(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items25(self: ?*anyopaque, path: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items25(@ptrCast(self), @ptrCast(path), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items34(self: ?*anyopaque, path: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items34(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: ?*C.QTransform, allocator: std.mem.Allocator ```
    pub fn Items44(self: ?*anyopaque, path: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items44(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: ?*C.QTransform, allocator: std.mem.Allocator ```
    pub fn Items7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_Items7(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems2(self: ?*anyopaque, item: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []?*C.QGraphicsItem {
        const _arr: C.struct_libqt_list = C.QGraphicsScene_CollidingItems2(@ptrCast(self), @ptrCast(item), @intCast(mode));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGraphicsItem, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation ```
    pub fn SetSelectionArea2(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64) void {
        C.QGraphicsScene_SetSelectionArea2(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn SetSelectionArea3(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64, mode: i64) void {
        C.QGraphicsScene_SetSelectionArea3(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation, mode: qnamespace_enums.ItemSelectionMode, deviceTransform: ?*C.QTransform ```
    pub fn SetSelectionArea4(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64, mode: i64, deviceTransform: ?*anyopaque) void {
        C.QGraphicsScene_SetSelectionArea4(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, pen: ?*C.QPen ```
    pub fn AddEllipse22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, pen: ?*C.QPen, brush: ?*C.QBrush ```
    pub fn AddEllipse3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: ?*C.QGraphicsScene, line: ?*C.QLineF, pen: ?*C.QPen ```
    pub fn AddLine22(self: ?*anyopaque, line: ?*anyopaque, pen: ?*anyopaque) ?*C.QGraphicsLineItem {
        return C.QGraphicsScene_AddLine22(@ptrCast(self), @ptrCast(line), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, pen: ?*C.QPen ```
    pub fn AddPath2(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) ?*C.QGraphicsPathItem {
        return C.QGraphicsScene_AddPath2(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: ?*C.QGraphicsScene, path: ?*C.QPainterPath, pen: ?*C.QPen, brush: ?*C.QBrush ```
    pub fn AddPath3(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) ?*C.QGraphicsPathItem {
        return C.QGraphicsScene_AddPath3(@ptrCast(self), @ptrCast(path), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, pen: ?*C.QPen ```
    pub fn AddRect22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, pen: ?*C.QPen, brush: ?*C.QBrush ```
    pub fn AddRect3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ``` self: ?*C.QGraphicsScene, text: []const u8, font: ?*C.QFont ```
    pub fn AddText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) ?*C.QGraphicsTextItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QGraphicsScene_AddText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ``` self: ?*C.QGraphicsScene, text: []const u8, font: ?*C.QFont ```
    pub fn AddSimpleText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) ?*C.QGraphicsSimpleTextItem {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QGraphicsScene_AddSimpleText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ``` self: ?*C.QGraphicsScene, widget: ?*C.QWidget, wFlags: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, widget: ?*anyopaque, wFlags: i64) ?*C.QGraphicsProxyWidget {
        return C.QGraphicsScene_AddWidget2(@ptrCast(self), @ptrCast(widget), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: ?*C.QPen ```
    pub fn AddEllipse5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: ?*C.QPen, brush: ?*C.QBrush ```
    pub fn AddEllipse6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) ?*C.QGraphicsEllipseItem {
        return C.QGraphicsScene_AddEllipse6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: ?*C.QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64, pen: ?*C.QPen ```
    pub fn AddLine5(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64, pen: ?*anyopaque) ?*C.QGraphicsLineItem {
        return C.QGraphicsScene_AddLine5(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: ?*C.QPen ```
    pub fn AddRect5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: ?*C.QPen, brush: ?*C.QBrush ```
    pub fn AddRect6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) ?*C.QGraphicsRectItem {
        return C.QGraphicsScene_AddRect6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ``` self: ?*C.QGraphicsScene, item: ?*C.QGraphicsItem, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocusItem2(self: ?*anyopaque, item: ?*anyopaque, focusReason: i64) void {
        C.QGraphicsScene_SetFocusItem2(@ptrCast(self), @ptrCast(item), @intCast(focusReason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ``` self: ?*C.QGraphicsScene, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i64) void {
        C.QGraphicsScene_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, layers: i32 ```
    pub fn Invalidate5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, layers: i64) void {
        C.QGraphicsScene_Invalidate5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(layers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF ```
    pub fn Invalidate1(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsScene_Invalidate1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsScene, rect: ?*C.QRectF, layers: i32 ```
    pub fn Invalidate22(self: ?*anyopaque, rect: ?*anyopaque, layers: i64) void {
        C.QGraphicsScene_Invalidate22(@ptrCast(self), @ptrCast(rect), @intCast(layers));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QGraphicsScene, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGraphicsScene, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGraphicsScene, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsScene, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGraphicsScene, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QGraphicsScene, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsScene, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsScene, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsScene, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGraphicsScene, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGraphicsScene, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGraphicsScene, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsScene, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsScene, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsScene, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGraphicsScene_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsScene_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsScene_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsScene_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGraphicsScene_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsScene_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsScene_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QGraphicsScene_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QGraphicsScene_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsScene_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGraphicsScene_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGraphicsScene_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsScene_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGraphicsScene_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QGraphicsScene_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsScene_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGraphicsScene_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsScene, slot: fn (?*C.QGraphicsScene, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGraphicsScene_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGraphicsScene ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGraphicsScene_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscene.html#types
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
