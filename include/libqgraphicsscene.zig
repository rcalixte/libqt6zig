const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicsscene_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicsscene.html
pub const qgraphicsscene = struct {
    /// New constructs a new QGraphicsScene object.
    ///
    ///
    pub fn New() QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new();
    }

    /// New2 constructs a new QGraphicsScene object.
    ///
    /// ``` sceneRect: QtC.QRectF ```
    pub fn New2(sceneRect: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new2(@ptrCast(sceneRect));
    }

    /// New3 constructs a new QGraphicsScene object.
    ///
    /// ``` x: f64, y: f64, width: f64, height: f64 ```
    pub fn New3(x: f64, y: f64, width: f64, height: f64) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new3(@floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// New4 constructs a new QGraphicsScene object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new4(@ptrCast(parent));
    }

    /// New5 constructs a new QGraphicsScene object.
    ///
    /// ``` sceneRect: QtC.QRectF, parent: QtC.QObject ```
    pub fn New5(sceneRect: ?*anyopaque, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new5(@ptrCast(sceneRect), @ptrCast(parent));
    }

    /// New6 constructs a new QGraphicsScene object.
    ///
    /// ``` x: f64, y: f64, width: f64, height: f64, parent: QtC.QObject ```
    pub fn New6(x: f64, y: f64, width: f64, height: f64, parent: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsScene_new6(@floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsScene_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsScene, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsScene_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsScene_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SceneRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsScene_SceneRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn SetSceneRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSceneRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn SetSceneRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_SetSceneRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter ```
    pub fn Render(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsScene_Render(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    ///
    /// Returns: ``` qgraphicsscene_enums.ItemIndexMethod ```
    pub fn ItemIndexMethod(self: ?*anyopaque) i64 {
        return qtc.QGraphicsScene_ItemIndexMethod(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
    ///
    /// ``` self: QtC.QGraphicsScene, method: qgraphicsscene_enums.ItemIndexMethod ```
    pub fn SetItemIndexMethod(self: ?*anyopaque, method: i64) void {
        qtc.QGraphicsScene_SetItemIndexMethod(@ptrCast(self), @intCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn BspTreeDepth(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_BspTreeDepth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
    ///
    /// ``` self: QtC.QGraphicsScene, depth: i32 ```
    pub fn SetBspTreeDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QGraphicsScene_SetBspTreeDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ItemsBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsScene_ItemsBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, pos: QtC.QPointF, allocator: std.mem.Allocator ```
    pub fn Items2(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items2(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, allocator: std.mem.Allocator ```
    pub fn Items3(self: ?*anyopaque, rect: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items3(@ptrCast(self), @ptrCast(rect));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items3: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, allocator: std.mem.Allocator ```
    pub fn Items5(self: ?*anyopaque, path: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items5(@ptrCast(self), @ptrCast(path));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items5: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i64, order: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(mode), @intCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items6: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, item: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems(@ptrCast(self), @ptrCast(item));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsScene, pos: QtC.QPointF, deviceTransform: QtC.QTransform ```
    pub fn ItemAt(self: ?*anyopaque, pos: ?*anyopaque, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt(@ptrCast(self), @ptrCast(pos), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, deviceTransform: QtC.QTransform ```
    pub fn ItemAt2(self: ?*anyopaque, x: f64, y: f64, deviceTransform: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ItemAt2(@ptrCast(self), @floatCast(x), @floatCast(y), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_SelectedItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SelectionArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsScene_SelectionArea(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, deviceTransform: QtC.QTransform ```
    pub fn SetSelectionArea(self: ?*anyopaque, path: ?*anyopaque, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea(@ptrCast(self), @ptrCast(path), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath ```
    pub fn SetSelectionArea2(self: ?*anyopaque, path: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea2(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
    ///
    /// ``` self: QtC.QGraphicsScene, items: []QtC.QGraphicsItem ```
    pub fn CreateItemGroup(self: ?*anyopaque, items: []?*anyopaque) QtC.QGraphicsItemGroup {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return qtc.QGraphicsScene_CreateItemGroup(@ptrCast(self), items_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
    ///
    /// ``` self: QtC.QGraphicsScene, group: QtC.QGraphicsItemGroup ```
    pub fn DestroyItemGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsScene_DestroyItemGroup(@ptrCast(self), @ptrCast(group));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn AddEllipse(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: QtC.QGraphicsScene, line: QtC.QLineF ```
    pub fn AddLine(self: ?*anyopaque, line: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine(@ptrCast(self), @ptrCast(line));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath ```
    pub fn AddPath(self: ?*anyopaque, path: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath(@ptrCast(self), @ptrCast(path));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
    ///
    /// ``` self: QtC.QGraphicsScene, pixmap: QtC.QPixmap ```
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) QtC.QGraphicsPixmapItem {
        return qtc.QGraphicsScene_AddPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn AddRect(self: ?*anyopaque, rect: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ``` self: QtC.QGraphicsScene, text: []const u8 ```
    pub fn AddText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ``` self: QtC.QGraphicsScene, text: []const u8 ```
    pub fn AddSimpleText(self: ?*anyopaque, text: []const u8) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddSimpleText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ``` self: QtC.QGraphicsScene, widget: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddEllipse2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: QtC.QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn AddLine2(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine2(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn AddRect2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem ```
    pub fn RemoveItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_RemoveItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_FocusItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem ```
    pub fn SetFocusItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFocusItem(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_HasFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsScene_ClearFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
    ///
    /// ``` self: QtC.QGraphicsScene, enabled: bool ```
    pub fn SetStickyFocus(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetStickyFocus(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn StickyFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_StickyFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn MouseGrabberItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_MouseGrabberItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn BackgroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QGraphicsScene_BackgroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
    ///
    /// ``` self: QtC.QGraphicsScene, brush: QtC.QBrush ```
    pub fn SetBackgroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetBackgroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ForegroundBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QGraphicsScene_ForegroundBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
    ///
    /// ``` self: QtC.QGraphicsScene, brush: QtC.QBrush ```
    pub fn SetForegroundBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QGraphicsScene_SetForegroundBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// ``` self: QtC.QGraphicsScene, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsScene_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsScene_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsScene_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn Views(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsView {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Views(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsView, _arr.len) catch @panic("qgraphicsscene.Views: Memory allocation failed");
        const _data: [*]QtC.QGraphicsView = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn Update(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Update(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64 ```
    pub fn Invalidate(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsScene_Invalidate(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QGraphicsScene_Style(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
    ///
    /// ``` self: QtC.QGraphicsScene, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QGraphicsScene_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QGraphicsScene_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
    ///
    /// ``` self: QtC.QGraphicsScene, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGraphicsScene_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QGraphicsScene_Palette(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
    ///
    /// ``` self: QtC.QGraphicsScene, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QGraphicsScene_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ActivePanel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsScene_ActivePanel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem ```
    pub fn SetActivePanel(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActivePanel(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ActiveWindow(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsScene_ActiveWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
    ///
    /// ``` self: QtC.QGraphicsScene, widget: QtC.QGraphicsWidget ```
    pub fn SetActiveWindow(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsScene_SetActiveWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn SendEvent(self: ?*anyopaque, item: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_SendEvent(@ptrCast(self), @ptrCast(item), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn MinimumRenderSize(self: ?*anyopaque) f64 {
        return qtc.QGraphicsScene_MinimumRenderSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
    ///
    /// ``` self: QtC.QGraphicsScene, minSize: f64 ```
    pub fn SetMinimumRenderSize(self: ?*anyopaque, minSize: f64) void {
        qtc.QGraphicsScene_SetMinimumRenderSize(@ptrCast(self), @floatCast(minSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn FocusOnTouch(self: ?*anyopaque) bool {
        return qtc.QGraphicsScene_FocusOnTouch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
    ///
    /// ``` self: QtC.QGraphicsScene, enabled: bool ```
    pub fn SetFocusOnTouch(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsScene_SetFocusOnTouch(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Update2(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Update2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Invalidate2(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Invalidate2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Advance(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Advance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QGraphicsScene_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// ``` self: QtC.QGraphicsScene, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsScene_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneHelpEvent ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_HelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneHelpEvent) callconv(.c) void ```
    pub fn OnHelpEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnHelpEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneHelpEvent ```
    pub fn QBaseHelpEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseHelpEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn DrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnDrawBackground(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawBackground(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn QBaseDrawBackground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDrawBackground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn DrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_DrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnDrawForeground(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDrawForeground(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn QBaseDrawForeground(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDrawForeground(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// ``` self: QtC.QGraphicsScene, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsScene, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QGraphicsScene_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ``` self: QtC.QGraphicsScene, region: []QtC.QRectF ```
    pub fn Changed(self: ?*anyopaque, region: []QtC.QRectF) void {
        const region_list = qtc.libqt_list{
            .len = region.len,
            .data = @ptrCast(region.ptr),
        };
        qtc.QGraphicsScene_Changed(@ptrCast(self), region_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, region: []QtC.QRectF) callconv(.c) void ```
    pub fn OnChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []QtC.QRectF) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_Changed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn SceneRectChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_SceneRectChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, rect: QtC.QRectF) callconv(.c) void ```
    pub fn OnSceneRectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SceneRectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QGraphicsScene_SelectionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ``` self: QtC.QGraphicsScene, newFocus: QtC.QGraphicsItem, oldFocus: QtC.QGraphicsItem, reason: qnamespace_enums.FocusReason ```
    pub fn FocusItemChanged(self: ?*anyopaque, newFocus: ?*anyopaque, oldFocus: ?*anyopaque, reason: i64) void {
        qtc.QGraphicsScene_FocusItemChanged(@ptrCast(self), @ptrCast(newFocus), @ptrCast(oldFocus), @intCast(reason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, newFocus: QtC.QGraphicsItem, oldFocus: QtC.QGraphicsItem, reason: qnamespace_enums.FocusReason) callconv(.c) void ```
    pub fn OnFocusItemChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsScene_Connect_FocusItemChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsScene_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsScene_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, target: QtC.QRectF ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QGraphicsScene_Render2(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, target: QtC.QRectF, source: QtC.QRectF ```
    pub fn Render3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsScene_Render3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
    ///
    /// ``` self: QtC.QGraphicsScene, painter: QtC.QPainter, target: QtC.QRectF, source: QtC.QRectF, aspectRatioMode: qnamespace_enums.AspectRatioMode ```
    pub fn Render4(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque, aspectRatioMode: i64) void {
        qtc.QGraphicsScene_Render4(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source), @intCast(aspectRatioMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items1(self: ?*anyopaque, order: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items1(@ptrCast(self), @intCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, pos: QtC.QPointF, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items22(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items22(@ptrCast(self), @ptrCast(pos), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items22: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, pos: QtC.QPointF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items32(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items32(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items32: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, pos: QtC.QPointF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: QtC.QTransform, allocator: std.mem.Allocator ```
    pub fn Items42(self: ?*anyopaque, pos: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items42(@ptrCast(self), @ptrCast(pos), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items42: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items23(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items23(@ptrCast(self), @ptrCast(rect), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items23: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items33(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items33(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items33: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: QtC.QTransform, allocator: std.mem.Allocator ```
    pub fn Items43(self: ?*anyopaque, rect: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items43(@ptrCast(self), @ptrCast(rect), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items43: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn Items25(self: ?*anyopaque, path: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items25(@ptrCast(self), @ptrCast(path), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items25: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, allocator: std.mem.Allocator ```
    pub fn Items35(self: ?*anyopaque, path: ?*anyopaque, mode: i64, order: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items35(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items35: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: QtC.QTransform, allocator: std.mem.Allocator ```
    pub fn Items45(self: ?*anyopaque, path: ?*anyopaque, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items45(@ptrCast(self), @ptrCast(path), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items45: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, mode: qnamespace_enums.ItemSelectionMode, order: qnamespace_enums.SortOrder, deviceTransform: QtC.QTransform, allocator: std.mem.Allocator ```
    pub fn Items7(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, mode: i64, order: i64, deviceTransform: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_Items7(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(mode), @intCast(order), @ptrCast(deviceTransform));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.Items7: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems2(self: ?*anyopaque, item: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsScene_CollidingItems2(@ptrCast(self), @ptrCast(item), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicsscene.CollidingItems2: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation ```
    pub fn SetSelectionArea22(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64) void {
        qtc.QGraphicsScene_SetSelectionArea22(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn SetSelectionArea3(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64, mode: i64) void {
        qtc.QGraphicsScene_SetSelectionArea3(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, selectionOperation: qnamespace_enums.ItemSelectionOperation, mode: qnamespace_enums.ItemSelectionMode, deviceTransform: QtC.QTransform ```
    pub fn SetSelectionArea4(self: ?*anyopaque, path: ?*anyopaque, selectionOperation: i64, mode: i64, deviceTransform: ?*anyopaque) void {
        qtc.QGraphicsScene_SetSelectionArea4(@ptrCast(self), @ptrCast(path), @intCast(selectionOperation), @intCast(mode), @ptrCast(deviceTransform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, pen: QtC.QPen ```
    pub fn AddEllipse22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, pen: QtC.QPen, brush: QtC.QBrush ```
    pub fn AddEllipse3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: QtC.QGraphicsScene, line: QtC.QLineF, pen: QtC.QPen ```
    pub fn AddLine22(self: ?*anyopaque, line: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine22(@ptrCast(self), @ptrCast(line), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, pen: QtC.QPen ```
    pub fn AddPath2(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath2(@ptrCast(self), @ptrCast(path), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
    ///
    /// ``` self: QtC.QGraphicsScene, path: QtC.QPainterPath, pen: QtC.QPen, brush: QtC.QBrush ```
    pub fn AddPath3(self: ?*anyopaque, path: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsPathItem {
        return qtc.QGraphicsScene_AddPath3(@ptrCast(self), @ptrCast(path), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, pen: QtC.QPen ```
    pub fn AddRect22(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect22(@ptrCast(self), @ptrCast(rect), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, pen: QtC.QPen, brush: QtC.QBrush ```
    pub fn AddRect3(self: ?*anyopaque, rect: ?*anyopaque, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect3(@ptrCast(self), @ptrCast(rect), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
    ///
    /// ``` self: QtC.QGraphicsScene, text: []const u8, font: QtC.QFont ```
    pub fn AddText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
    ///
    /// ``` self: QtC.QGraphicsScene, text: []const u8, font: QtC.QFont ```
    pub fn AddSimpleText2(self: ?*anyopaque, text: []const u8, font: ?*anyopaque) QtC.QGraphicsSimpleTextItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QGraphicsScene_AddSimpleText2(@ptrCast(self), text_str, @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
    ///
    /// ``` self: QtC.QGraphicsScene, widget: QtC.QWidget, wFlags: flag of qnamespace_enums.WindowType ```
    pub fn AddWidget2(self: ?*anyopaque, widget: ?*anyopaque, wFlags: i64) QtC.QGraphicsProxyWidget {
        return qtc.QGraphicsScene_AddWidget2(@ptrCast(self), @ptrCast(widget), @intCast(wFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: QtC.QPen ```
    pub fn AddEllipse5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: QtC.QPen, brush: QtC.QBrush ```
    pub fn AddEllipse6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsEllipseItem {
        return qtc.QGraphicsScene_AddEllipse6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
    ///
    /// ``` self: QtC.QGraphicsScene, x1: f64, y1: f64, x2: f64, y2: f64, pen: QtC.QPen ```
    pub fn AddLine5(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64, pen: ?*anyopaque) QtC.QGraphicsLineItem {
        return qtc.QGraphicsScene_AddLine5(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: QtC.QPen ```
    pub fn AddRect5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, pen: QtC.QPen, brush: QtC.QBrush ```
    pub fn AddRect6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, pen: ?*anyopaque, brush: ?*anyopaque) QtC.QGraphicsRectItem {
        return qtc.QGraphicsScene_AddRect6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @ptrCast(pen), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
    ///
    /// ``` self: QtC.QGraphicsScene, item: QtC.QGraphicsItem, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocusItem2(self: ?*anyopaque, item: ?*anyopaque, focusReason: i64) void {
        qtc.QGraphicsScene_SetFocusItem2(@ptrCast(self), @ptrCast(item), @intCast(focusReason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsScene, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i64) void {
        qtc.QGraphicsScene_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsScene, x: f64, y: f64, w: f64, h: f64, layers: flag of qgraphicsscene_enums.SceneLayer ```
    pub fn Invalidate5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, layers: i64) void {
        qtc.QGraphicsScene_Invalidate5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(layers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF ```
    pub fn Invalidate1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsScene_Invalidate1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
    ///
    /// ``` self: QtC.QGraphicsScene, rect: QtC.QRectF, layers: flag of qgraphicsscene_enums.SceneLayer ```
    pub fn Invalidate22(self: ?*anyopaque, rect: ?*anyopaque, layers: i64) void {
        qtc.QGraphicsScene_Invalidate22(@ptrCast(self), @ptrCast(rect), @intCast(layers));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsscene.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsScene, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsScene, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsScene, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsScene, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsScene, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsScene, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsScene, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsScene, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsScene, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsScene, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsScene, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsScene, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsScene, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsScene, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsScene, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsScene, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsScene, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsScene, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsScene_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsScene_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsScene_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsScene_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsScene_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsScene_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsScene_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsScene_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsScene_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsScene_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsScene_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsScene_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsScene, slot: fn (self: QtC.QGraphicsScene, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dtor.QGraphicsScene)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsScene ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsScene_Delete(@ptrCast(self));
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
