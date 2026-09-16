const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QColor = @import("libqt6").QColor;
const QCursor = @import("libqt6").QCursor;
const QEvent = @import("libqt6").QEvent;
const QExposeEvent = @import("libqt6").QExposeEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QQmlComponent = @import("libqt6").QQmlComponent;
const QQmlContext = @import("libqt6").QQmlContext;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QQmlError = @import("libqt6").QQmlError;
const QQmlIncubationController = @import("libqt6").QQmlIncubationController;
const QQuickGraphicsConfiguration = @import("libqt6").QQuickGraphicsConfiguration;
const QQuickGraphicsDevice = @import("libqt6").QQuickGraphicsDevice;
const QQuickItem = @import("libqt6").QQuickItem;
const QQuickRenderControl = @import("libqt6").QQuickRenderControl;
const QQuickRenderTarget = @import("libqt6").QQuickRenderTarget;
const QQuickWindow__GraphicsStateInfo = @import("libqt6").QQuickWindow__GraphicsStateInfo;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QRunnable = @import("libqt6").QRunnable;
const QSGImageNode = @import("libqt6").QSGImageNode;
const QSGNinePatchNode = @import("libqt6").QSGNinePatchNode;
const QSGRectangleNode = @import("libqt6").QSGRectangleNode;
const QSGRendererInterface = @import("libqt6").QSGRendererInterface;
const QSGTextNode = @import("libqt6").QSGTextNode;
const QSGTexture = @import("libqt6").QSGTexture;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSurface = @import("libqt6").QSurface;
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTouchEvent = @import("libqt6").QTouchEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquickview_enums = enums;
const qquickwindow_enums = @import("libqquickwindow.zig").enums;
const qsgrendererinterface_enums = @import("libqsgrendererinterface.zig").enums;
const qsurface_enums = @import("../libqsurface.zig").enums;
const qwindow_enums = @import("../libqwindow.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)
pub const QQuickView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickView,

    pub const _is_QQuickView = {};
    pub const _is_QQuickWindow = {};
    pub const _is_QWindow = {};
    pub const _is_QObject = {};
    pub const _is_QSurface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickView object in C++ memory
    ///
    pub fn new() QQuickView {
        return .{ .ptr = qtc.QQuickView_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _engine: QQmlEngine `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new2(_engine: anytype, _parent: anytype) QQuickView {
        comptime _ = @TypeOf(_engine)._is_QQmlEngine;
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QQuickView_new2(@ptrCast(_engine.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _source: QUrl `
    ///
    pub fn new3(_source: anytype) QQuickView {
        comptime _ = @TypeOf(_source)._is_QUrl;
        return .{ .ptr = qtc.QQuickView_new3(@ptrCast(_source.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    pub fn new4(uri: []const u8, typeName: []const u8) QQuickView {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        return .{ .ptr = qtc.QQuickView_new4(uri_str, typeName_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _source: QUrl `
    ///
    /// ` renderControl: QQuickRenderControl `
    ///
    pub fn new5(_source: anytype, renderControl: anytype) QQuickView {
        comptime _ = @TypeOf(_source)._is_QUrl;
        comptime _ = @TypeOf(renderControl)._is_QQuickRenderControl;
        return .{ .ptr = qtc.QQuickView_new5(@ptrCast(_source.ptr), @ptrCast(renderControl.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new6(_parent: anytype) QQuickView {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QQuickView_new6(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _source: QUrl `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new7(_source: anytype, _parent: anytype) QQuickView {
        comptime _ = @TypeOf(_source)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QQuickView_new7(@ptrCast(_source.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QQuickView object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn new8(uri: []const u8, typeName: []const u8, _parent: anytype) QQuickView {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QWindow;
        return .{ .ptr = qtc.QQuickView_new8(uri_str, typeName_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn metaObject(self: QQuickView) QMetaObject {
        return .{ .ptr = qtc.QQuickView_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickView, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickView_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    pub fn superMetaObject(self: QQuickView) QMetaObject {
        return .{ .ptr = qtc.QQuickView_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickView_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickView, callback: *const fn (QQuickView, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickView_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickView, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickView_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickView_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickView, callback: *const fn (QQuickView, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickView_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickView, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickView_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuickView_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn source(self: QQuickView) QUrl {
        return .{ .ptr = qtc.QQuickView_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn engine(self: QQuickView) QQmlEngine {
        return .{ .ptr = qtc.QQuickView_Engine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rootContext` instead
    ///
    pub const RootContext = rootContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#rootContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn rootContext(self: QQuickView) QQmlContext {
        return .{ .ptr = qtc.QQuickView_RootContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rootObject` instead
    ///
    pub const RootObject = rootObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#rootObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn rootObject(self: QQuickView) QQuickItem {
        return .{ .ptr = qtc.QQuickView_RootObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resizeMode` instead
    ///
    pub const ResizeMode = resizeMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qquickview_enums.ResizeMode `
    ///
    pub fn resizeMode(self: QQuickView) i32 {
        return qtc.QQuickView_ResizeMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResizeMode` instead
    ///
    pub const SetResizeMode = setResizeMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _resizeMode: qquickview_enums.ResizeMode `
    ///
    pub fn setResizeMode(self: QQuickView, _resizeMode: i32) void {
        qtc.QQuickView_SetResizeMode(@ptrCast(self.ptr), @bitCast(_resizeMode));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qquickview_enums.Status `
    ///
    pub fn status(self: QQuickView) i32 {
        return qtc.QQuickView_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errors` instead
    ///
    pub const Errors = errors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#errors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errors(self: QQuickView, allocator: std.mem.Allocator) []QQmlError {
        const _arr: qtc.libqt_list = qtc.QQuickView_Errors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQmlError, _arr.len) catch @panic("QQuickView.errors: Memory allocation failed");
        const _data_val: [*]QtC.QQmlError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn sizeHint(self: QQuickView) QSize {
        return .{ .ptr = qtc.QQuickView_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `initialSize` instead
    ///
    pub const InitialSize = initialSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#initialSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn initialSize(self: QQuickView) QSize {
        return .{ .ptr = qtc.QQuickView_InitialSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _source: QUrl `
    ///
    pub fn setSource(self: QQuickView, _source: anytype) void {
        comptime _ = @TypeOf(_source)._is_QUrl;
        qtc.QQuickView_SetSource(@ptrCast(self.ptr), @ptrCast(_source.ptr));
    }

    /// ### DEPRECATED: Use `loadFromModule` instead
    ///
    pub const LoadFromModule = loadFromModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#loadFromModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` typeName: []const u8 `
    ///
    pub fn loadFromModule(self: QQuickView, uri: []const u8, typeName: []const u8) void {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const typeName_str = qtc.libqt_string{
            .len = typeName.len,
            .data = typeName.ptr,
        };
        qtc.QQuickView_LoadFromModule(@ptrCast(self.ptr), uri_str, typeName_str);
    }

    /// ### DEPRECATED: Use `setInitialProperties` instead
    ///
    pub const SetInitialProperties = setInitialProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setInitialProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` initialProperties: ArrayMap_constu8_QVariant `
    ///
    pub fn setInitialProperties(self: QQuickView, allocator: std.mem.Allocator, initialProperties: ArrayMap_constu8_QVariant) void {
        const initialProperties_count = initialProperties.count();
        const initialProperties_keys = allocator.alloc(qtc.libqt_string, initialProperties_count) catch @panic("QQuickView.setInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_keys);
        const initialProperties_values = allocator.alloc(QtC.QVariant, initialProperties_count) catch @panic("QQuickView.setInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_values);
        var initialProperties_i: usize = 0;
        var initialProperties_it = initialProperties.iterator();
        while (initialProperties_it.next()) |it_entry| : (initialProperties_i += 1) {
            const initialProperties_key = it_entry.key_ptr.*;
            initialProperties_keys[initialProperties_i] = qtc.libqt_string{
                .len = initialProperties_key.len,
                .data = initialProperties_key.ptr,
            };
            initialProperties_values[initialProperties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const initialProperties_map = qtc.libqt_map{
            .len = initialProperties_count,
            .keys = @ptrCast(initialProperties_keys.ptr),
            .values = @ptrCast(initialProperties_values.ptr),
        };
        qtc.QQuickView_SetInitialProperties(@ptrCast(self.ptr), initialProperties_map);
    }

    /// ### DEPRECATED: Use `setContent` instead
    ///
    pub const SetContent = setContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` url: QUrl `
    ///
    /// ` component: QQmlComponent `
    ///
    /// ` item: QObject `
    ///
    pub fn setContent(self: QQuickView, url: anytype, component: anytype, item: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(component)._is_QQmlComponent;
        comptime _ = @TypeOf(item)._is_QObject;
        qtc.QQuickView_SetContent(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(component.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: qquickview_enums.Status `
    ///
    pub fn statusChanged(self: QQuickView, param1: i32) void {
        qtc.QQuickView_StatusChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: qquickview_enums.Status) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QQuickView_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn resizeEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QQuickView_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QQuickView, callback: *const fn (QQuickView, QResizeEvent) callconv(.c) void) void {
        qtc.QQuickView_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QQuickView_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.QQuickView_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickView, callback: *const fn (QQuickView, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickView_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.QQuickView_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QQuickView_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QQuickView, callback: *const fn (QQuickView, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickView_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QQuickView_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QQuickView_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QQuickView, callback: *const fn (QQuickView, QKeyEvent) callconv(.c) void) void {
        qtc.QQuickView_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QQuickView_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QQuickView, callback: *const fn (QQuickView, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickView_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QQuickView, callback: *const fn (QQuickView, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickView_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QQuickView, callback: *const fn (QQuickView, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickView_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        var _str = qtc.QQuickView_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.tr2: Memory allocation failed");
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
        var _str = qtc.QQuickView_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `contentItem` instead
    ///
    pub const ContentItem = contentItem;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#contentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn contentItem(self: QQuickView) QQuickItem {
        return .{ .ptr = qtc.QQuickWindow_ContentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeFocusItem` instead
    ///
    pub const ActiveFocusItem = activeFocusItem;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn activeFocusItem(self: QQuickView) QQuickItem {
        return .{ .ptr = qtc.QQuickWindow_ActiveFocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mouseGrabberItem` instead
    ///
    pub const MouseGrabberItem = mouseGrabberItem;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseGrabberItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn mouseGrabberItem(self: QQuickView) QQuickItem {
        return .{ .ptr = qtc.QQuickWindow_MouseGrabberItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabWindow` instead
    ///
    pub const GrabWindow = grabWindow;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn grabWindow(self: QQuickView) QImage {
        return .{ .ptr = qtc.QQuickWindow_GrabWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRenderTarget` instead
    ///
    pub const SetRenderTarget = setRenderTarget;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setRenderTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` target: QQuickRenderTarget `
    ///
    pub fn setRenderTarget(self: QQuickView, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QQuickRenderTarget;
        qtc.QQuickWindow_SetRenderTarget(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `renderTarget` instead
    ///
    pub const RenderTarget = renderTarget;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#renderTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn renderTarget(self: QQuickView) QQuickRenderTarget {
        return .{ .ptr = qtc.QQuickWindow_RenderTarget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `graphicsStateInfo` instead
    ///
    pub const GraphicsStateInfo = graphicsStateInfo;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsStateInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn graphicsStateInfo(self: QQuickView) QQuickWindow__GraphicsStateInfo {
        return .{ .ptr = qtc.QQuickWindow_GraphicsStateInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `beginExternalCommands` instead
    ///
    pub const BeginExternalCommands = beginExternalCommands;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beginExternalCommands)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn beginExternalCommands(self: QQuickView) void {
        qtc.QQuickWindow_BeginExternalCommands(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endExternalCommands` instead
    ///
    pub const EndExternalCommands = endExternalCommands;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#endExternalCommands)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn endExternalCommands(self: QQuickView) void {
        qtc.QQuickWindow_EndExternalCommands(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `incubationController` instead
    ///
    pub const IncubationController = incubationController;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#incubationController)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn incubationController(self: QQuickView) QQmlIncubationController {
        return .{ .ptr = qtc.QQuickWindow_IncubationController(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createTextureFromImage` instead
    ///
    pub const CreateTextureFromImage = createTextureFromImage;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` image: QImage `
    ///
    pub fn createTextureFromImage(self: QQuickView, image: anytype) QSGTexture {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QQuickWindow_CreateTextureFromImage(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `createTextureFromImage2` instead
    ///
    pub const CreateTextureFromImage2 = createTextureFromImage2;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextureFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` image: QImage `
    ///
    /// ` options: flag of qquickwindow_enums.CreateTextureOption `
    ///
    pub fn createTextureFromImage2(self: QQuickView, image: anytype, options: i32) QSGTexture {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QQuickWindow_CreateTextureFromImage2(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QQuickView, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QQuickWindow_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn color(self: QQuickView) QColor {
        return .{ .ptr = qtc.QQuickWindow_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasDefaultAlphaBuffer` instead
    ///
    pub const HasDefaultAlphaBuffer = hasDefaultAlphaBuffer;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hasDefaultAlphaBuffer)
    ///
    pub fn hasDefaultAlphaBuffer() bool {
        return qtc.QQuickWindow_HasDefaultAlphaBuffer();
    }

    /// ### DEPRECATED: Use `setDefaultAlphaBuffer` instead
    ///
    pub const SetDefaultAlphaBuffer = setDefaultAlphaBuffer;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setDefaultAlphaBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` useAlpha: bool `
    ///
    pub fn setDefaultAlphaBuffer(useAlpha: bool) void {
        qtc.QQuickWindow_SetDefaultAlphaBuffer(useAlpha);
    }

    /// ### DEPRECATED: Use `setPersistentGraphics` instead
    ///
    pub const SetPersistentGraphics = setPersistentGraphics;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentGraphics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` persistent: bool `
    ///
    pub fn setPersistentGraphics(self: QQuickView, persistent: bool) void {
        qtc.QQuickWindow_SetPersistentGraphics(@ptrCast(self.ptr), persistent);
    }

    /// ### DEPRECATED: Use `isPersistentGraphics` instead
    ///
    pub const IsPersistentGraphics = isPersistentGraphics;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentGraphics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isPersistentGraphics(self: QQuickView) bool {
        return qtc.QQuickWindow_IsPersistentGraphics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistentSceneGraph` instead
    ///
    pub const SetPersistentSceneGraph = setPersistentSceneGraph;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setPersistentSceneGraph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` persistent: bool `
    ///
    pub fn setPersistentSceneGraph(self: QQuickView, persistent: bool) void {
        qtc.QQuickWindow_SetPersistentSceneGraph(@ptrCast(self.ptr), persistent);
    }

    /// ### DEPRECATED: Use `isPersistentSceneGraph` instead
    ///
    pub const IsPersistentSceneGraph = isPersistentSceneGraph;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isPersistentSceneGraph)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isPersistentSceneGraph(self: QQuickView) bool {
        return qtc.QQuickWindow_IsPersistentSceneGraph(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSceneGraphInitialized` instead
    ///
    pub const IsSceneGraphInitialized = isSceneGraphInitialized;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#isSceneGraphInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isSceneGraphInitialized(self: QQuickView) bool {
        return qtc.QQuickWindow_IsSceneGraphInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scheduleRenderJob` instead
    ///
    pub const ScheduleRenderJob = scheduleRenderJob;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#scheduleRenderJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` job: QRunnable `
    ///
    /// ` schedule: qquickwindow_enums.RenderStage `
    ///
    pub fn scheduleRenderJob(self: QQuickView, job: anytype, schedule: i32) void {
        comptime _ = @TypeOf(job)._is_QRunnable;
        qtc.QQuickWindow_ScheduleRenderJob(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(schedule));
    }

    /// ### DEPRECATED: Use `effectiveDevicePixelRatio` instead
    ///
    pub const EffectiveDevicePixelRatio = effectiveDevicePixelRatio;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#effectiveDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn effectiveDevicePixelRatio(self: QQuickView) f64 {
        return qtc.QQuickWindow_EffectiveDevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rendererInterface` instead
    ///
    pub const RendererInterface = rendererInterface;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#rendererInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn rendererInterface(self: QQuickView) QSGRendererInterface {
        return .{ .ptr = qtc.QQuickWindow_RendererInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsApi` instead
    ///
    pub const SetGraphicsApi = setGraphicsApi;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsApi)
    ///
    /// ## Parameter(s):
    ///
    /// ` api: qsgrendererinterface_enums.GraphicsApi `
    ///
    pub fn setGraphicsApi(api: i32) void {
        qtc.QQuickWindow_SetGraphicsApi(@bitCast(api));
    }

    /// ### DEPRECATED: Use `graphicsApi` instead
    ///
    pub const GraphicsApi = graphicsApi;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsApi)
    ///
    /// ## Returns:
    ///
    /// ` qsgrendererinterface_enums.GraphicsApi `
    ///
    pub fn graphicsApi() i32 {
        return qtc.QQuickWindow_GraphicsApi();
    }

    /// ### DEPRECATED: Use `setSceneGraphBackend` instead
    ///
    pub const SetSceneGraphBackend = setSceneGraphBackend;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setSceneGraphBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` backend: []const u8 `
    ///
    pub fn setSceneGraphBackend(backend: []const u8) void {
        const backend_str = qtc.libqt_string{
            .len = backend.len,
            .data = backend.ptr,
        };
        qtc.QQuickWindow_SetSceneGraphBackend(backend_str);
    }

    /// ### DEPRECATED: Use `sceneGraphBackend` instead
    ///
    pub const SceneGraphBackend = sceneGraphBackend;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sceneGraphBackend(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWindow_SceneGraphBackend();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.sceneGraphBackend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGraphicsDevice` instead
    ///
    pub const SetGraphicsDevice = setGraphicsDevice;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` device: QQuickGraphicsDevice `
    ///
    pub fn setGraphicsDevice(self: QQuickView, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QQuickGraphicsDevice;
        qtc.QQuickWindow_SetGraphicsDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `graphicsDevice` instead
    ///
    pub const GraphicsDevice = graphicsDevice;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn graphicsDevice(self: QQuickView) QQuickGraphicsDevice {
        return .{ .ptr = qtc.QQuickWindow_GraphicsDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsConfiguration` instead
    ///
    pub const SetGraphicsConfiguration = setGraphicsConfiguration;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setGraphicsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` config: QQuickGraphicsConfiguration `
    ///
    pub fn setGraphicsConfiguration(self: QQuickView, config: anytype) void {
        comptime _ = @TypeOf(config)._is_QQuickGraphicsConfiguration;
        qtc.QQuickWindow_SetGraphicsConfiguration(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `graphicsConfiguration` instead
    ///
    pub const GraphicsConfiguration = graphicsConfiguration;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#graphicsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn graphicsConfiguration(self: QQuickView) QQuickGraphicsConfiguration {
        return .{ .ptr = qtc.QQuickWindow_GraphicsConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createRectangleNode` instead
    ///
    pub const CreateRectangleNode = createRectangleNode;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createRectangleNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn createRectangleNode(self: QQuickView) QSGRectangleNode {
        return .{ .ptr = qtc.QQuickWindow_CreateRectangleNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createImageNode` instead
    ///
    pub const CreateImageNode = createImageNode;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createImageNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn createImageNode(self: QQuickView) QSGImageNode {
        return .{ .ptr = qtc.QQuickWindow_CreateImageNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createNinePatchNode` instead
    ///
    pub const CreateNinePatchNode = createNinePatchNode;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createNinePatchNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn createNinePatchNode(self: QQuickView) QSGNinePatchNode {
        return .{ .ptr = qtc.QQuickWindow_CreateNinePatchNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createTextNode` instead
    ///
    pub const CreateTextNode = createTextNode;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#createTextNode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn createTextNode(self: QQuickView) QSGTextNode {
        return .{ .ptr = qtc.QQuickWindow_CreateTextNode(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textRenderType` instead
    ///
    pub const TextRenderType = textRenderType;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#textRenderType)
    ///
    /// ## Returns:
    ///
    /// ` qquickwindow_enums.TextRenderType `
    ///
    pub fn textRenderType() i32 {
        return qtc.QQuickWindow_TextRenderType();
    }

    /// ### DEPRECATED: Use `setTextRenderType` instead
    ///
    pub const SetTextRenderType = setTextRenderType;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#setTextRenderType)
    ///
    /// ## Parameter(s):
    ///
    /// ` renderType: qquickwindow_enums.TextRenderType `
    ///
    pub fn setTextRenderType(renderType: i32) void {
        qtc.QQuickWindow_SetTextRenderType(@bitCast(renderType));
    }

    /// ### DEPRECATED: Use `frameSwapped` instead
    ///
    pub const FrameSwapped = frameSwapped;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn frameSwapped(self: QQuickView) void {
        qtc.QQuickWindow_FrameSwapped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFrameSwapped` instead
    ///
    pub const OnFrameSwapped = onFrameSwapped;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#frameSwapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onFrameSwapped(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_FrameSwapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneGraphInitialized` instead
    ///
    pub const SceneGraphInitialized = sceneGraphInitialized;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn sceneGraphInitialized(self: QQuickView) void {
        qtc.QQuickWindow_SceneGraphInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSceneGraphInitialized` instead
    ///
    pub const OnSceneGraphInitialized = onSceneGraphInitialized;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInitialized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onSceneGraphInitialized(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_SceneGraphInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneGraphInvalidated` instead
    ///
    pub const SceneGraphInvalidated = sceneGraphInvalidated;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn sceneGraphInvalidated(self: QQuickView) void {
        qtc.QQuickWindow_SceneGraphInvalidated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSceneGraphInvalidated` instead
    ///
    pub const OnSceneGraphInvalidated = onSceneGraphInvalidated;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphInvalidated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onSceneGraphInvalidated(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_SceneGraphInvalidated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beforeSynchronizing` instead
    ///
    pub const BeforeSynchronizing = beforeSynchronizing;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn beforeSynchronizing(self: QQuickView) void {
        qtc.QQuickWindow_BeforeSynchronizing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeforeSynchronizing` instead
    ///
    pub const OnBeforeSynchronizing = onBeforeSynchronizing;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeSynchronizing)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onBeforeSynchronizing(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_BeforeSynchronizing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `afterSynchronizing` instead
    ///
    pub const AfterSynchronizing = afterSynchronizing;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn afterSynchronizing(self: QQuickView) void {
        qtc.QQuickWindow_AfterSynchronizing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAfterSynchronizing` instead
    ///
    pub const OnAfterSynchronizing = onAfterSynchronizing;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterSynchronizing)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onAfterSynchronizing(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_AfterSynchronizing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beforeRendering` instead
    ///
    pub const BeforeRendering = beforeRendering;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn beforeRendering(self: QQuickView) void {
        qtc.QQuickWindow_BeforeRendering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeforeRendering` instead
    ///
    pub const OnBeforeRendering = onBeforeRendering;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRendering)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onBeforeRendering(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_BeforeRendering(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `afterRendering` instead
    ///
    pub const AfterRendering = afterRendering;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn afterRendering(self: QQuickView) void {
        qtc.QQuickWindow_AfterRendering(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAfterRendering` instead
    ///
    pub const OnAfterRendering = onAfterRendering;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRendering)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onAfterRendering(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_AfterRendering(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `afterAnimating` instead
    ///
    pub const AfterAnimating = afterAnimating;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn afterAnimating(self: QQuickView) void {
        qtc.QQuickWindow_AfterAnimating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAfterAnimating` instead
    ///
    pub const OnAfterAnimating = onAfterAnimating;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterAnimating)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onAfterAnimating(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_AfterAnimating(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneGraphAboutToStop` instead
    ///
    pub const SceneGraphAboutToStop = sceneGraphAboutToStop;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn sceneGraphAboutToStop(self: QQuickView) void {
        qtc.QQuickWindow_SceneGraphAboutToStop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSceneGraphAboutToStop` instead
    ///
    pub const OnSceneGraphAboutToStop = onSceneGraphAboutToStop;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphAboutToStop)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onSceneGraphAboutToStop(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_SceneGraphAboutToStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QColor `
    ///
    pub fn colorChanged(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QColor;
        qtc.QQuickWindow_ColorChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QQuickView, callback: *const fn (QQuickView, QColor) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFocusItemChanged` instead
    ///
    pub const ActiveFocusItemChanged = activeFocusItemChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn activeFocusItemChanged(self: QQuickView) void {
        qtc.QQuickWindow_ActiveFocusItemChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveFocusItemChanged` instead
    ///
    pub const OnActiveFocusItemChanged = onActiveFocusItemChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#activeFocusItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onActiveFocusItemChanged(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_ActiveFocusItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneGraphError` instead
    ///
    pub const SceneGraphError = sceneGraphError;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` errorVal: qquickwindow_enums.SceneGraphError `
    ///
    /// ` message: []const u8 `
    ///
    pub fn sceneGraphError(self: QQuickView, errorVal: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QQuickWindow_SceneGraphError(@ptrCast(self.ptr), @bitCast(errorVal), message_str);
    }

    /// ### DEPRECATED: Use `onSceneGraphError` instead
    ///
    pub const OnSceneGraphError = onSceneGraphError;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#sceneGraphError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, errorVal: qquickwindow_enums.SceneGraphError, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSceneGraphError(self: QQuickView, callback: *const fn (QQuickView, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_SceneGraphError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beforeRenderPassRecording` instead
    ///
    pub const BeforeRenderPassRecording = beforeRenderPassRecording;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn beforeRenderPassRecording(self: QQuickView) void {
        qtc.QQuickWindow_BeforeRenderPassRecording(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeforeRenderPassRecording` instead
    ///
    pub const OnBeforeRenderPassRecording = onBeforeRenderPassRecording;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeRenderPassRecording)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onBeforeRenderPassRecording(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_BeforeRenderPassRecording(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `afterRenderPassRecording` instead
    ///
    pub const AfterRenderPassRecording = afterRenderPassRecording;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn afterRenderPassRecording(self: QQuickView) void {
        qtc.QQuickWindow_AfterRenderPassRecording(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAfterRenderPassRecording` instead
    ///
    pub const OnAfterRenderPassRecording = onAfterRenderPassRecording;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterRenderPassRecording)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onAfterRenderPassRecording(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_AfterRenderPassRecording(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn paletteChanged(self: QQuickView) void {
        qtc.QQuickWindow_PaletteChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteCreated` instead
    ///
    pub const PaletteCreated = paletteCreated;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn paletteCreated(self: QQuickView) void {
        qtc.QQuickWindow_PaletteCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteCreated` instead
    ///
    pub const OnPaletteCreated = onPaletteCreated;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#paletteCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onPaletteCreated(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_PaletteCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beforeFrameBegin` instead
    ///
    pub const BeforeFrameBegin = beforeFrameBegin;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn beforeFrameBegin(self: QQuickView) void {
        qtc.QQuickWindow_BeforeFrameBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeforeFrameBegin` instead
    ///
    pub const OnBeforeFrameBegin = onBeforeFrameBegin;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#beforeFrameBegin)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onBeforeFrameBegin(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_BeforeFrameBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `afterFrameEnd` instead
    ///
    pub const AfterFrameEnd = afterFrameEnd;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn afterFrameEnd(self: QQuickView) void {
        qtc.QQuickWindow_AfterFrameEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAfterFrameEnd` instead
    ///
    pub const OnAfterFrameEnd = onAfterFrameEnd;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#afterFrameEnd)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onAfterFrameEnd(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QQuickWindow_Connect_AfterFrameEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn update(self: QQuickView) void {
        qtc.QQuickWindow_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `releaseResources` instead
    ///
    pub const ReleaseResources = releaseResources;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#releaseResources)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn releaseResources(self: QQuickView) void {
        qtc.QQuickWindow_ReleaseResources(@ptrCast(self.ptr));
    }

    /// Inherited from QWindow
    ///
    /// Upcasts to a QSurface object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn asQSurface(self: QQuickView) QSurface {
        return .{ .ptr = qtc.QWindow_AsQSurface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// Downcasts to a QQuickView object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qsurface: QSurface `
    ///
    pub fn fromQSurface(_qsurface: anytype) QQuickView {
        comptime _ = @TypeOf(_qsurface)._is_QSurface;
        return .{ .ptr = @ptrCast(qtc.QWindow_FromQSurface(@ptrCast(_qsurface.ptr))) };
    }

    /// ### DEPRECATED: Use `setSurfaceType` instead
    ///
    pub const SetSurfaceType = setSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn setSurfaceType(self: QQuickView, _surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self.ptr), @bitCast(_surfaceType));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isVisible(self: QQuickView) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qwindow_enums.Visibility `
    ///
    pub fn visibility(self: QQuickView) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` v: qwindow_enums.Visibility `
    ///
    pub fn setVisibility(self: QQuickView, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self.ptr), @bitCast(v));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn create(self: QQuickView) void {
        qtc.QWindow_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn winId(self: QQuickView) usize {
        return qtc.QWindow_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn parent(self: QQuickView) QWindow {
        return .{ .ptr = qtc.QWindow_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setParent(self: QQuickView, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isTopLevel(self: QQuickView) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isModal(self: QQuickView) bool {
        return qtc.QWindow_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modality` instead
    ///
    pub const Modality = modality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn modality(self: QQuickView) i32 {
        return qtc.QWindow_Modality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModality` instead
    ///
    pub const SetModality = setModality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn setModality(self: QQuickView, _modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _format: QSurfaceFormat `
    ///
    pub fn setFormat(self: QQuickView, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        qtc.QWindow_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `requestedFormat` instead
    ///
    pub const RequestedFormat = requestedFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn requestedFormat(self: QQuickView) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_RequestedFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setFlags(self: QQuickView, _flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn flags(self: QQuickView) i32 {
        return qtc.QWindow_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setFlag(self: QQuickView, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn type0(self: QQuickView) i32 {
        return qtc.QWindow_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QQuickView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` level: f64 `
    ///
    pub fn setOpacity(self: QQuickView, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn opacity(self: QQuickView) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` region: QRegion `
    ///
    pub fn setMask(self: QQuickView, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QWindow_SetMask(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn mask(self: QQuickView) QRegion {
        return .{ .ptr = qtc.QWindow_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isActive(self: QQuickView) bool {
        return qtc.QWindow_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportContentOrientationChange` instead
    ///
    pub const ReportContentOrientationChange = reportContentOrientationChange;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn reportContentOrientationChange(self: QQuickView, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `contentOrientation` instead
    ///
    pub const ContentOrientation = contentOrientation;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientation(self: QQuickView) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn devicePixelRatio(self: QQuickView) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QQuickView) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowStates` instead
    ///
    pub const WindowStates = windowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowStates(self: QQuickView) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` state: qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QQuickView, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `setWindowStates` instead
    ///
    pub const SetWindowStates = setWindowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` states: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowStates(self: QQuickView, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self.ptr), @bitCast(states));
    }

    /// ### DEPRECATED: Use `setTransientParent` instead
    ///
    pub const SetTransientParent = setTransientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setTransientParent(self: QQuickView, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetTransientParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `transientParent` instead
    ///
    pub const TransientParent = transientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn transientParent(self: QQuickView) QWindow {
        return .{ .ptr = qtc.QWindow_TransientParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` child: QWindow `
    ///
    pub fn isAncestorOf(self: QQuickView, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `isExposed` instead
    ///
    pub const IsExposed = isExposed;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn isExposed(self: QQuickView) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn minimumWidth(self: QQuickView) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn minimumHeight(self: QQuickView) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn maximumWidth(self: QQuickView) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn maximumHeight(self: QQuickView) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn minimumSize(self: QQuickView) QSize {
        return .{ .ptr = qtc.QWindow_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn maximumSize(self: QQuickView) QSize {
        return .{ .ptr = qtc.QWindow_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn baseSize(self: QQuickView) QSize {
        return .{ .ptr = qtc.QWindow_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn sizeIncrement(self: QQuickView) QSize {
        return .{ .ptr = qtc.QWindow_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMinimumSize(self: QQuickView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMaximumSize(self: QQuickView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _size: QSize `
    ///
    pub fn setBaseSize(self: QQuickView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSizeIncrement(self: QQuickView, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn geometry(self: QQuickView) QRect {
        return .{ .ptr = qtc.QWindow_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameMargins` instead
    ///
    pub const FrameMargins = frameMargins;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn frameMargins(self: QQuickView) QMargins {
        return .{ .ptr = qtc.QWindow_FrameMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn frameGeometry(self: QQuickView) QRect {
        return .{ .ptr = qtc.QWindow_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `framePosition` instead
    ///
    pub const FramePosition = framePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn framePosition(self: QQuickView) QPoint {
        return .{ .ptr = qtc.QWindow_FramePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFramePosition` instead
    ///
    pub const SetFramePosition = setFramePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` point: QPoint `
    ///
    pub fn setFramePosition(self: QQuickView, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QWindow_SetFramePosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn width(self: QQuickView) i32 {
        return qtc.QWindow_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn height(self: QQuickView) i32 {
        return qtc.QWindow_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn x(self: QQuickView) i32 {
        return qtc.QWindow_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn y(self: QQuickView) i32 {
        return qtc.QWindow_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn position(self: QQuickView) QPoint {
        return .{ .ptr = qtc.QWindow_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` pt: QPoint `
    ///
    pub fn setPosition(self: QQuickView, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QWindow_SetPosition(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    pub fn setPosition2(self: QQuickView, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` newSize: QSize `
    ///
    pub fn resize(self: QQuickView, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSize;
        qtc.QWindow_Resize(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize2(self: QQuickView, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFilePath` instead
    ///
    pub const SetFilePath = setFilePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _filePath: []const u8 `
    ///
    pub fn setFilePath(self: QQuickView, _filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = _filePath.len,
            .data = _filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: QQuickView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QQuickView, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWindow_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn icon(self: QQuickView) QIcon {
        return .{ .ptr = qtc.QWindow_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn destroy(self: QQuickView) void {
        qtc.QWindow_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardGrabEnabled` instead
    ///
    pub const SetKeyboardGrabEnabled = setKeyboardGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` grab: bool `
    ///
    pub fn setKeyboardGrabEnabled(self: QQuickView, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `setMouseGrabEnabled` instead
    ///
    pub const SetMouseGrabEnabled = setMouseGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` grab: bool `
    ///
    pub fn setMouseGrabEnabled(self: QQuickView, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn screen(self: QQuickView) QScreen {
        return .{ .ptr = qtc.QWindow_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QQuickView, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapToGlobal(self: QQuickView, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapToGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapFromGlobal(self: QQuickView, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapToGlobal2(self: QQuickView, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapFromGlobal2(self: QQuickView, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn cursor(self: QQuickView) QCursor {
        return .{ .ptr = qtc.QWindow_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QQuickView, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWindow_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn unsetCursor(self: QQuickView) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromWinId` instead
    ///
    pub const FromWinId = fromWinId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn fromWinId(id: usize) QWindow {
        return .{ .ptr = qtc.QWindow_FromWinId(@bitCast(id)) };
    }

    /// ### DEPRECATED: Use `requestActivate` instead
    ///
    pub const RequestActivate = requestActivate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn requestActivate(self: QQuickView) void {
        qtc.QWindow_RequestActivate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QQuickView, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn show(self: QQuickView) void {
        qtc.QWindow_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn hide(self: QQuickView) void {
        qtc.QWindow_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn showMinimized(self: QQuickView) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn showMaximized(self: QQuickView) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn showFullScreen(self: QQuickView) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn showNormal(self: QQuickView) void {
        qtc.QWindow_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn close(self: QQuickView) bool {
        return qtc.QWindow_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn raise(self: QQuickView) void {
        qtc.QWindow_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn lower(self: QQuickView) void {
        qtc.QWindow_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startSystemResize` instead
    ///
    pub const StartSystemResize = startSystemResize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` edges: flag of qnamespace_enums.Edge `
    ///
    pub fn startSystemResize(self: QQuickView, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self.ptr), @bitCast(edges));
    }

    /// ### DEPRECATED: Use `startSystemMove` instead
    ///
    pub const StartSystemMove = startSystemMove;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn startSystemMove(self: QQuickView) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QQuickView, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn setX(self: QQuickView, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn setY(self: QQuickView, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn setWidth(self: QQuickView, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn setHeight(self: QQuickView, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QQuickView, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` rect: QRect `
    ///
    pub fn setGeometry2(self: QQuickView, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QWindow_SetGeometry2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` w: i32 `
    ///
    pub fn setMinimumWidth(self: QQuickView, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` h: i32 `
    ///
    pub fn setMinimumHeight(self: QQuickView, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` w: i32 `
    ///
    pub fn setMaximumWidth(self: QQuickView, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` h: i32 `
    ///
    pub fn setMaximumHeight(self: QQuickView, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `alert` instead
    ///
    pub const Alert = alert;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` msec: i32 `
    ///
    pub fn alert(self: QQuickView, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn requestUpdate(self: QQuickView) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenChanged` instead
    ///
    pub const ScreenChanged = screenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn screenChanged(self: QQuickView, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_ScreenChanged(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenChanged` instead
    ///
    pub const OnScreenChanged = onScreenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, screen: QScreen) callconv(.c) void `
    ///
    pub fn onScreenChanged(self: QQuickView, callback: *const fn (QQuickView, QScreen) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modalityChanged` instead
    ///
    pub const ModalityChanged = modalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn modalityChanged(self: QQuickView, _modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `onModalityChanged` instead
    ///
    pub const OnModalityChanged = onModalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, modality: qnamespace_enums.WindowModality) callconv(.c) void `
    ///
    pub fn onModalityChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowStateChanged` instead
    ///
    pub const WindowStateChanged = windowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _windowState: qnamespace_enums.WindowState `
    ///
    pub fn windowStateChanged(self: QQuickView, _windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self.ptr), @bitCast(_windowState));
    }

    /// ### DEPRECATED: Use `onWindowStateChanged` instead
    ///
    pub const OnWindowStateChanged = onWindowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, windowState: qnamespace_enums.WindowState) callconv(.c) void `
    ///
    pub fn onWindowStateChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QQuickView, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QQuickView, callback: *const fn (QQuickView, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn xChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onXChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn yChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onYChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn widthChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn heightChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumWidthChanged` instead
    ///
    pub const MinimumWidthChanged = minimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumWidthChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumWidthChanged` instead
    ///
    pub const OnMinimumWidthChanged = onMinimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumWidthChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightChanged` instead
    ///
    pub const MinimumHeightChanged = minimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumHeightChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumHeightChanged` instead
    ///
    pub const OnMinimumHeightChanged = onMinimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumHeightChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumWidthChanged` instead
    ///
    pub const MaximumWidthChanged = maximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumWidthChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumWidthChanged` instead
    ///
    pub const OnMaximumWidthChanged = onMaximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumWidthChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumHeightChanged` instead
    ///
    pub const MaximumHeightChanged = maximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumHeightChanged(self: QQuickView, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumHeightChanged` instead
    ///
    pub const OnMaximumHeightChanged = onMaximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumHeightChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` arg: bool `
    ///
    pub fn visibleChanged(self: QQuickView, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self.ptr), arg);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, arg: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QQuickView, callback: *const fn (QQuickView, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _visibility: qwindow_enums.Visibility `
    ///
    pub fn visibilityChanged(self: QQuickView, _visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, visibility: qwindow_enums.Visibility) callconv(.c) void `
    ///
    pub fn onVisibilityChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn activeChanged(self: QQuickView) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentOrientationChanged` instead
    ///
    pub const ContentOrientationChanged = contentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientationChanged(self: QQuickView, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onContentOrientationChanged` instead
    ///
    pub const OnContentOrientationChanged = onContentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn onContentOrientationChanged(self: QQuickView, callback: *const fn (QQuickView, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` object: QObject `
    ///
    pub fn focusObjectChanged(self: QQuickView, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QWindow_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, object: QObject) callconv(.c) void `
    ///
    pub fn onFocusObjectChanged(self: QQuickView, callback: *const fn (QQuickView, QObject) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: QQuickView, _opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, opacity: f64) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QQuickView, callback: *const fn (QQuickView, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transientParentChanged` instead
    ///
    pub const TransientParentChanged = transientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` _transientParent: QWindow `
    ///
    pub fn transientParentChanged(self: QQuickView, _transientParent: anytype) void {
        comptime _ = @TypeOf(_transientParent)._is_QWindow;
        qtc.QWindow_TransientParentChanged(@ptrCast(self.ptr), @ptrCast(_transientParent.ptr));
    }

    /// ### DEPRECATED: Use `onTransientParentChanged` instead
    ///
    pub const OnTransientParentChanged = onTransientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, transientParent: QWindow) callconv(.c) void `
    ///
    pub fn onTransientParentChanged(self: QQuickView, callback: *const fn (QQuickView, QWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent1` instead
    ///
    pub const Parent1 = parent1;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn parent1(self: QQuickView, mode: i32) QWindow {
        return .{ .ptr = qtc.QWindow_Parent1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QQuickView, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `isAncestorOf2` instead
    ///
    pub const IsAncestorOf2 = isAncestorOf2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` child: QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn isAncestorOf2(self: QQuickView, child: anytype, mode: i32) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self.ptr), @ptrCast(child.ptr), @bitCast(mode));
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
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickView, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickView.objectName: Memory allocation failed");
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
    /// ` self: QQuickView `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickView, name: []const u8) void {
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
    /// ` self: QQuickView `
    ///
    pub fn isWidgetType(self: QQuickView) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn isWindowType(self: QQuickView) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn isQuickItemType(self: QQuickView) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn signalsBlocked(self: QQuickView) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickView, b: bool) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn thread(self: QQuickView) QThread {
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
    /// ` self: QQuickView `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickView, _thread: anytype) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickView, interval: i32) i32 {
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
    /// ` self: QQuickView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickView, time: i64) i32 {
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
    /// ` self: QQuickView `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickView, id: i32) void {
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
    /// ` self: QQuickView `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickView, id: i32) void {
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
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickView, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickView.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
    /// ` self: QQuickView `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickView, filterObj: anytype) void {
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
    /// ` self: QQuickView `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickView, obj: anytype) void {
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
    /// ` self: QQuickView `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickView, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickView `
    ///
    pub fn disconnect3(self: QQuickView) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickView, receiver: anytype) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn dumpObjectTree(self: QQuickView) void {
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
    /// ` self: QQuickView `
    ///
    pub fn dumpObjectInfo(self: QQuickView) void {
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
    /// ` self: QQuickView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickView, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickView, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickView `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickView, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickView.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickView.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickView `
    ///
    pub fn bindingStorage(self: QQuickView) QBindingStorage {
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
    /// ` self: QQuickView `
    ///
    pub fn bindingStorage2(self: QQuickView) QBindingStorage {
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
    /// ` self: QQuickView `
    ///
    pub fn destroyed(self: QQuickView) void {
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
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickView, callback: *const fn (QQuickView) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickView, classname: [:0]const u8) bool {
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
    /// ` self: QQuickView `
    ///
    pub fn deleteLater(self: QQuickView) void {
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
    /// ` self: QQuickView `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickView, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickView `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickView, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickView `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickView, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickView, signal: [:0]const u8) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickView, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickView, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickView, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickView `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickView, param1: anytype) void {
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
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickView, callback: *const fn (QQuickView, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceClass` instead
    ///
    pub const SurfaceClass = surfaceClass;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn surfaceClass(self: QQuickView) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.asQSurface().ptr));
    }

    /// ### DEPRECATED: Use `supportsOpenGL` instead
    ///
    pub const SupportsOpenGL = supportsOpenGL;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn supportsOpenGL(self: QQuickView) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.asQSurface().ptr));
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn focusObject(self: QQuickView) QObject {
        return .{ .ptr = qtc.QQuickView_FocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFocusObject` instead
    ///
    pub const SuperFocusObject = superFocusObject;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn superFocusObject(self: QQuickView) QObject {
        return .{ .ptr = qtc.QQuickView_SuperFocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusObject` instead
    ///
    pub const OnFocusObject = onFocusObject;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onFocusObject(self: QQuickView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickView_OnFocusObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accessibleRoot` instead
    ///
    pub const AccessibleRoot = accessibleRoot;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn accessibleRoot(self: QQuickView) QAccessibleInterface {
        return .{ .ptr = qtc.QQuickView_AccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleRoot` instead
    ///
    pub const SuperAccessibleRoot = superAccessibleRoot;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn superAccessibleRoot(self: QQuickView) QAccessibleInterface {
        return .{ .ptr = qtc.QQuickView_SuperAccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleRoot` instead
    ///
    pub const OnAccessibleRoot = onAccessibleRoot;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onAccessibleRoot(self: QQuickView, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QQuickView_OnAccessibleRoot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exposeEvent` instead
    ///
    pub const ExposeEvent = exposeEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QExposeEvent `
    ///
    pub fn exposeEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QQuickView_ExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superExposeEvent` instead
    ///
    pub const SuperExposeEvent = superExposeEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QExposeEvent `
    ///
    pub fn superExposeEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QExposeEvent;
        qtc.QQuickView_SuperExposeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onExposeEvent` instead
    ///
    pub const OnExposeEvent = onExposeEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#exposeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QExposeEvent) callconv(.c) void `
    ///
    pub fn onExposeEvent(self: QQuickView, callback: *const fn (QQuickView, QExposeEvent) callconv(.c) void) void {
        qtc.QQuickView_OnExposeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QQuickView_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn superShowEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QQuickView_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QQuickView, callback: *const fn (QQuickView, QShowEvent) callconv(.c) void) void {
        qtc.QQuickView_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn hideEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QQuickView_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn superHideEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.QQuickView_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QQuickView, callback: *const fn (QQuickView, QHideEvent) callconv(.c) void) void {
        qtc.QQuickView_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn closeEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QQuickView_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.QQuickView_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QQuickView, callback: *const fn (QQuickView, QCloseEvent) callconv(.c) void) void {
        qtc.QQuickView_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusInEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickView_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickView_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QQuickView, callback: *const fn (QQuickView, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickView_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickView_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.QQuickView_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QQuickView, callback: *const fn (QQuickView, QFocusEvent) callconv(.c) void) void {
        qtc.QQuickView_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQuickView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickView_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQuickView, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQuickView_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickView, callback: *const fn (QQuickView, QEvent) callconv(.c) bool) void {
        qtc.QQuickView_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.QQuickView_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QQuickView, callback: *const fn (QQuickView, QMouseEvent) callconv(.c) void) void {
        qtc.QQuickView_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn wheelEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QQuickView_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QQuickView_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QQuickView, callback: *const fn (QQuickView, QWheelEvent) callconv(.c) void) void {
        qtc.QQuickView_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn tabletEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QQuickView_TabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTabletEvent;
        qtc.QQuickView_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

    /// Inherited from QQuickWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwindow.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QQuickView, callback: *const fn (QQuickView, QTabletEvent) callconv(.c) void) void {
        qtc.QQuickView_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceType` instead
    ///
    pub const SurfaceType = surfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn surfaceType(self: QQuickView) i32 {
        return qtc.QQuickView_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSurfaceType` instead
    ///
    pub const SuperSurfaceType = superSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn superSurfaceType(self: QQuickView) i32 {
        return qtc.QQuickView_SuperSurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSurfaceType` instead
    ///
    pub const OnSurfaceType = onSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSurfaceType(self: QQuickView, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickView_OnSurfaceType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn format(self: QQuickView) QSurfaceFormat {
        return .{ .ptr = qtc.QQuickView_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn superFormat(self: QQuickView) QSurfaceFormat {
        return .{ .ptr = qtc.QQuickView_SuperFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) QSurfaceFormat `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: QQuickView, callback: *const fn () callconv(.c) QSurfaceFormat) void {
        qtc.QQuickView_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn size(self: QQuickView) QSize {
        return .{ .ptr = qtc.QQuickView_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    pub fn superSize(self: QQuickView) QSize {
        return .{ .ptr = qtc.QQuickView_SuperSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSize(self: QQuickView, callback: *const fn () callconv(.c) QSize) void {
        qtc.QQuickView_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn paintEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.QQuickView_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.QQuickView_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QQuickView, callback: *const fn (QQuickView, QPaintEvent) callconv(.c) void) void {
        qtc.QQuickView_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn moveEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QQuickView_MoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMoveEvent;
        qtc.QQuickView_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QQuickView, callback: *const fn (QQuickView, QMoveEvent) callconv(.c) void) void {
        qtc.QQuickView_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `touchEvent` instead
    ///
    pub const TouchEvent = touchEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTouchEvent `
    ///
    pub fn touchEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QQuickView_TouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTouchEvent` instead
    ///
    pub const SuperTouchEvent = superTouchEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` param1: QTouchEvent `
    ///
    pub fn superTouchEvent(self: QQuickView, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTouchEvent;
        qtc.QQuickView_SuperTouchEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTouchEvent` instead
    ///
    pub const OnTouchEvent = onTouchEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, param1: QTouchEvent) callconv(.c) void `
    ///
    pub fn onTouchEvent(self: QQuickView, callback: *const fn (QQuickView, QTouchEvent) callconv(.c) void) void {
        qtc.QQuickView_OnTouchEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QQuickView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QQuickView_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QQuickView, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QQuickView_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QQuickView, callback: *const fn (QQuickView, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QQuickView_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickView, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickView_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickView, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickView_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickView, callback: *const fn (QQuickView, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickView_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickView_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickView_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickView, callback: *const fn (QQuickView, QChildEvent) callconv(.c) void) void {
        qtc.QQuickView_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickView_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickView, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickView_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickView, callback: *const fn (QQuickView, QEvent) callconv(.c) void) void {
        qtc.QQuickView_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickView_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickView_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickView, callback: *const fn (QQuickView, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickView_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickView_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickView, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickView_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickView, callback: *const fn (QQuickView, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickView_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn resolveInterface(self: QQuickView, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QQuickView_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickView `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn superResolveInterface(self: QQuickView, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QQuickView_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn onResolveInterface(self: QQuickView, callback: *const fn (QQuickView, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QQuickView_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    pub fn sender(self: QQuickView) QObject {
        return .{ .ptr = qtc.QQuickView_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickView `
    ///
    pub fn superSender(self: QQuickView) QObject {
        return .{ .ptr = qtc.QQuickView_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickView, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickView_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    pub fn senderSignalIndex(self: QQuickView) i32 {
        return qtc.QQuickView_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickView `
    ///
    pub fn superSenderSignalIndex(self: QQuickView) i32 {
        return qtc.QQuickView_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickView, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickView_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickView_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickView `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickView, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickView_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickView, callback: *const fn (QQuickView, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickView_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickView_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickView, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickView_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickView`
    ///
    /// ` callback: *const fn (self: QQuickView, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickView, callback: *const fn (QQuickView, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickView_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickView `
    ///
    /// ` callback: *const fn (self: QQuickView, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickView, callback: *const fn (QQuickView, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#dtor.QQuickView)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickView `
    ///
    pub fn delete(self: QQuickView) void {
        qtc.QQuickView_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickview.html#public-types)
pub const enums = struct {
    pub const ResizeMode = enum {
        pub const SizeViewToRootObject: i32 = 0;
        pub const SizeRootObjectToView: i32 = 1;
    };

    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Ready: i32 = 1;
        pub const Loading: i32 = 2;
        pub const Error: i32 = 3;
    };
};
