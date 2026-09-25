const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
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
const QPointF = @import("libqt6").QPointF;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QQuickItem = @import("libqt6").QQuickItem;
const QQuickItem__ItemChangeData = @import("libqt6").QQuickItem__ItemChangeData;
const QQuickItem__UpdatePaintNodeData = @import("libqt6").QQuickItem__UpdatePaintNodeData;
const QQuickWindow = @import("libqt6").QQuickWindow;
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
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html)
pub const QQuickFramebufferObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickFramebufferObject,

    pub const _is_QQuickFramebufferObject = {};
    pub const _is_QQuickItem = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickFramebufferObject object in C++ memory
    ///
    pub fn new() QQuickFramebufferObject {
        return .{ .ptr = qtc.QQuickFramebufferObject_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn new2(_parent: anytype) QQuickFramebufferObject {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickFramebufferObject_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn metaObject(self: QQuickFramebufferObject) QMetaObject {
        return .{ .ptr = qtc.QQuickFramebufferObject_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickFramebufferObject_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superMetaObject(self: QQuickFramebufferObject) QMetaObject {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickFramebufferObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickFramebufferObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickFramebufferObject_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickFramebufferObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickFramebufferObject_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickFramebufferObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickFramebufferObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickFramebufferObject_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickFramebufferObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickFramebufferObject_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuickFramebufferObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickFramebufferObject.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textureFollowsItemSize` instead
    ///
    pub const TextureFollowsItemSize = textureFollowsItemSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn textureFollowsItemSize(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_TextureFollowsItemSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureFollowsItemSize` instead
    ///
    pub const SetTextureFollowsItemSize = setTextureFollowsItemSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#setTextureFollowsItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` follows: bool `
    ///
    pub fn setTextureFollowsItemSize(self: QQuickFramebufferObject, follows: bool) void {
        qtc.QQuickFramebufferObject_SetTextureFollowsItemSize(@ptrCast(self.ptr), follows);
    }

    /// ### DEPRECATED: Use `mirrorVertically` instead
    ///
    pub const MirrorVertically = mirrorVertically;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVertically)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn mirrorVertically(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_MirrorVertically(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMirrorVertically` instead
    ///
    pub const SetMirrorVertically = setMirrorVertically;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#setMirrorVertically)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` enable: bool `
    ///
    pub fn setMirrorVertically(self: QQuickFramebufferObject, enable: bool) void {
        qtc.QQuickFramebufferObject_SetMirrorVertically(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `createRenderer` instead
    ///
    pub const CreateRenderer = createRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn createRenderer(self: QQuickFramebufferObject) QQuickFramebufferObject__Renderer {
        return .{ .ptr = qtc.QQuickFramebufferObject_CreateRenderer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateRenderer` instead
    ///
    pub const OnCreateRenderer = onCreateRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn () callconv(.c) QQuickFramebufferObject__Renderer `
    ///
    pub fn onCreateRenderer(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QQuickFramebufferObject__Renderer) void {
        qtc.QQuickFramebufferObject_OnCreateRenderer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateRenderer` instead
    ///
    pub const SuperCreateRenderer = superCreateRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superCreateRenderer(self: QQuickFramebufferObject) QQuickFramebufferObject__Renderer {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperCreateRenderer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isTextureProvider` instead
    ///
    pub const IsTextureProvider = isTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isTextureProvider(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_IsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsTextureProvider` instead
    ///
    pub const OnIsTextureProvider = onIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsTextureProvider(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnIsTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsTextureProvider` instead
    ///
    pub const SuperIsTextureProvider = superIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superIsTextureProvider(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_SuperIsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureProvider` instead
    ///
    pub const TextureProvider = textureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn textureProvider(self: QQuickFramebufferObject) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickFramebufferObject_TextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureProvider` instead
    ///
    pub const OnTextureProvider = onTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn () callconv(.c) QSGTextureProvider `
    ///
    pub fn onTextureProvider(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QSGTextureProvider) void {
        qtc.QQuickFramebufferObject_OnTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextureProvider` instead
    ///
    pub const SuperTextureProvider = superTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superTextureProvider(self: QQuickFramebufferObject) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperTextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn releaseResources(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_ReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseResources` instead
    ///
    pub const OnReleaseResources = onReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReleaseResources(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnReleaseResources(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseResources` instead
    ///
    pub const SuperReleaseResources = superReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superReleaseResources(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometryChange` instead
    ///
    pub const GeometryChange = geometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn geometryChange(self: QQuickFramebufferObject, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickFramebufferObject_GeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChange` instead
    ///
    pub const OnGeometryChange = onGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, newGeometry: QRectF, oldGeometry: QRectF) callconv(.c) void `
    ///
    pub fn onGeometryChange(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QRectF, QRectF) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometryChange` instead
    ///
    pub const SuperGeometryChange = superGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn superGeometryChange(self: QQuickFramebufferObject, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickFramebufferObject_SuperGeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `updatePaintNode` instead
    ///
    pub const UpdatePaintNode = updatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn updatePaintNode(self: QQuickFramebufferObject, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickFramebufferObject_UpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdatePaintNode` instead
    ///
    pub const OnUpdatePaintNode = onUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QSGNode, param2: QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode `
    ///
    pub fn onUpdatePaintNode(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QSGNode, QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode) void {
        qtc.QQuickFramebufferObject_OnUpdatePaintNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdatePaintNode` instead
    ///
    pub const SuperUpdatePaintNode = superUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn superUpdatePaintNode(self: QQuickFramebufferObject, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperUpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `textureFollowsItemSizeChanged` instead
    ///
    pub const TextureFollowsItemSizeChanged = textureFollowsItemSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn textureFollowsItemSizeChanged(self: QQuickFramebufferObject, param1: bool) void {
        qtc.QQuickFramebufferObject_TextureFollowsItemSizeChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onTextureFollowsItemSizeChanged` instead
    ///
    pub const OnTextureFollowsItemSizeChanged = onTextureFollowsItemSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onTextureFollowsItemSizeChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_Connect_TextureFollowsItemSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mirrorVerticallyChanged` instead
    ///
    pub const MirrorVerticallyChanged = mirrorVerticallyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVerticallyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn mirrorVerticallyChanged(self: QQuickFramebufferObject, param1: bool) void {
        qtc.QQuickFramebufferObject_MirrorVerticallyChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onMirrorVerticallyChanged` instead
    ///
    pub const OnMirrorVerticallyChanged = onMirrorVerticallyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVerticallyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onMirrorVerticallyChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_Connect_MirrorVerticallyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QQuickFramebufferObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickFramebufferObject.tr2: Memory allocation failed");
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
        var _str = qtc.QQuickFramebufferObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickFramebufferObject.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QQuickItem
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn asQQmlParserStatus(self: QQuickFramebufferObject) QQmlParserStatus {
        return .{ .ptr = qtc.QQuickItem_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuickItem
    ///
    /// Downcasts to a QQuickFramebufferObject object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuickFramebufferObject {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn window(self: QQuickFramebufferObject) QQuickWindow {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn parentItem(self: QQuickFramebufferObject) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn setParentItem(self: QQuickFramebufferObject, _parent: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackBefore(self: QQuickFramebufferObject, param1: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackAfter(self: QQuickFramebufferObject, param1: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn childrenRect(self: QQuickFramebufferObject) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuickFramebufferObject, allocator: std.mem.Allocator) []QQuickItem {
        const _arr: qtc.libqt_list = qtc.QQuickItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuickItem, _arr.len) catch @panic("QQuickFramebufferObject.childItems: Memory allocation failed");
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn clip(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _clip: bool `
    ///
    pub fn setClip(self: QQuickFramebufferObject, _clip: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuickFramebufferObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickItem_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickFramebufferObject.state: Memory allocation failed");
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuickFramebufferObject, _state: []const u8) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn baselineOffset(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _baselineOffset: f64 `
    ///
    pub fn setBaselineOffset(self: QQuickFramebufferObject, _baselineOffset: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn x(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn y(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn position(self: QQuickFramebufferObject) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QQuickFramebufferObject, _x: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QQuickFramebufferObject, _y: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _position: QPointF `
    ///
    pub fn setPosition(self: QQuickFramebufferObject, _position: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn width(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QQuickFramebufferObject, _width: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn resetWidth(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _implicitWidth: f64 `
    ///
    pub fn setImplicitWidth(self: QQuickFramebufferObject, _implicitWidth: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn implicitWidth(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn height(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QQuickFramebufferObject, _height: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn resetHeight(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _implicitHeight: f64 `
    ///
    pub fn setImplicitHeight(self: QQuickFramebufferObject, _implicitHeight: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn implicitHeight(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn size(self: QQuickFramebufferObject) QSizeF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setSize(self: QQuickFramebufferObject, _size: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ## Returns:
    ///
    /// ` qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOrigin(self: QQuickFramebufferObject) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _transformOrigin: qquickitem_enums.TransformOrigin `
    ///
    pub fn setTransformOrigin(self: QQuickFramebufferObject, _transformOrigin: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn transformOriginPoint(self: QQuickFramebufferObject) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _transformOriginPoint: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QQuickFramebufferObject, _transformOriginPoint: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn z(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _z: f64 `
    ///
    pub fn setZ(self: QQuickFramebufferObject, _z: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn rotation(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn setRotation(self: QQuickFramebufferObject, _rotation: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn scale(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QQuickFramebufferObject, _scale: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn opacity(self: QQuickFramebufferObject) f64 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QQuickFramebufferObject, _opacity: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isVisible(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QQuickFramebufferObject, visible: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isEnabled(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QQuickFramebufferObject, enabled: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn smooth(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _smooth: bool `
    ///
    pub fn setSmooth(self: QQuickFramebufferObject, _smooth: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn activeFocusOnTab(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _activeFocusOnTab: bool `
    ///
    pub fn setActiveFocusOnTab(self: QQuickFramebufferObject, _activeFocusOnTab: bool) void {
        qtc.QQuickItem_SetActiveFocusOnTab(@ptrCast(self.ptr), _activeFocusOnTab);
    }

    /// ### DEPRECATED: Use `antialiasing` instead
    ///
    pub const Antialiasing = antialiasing;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn antialiasing(self: QQuickFramebufferObject) bool {
        return qtc.QQuickItem_Antialiasing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAntialiasing` instead
    ///
    pub const SetAntialiasing = setAntialiasing;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAntialiasing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _antialiasing: bool `
    ///
    pub fn setAntialiasing(self: QQuickFramebufferObject, _antialiasing: bool) void {
        qtc.QQuickItem_SetAntialiasing(@ptrCast(self.ptr), _antialiasing);
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn resetAntialiasing(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ## Returns:
    ///
    /// ` flag of qquickitem_enums.Flag `
    ///
    pub fn flags(self: QQuickFramebufferObject) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    pub fn setFlag(self: QQuickFramebufferObject, flag: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _flags: flag of qquickitem_enums.Flag `
    ///
    pub fn setFlags(self: QQuickFramebufferObject, _flags: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn viewportItem(self: QQuickFramebufferObject) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn hasActiveFocus(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn hasFocus(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` focus: bool `
    ///
    pub fn setFocus(self: QQuickFramebufferObject, focus: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` focus: bool `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QQuickFramebufferObject, focus: bool, reason: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isFocusScope(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn scopedFocusItem(self: QQuickFramebufferObject) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QQuickFramebufferObject) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QQuickFramebufferObject, policy: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` child: QQuickItem `
    ///
    pub fn isAncestorOf(self: QQuickFramebufferObject, child: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QQuickFramebufferObject) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QQuickFramebufferObject, buttons: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn acceptHoverEvents(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QQuickFramebufferObject, enabled: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn acceptTouchEvents(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` accept: bool `
    ///
    pub fn setAcceptTouchEvents(self: QQuickFramebufferObject, accept: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn cursor(self: QQuickFramebufferObject) QCursor {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QQuickFramebufferObject, _cursor: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn unsetCursor(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isUnderMouse(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn grabMouse(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn ungrabMouse(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn keepMouseGrab(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _keepMouseGrab: bool `
    ///
    pub fn setKeepMouseGrab(self: QQuickFramebufferObject, _keepMouseGrab: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn filtersChildMouseEvents(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` filter: bool `
    ///
    pub fn setFiltersChildMouseEvents(self: QQuickFramebufferObject, filter: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` ids: []i32 `
    ///
    pub fn grabTouchPoints(self: QQuickFramebufferObject, ids: []i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn ungrabTouchPoints(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn keepTouchGrab(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _keepTouchGrab: bool `
    ///
    pub fn setKeepTouchGrab(self: QQuickFramebufferObject, _keepTouchGrab: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: QJSValue `
    ///
    pub fn grabToImage(self: QQuickFramebufferObject, callback: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn containmentMask(self: QQuickFramebufferObject) QObject {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` mask: QObject `
    ///
    pub fn setContainmentMask(self: QQuickFramebufferObject, mask: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: *bool `
    ///
    pub fn itemTransform(self: QQuickFramebufferObject, param1: anytype, param2: *bool) QTransform {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QQuickFramebufferObject, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToItem(self: QQuickFramebufferObject, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToScene(self: QQuickFramebufferObject, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QQuickFramebufferObject, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QQuickFramebufferObject, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QQuickFramebufferObject, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn polish(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem2(self: QQuickFramebufferObject, item: anytype, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem3(self: QQuickFramebufferObject, item: anytype, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapFromItem4(self: QQuickFramebufferObject, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
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
    pub fn mapFromItem5(self: QQuickFramebufferObject, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem2(self: QQuickFramebufferObject, item: anytype, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem3(self: QQuickFramebufferObject, item: anytype, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapToItem4(self: QQuickFramebufferObject, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickFramebufferObject `
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
    pub fn mapToItem5(self: QQuickFramebufferObject, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromGlobal2(self: QQuickFramebufferObject, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromGlobal3(self: QQuickFramebufferObject, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToGlobal2(self: QQuickFramebufferObject, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToGlobal3(self: QQuickFramebufferObject, point: anytype) QPointF {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn forceActiveFocus(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn forceActiveFocus2(self: QQuickFramebufferObject, reason: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn nextItemInFocusChain(self: QQuickFramebufferObject) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn childAt(self: QQuickFramebufferObject, _x: f64, _y: f64) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn ensurePolished(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn dumpItemTree(self: QQuickFramebufferObject) void {
        qtc.QQuickItem_DumpItemTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn update(self: QQuickFramebufferObject) void {
        qtc.QQuickItem_Update(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QRectF `
    ///
    pub fn childrenRectChanged(self: QQuickFramebufferObject, param1: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QRectF) callconv(.c) void `
    ///
    pub fn onChildrenRectChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QRectF) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: f64 `
    ///
    pub fn baselineOffsetChanged(self: QQuickFramebufferObject, param1: f64) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: f64) callconv(.c) void `
    ///
    pub fn onBaselineOffsetChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, f64) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn stateChanged(self: QQuickFramebufferObject, param1: []const u8) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn focusChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onFocusChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicyChanged(self: QQuickFramebufferObject, param1: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: qnamespace_enums.FocusPolicy) callconv(.c) void `
    ///
    pub fn onFocusPolicyChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, i32) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusOnTabChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusOnTabChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn parentChanged(self: QQuickFramebufferObject, param1: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QQuickItem) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QQuickItem) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOriginChanged(self: QQuickFramebufferObject, param1: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: qquickitem_enums.TransformOrigin) callconv(.c) void `
    ///
    pub fn onTransformOriginChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, i32) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn smoothChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onSmoothChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn antialiasingChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onAntialiasingChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: bool `
    ///
    pub fn clipChanged(self: QQuickFramebufferObject, param1: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: bool) callconv(.c) void `
    ///
    pub fn onClipChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, bool) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _window: QQuickWindow `
    ///
    pub fn windowChanged(self: QQuickFramebufferObject, _window: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, window: QQuickWindow) callconv(.c) void `
    ///
    pub fn onWindowChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QQuickWindow) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn childrenChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn opacityChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn enabledChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn visibleChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn visibleChildrenChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onVisibleChildrenChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn rotationChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn scaleChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn xChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onXChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn yChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onYChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn widthChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn heightChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn zChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onZChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn implicitWidthChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onImplicitWidthChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn implicitHeightChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onImplicitHeightChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn containmentMaskChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onContainmentMaskChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn paletteChanged(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn paletteCreated(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onPaletteCreated(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QQuickFramebufferObject, flag: i32, enabled: bool) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: QJSValue `
    ///
    /// ` targetSize: QSize `
    ///
    pub fn grabToImage22(self: QQuickFramebufferObject, callback: anytype, targetSize: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` forward: bool `
    ///
    pub fn nextItemInFocusChain1(self: QQuickFramebufferObject, forward: bool) QQuickItem {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickFramebufferObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickFramebufferObject.objectName: Memory allocation failed");
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickFramebufferObject, name: []const u8) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isWidgetType(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isWindowType(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isQuickItemType(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn signalsBlocked(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickFramebufferObject, b: bool) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn thread(self: QQuickFramebufferObject) QThread {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickFramebufferObject, _thread: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickFramebufferObject, interval: i32) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickFramebufferObject, time: i64) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickFramebufferObject, id: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickFramebufferObject, id: i32) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickFramebufferObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickFramebufferObject.children: Memory allocation failed");
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickFramebufferObject, _parent: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickFramebufferObject, filterObj: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickFramebufferObject, obj: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickFramebufferObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn disconnect3(self: QQuickFramebufferObject) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickFramebufferObject, receiver: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn dumpObjectTree(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn dumpObjectInfo(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickFramebufferObject, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickFramebufferObject, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickFramebufferObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickFramebufferObject.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickFramebufferObject.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn bindingStorage(self: QQuickFramebufferObject) QBindingStorage {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn bindingStorage2(self: QQuickFramebufferObject) QBindingStorage {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn destroyed(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject) callconv(.c) void) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn parent(self: QQuickFramebufferObject) QObject {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickFramebufferObject, classname: [:0]const u8) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn deleteLater(self: QQuickFramebufferObject) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickFramebufferObject, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickFramebufferObject, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickFramebufferObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickFramebufferObject, signal: [:0]const u8) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickFramebufferObject, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickFramebufferObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickFramebufferObject, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickFramebufferObject, param1: anytype) void {
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QQmlParserStatus
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlParserStatus;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlParserStatus")) param1.asQQmlParserStatus() else param1;
        qtc.QQmlParserStatus_OperatorAssign(@ptrCast(self.asQQmlParserStatus().ptr), @ptrCast(param1_.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn boundingRect(self: QQuickFramebufferObject) QRectF {
        return .{ .ptr = qtc.QQuickFramebufferObject_BoundingRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superBoundingRect(self: QQuickFramebufferObject) QRectF {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperBoundingRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickFramebufferObject_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn clipRect(self: QQuickFramebufferObject) QRectF {
        return .{ .ptr = qtc.QQuickFramebufferObject_ClipRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superClipRect(self: QQuickFramebufferObject) QRectF {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperClipRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClipRect(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickFramebufferObject_OnClipRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QQuickFramebufferObject, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickFramebufferObject_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QQuickFramebufferObject, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickFramebufferObject_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QPointF) callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QQuickFramebufferObject, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickFramebufferObject_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QQuickFramebufferObject, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, i32) callconv(.c) QVariant) void {
        qtc.QQuickFramebufferObject_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQuickFramebufferObject, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickFramebufferObject_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQuickFramebufferObject, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickFramebufferObject_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn itemChange(self: QQuickFramebufferObject, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickFramebufferObject_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuickFramebufferObject, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickFramebufferObject_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// Inherited from QQuickItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: qquickitem_enums.ItemChange, param2: QQuickItem__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, i32, QQuickItem__ItemChangeData) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn classBegin(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_ClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superClassBegin(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn componentComplete(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_ComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superComponentComplete(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickFramebufferObject_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickFramebufferObject_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickFramebufferObject_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickFramebufferObject_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickFramebufferObject_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickFramebufferObject_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QInputMethodEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickFramebufferObject_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickFramebufferObject_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickFramebufferObject_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickFramebufferObject_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickFramebufferObject_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn mouseUngrabEvent(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_MouseUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superMouseUngrabEvent(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperMouseUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMouseUngrabEvent(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnMouseUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn touchUngrabEvent(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_TouchUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superTouchUngrabEvent(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperTouchUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onTouchUngrabEvent(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnTouchUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickFramebufferObject_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickFramebufferObject_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QWheelEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickFramebufferObject_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickFramebufferObject_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QTouchEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickFramebufferObject_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickFramebufferObject_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickFramebufferObject_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QDragEnterEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickFramebufferObject_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickFramebufferObject_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QDragMoveEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickFramebufferObject_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickFramebufferObject_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn dropEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickFramebufferObject_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn superDropEvent(self: QQuickFramebufferObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickFramebufferObject_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QDropEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn childMouseEventFilter(self: QQuickFramebufferObject, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickFramebufferObject_ChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superChildMouseEventFilter(self: QQuickFramebufferObject, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickFramebufferObject_SuperChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: QQuickItem, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onChildMouseEventFilter(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QQuickItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnChildMouseEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn updatePolish(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_UpdatePolish(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superUpdatePolish(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperUpdatePolish(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdatePolish(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnUpdatePolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickFramebufferObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickFramebufferObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickFramebufferObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickFramebufferObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickFramebufferObject_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickFramebufferObject_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickFramebufferObject_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickFramebufferObject_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QChildEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickFramebufferObject_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickFramebufferObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickFramebufferObject_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QEvent) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickFramebufferObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickFramebufferObject_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickFramebufferObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickFramebufferObject_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickFramebufferObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickFramebufferObject_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickFramebufferObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickFramebufferObject_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn isComponentComplete(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_IsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superIsComponentComplete(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_SuperIsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsComponentComplete(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnIsComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn updateInputMethod(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_UpdateInputMethod(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superUpdateInputMethod(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_SuperUpdateInputMethod(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateInputMethod(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnUpdateInputMethod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn widthValid(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_WidthValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superWidthValid(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_SuperWidthValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onWidthValid(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnWidthValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn heightValid(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_HeightValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superHeightValid(self: QQuickFramebufferObject) bool {
        return qtc.QQuickFramebufferObject_SuperHeightValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHeightValid(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnHeightValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn setImplicitSize(self: QQuickFramebufferObject, param1: f64, param2: f64) void {
        qtc.QQuickFramebufferObject_SetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn superSetImplicitSize(self: QQuickFramebufferObject, param1: f64, param2: f64) void {
        qtc.QQuickFramebufferObject_SuperSetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, param1: f64, param2: f64) callconv(.c) void `
    ///
    pub fn onSetImplicitSize(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, f64, f64) callconv(.c) void) void {
        qtc.QQuickFramebufferObject_OnSetImplicitSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn sender(self: QQuickFramebufferObject) QObject {
        return .{ .ptr = qtc.QQuickFramebufferObject_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superSender(self: QQuickFramebufferObject) QObject {
        return .{ .ptr = qtc.QQuickFramebufferObject_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickFramebufferObject_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn senderSignalIndex(self: QQuickFramebufferObject) i32 {
        return qtc.QQuickFramebufferObject_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn superSenderSignalIndex(self: QQuickFramebufferObject) i32 {
        return qtc.QQuickFramebufferObject_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickFramebufferObject, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickFramebufferObject_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickFramebufferObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickFramebufferObject_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickFramebufferObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickFramebufferObject_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickFramebufferObject_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickFramebufferObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickFramebufferObject_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickFramebufferObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickFramebufferObject_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickFramebufferObject`
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickFramebufferObject_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickFramebufferObject `
    ///
    /// ` callback: *const fn (self: QQuickFramebufferObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickFramebufferObject, callback: *const fn (QQuickFramebufferObject, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#dtor.QQuickFramebufferObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickFramebufferObject `
    ///
    pub fn delete(self: QQuickFramebufferObject) void {
        qtc.QQuickFramebufferObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject-renderer.html)
pub const QQuickFramebufferObject__Renderer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject-renderer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickFramebufferObject__Renderer,

    pub const _is_QQuickFramebufferObject__Renderer = {};

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject-renderer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickFramebufferObject__Renderer `
    ///
    /// ` param1: QQuickFramebufferObject__Renderer `
    ///
    pub fn operatorAssign(self: QQuickFramebufferObject__Renderer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQuickFramebufferObject__Renderer;
        qtc.QQuickFramebufferObject__Renderer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }
};
