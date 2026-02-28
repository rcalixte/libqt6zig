const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html)
pub const qgraphicssvgitem = struct {
    /// New constructs a new QGraphicsSvgItem object.
    ///
    pub fn New() QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new();
    }

    /// New2 constructs a new QGraphicsSvgItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New2(fileName: []const u8) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QGraphicsSvgItem_new2(fileName_str);
    }

    /// New3 constructs a new QGraphicsSvgItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parentItem: QtC.QGraphicsItem `
    ///
    pub fn New3(parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        return qtc.QGraphicsSvgItem_new3(@ptrCast(parentItem));
    }

    /// New4 constructs a new QGraphicsSvgItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` parentItem: QtC.QGraphicsItem `
    ///
    pub fn New4(fileName: []const u8, parentItem: ?*anyopaque) QtC.QGraphicsSvgItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QGraphicsSvgItem_new4(fileName_str, @ptrCast(parentItem));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsSvgItem_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QGraphicsSvgItem_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsSvgItem_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsSvgItem_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsSvgItem_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsSvgItem_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` renderer: QtC.QSvgRenderer `
    ///
    pub fn SetSharedRenderer(self: ?*anyopaque, renderer: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetSharedRenderer(@ptrCast(self), @ptrCast(renderer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Renderer(self: ?*anyopaque) QtC.QSvgRenderer {
        return qtc.QGraphicsSvgItem_Renderer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetElementId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QGraphicsSvgItem_SetElementId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ElementId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsSvgItem_ElementId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ElementId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` cachingEnabled: bool `
    ///
    pub fn SetCachingEnabled(self: ?*anyopaque, cachingEnabled: bool) void {
        qtc.QGraphicsSvgItem_SetCachingEnabled(@ptrCast(self), cachingEnabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsCachingEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsCachingEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetMaximumCacheSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetMaximumCacheSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn MaximumCacheSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QGraphicsSvgItem_MaximumCacheSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsSvgItem_BoundingRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRectF `
    ///
    pub fn OnBoundingRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsSvgItem_OnBoundingRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBoundingRect` instead
    ///
    pub const QBaseBoundingRect = SuperBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsSvgItem_SuperBoundingRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, painter: QtC.QPainter, option: QtC.QStyleOptionGraphicsItem, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` option: QtC.QStyleOptionGraphicsItem `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SuperPaint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperType(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SuperType(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ParentChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn EnabledChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn XChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn YChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ZChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnZChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn RotationChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnRotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ScaleChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnScaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ChildrenChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnChildrenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn WidthChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn HeightChanged(self: ?*anyopaque) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i32, flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem) callconv(.c) void `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Scene(self: ?*anyopaque) QtC.QGraphicsScene {
        return qtc.QGraphicsItem_Scene(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ParentItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_ParentItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn TopLevelItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_TopLevelItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ParentObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ParentObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QGraphicsWidget {
        return qtc.QGraphicsItem_Window(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Panel(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_Panel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    pub fn SetParentItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsWidget(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ToGraphicsObject(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ToGraphicsObject2(self: ?*anyopaque) QtC.QGraphicsObject {
        return qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Group(self: ?*anyopaque) QtC.QGraphicsItemGroup {
        return qtc.QGraphicsItem_Group(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` group: QtC.QGraphicsItemGroup `
    ///
    pub fn SetGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlag(self: ?*anyopaque, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self), @bitCast(flag));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn CacheMode(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn SetCacheMode(self: ?*anyopaque, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn PanelModality(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn SetPanelModality(self: ?*anyopaque, panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self), @bitCast(panelModality));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsBlockedByModalPanel(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicssvgitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QGraphicsItem_Cursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` cursor: QtC.QCursor `
    ///
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn HasCursor(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` parent: QtC.QGraphicsItem `
    ///
    pub fn IsVisibleTo(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Show(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` selected: bool `
    ///
    pub fn SetSelected(self: ?*anyopaque, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self), selected);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn EffectiveOpacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self), @bitCast(opacity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` effect: QtC.QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn AcceptedMouseButtons(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetAcceptedMouseButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self), @bitCast(buttons));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn AcceptHoverEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptHoverEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn AcceptTouchEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAcceptTouchEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn FiltersChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFiltersChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn HandlesChildEvents(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetHandlesChildEvents(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self), active);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn FocusProxy(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SetFocusProxy(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn FocusItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn FocusScopeItem(self: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn UngrabMouse(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn UngrabKeyboard(self: ?*anyopaque) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_Pos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self), @bitCast(x));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_ScenePos(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsItem_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn SetPos2(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn MoveBy(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn EnsureVisible(self: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn EnsureVisible2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Transform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_Transform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SceneTransform(self: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_SceneTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` viewportTransform: QtC.QTransform `
    ///
    pub fn DeviceTransform(self: ?*anyopaque, viewportTransform: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_DeviceTransform(@ptrCast(self), @ptrCast(viewportTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    pub fn ItemTransform(self: ?*anyopaque, other: ?*anyopaque) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    pub fn SetTransform(self: ?*anyopaque, matrix: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransform(@ptrCast(self), @ptrCast(matrix));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ResetTransform(self: ?*anyopaque) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` angle: f64 `
    ///
    pub fn SetRotation(self: ?*anyopaque, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self), @bitCast(angle));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Rotation(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self), @bitCast(scale));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` transformations: []QtC.QGraphicsTransform `
    ///
    pub fn SetTransformations(self: ?*anyopaque, transformations: []?*anyopaque) void {
        const transformations_list = qtc.libqt_list{
            .len = transformations.len,
            .data = @ptrCast(transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self), transformations_list);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn TransformOriginPoint(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` origin: QtC.QPointF `
    ///
    pub fn SetTransformOriginPoint(self: ?*anyopaque, origin: ?*anyopaque) void {
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self), @ptrCast(origin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn SetTransformOriginPoint2(self: ?*anyopaque, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self), @bitCast(ax), @bitCast(ay));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ZValue(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` z: f64 `
    ///
    pub fn SetZValue(self: ?*anyopaque, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self), @bitCast(z));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` sibling: QtC.QGraphicsItem `
    ///
    pub fn StackBefore(self: ?*anyopaque, sibling: ?*anyopaque) void {
        qtc.QGraphicsItem_StackBefore(@ptrCast(self), @ptrCast(sibling));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ChildrenBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SceneBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsClipped(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn ClipPath(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_ClipPath(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsObscured(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn IsObscured2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` itemToDeviceTransform: QtC.QTransform `
    ///
    pub fn BoundingRegion(self: ?*anyopaque, itemToDeviceTransform: ?*anyopaque) QtC.QRegion {
        return qtc.QGraphicsItem_BoundingRegion(@ptrCast(self), @ptrCast(itemToDeviceTransform));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn BoundingRegionGranularity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` granularity: f64 `
    ///
    pub fn SetBoundingRegionGranularity(self: ?*anyopaque, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self), @bitCast(granularity));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsItem_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Update2(self: ?*anyopaque, x: f64, y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn Scroll(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapToScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectToScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapToScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapToScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromItem(self: ?*anyopaque, item: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromParent(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn MapFromScene(self: ?*anyopaque, point: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromItem(self: ?*anyopaque, item: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self), @ptrCast(item), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromParent(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn MapRectFromScene(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromItem4(self: ?*anyopaque, item: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromItem4(@ptrCast(self), @ptrCast(item), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromParent4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromParent4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    pub fn MapFromScene4(self: ?*anyopaque, path: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsItem_MapFromScene4(@ptrCast(self), @ptrCast(path));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToItem5(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToParent5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapToScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapToScene5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectToScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromItem5(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromItem5(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromParent5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromParent5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn MapFromScene5(self: ?*anyopaque, x: f64, y: f64) QtC.QPointF {
        return qtc.QGraphicsItem_MapFromScene5(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromItem2(self: ?*anyopaque, item: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self), @ptrCast(item), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromParent2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn MapRectFromScene2(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64) QtC.QRectF {
        return qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` child: QtC.QGraphicsItem `
    ///
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    pub fn CommonAncestorItem(self: ?*anyopaque, other: ?*anyopaque) QtC.QGraphicsItem {
        return qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn IsUnderMouse(self: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` key: i32 `
    ///
    pub fn Data(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QGraphicsItem_Data(@ptrCast(self), @bitCast(key));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetData(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QGraphicsItem_SetData(@ptrCast(self), @bitCast(key), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: ?*anyopaque) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self), @bitCast(hints));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` filterItem: QtC.QGraphicsItem `
    ///
    pub fn InstallSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` filterItem: QtC.QGraphicsItem `
    ///
    pub fn RemoveSceneEventFilter(self: ?*anyopaque, filterItem: ?*anyopaque) void {
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self), @ptrCast(filterItem));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlag2(self: ?*anyopaque, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self), @bitCast(flag), enabled);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QtC.QSize `
    ///
    pub fn SetCacheMode2(self: ?*anyopaque, mode: i32, cacheSize: ?*anyopaque) void {
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self), @bitCast(mode), @ptrCast(cacheSize));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` blockingPanel: *QtC.QGraphicsItem `
    ///
    pub fn IsBlockedByModalPanel1(self: ?*anyopaque, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self), @ptrCast(blockingPanel));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus1(self: ?*anyopaque, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self), @bitCast(focusReason));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn EnsureVisible1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn EnsureVisible22(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self), @ptrCast(rect), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn EnsureVisible3(self: ?*anyopaque, rect: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self), @ptrCast(rect), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
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
    pub fn EnsureVisible5(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
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
    pub fn EnsureVisible6(self: ?*anyopaque, x: f64, y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn ItemTransform2(self: ?*anyopaque, other: ?*anyopaque, ok: *bool) QtC.QTransform {
        return qtc.QGraphicsItem_ItemTransform2(@ptrCast(self), @ptrCast(other), @ptrCast(ok));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn SetTransform2(self: ?*anyopaque, matrix: ?*anyopaque, combine: bool) void {
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self), @ptrCast(matrix), combine);
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CollidingItems1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []QtC.QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QGraphicsItem, _arr.len) catch @panic("qgraphicssvgitem.CollidingItems1: Memory allocation failed");
        const _data: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn IsObscured1(self: ?*anyopaque, rect: ?*anyopaque) bool {
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Update1(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Update1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn Scroll3(self: ?*anyopaque, dx: f64, dy: f64, rect: ?*anyopaque) void {
        qtc.QGraphicsItem_Scroll3(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(rect));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` ev: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_Event(@ptrCast(self), @ptrCast(ev));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` ev: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, ev: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn Advance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsSvgItem_Advance(@ptrCast(self), @bitCast(phase));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` phase: i32 `
    ///
    pub fn SuperAdvance(self: ?*anyopaque, phase: i32) void {
        qtc.QGraphicsSvgItem_SuperAdvance(@ptrCast(self), @bitCast(phase));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, phase: i32) callconv(.c) void `
    ///
    pub fn OnAdvance(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAdvance(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Shape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_Shape(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperShape(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_SuperShape(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainterPath `
    ///
    pub fn OnShape(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSvgItem_OnShape(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Contains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_Contains(@ptrCast(self), @ptrCast(point));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn SuperContains(self: ?*anyopaque, point: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperContains(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, point: QtC.QPointF) callconv(.c) bool `
    ///
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnContains(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_CollidesWithItem(@ptrCast(self), @ptrCast(other), @bitCast(mode));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` other: QtC.QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithItem(self: ?*anyopaque, other: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_SuperCollidesWithItem(@ptrCast(self), @ptrCast(other), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, other: QtC.QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn CollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_CollidesWithPath(@ptrCast(self), @ptrCast(path), @bitCast(mode));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` path: QtC.QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn SuperCollidesWithPath(self: ?*anyopaque, path: ?*anyopaque, mode: i32) bool {
        return qtc.QGraphicsSvgItem_SuperCollidesWithPath(@ptrCast(self), @ptrCast(path), @bitCast(mode));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, path: QtC.QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn OnCollidesWithPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnCollidesWithPath(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn IsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsObscuredBy(@ptrCast(self), @ptrCast(item));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` item: QtC.QGraphicsItem `
    ///
    pub fn SuperIsObscuredBy(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperIsObscuredBy(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, item: QtC.QGraphicsItem) callconv(.c) bool `
    ///
    pub fn OnIsObscuredBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsObscuredBy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn OpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_OpaqueArea(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperOpaqueArea(self: ?*anyopaque) QtC.QPainterPath {
        return qtc.QGraphicsSvgItem_SuperOpaqueArea(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainterPath `
    ///
    pub fn OnOpaqueArea(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainterPath) void {
        qtc.QGraphicsSvgItem_OnOpaqueArea(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` watched: QtC.QGraphicsItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` watched: QtC.QGraphicsItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperSceneEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperSceneEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, watched: QtC.QGraphicsItem, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SceneEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperSceneEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperSceneEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnSceneEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSceneEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnContextMenuEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragEnterEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DragMoveEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDragMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_DropEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnDropEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_FocusInEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_FocusOutEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverEnterEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperHoverEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverEnterEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverMoveEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperHoverMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn HoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_HoverLeaveEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn SuperHoverLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperHoverLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn OnHoverLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnHoverLeaveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_KeyPressEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MousePressEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_WheelEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_InputMethodEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` event: QtC.QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, event: QtC.QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnInputMethodEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QGraphicsSvgItem_InputMethodQuery(@ptrCast(self), @bitCast(query));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: ?*anyopaque, query: i32) QtC.QVariant {
        return qtc.QGraphicsSvgItem_SuperInputMethodQuery(@ptrCast(self), @bitCast(query));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant `
    ///
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnInputMethodQuery(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn ItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_ItemChange(@ptrCast(self), @bitCast(change), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `SuperItemChange` instead
    ///
    pub const QBaseItemChange = SuperItemChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperItemChange(self: ?*anyopaque, change: i32, value: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_SuperItemChange(@ptrCast(self), @bitCast(change), @ptrCast(value));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, change: qgraphicsitem_enums.GraphicsItemChange, value: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnItemChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnItemChange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SupportsExtension(self: ?*anyopaque, extension: i32) bool {
        return qtc.QGraphicsSvgItem_SupportsExtension(@ptrCast(self), @bitCast(extension));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    pub fn SuperSupportsExtension(self: ?*anyopaque, extension: i32) bool {
        return qtc.QGraphicsSvgItem_SuperSupportsExtension(@ptrCast(self), @bitCast(extension));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn OnSupportsExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnSupportsExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SetExtension(self: ?*anyopaque, extension: i32, variant: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SetExtension(@ptrCast(self), @bitCast(extension), @ptrCast(variant));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperSetExtension(self: ?*anyopaque, extension: i32, variant: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperSetExtension(@ptrCast(self), @bitCast(extension), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, extension: qgraphicsitem_enums.Extension, variant: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnSetExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn Extension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_Extension(@ptrCast(self), @ptrCast(variant));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn SuperExtension(self: ?*anyopaque, variant: ?*anyopaque) QtC.QVariant {
        return qtc.QGraphicsSvgItem_SuperExtension(@ptrCast(self), @ptrCast(variant));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, variant: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnExtension(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QGraphicsSvgItem_OnExtension(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_UpdateMicroFocus(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnUpdateMicroFocus(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsSvgItem_Sender(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsSvgItem_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsSvgItem_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSvgItem_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsSvgItem_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsSvgItem_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsSvgItem_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsSvgItem_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn AddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_AddToIndex(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperAddToIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperAddToIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddToIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnAddToIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn RemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_RemoveFromIndex(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperRemoveFromIndex(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperRemoveFromIndex(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveFromIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnRemoveFromIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn PrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_PrepareGeometryChange(@ptrCast(self));
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
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn SuperPrepareGeometryChange(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_SuperPrepareGeometryChange(@ptrCast(self));
    }

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPrepareGeometryChange(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsSvgItem_OnPrepareGeometryChange(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSvgItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#dtor.QGraphicsSvgItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSvgItem `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QGraphicsSvgItem_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssvgitem.html#public-types)
pub const enums = struct {
    pub const QGraphicsSvgItem = enum(i32) {
        pub const Type: i32 = 13;
    };
};
