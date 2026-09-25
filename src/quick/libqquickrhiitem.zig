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
const qquickrhiitem_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitemrenderer.html)
pub const QQuickRhiItemRenderer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitemrenderer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickRhiItemRenderer,

    pub const _is_QQuickRhiItemRenderer = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitemrenderer.html#dtor.QQuickRhiItemRenderer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickRhiItemRenderer `
    ///
    pub fn delete(self: QQuickRhiItemRenderer) void {
        qtc.QQuickRhiItemRenderer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html)
pub const QQuickRhiItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickRhiItem,

    pub const _is_QQuickRhiItem = {};
    pub const _is_QQuickItem = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickRhiItem object in C++ memory
    ///
    pub fn new() QQuickRhiItem {
        return .{ .ptr = qtc.QQuickRhiItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickRhiItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn new2(_parent: anytype) QQuickRhiItem {
        comptime _ = @TypeOf(_parent)._is_QQuickItem;
        return .{ .ptr = qtc.QQuickRhiItem_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn metaObject(self: QQuickRhiItem) QMetaObject {
        return .{ .ptr = qtc.QQuickRhiItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickRhiItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickRhiItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superMetaObject(self: QQuickRhiItem) QMetaObject {
        return .{ .ptr = qtc.QQuickRhiItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickRhiItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickRhiItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickRhiItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickRhiItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickRhiItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickRhiItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickRhiItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickRhiItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickRhiItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickRhiItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuickRhiItem_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickRhiItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sampleCount` instead
    ///
    pub const SampleCount = sampleCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn sampleCount(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_SampleCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSampleCount` instead
    ///
    pub const SetSampleCount = setSampleCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setSampleCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` samples: i32 `
    ///
    pub fn setSampleCount(self: QQuickRhiItem, samples: i32) void {
        qtc.QQuickRhiItem_SetSampleCount(@ptrCast(self.ptr), @bitCast(samples));
    }

    /// ### DEPRECATED: Use `colorBufferFormat` instead
    ///
    pub const ColorBufferFormat = colorBufferFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ## Returns:
    ///
    /// ` qquickrhiitem_enums.TextureFormat `
    ///
    pub fn colorBufferFormat(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_ColorBufferFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColorBufferFormat` instead
    ///
    pub const SetColorBufferFormat = setColorBufferFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setColorBufferFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` format: qquickrhiitem_enums.TextureFormat `
    ///
    pub fn setColorBufferFormat(self: QQuickRhiItem, format: i32) void {
        qtc.QQuickRhiItem_SetColorBufferFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `isMirrorVerticallyEnabled` instead
    ///
    pub const IsMirrorVerticallyEnabled = isMirrorVerticallyEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isMirrorVerticallyEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn isMirrorVerticallyEnabled(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_IsMirrorVerticallyEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMirrorVertically` instead
    ///
    pub const SetMirrorVertically = setMirrorVertically;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setMirrorVertically)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` enable: bool `
    ///
    pub fn setMirrorVertically(self: QQuickRhiItem, enable: bool) void {
        qtc.QQuickRhiItem_SetMirrorVertically(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `alphaBlending` instead
    ///
    pub const AlphaBlending = alphaBlending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn alphaBlending(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_AlphaBlending(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlphaBlending` instead
    ///
    pub const SetAlphaBlending = setAlphaBlending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAlphaBlending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` enable: bool `
    ///
    pub fn setAlphaBlending(self: QQuickRhiItem, enable: bool) void {
        qtc.QQuickRhiItem_SetAlphaBlending(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fixedColorBufferWidth` instead
    ///
    pub const FixedColorBufferWidth = fixedColorBufferWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn fixedColorBufferWidth(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_FixedColorBufferWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFixedColorBufferWidth` instead
    ///
    pub const SetFixedColorBufferWidth = setFixedColorBufferWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setFixedColorBufferWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` _width: i32 `
    ///
    pub fn setFixedColorBufferWidth(self: QQuickRhiItem, _width: i32) void {
        qtc.QQuickRhiItem_SetFixedColorBufferWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `fixedColorBufferHeight` instead
    ///
    pub const FixedColorBufferHeight = fixedColorBufferHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn fixedColorBufferHeight(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_FixedColorBufferHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFixedColorBufferHeight` instead
    ///
    pub const SetFixedColorBufferHeight = setFixedColorBufferHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setFixedColorBufferHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` _height: i32 `
    ///
    pub fn setFixedColorBufferHeight(self: QQuickRhiItem, _height: i32) void {
        qtc.QQuickRhiItem_SetFixedColorBufferHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `effectiveColorBufferSize` instead
    ///
    pub const EffectiveColorBufferSize = effectiveColorBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn effectiveColorBufferSize(self: QQuickRhiItem) QSize {
        return .{ .ptr = qtc.QQuickRhiItem_EffectiveColorBufferSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isTextureProvider` instead
    ///
    pub const IsTextureProvider = isTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn isTextureProvider(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_IsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsTextureProvider` instead
    ///
    pub const OnIsTextureProvider = onIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsTextureProvider(self: QQuickRhiItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnIsTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsTextureProvider` instead
    ///
    pub const SuperIsTextureProvider = superIsTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn superIsTextureProvider(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_SuperIsTextureProvider(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textureProvider` instead
    ///
    pub const TextureProvider = textureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn textureProvider(self: QQuickRhiItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickRhiItem_TextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onTextureProvider` instead
    ///
    pub const OnTextureProvider = onTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) QSGTextureProvider `
    ///
    pub fn onTextureProvider(self: QQuickRhiItem, callback: *const fn () callconv(.c) QSGTextureProvider) void {
        qtc.QQuickRhiItem_OnTextureProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextureProvider` instead
    ///
    pub const SuperTextureProvider = superTextureProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn superTextureProvider(self: QQuickRhiItem) QSGTextureProvider {
        return .{ .ptr = qtc.QQuickRhiItem_SuperTextureProvider(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sampleCountChanged` instead
    ///
    pub const SampleCountChanged = sampleCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn sampleCountChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SampleCountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSampleCountChanged` instead
    ///
    pub const OnSampleCountChanged = onSampleCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onSampleCountChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_SampleCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorBufferFormatChanged` instead
    ///
    pub const ColorBufferFormatChanged = colorBufferFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn colorBufferFormatChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_ColorBufferFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onColorBufferFormatChanged` instead
    ///
    pub const OnColorBufferFormatChanged = onColorBufferFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onColorBufferFormatChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_ColorBufferFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoRenderTargetChanged` instead
    ///
    pub const AutoRenderTargetChanged = autoRenderTargetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#autoRenderTargetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn autoRenderTargetChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_AutoRenderTargetChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoRenderTargetChanged` instead
    ///
    pub const OnAutoRenderTargetChanged = onAutoRenderTargetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#autoRenderTargetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onAutoRenderTargetChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_AutoRenderTargetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mirrorVerticallyChanged` instead
    ///
    pub const MirrorVerticallyChanged = mirrorVerticallyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#mirrorVerticallyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn mirrorVerticallyChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_MirrorVerticallyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMirrorVerticallyChanged` instead
    ///
    pub const OnMirrorVerticallyChanged = onMirrorVerticallyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#mirrorVerticallyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onMirrorVerticallyChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_MirrorVerticallyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alphaBlendingChanged` instead
    ///
    pub const AlphaBlendingChanged = alphaBlendingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlendingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn alphaBlendingChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_AlphaBlendingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAlphaBlendingChanged` instead
    ///
    pub const OnAlphaBlendingChanged = onAlphaBlendingChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlendingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onAlphaBlendingChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_AlphaBlendingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fixedColorBufferWidthChanged` instead
    ///
    pub const FixedColorBufferWidthChanged = fixedColorBufferWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn fixedColorBufferWidthChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_FixedColorBufferWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFixedColorBufferWidthChanged` instead
    ///
    pub const OnFixedColorBufferWidthChanged = onFixedColorBufferWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onFixedColorBufferWidthChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_FixedColorBufferWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fixedColorBufferHeightChanged` instead
    ///
    pub const FixedColorBufferHeightChanged = fixedColorBufferHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn fixedColorBufferHeightChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_FixedColorBufferHeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFixedColorBufferHeightChanged` instead
    ///
    pub const OnFixedColorBufferHeightChanged = onFixedColorBufferHeightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onFixedColorBufferHeightChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_FixedColorBufferHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `effectiveColorBufferSizeChanged` instead
    ///
    pub const EffectiveColorBufferSizeChanged = effectiveColorBufferSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn effectiveColorBufferSizeChanged(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_EffectiveColorBufferSizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEffectiveColorBufferSizeChanged` instead
    ///
    pub const OnEffectiveColorBufferSizeChanged = onEffectiveColorBufferSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onEffectiveColorBufferSizeChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
        qtc.QQuickRhiItem_Connect_EffectiveColorBufferSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createRenderer` instead
    ///
    pub const CreateRenderer = createRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn createRenderer(self: QQuickRhiItem) QQuickRhiItemRenderer {
        return .{ .ptr = qtc.QQuickRhiItem_CreateRenderer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateRenderer` instead
    ///
    pub const OnCreateRenderer = onCreateRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) QQuickRhiItemRenderer `
    ///
    pub fn onCreateRenderer(self: QQuickRhiItem, callback: *const fn () callconv(.c) QQuickRhiItemRenderer) void {
        qtc.QQuickRhiItem_OnCreateRenderer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateRenderer` instead
    ///
    pub const SuperCreateRenderer = superCreateRenderer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn superCreateRenderer(self: QQuickRhiItem) QQuickRhiItemRenderer {
        return .{ .ptr = qtc.QQuickRhiItem_SuperCreateRenderer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAutoRenderTargetEnabled` instead
    ///
    pub const IsAutoRenderTargetEnabled = isAutoRenderTargetEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn isAutoRenderTargetEnabled(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_IsAutoRenderTargetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsAutoRenderTargetEnabled` instead
    ///
    pub const OnIsAutoRenderTargetEnabled = onIsAutoRenderTargetEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsAutoRenderTargetEnabled(self: QQuickRhiItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnIsAutoRenderTargetEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsAutoRenderTargetEnabled` instead
    ///
    pub const SuperIsAutoRenderTargetEnabled = superIsAutoRenderTargetEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn superIsAutoRenderTargetEnabled(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_SuperIsAutoRenderTargetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRenderTarget` instead
    ///
    pub const SetAutoRenderTarget = setAutoRenderTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoRenderTarget(self: QQuickRhiItem, enabled: bool) void {
        qtc.QQuickRhiItem_SetAutoRenderTarget(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onSetAutoRenderTarget` instead
    ///
    pub const OnSetAutoRenderTarget = onSetAutoRenderTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, enabled: bool) callconv(.c) void `
    ///
    pub fn onSetAutoRenderTarget(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnSetAutoRenderTarget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoRenderTarget` instead
    ///
    pub const SuperSetAutoRenderTarget = superSetAutoRenderTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSetAutoRenderTarget(self: QQuickRhiItem, enabled: bool) void {
        qtc.QQuickRhiItem_SuperSetAutoRenderTarget(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `updatePaintNode` instead
    ///
    pub const UpdatePaintNode = updatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn updatePaintNode(self: QQuickRhiItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickRhiItem_UpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdatePaintNode` instead
    ///
    pub const OnUpdatePaintNode = onUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QSGNode, param2: QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode `
    ///
    pub fn onUpdatePaintNode(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QSGNode, QQuickItem__UpdatePaintNodeData) callconv(.c) QSGNode) void {
        qtc.QQuickRhiItem_OnUpdatePaintNode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdatePaintNode` instead
    ///
    pub const SuperUpdatePaintNode = superUpdatePaintNode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QSGNode `
    ///
    /// ` param2: QQuickItem__UpdatePaintNodeData `
    ///
    pub fn superUpdatePaintNode(self: QQuickRhiItem, param1: anytype, param2: anytype) QSGNode {
        comptime _ = @TypeOf(param1)._is_QSGNode;
        comptime _ = @TypeOf(param2)._is_QQuickItem__UpdatePaintNodeData;
        return .{ .ptr = qtc.QQuickRhiItem_SuperUpdatePaintNode(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQuickRhiItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickRhiItem_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQuickRhiItem, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickRhiItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `geometryChange` instead
    ///
    pub const GeometryChange = geometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn geometryChange(self: QQuickRhiItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickRhiItem_GeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChange` instead
    ///
    pub const OnGeometryChange = onGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, newGeometry: QRectF, oldGeometry: QRectF) callconv(.c) void `
    ///
    pub fn onGeometryChange(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QRectF, QRectF) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGeometryChange` instead
    ///
    pub const SuperGeometryChange = superGeometryChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` newGeometry: QRectF `
    ///
    /// ` oldGeometry: QRectF `
    ///
    pub fn superGeometryChange(self: QQuickRhiItem, newGeometry: anytype, oldGeometry: anytype) void {
        comptime _ = @TypeOf(newGeometry)._is_QRectF;
        comptime _ = @TypeOf(oldGeometry)._is_QRectF;
        qtc.QQuickRhiItem_SuperGeometryChange(@ptrCast(self.ptr), @ptrCast(newGeometry.ptr), @ptrCast(oldGeometry.ptr));
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn releaseResources(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_ReleaseResources(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseResources` instead
    ///
    pub const OnReleaseResources = onReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReleaseResources(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnReleaseResources(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseResources` instead
    ///
    pub const SuperReleaseResources = superReleaseResources;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn superReleaseResources(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperReleaseResources(@ptrCast(self.ptr));
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
        var _str = qtc.QQuickRhiItem_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickRhiItem.tr2: Memory allocation failed");
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
        var _str = qtc.QQuickRhiItem_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickRhiItem.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QQuickItem
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn asQQmlParserStatus(self: QQuickRhiItem) QQmlParserStatus {
        return .{ .ptr = qtc.QQuickItem_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuickItem
    ///
    /// Downcasts to a QQuickRhiItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuickRhiItem {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn window(self: QQuickRhiItem) QQuickWindow {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn parentItem(self: QQuickRhiItem) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _parent: QQuickItem `
    ///
    pub fn setParentItem(self: QQuickRhiItem, _parent: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackBefore(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn stackAfter(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn childrenRect(self: QQuickRhiItem) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuickRhiItem, allocator: std.mem.Allocator) []QQuickItem {
        const _arr: qtc.libqt_list = qtc.QQuickItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuickItem, _arr.len) catch @panic("QQuickRhiItem.childItems: Memory allocation failed");
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn clip(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _clip: bool `
    ///
    pub fn setClip(self: QQuickRhiItem, _clip: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuickRhiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickItem_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickRhiItem.state: Memory allocation failed");
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuickRhiItem, _state: []const u8) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn baselineOffset(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _baselineOffset: f64 `
    ///
    pub fn setBaselineOffset(self: QQuickRhiItem, _baselineOffset: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn x(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn y(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn position(self: QQuickRhiItem) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QQuickRhiItem, _x: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QQuickRhiItem, _y: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _position: QPointF `
    ///
    pub fn setPosition(self: QQuickRhiItem, _position: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn width(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QQuickRhiItem, _width: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn resetWidth(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _implicitWidth: f64 `
    ///
    pub fn setImplicitWidth(self: QQuickRhiItem, _implicitWidth: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn implicitWidth(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn height(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QQuickRhiItem, _height: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn resetHeight(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _implicitHeight: f64 `
    ///
    pub fn setImplicitHeight(self: QQuickRhiItem, _implicitHeight: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn implicitHeight(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn size(self: QQuickRhiItem) QSizeF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setSize(self: QQuickRhiItem, _size: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ## Returns:
    ///
    /// ` qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOrigin(self: QQuickRhiItem) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _transformOrigin: qquickitem_enums.TransformOrigin `
    ///
    pub fn setTransformOrigin(self: QQuickRhiItem, _transformOrigin: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn transformOriginPoint(self: QQuickRhiItem) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _transformOriginPoint: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QQuickRhiItem, _transformOriginPoint: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn z(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _z: f64 `
    ///
    pub fn setZ(self: QQuickRhiItem, _z: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn rotation(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _rotation: f64 `
    ///
    pub fn setRotation(self: QQuickRhiItem, _rotation: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn scale(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QQuickRhiItem, _scale: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn opacity(self: QQuickRhiItem) f64 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QQuickRhiItem, _opacity: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isVisible(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QQuickRhiItem, visible: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isEnabled(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QQuickRhiItem, enabled: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn smooth(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _smooth: bool `
    ///
    pub fn setSmooth(self: QQuickRhiItem, _smooth: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn activeFocusOnTab(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _activeFocusOnTab: bool `
    ///
    pub fn setActiveFocusOnTab(self: QQuickRhiItem, _activeFocusOnTab: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn antialiasing(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _antialiasing: bool `
    ///
    pub fn setAntialiasing(self: QQuickRhiItem, _antialiasing: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn resetAntialiasing(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qquickitem_enums.Flag `
    ///
    pub fn flags(self: QQuickRhiItem) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    pub fn setFlag(self: QQuickRhiItem, flag: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _flags: flag of qquickitem_enums.Flag `
    ///
    pub fn setFlags(self: QQuickRhiItem, _flags: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn viewportItem(self: QQuickRhiItem) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn hasActiveFocus(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn hasFocus(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` focus: bool `
    ///
    pub fn setFocus(self: QQuickRhiItem, focus: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` focus: bool `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QQuickRhiItem, focus: bool, reason: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isFocusScope(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn scopedFocusItem(self: QQuickRhiItem) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QQuickRhiItem) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QQuickRhiItem, policy: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` child: QQuickItem `
    ///
    pub fn isAncestorOf(self: QQuickRhiItem, child: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QQuickRhiItem) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QQuickRhiItem, buttons: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn acceptHoverEvents(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QQuickRhiItem, enabled: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn acceptTouchEvents(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` accept: bool `
    ///
    pub fn setAcceptTouchEvents(self: QQuickRhiItem, accept: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn cursor(self: QQuickRhiItem) QCursor {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QQuickRhiItem, _cursor: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn unsetCursor(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isUnderMouse(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn grabMouse(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn ungrabMouse(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn keepMouseGrab(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _keepMouseGrab: bool `
    ///
    pub fn setKeepMouseGrab(self: QQuickRhiItem, _keepMouseGrab: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn filtersChildMouseEvents(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` filter: bool `
    ///
    pub fn setFiltersChildMouseEvents(self: QQuickRhiItem, filter: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` ids: []i32 `
    ///
    pub fn grabTouchPoints(self: QQuickRhiItem, ids: []i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn ungrabTouchPoints(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn keepTouchGrab(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _keepTouchGrab: bool `
    ///
    pub fn setKeepTouchGrab(self: QQuickRhiItem, _keepTouchGrab: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: QJSValue `
    ///
    pub fn grabToImage(self: QQuickRhiItem, callback: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn containmentMask(self: QQuickRhiItem) QObject {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` mask: QObject `
    ///
    pub fn setContainmentMask(self: QQuickRhiItem, mask: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: *bool `
    ///
    pub fn itemTransform(self: QQuickRhiItem, param1: anytype, param2: *bool) QTransform {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QQuickRhiItem, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToItem(self: QQuickRhiItem, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectToScene(self: QQuickRhiItem, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QQuickRhiItem, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QQuickRhiItem, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QQuickRhiItem, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn polish(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem2(self: QQuickRhiItem, item: anytype, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem3(self: QQuickRhiItem, item: anytype, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapFromItem4(self: QQuickRhiItem, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
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
    pub fn mapFromItem5(self: QQuickRhiItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem2(self: QQuickRhiItem, item: anytype, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem3(self: QQuickRhiItem, item: anytype, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` item: QQuickItem `
    ///
    /// ` rect: QRectF `
    ///
    pub fn mapToItem4(self: QQuickRhiItem, item: anytype, rect: anytype) QRectF {
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
    /// ` self: QQuickRhiItem `
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
    pub fn mapToItem5(self: QQuickRhiItem, item: anytype, _x: f64, _y: f64, _width: f64, _height: f64) QRectF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromGlobal2(self: QQuickRhiItem, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromGlobal3(self: QQuickRhiItem, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToGlobal2(self: QQuickRhiItem, _x: f64, _y: f64) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToGlobal3(self: QQuickRhiItem, point: anytype) QPointF {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn forceActiveFocus(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn forceActiveFocus2(self: QQuickRhiItem, reason: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn nextItemInFocusChain(self: QQuickRhiItem) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn childAt(self: QQuickRhiItem, _x: f64, _y: f64) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn ensurePolished(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn dumpItemTree(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn update(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QRectF `
    ///
    pub fn childrenRectChanged(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QRectF) callconv(.c) void `
    ///
    pub fn onChildrenRectChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QRectF) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: f64 `
    ///
    pub fn baselineOffsetChanged(self: QQuickRhiItem, param1: f64) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: f64) callconv(.c) void `
    ///
    pub fn onBaselineOffsetChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, f64) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn stateChanged(self: QQuickRhiItem, param1: []const u8) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn focusChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onFocusChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicyChanged(self: QQuickRhiItem, param1: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: qnamespace_enums.FocusPolicy) callconv(.c) void `
    ///
    pub fn onFocusPolicyChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, i32) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn activeFocusOnTabChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveFocusOnTabChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    pub fn parentChanged(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QQuickItem) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QQuickItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qquickitem_enums.TransformOrigin `
    ///
    pub fn transformOriginChanged(self: QQuickRhiItem, param1: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: qquickitem_enums.TransformOrigin) callconv(.c) void `
    ///
    pub fn onTransformOriginChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, i32) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn smoothChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onSmoothChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn antialiasingChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onAntialiasingChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: bool `
    ///
    pub fn clipChanged(self: QQuickRhiItem, param1: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: bool) callconv(.c) void `
    ///
    pub fn onClipChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, bool) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _window: QQuickWindow `
    ///
    pub fn windowChanged(self: QQuickRhiItem, _window: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, window: QQuickWindow) callconv(.c) void `
    ///
    pub fn onWindowChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QQuickWindow) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn childrenChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn opacityChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn enabledChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn visibleChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn visibleChildrenChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onVisibleChildrenChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn rotationChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn scaleChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn xChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onXChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn yChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onYChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn widthChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn heightChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn zChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onZChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn implicitWidthChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onImplicitWidthChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn implicitHeightChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onImplicitHeightChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn containmentMaskChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onContainmentMaskChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn paletteChanged(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn paletteCreated(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onPaletteCreated(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` flag: qquickitem_enums.Flag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QQuickRhiItem, flag: i32, enabled: bool) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: QJSValue `
    ///
    /// ` targetSize: QSize `
    ///
    pub fn grabToImage22(self: QQuickRhiItem, callback: anytype, targetSize: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` forward: bool `
    ///
    pub fn nextItemInFocusChain1(self: QQuickRhiItem, forward: bool) QQuickItem {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickRhiItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickRhiItem.objectName: Memory allocation failed");
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickRhiItem, name: []const u8) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isWidgetType(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isWindowType(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isQuickItemType(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn signalsBlocked(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickRhiItem, b: bool) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn thread(self: QQuickRhiItem) QThread {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickRhiItem, _thread: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickRhiItem, interval: i32) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickRhiItem, time: i64) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickRhiItem, id: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickRhiItem, id: i32) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickRhiItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickRhiItem.children: Memory allocation failed");
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickRhiItem, _parent: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickRhiItem, filterObj: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickRhiItem, obj: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickRhiItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn disconnect3(self: QQuickRhiItem) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickRhiItem, receiver: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn dumpObjectTree(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn dumpObjectInfo(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickRhiItem, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickRhiItem, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickRhiItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickRhiItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickRhiItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn bindingStorage(self: QQuickRhiItem) QBindingStorage {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn bindingStorage2(self: QQuickRhiItem) QBindingStorage {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn destroyed(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn parent(self: QQuickRhiItem) QObject {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickRhiItem, classname: [:0]const u8) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn deleteLater(self: QQuickRhiItem) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickRhiItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickRhiItem, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickRhiItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickRhiItem, signal: [:0]const u8) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickRhiItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickRhiItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickRhiItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QObject) callconv(.c) void) void {
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQuickRhiItem, param1: anytype) void {
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn boundingRect(self: QQuickRhiItem) QRectF {
        return .{ .ptr = qtc.QQuickRhiItem_BoundingRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superBoundingRect(self: QQuickRhiItem) QRectF {
        return .{ .ptr = qtc.QQuickRhiItem_SuperBoundingRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QQuickRhiItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickRhiItem_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn clipRect(self: QQuickRhiItem) QRectF {
        return .{ .ptr = qtc.QQuickRhiItem_ClipRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superClipRect(self: QQuickRhiItem) QRectF {
        return .{ .ptr = qtc.QQuickRhiItem_SuperClipRect(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClipRect(self: QQuickRhiItem, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QQuickRhiItem_OnClipRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QQuickRhiItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickRhiItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QQuickRhiItem, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QQuickRhiItem_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QPointF) callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QQuickRhiItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickRhiItem_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QQuickRhiItem, query: i32) QVariant {
        return .{ .ptr = qtc.QQuickRhiItem_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, i32) callconv(.c) QVariant) void {
        qtc.QQuickRhiItem_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn itemChange(self: QQuickRhiItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickRhiItem_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: qquickitem_enums.ItemChange `
    ///
    /// ` param2: QQuickItem__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuickRhiItem, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuickItem__ItemChangeData;
        qtc.QQuickRhiItem_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: qquickitem_enums.ItemChange, param2: QQuickItem__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, i32, QQuickItem__ItemChangeData) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn classBegin(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_ClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superClassBegin(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperClassBegin(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn componentComplete(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_ComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superComponentComplete(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickRhiItem_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickRhiItem_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickRhiItem_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QQuickRhiItem_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickRhiItem_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QQuickRhiItem_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QInputMethodEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickRhiItem_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickRhiItem_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickRhiItem_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickRhiItem_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QQuickRhiItem_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn mouseUngrabEvent(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_MouseUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superMouseUngrabEvent(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperMouseUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onMouseUngrabEvent(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnMouseUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn touchUngrabEvent(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_TouchUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superTouchUngrabEvent(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperTouchUngrabEvent(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onTouchUngrabEvent(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnTouchUngrabEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickRhiItem_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QQuickRhiItem_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QWheelEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn touchEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickRhiItem_TouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTouchEvent;
        qtc.QQuickRhiItem_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QTouchEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHoverEvent;
        qtc.QQuickRhiItem_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QHoverEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickRhiItem_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.QQuickRhiItem_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QDragEnterEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickRhiItem_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragMoveEvent;
        qtc.QQuickRhiItem_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QDragMoveEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickRhiItem_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragLeaveEvent;
        qtc.QQuickRhiItem_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn dropEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickRhiItem_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn superDropEvent(self: QQuickRhiItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.QQuickRhiItem_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QDropEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn childMouseEventFilter(self: QQuickRhiItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickRhiItem_ChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: QQuickItem `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superChildMouseEventFilter(self: QQuickRhiItem, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QQuickItem;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QQuickRhiItem_SuperChildMouseEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: QQuickItem, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onChildMouseEventFilter(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QQuickItem, QEvent) callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnChildMouseEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn updatePolish(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_UpdatePolish(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superUpdatePolish(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperUpdatePolish(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdatePolish(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnUpdatePolish(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickRhiItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickRhiItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickRhiItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickRhiItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickRhiItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickRhiItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickRhiItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickRhiItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QChildEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickRhiItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickRhiItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickRhiItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QEvent) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickRhiItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickRhiItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickRhiItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickRhiItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickRhiItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickRhiItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickRhiItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickRhiItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn isComponentComplete(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_IsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superIsComponentComplete(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_SuperIsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsComponentComplete(self: QQuickRhiItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnIsComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn updateInputMethod(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_UpdateInputMethod(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superUpdateInputMethod(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_SuperUpdateInputMethod(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateInputMethod(self: QQuickRhiItem, callback: *const fn () callconv(.c) void) void {
        qtc.QQuickRhiItem_OnUpdateInputMethod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn widthValid(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_WidthValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superWidthValid(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_SuperWidthValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onWidthValid(self: QQuickRhiItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnWidthValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn heightValid(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_HeightValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superHeightValid(self: QQuickRhiItem) bool {
        return qtc.QQuickRhiItem_SuperHeightValid(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHeightValid(self: QQuickRhiItem, callback: *const fn () callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnHeightValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn setImplicitSize(self: QQuickRhiItem, param1: f64, param2: f64) void {
        qtc.QQuickRhiItem_SetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` param1: f64 `
    ///
    /// ` param2: f64 `
    ///
    pub fn superSetImplicitSize(self: QQuickRhiItem, param1: f64, param2: f64) void {
        qtc.QQuickRhiItem_SuperSetImplicitSize(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, param1: f64, param2: f64) callconv(.c) void `
    ///
    pub fn onSetImplicitSize(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, f64, f64) callconv(.c) void) void {
        qtc.QQuickRhiItem_OnSetImplicitSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn sender(self: QQuickRhiItem) QObject {
        return .{ .ptr = qtc.QQuickRhiItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superSender(self: QQuickRhiItem) QObject {
        return .{ .ptr = qtc.QQuickRhiItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickRhiItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickRhiItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn senderSignalIndex(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    pub fn superSenderSignalIndex(self: QQuickRhiItem) i32 {
        return qtc.QQuickRhiItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickRhiItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickRhiItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickRhiItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickRhiItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickRhiItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickRhiItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickRhiItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickRhiItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickRhiItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickRhiItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickRhiItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickRhiItem`
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickRhiItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickRhiItem `
    ///
    /// ` callback: *const fn (self: QQuickRhiItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickRhiItem, callback: *const fn (QQuickRhiItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#dtor.QQuickRhiItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickRhiItem `
    ///
    pub fn delete(self: QQuickRhiItem) void {
        qtc.QQuickRhiItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#public-types)
pub const enums = struct {
    pub const TextureFormat = enum {
        pub const RGBA8: i32 = 0;
        pub const RGBA16F: i32 = 1;
        pub const RGBA32F: i32 = 2;
        pub const RGB10A2: i32 = 3;
    };
};
