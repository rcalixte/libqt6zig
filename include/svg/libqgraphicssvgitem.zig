const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html
pub const qgraphicssvgitem = struct {
    /// New constructs a new QGraphicsSvgItem object.
    ///
    ///
    pub fn New() QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new();
    }

    /// New2 constructs a new QGraphicsSvgItem object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New2(fileName: []const u8) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QGraphicsSvgItem_new2(fileName_str);
    }

    /// New3 constructs a new QGraphicsSvgItem object.
    ///
    /// ``` parentItem: QtC.QGraphicsItem ```
    pub fn New3(parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new3(@ptrCast(parentItem));
    }

    /// New4 constructs a new QGraphicsSvgItem object.
    ///
    /// ``` fileName: []const u8, parentItem: QtC.QGraphicsItem ```
    pub fn New4(fileName: []const u8, parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QGraphicsSvgItem_new4(fileName_str, @ptrCast(parentItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsSvgItem_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsSvgItem, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsSvgItem_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsSvgItem, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsSvgItem, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsSvgItem_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, renderer: QtC.QSvgRenderer ```
    pub fn SetSharedRenderer(self: ?*anyopaque, renderer: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetSharedRenderer(@ptrCast(self), @ptrCast(renderer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Renderer(self: ?*anyopaque) QtC.QSvgRenderer {
        return qtc.QGraphicsSvgItem_Renderer(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, id: []const u8 ```
    pub fn SetElementId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGraphicsSvgItem_SetElementId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn ElementId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsSvgItem_ElementId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ElementId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, cachingEnabled: bool ```
    pub fn SetCachingEnabled(self: ?*anyopaque, cachingEnabled: bool) void {
        qtc.QGraphicsSvgItem_SetCachingEnabled(@ptrCast(self), cachingEnabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsCachingEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsCachingEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, size: QtC.QSize ```
    pub fn SetMaximumCacheSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetMaximumCacheSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn MaximumCacheSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGraphicsSvgItem_MaximumCacheSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsSvgItem_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsSvgItem_OnBoundingRect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsSvgItem_QBaseBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsSvgItem, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) i32 ```
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseType(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsSvgItem_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsSvgItem_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ParentChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn EnabledChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn XChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn YChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ZChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnZChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ScaleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnChildrenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn WidthChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn HeightChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, name: []const u8 ```
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
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicssvgitem.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsSvgItem, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicssvgitem.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicssvgitem.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Scene(self: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ParentItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn TopLevelItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ParentObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Window(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Panel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, parent: QtC.QGraphicsItem ```
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn ChildItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicssvgitem.ChildItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsWidget(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ToGraphicsObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ToGraphicsObject2(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Group(self: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, group: QtC.QGraphicsItemGroup ```
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    ///
    /// Returns: ``` flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, flag: qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, flags: flag of qgraphicsitem_enums.GraphicsItemFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    ///
    /// Returns: ``` qgraphicsitem_enums.CacheMode ```
    pub fn CacheMode(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, mode: qgraphicsitem_enums.CacheMode ```
    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    ///
    /// Returns: ``` qgraphicsitem_enums.PanelModality ```
    pub fn PanelModality(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, panelModality: qgraphicsitem_enums.PanelModality ```
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @intCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn HasCursor(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, parent: QtC.QGraphicsItem ```
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, selected: bool ```
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @intCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, enabled: bool ```
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, enabled: bool ```
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, enabled: bool ```
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, enabled: bool ```
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, active: bool ```
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem ```
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn FocusScopeItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn UngrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), @floatCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64 ```
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, dx: f64, dy: f64 ```
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn EnsureVisible(self: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn SceneTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, viewportTransform: QtC.QTransform ```
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem ```
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, matrix: QtC.QTransform ```
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, angle: f64 ```
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), @floatCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn Transformations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsTransform, _arr.len) catch @panic("qgraphicssvgitem.Transformations: Memory allocation failed");
        const _data: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, transformations: []QtC.QGraphicsTransform ```
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn TransformOriginPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, origin: QtC.QPointF ```
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, ax: f64, ay: f64 ```
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @floatCast(ax), @floatCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ZValue(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, z: f64 ```
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), @floatCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, sibling: QtC.QGraphicsItem ```
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ChildrenBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn SceneBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsClipped(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, allocator: std.mem.Allocator ```
    pub fn CollidingItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicssvgitem.CollidingItems: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsObscured(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, itemToDeviceTransform: QtC.QTransform ```
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, granularity: f64 ```
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @floatCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, width: f64, height: f64 ```
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(width), @floatCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, dx: f64, dy: f64 ```
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath ```
    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath ```
    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, point: QtC.QPointF ```
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, rect: QtC.QRectF ```
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, path: QtC.QPainterPath ```
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath ```
    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath ```
    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64 ```
    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64 ```
    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, x: f64, y: f64 ```
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64 ```
    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64 ```
    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64 ```
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, child: QtC.QGraphicsItem ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem ```
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, key: i32 ```
    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), @intCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, key: i32, value: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, filterItem: QtC.QGraphicsItem ```
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, filterItem: QtC.QGraphicsItem ```
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, flag: qgraphicsitem_enums.GraphicsItemFlag, enabled: bool ```
    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @intCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, mode: qgraphicsitem_enums.CacheMode, cacheSize: QtC.QSize ```
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @intCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, focusReason: qnamespace_enums.FocusReason ```
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @intCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF, xmargin: i32 ```
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64, xmargin: i32 ```
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32 ```
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h), @intCast(xmargin), @intCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem, ok: *bool ```
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, matrix: QtC.QTransform, combine: bool ```
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, mode: qnamespace_enums.ItemSelectionMode, allocator: std.mem.Allocator ```
    pub fn CollidingItems1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicssvgitem.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, rect: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ``` self: QtC.QGraphicsSvgItem, dx: f64, dy: f64, rect: QtC.QRectF ```
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), @floatCast(dx), @floatCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, ev: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_Event(@ptrCast(self), @ptrCast(ev));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, ev: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, ev: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, phase: i32 ```
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsSvgItem_Advance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, phase: i32 ```
    pub fn QBaseAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsSvgItem_QBaseAdvance(@ptrCast(self), @intCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, phase: i32) callconv(.c) void ```
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAdvance(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Shape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_Shape(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseShape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_QBaseShape(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnShape(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSvgItem_OnShape(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_Contains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, point: QtC.QPointF ```
    pub fn QBaseContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, point: QtC.QPointF) callconv(.c) bool ```
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnContains(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_CollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_QBaseCollidesWithItem(@ptrCast(self), @ptrCast(other), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_CollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode ```
    pub fn QBaseCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_QBaseCollidesWithPath(@ptrCast(self), @ptrCast(path), @intCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool ```
    pub fn OnCollidesWithPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem ```
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem ```
    pub fn QBaseIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem) callconv(.c) bool ```
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsObscuredBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn OpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_OpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseOpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_QBaseOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) QtC.QPainterPath ```
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSvgItem_OnOpaqueArea(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, watched: QtC.QGraphicsItem, event: QtC.QEvent ```
    pub fn QBaseSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, watched: QtC.QGraphicsItem, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QEvent ```
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QEvent ```
    pub fn QBaseSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void ```
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, query: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsSvgItem_InputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, query: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, query: i64) QtC.QVariant {
        return qtc.QGraphicsSvgItem_QBaseInputMethodQuery(@ptrCast(self), @intCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_ItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant ```
    pub fn QBaseItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_QBaseItemChange(@ptrCast(self), @intCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnItemChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension ```
    pub fn SupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsSvgItem_SupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension ```
    pub fn QBaseSupportsExtension(self: ?*anyopaque, extension: i64) bool {
        return qtc.QGraphicsSvgItem_QBaseSupportsExtension(@ptrCast(self), @intCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension) callconv(.c) bool ```
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSupportsExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn SetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant ```
    pub fn QBaseSetExtension(self: ?*anyopaque, extension: i64, variant: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseSetExtension(@ptrCast(self), @intCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnSetExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, variant: QtC.QVariant ```
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_Extension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, variant: QtC.QVariant ```
    pub fn QBaseExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_QBaseExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, variant: QtC.QVariant) callconv(.c) QtC.QVariant ```
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnExtension(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsSvgItem_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsSvgItem_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsSvgItem_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn AddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_AddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseAddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) void ```
    pub fn OnAddToIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAddToIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_RemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBaseRemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBaseRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) void ```
    pub fn OnRemoveFromIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnRemoveFromIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_PrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QBasePrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_QBasePrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn () callconv(.c) void ```
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPrepareGeometryChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsSvgItem, callback: *const fn (self: QtC.QGraphicsSvgItem, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#dtor.QGraphicsSvgItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSvgItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html#types
pub const enums = struct {
    pub const QGraphicsSvgItem = enum {
        pub const Type: i32 = 13;
    };
};
