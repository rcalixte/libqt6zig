const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QLinearGradient = @import("libqt6").QLinearGradient;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QQuaternion = @import("libqt6").QQuaternion;
const QSurfaceDataProxy = @import("libqt6").QSurfaceDataProxy;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const q3dtheme_enums = @import("libq3dtheme.zig").enums;
const qabstract3dseries_enums = @import("libqabstract3dseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsurface3dseries_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html)
pub const QSurface3DSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSurface3DSeries,

    pub const _is_QSurface3DSeries = {};
    pub const _is_QAbstract3DSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSurface3DSeries object in C++ memory
    ///
    pub fn new() QSurface3DSeries {
        return .{ .ptr = qtc.QSurface3DSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSurface3DSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _dataProxy: QSurfaceDataProxy `
    ///
    pub fn new2(_dataProxy: anytype) QSurface3DSeries {
        comptime _ = @TypeOf(_dataProxy)._is_QSurfaceDataProxy;
        return .{ .ptr = qtc.QSurface3DSeries_new2(@ptrCast(_dataProxy.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSurface3DSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QSurface3DSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSurface3DSeries_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSurface3DSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _dataProxy: QSurfaceDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_dataProxy: anytype, _parent: anytype) QSurface3DSeries {
        comptime _ = @TypeOf(_dataProxy)._is_QSurfaceDataProxy;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSurface3DSeries_new4(@ptrCast(_dataProxy.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn metaObject(self: QSurface3DSeries) QMetaObject {
        return .{ .ptr = qtc.QSurface3DSeries_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries) callconv(.c) QMetaObject) void {
        qtc.QSurface3DSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn superMetaObject(self: QSurface3DSeries) QMetaObject {
        return .{ .ptr = qtc.QSurface3DSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSurface3DSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSurface3DSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSurface3DSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSurface3DSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSurface3DSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSurface3DSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSurface3DSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSurface3DSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSurface3DSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSurface3DSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QSurface3DSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDataProxy` instead
    ///
    pub const SetDataProxy = setDataProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setDataProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` proxy: QSurfaceDataProxy `
    ///
    pub fn setDataProxy(self: QSurface3DSeries, proxy: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QSurfaceDataProxy;
        qtc.QSurface3DSeries_SetDataProxy(@ptrCast(self.ptr), @ptrCast(proxy.ptr));
    }

    /// ### DEPRECATED: Use `dataProxy` instead
    ///
    pub const DataProxy = dataProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#dataProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn dataProxy(self: QSurface3DSeries) QSurfaceDataProxy {
        return .{ .ptr = qtc.QSurface3DSeries_DataProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedPoint` instead
    ///
    pub const SetSelectedPoint = setSelectedPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setSelectedPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` position: QPoint `
    ///
    pub fn setSelectedPoint(self: QSurface3DSeries, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QSurface3DSeries_SetSelectedPoint(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `selectedPoint` instead
    ///
    pub const SelectedPoint = selectedPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#selectedPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn selectedPoint(self: QSurface3DSeries) QPoint {
        return .{ .ptr = qtc.QSurface3DSeries_SelectedPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `invalidSelectionPosition` instead
    ///
    pub const InvalidSelectionPosition = invalidSelectionPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#invalidSelectionPosition)
    ///
    pub fn invalidSelectionPosition() QPoint {
        return .{ .ptr = qtc.QSurface3DSeries_InvalidSelectionPosition() };
    }

    /// ### DEPRECATED: Use `setFlatShadingEnabled` instead
    ///
    pub const SetFlatShadingEnabled = setFlatShadingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setFlatShadingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlatShadingEnabled(self: QSurface3DSeries, enabled: bool) void {
        qtc.QSurface3DSeries_SetFlatShadingEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isFlatShadingEnabled` instead
    ///
    pub const IsFlatShadingEnabled = isFlatShadingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#isFlatShadingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn isFlatShadingEnabled(self: QSurface3DSeries) bool {
        return qtc.QSurface3DSeries_IsFlatShadingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDrawMode` instead
    ///
    pub const SetDrawMode = setDrawMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setDrawMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` mode: flag of qsurface3dseries_enums.DrawFlag `
    ///
    pub fn setDrawMode(self: QSurface3DSeries, mode: i32) void {
        qtc.QSurface3DSeries_SetDrawMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawMode` instead
    ///
    pub const DrawMode = drawMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#drawMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsurface3dseries_enums.DrawFlag `
    ///
    pub fn drawMode(self: QSurface3DSeries) i32 {
        return qtc.QSurface3DSeries_DrawMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFlatShadingSupported` instead
    ///
    pub const IsFlatShadingSupported = isFlatShadingSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#isFlatShadingSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn isFlatShadingSupported(self: QSurface3DSeries) bool {
        return qtc.QSurface3DSeries_IsFlatShadingSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTexture` instead
    ///
    pub const SetTexture = setTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _texture: QImage `
    ///
    pub fn setTexture(self: QSurface3DSeries, _texture: anytype) void {
        comptime _ = @TypeOf(_texture)._is_QImage;
        qtc.QSurface3DSeries_SetTexture(@ptrCast(self.ptr), @ptrCast(_texture.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn texture(self: QSurface3DSeries) QImage {
        return .{ .ptr = qtc.QSurface3DSeries_Texture(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextureFile` instead
    ///
    pub const SetTextureFile = setTextureFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setTextureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn setTextureFile(self: QSurface3DSeries, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSurface3DSeries_SetTextureFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `textureFile` instead
    ///
    pub const TextureFile = textureFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#textureFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textureFile(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSurface3DSeries_TextureFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.textureFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWireframeColor` instead
    ///
    pub const SetWireframeColor = setWireframeColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#setWireframeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setWireframeColor(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSurface3DSeries_SetWireframeColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `wireframeColor` instead
    ///
    pub const WireframeColor = wireframeColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#wireframeColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn wireframeColor(self: QSurface3DSeries) QColor {
        return .{ .ptr = qtc.QSurface3DSeries_WireframeColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dataProxyChanged` instead
    ///
    pub const DataProxyChanged = dataProxyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#dataProxyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` proxy: QSurfaceDataProxy `
    ///
    pub fn dataProxyChanged(self: QSurface3DSeries, proxy: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QSurfaceDataProxy;
        qtc.QSurface3DSeries_DataProxyChanged(@ptrCast(self.ptr), @ptrCast(proxy.ptr));
    }

    /// ### DEPRECATED: Use `onDataProxyChanged` instead
    ///
    pub const OnDataProxyChanged = onDataProxyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#dataProxyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, proxy: QSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onDataProxyChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QSurfaceDataProxy) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_DataProxyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedPointChanged` instead
    ///
    pub const SelectedPointChanged = selectedPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#selectedPointChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` position: QPoint `
    ///
    pub fn selectedPointChanged(self: QSurface3DSeries, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.QSurface3DSeries_SelectedPointChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedPointChanged` instead
    ///
    pub const OnSelectedPointChanged = onSelectedPointChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#selectedPointChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, position: QPoint) callconv(.c) void `
    ///
    pub fn onSelectedPointChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QPoint) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_SelectedPointChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flatShadingEnabledChanged` instead
    ///
    pub const FlatShadingEnabledChanged = flatShadingEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#flatShadingEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn flatShadingEnabledChanged(self: QSurface3DSeries, enable: bool) void {
        qtc.QSurface3DSeries_FlatShadingEnabledChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onFlatShadingEnabledChanged` instead
    ///
    pub const OnFlatShadingEnabledChanged = onFlatShadingEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#flatShadingEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, enable: bool) callconv(.c) void `
    ///
    pub fn onFlatShadingEnabledChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, bool) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_FlatShadingEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flatShadingSupportedChanged` instead
    ///
    pub const FlatShadingSupportedChanged = flatShadingSupportedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#flatShadingSupportedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn flatShadingSupportedChanged(self: QSurface3DSeries, enable: bool) void {
        qtc.QSurface3DSeries_FlatShadingSupportedChanged(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onFlatShadingSupportedChanged` instead
    ///
    pub const OnFlatShadingSupportedChanged = onFlatShadingSupportedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#flatShadingSupportedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, enable: bool) callconv(.c) void `
    ///
    pub fn onFlatShadingSupportedChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, bool) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_FlatShadingSupportedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawModeChanged` instead
    ///
    pub const DrawModeChanged = drawModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#drawModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` mode: flag of qsurface3dseries_enums.DrawFlag `
    ///
    pub fn drawModeChanged(self: QSurface3DSeries, mode: i32) void {
        qtc.QSurface3DSeries_DrawModeChanged(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onDrawModeChanged` instead
    ///
    pub const OnDrawModeChanged = onDrawModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#drawModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, mode: flag of qsurface3dseries_enums.DrawFlag) callconv(.c) void `
    ///
    pub fn onDrawModeChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, i32) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_DrawModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureChanged` instead
    ///
    pub const TextureChanged = textureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#textureChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` image: QImage `
    ///
    pub fn textureChanged(self: QSurface3DSeries, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QSurface3DSeries_TextureChanged(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `onTextureChanged` instead
    ///
    pub const OnTextureChanged = onTextureChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#textureChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, image: QImage) callconv(.c) void `
    ///
    pub fn onTextureChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QImage) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_TextureChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textureFileChanged` instead
    ///
    pub const TextureFileChanged = textureFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#textureFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn textureFileChanged(self: QSurface3DSeries, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QSurface3DSeries_TextureFileChanged(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `onTextureFileChanged` instead
    ///
    pub const OnTextureFileChanged = onTextureFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#textureFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, filename: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextureFileChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_TextureFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wireframeColorChanged` instead
    ///
    pub const WireframeColorChanged = wireframeColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#wireframeColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn wireframeColorChanged(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSurface3DSeries_WireframeColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onWireframeColorChanged` instead
    ///
    pub const OnWireframeColorChanged = onWireframeColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#wireframeColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onWireframeColorChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QColor) callconv(.c) void) void {
        qtc.QSurface3DSeries_Connect_WireframeColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.QSurface3DSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.tr2: Memory allocation failed");
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
        var _str = qtc.QSurface3DSeries_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dseries_enums.SeriesType `
    ///
    pub fn type0(self: QSurface3DSeries) i32 {
        return qtc.QAbstract3DSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemLabelFormat` instead
    ///
    pub const SetItemLabelFormat = setItemLabelFormat;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setItemLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setItemLabelFormat(self: QSurface3DSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstract3DSeries_SetItemLabelFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `itemLabelFormat` instead
    ///
    pub const ItemLabelFormat = itemLabelFormat;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn itemLabelFormat(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_ItemLabelFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.itemLabelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QSurface3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn isVisible(self: QSurface3DSeries) bool {
        return qtc.QAbstract3DSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMesh` instead
    ///
    pub const SetMesh = setMesh;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _mesh: qabstract3dseries_enums.Mesh `
    ///
    pub fn setMesh(self: QSurface3DSeries, _mesh: i32) void {
        qtc.QAbstract3DSeries_SetMesh(@ptrCast(self.ptr), @bitCast(_mesh));
    }

    /// ### DEPRECATED: Use `mesh` instead
    ///
    pub const Mesh = mesh;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#mesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dseries_enums.Mesh `
    ///
    pub fn mesh(self: QSurface3DSeries) i32 {
        return qtc.QAbstract3DSeries_Mesh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMeshSmooth` instead
    ///
    pub const SetMeshSmooth = setMeshSmooth;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setMeshSmooth(self: QSurface3DSeries, enable: bool) void {
        qtc.QAbstract3DSeries_SetMeshSmooth(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isMeshSmooth` instead
    ///
    pub const IsMeshSmooth = isMeshSmooth;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isMeshSmooth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn isMeshSmooth(self: QSurface3DSeries) bool {
        return qtc.QAbstract3DSeries_IsMeshSmooth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMeshRotation` instead
    ///
    pub const SetMeshRotation = setMeshRotation;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` rotation: QQuaternion `
    ///
    pub fn setMeshRotation(self: QSurface3DSeries, rotation: anytype) void {
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        qtc.QAbstract3DSeries_SetMeshRotation(@ptrCast(self.ptr), @ptrCast(rotation.ptr));
    }

    /// ### DEPRECATED: Use `meshRotation` instead
    ///
    pub const MeshRotation = meshRotation;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn meshRotation(self: QSurface3DSeries) QQuaternion {
        return .{ .ptr = qtc.QAbstract3DSeries_MeshRotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeshAxisAndAngle` instead
    ///
    pub const SetMeshAxisAndAngle = setMeshAxisAndAngle;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMeshAxisAndAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` axis: QVector3D `
    ///
    /// ` angle: f32 `
    ///
    pub fn setMeshAxisAndAngle(self: QSurface3DSeries, axis: anytype, angle: f32) void {
        comptime _ = @TypeOf(axis)._is_QVector3D;
        qtc.QAbstract3DSeries_SetMeshAxisAndAngle(@ptrCast(self.ptr), @ptrCast(axis.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `setUserDefinedMesh` instead
    ///
    pub const SetUserDefinedMesh = setUserDefinedMesh;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setUserDefinedMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setUserDefinedMesh(self: QSurface3DSeries, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QAbstract3DSeries_SetUserDefinedMesh(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `userDefinedMesh` instead
    ///
    pub const UserDefinedMesh = userDefinedMesh;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMesh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userDefinedMesh(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_UserDefinedMesh(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.userDefinedMesh: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColorStyle` instead
    ///
    pub const SetColorStyle = setColorStyle;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setColorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn setColorStyle(self: QSurface3DSeries, style: i32) void {
        qtc.QAbstract3DSeries_SetColorStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `colorStyle` instead
    ///
    pub const ColorStyle = colorStyle;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ## Returns:
    ///
    /// ` q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyle(self: QSurface3DSeries) i32 {
        return qtc.QAbstract3DSeries_ColorStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaseColor` instead
    ///
    pub const SetBaseColor = setBaseColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setBaseColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setBaseColor(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetBaseColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `baseColor` instead
    ///
    pub const BaseColor = baseColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn baseColor(self: QSurface3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_BaseColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseGradient` instead
    ///
    pub const SetBaseGradient = setBaseGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setBaseGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setBaseGradient(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetBaseGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `baseGradient` instead
    ///
    pub const BaseGradient = baseGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn baseGradient(self: QSurface3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_BaseGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleHighlightColor` instead
    ///
    pub const SetSingleHighlightColor = setSingleHighlightColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setSingleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setSingleHighlightColor(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetSingleHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightColor` instead
    ///
    pub const SingleHighlightColor = singleHighlightColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn singleHighlightColor(self: QSurface3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_SingleHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSingleHighlightGradient` instead
    ///
    pub const SetSingleHighlightGradient = setSingleHighlightGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setSingleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setSingleHighlightGradient(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetSingleHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `singleHighlightGradient` instead
    ///
    pub const SingleHighlightGradient = singleHighlightGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn singleHighlightGradient(self: QSurface3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_SingleHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightColor` instead
    ///
    pub const SetMultiHighlightColor = setMultiHighlightColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMultiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn setMultiHighlightColor(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SetMultiHighlightColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightColor` instead
    ///
    pub const MultiHighlightColor = multiHighlightColor;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn multiHighlightColor(self: QSurface3DSeries) QColor {
        return .{ .ptr = qtc.QAbstract3DSeries_MultiHighlightColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMultiHighlightGradient` instead
    ///
    pub const SetMultiHighlightGradient = setMultiHighlightGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setMultiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn setMultiHighlightGradient(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SetMultiHighlightGradient(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `multiHighlightGradient` instead
    ///
    pub const MultiHighlightGradient = multiHighlightGradient;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn multiHighlightGradient(self: QSurface3DSeries) QLinearGradient {
        return .{ .ptr = qtc.QAbstract3DSeries_MultiHighlightGradient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QSurface3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstract3DSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `itemLabel` instead
    ///
    pub const ItemLabel = itemLabel;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn itemLabel(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstract3DSeries_ItemLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.itemLabel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemLabelVisible` instead
    ///
    pub const SetItemLabelVisible = setItemLabelVisible;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#setItemLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setItemLabelVisible(self: QSurface3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_SetItemLabelVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isItemLabelVisible` instead
    ///
    pub const IsItemLabelVisible = isItemLabelVisible;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#isItemLabelVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn isItemLabelVisible(self: QSurface3DSeries) bool {
        return qtc.QAbstract3DSeries_IsItemLabelVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemLabelFormatChanged` instead
    ///
    pub const ItemLabelFormatChanged = itemLabelFormatChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn itemLabelFormatChanged(self: QSurface3DSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstract3DSeries_ItemLabelFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onItemLabelFormatChanged` instead
    ///
    pub const OnItemLabelFormatChanged = onItemLabelFormatChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onItemLabelFormatChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn visibilityChanged(self: QSurface3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_VisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibilityChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshChanged` instead
    ///
    pub const MeshChanged = meshChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _mesh: qabstract3dseries_enums.Mesh `
    ///
    pub fn meshChanged(self: QSurface3DSeries, _mesh: i32) void {
        qtc.QAbstract3DSeries_MeshChanged(@ptrCast(self.ptr), @bitCast(_mesh));
    }

    /// ### DEPRECATED: Use `onMeshChanged` instead
    ///
    pub const OnMeshChanged = onMeshChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, mesh: qabstract3dseries_enums.Mesh) callconv(.c) void `
    ///
    pub fn onMeshChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, i32) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshSmoothChanged` instead
    ///
    pub const MeshSmoothChanged = meshSmoothChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshSmoothChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn meshSmoothChanged(self: QSurface3DSeries, enabled: bool) void {
        qtc.QAbstract3DSeries_MeshSmoothChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onMeshSmoothChanged` instead
    ///
    pub const OnMeshSmoothChanged = onMeshSmoothChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshSmoothChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, enabled: bool) callconv(.c) void `
    ///
    pub fn onMeshSmoothChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshSmoothChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `meshRotationChanged` instead
    ///
    pub const MeshRotationChanged = meshRotationChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` rotation: QQuaternion `
    ///
    pub fn meshRotationChanged(self: QSurface3DSeries, rotation: anytype) void {
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        qtc.QAbstract3DSeries_MeshRotationChanged(@ptrCast(self.ptr), @ptrCast(rotation.ptr));
    }

    /// ### DEPRECATED: Use `onMeshRotationChanged` instead
    ///
    pub const OnMeshRotationChanged = onMeshRotationChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#meshRotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, rotation: QQuaternion) callconv(.c) void `
    ///
    pub fn onMeshRotationChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QQuaternion) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MeshRotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `userDefinedMeshChanged` instead
    ///
    pub const UserDefinedMeshChanged = userDefinedMeshChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMeshChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn userDefinedMeshChanged(self: QSurface3DSeries, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QAbstract3DSeries_UserDefinedMeshChanged(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `onUserDefinedMeshChanged` instead
    ///
    pub const OnUserDefinedMeshChanged = onUserDefinedMeshChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#userDefinedMeshChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, fileName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUserDefinedMeshChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_UserDefinedMeshChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorStyleChanged` instead
    ///
    pub const ColorStyleChanged = colorStyleChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` style: q3dtheme_enums.ColorStyle `
    ///
    pub fn colorStyleChanged(self: QSurface3DSeries, style: i32) void {
        qtc.QAbstract3DSeries_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `onColorStyleChanged` instead
    ///
    pub const OnColorStyleChanged = onColorStyleChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#colorStyleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, style: q3dtheme_enums.ColorStyle) callconv(.c) void `
    ///
    pub fn onColorStyleChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, i32) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ColorStyleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseColorChanged` instead
    ///
    pub const BaseColorChanged = baseColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn baseColorChanged(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_BaseColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onBaseColorChanged` instead
    ///
    pub const OnBaseColorChanged = onBaseColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onBaseColorChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_BaseColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseGradientChanged` instead
    ///
    pub const BaseGradientChanged = baseGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn baseGradientChanged(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_BaseGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onBaseGradientChanged` instead
    ///
    pub const OnBaseGradientChanged = onBaseGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#baseGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onBaseGradientChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_BaseGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightColorChanged` instead
    ///
    pub const SingleHighlightColorChanged = singleHighlightColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn singleHighlightColorChanged(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_SingleHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightColorChanged` instead
    ///
    pub const OnSingleHighlightColorChanged = onSingleHighlightColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onSingleHighlightColorChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_SingleHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `singleHighlightGradientChanged` instead
    ///
    pub const SingleHighlightGradientChanged = singleHighlightGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn singleHighlightGradientChanged(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_SingleHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onSingleHighlightGradientChanged` instead
    ///
    pub const OnSingleHighlightGradientChanged = onSingleHighlightGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#singleHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onSingleHighlightGradientChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_SingleHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightColorChanged` instead
    ///
    pub const MultiHighlightColorChanged = multiHighlightColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn multiHighlightColorChanged(self: QSurface3DSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstract3DSeries_MultiHighlightColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightColorChanged` instead
    ///
    pub const OnMultiHighlightColorChanged = onMultiHighlightColorChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, color: QColor) callconv(.c) void `
    ///
    pub fn onMultiHighlightColorChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QColor) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MultiHighlightColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiHighlightGradientChanged` instead
    ///
    pub const MultiHighlightGradientChanged = multiHighlightGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradientChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn multiHighlightGradientChanged(self: QSurface3DSeries, gradient: anytype) void {
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QAbstract3DSeries_MultiHighlightGradientChanged(@ptrCast(self.ptr), @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `onMultiHighlightGradientChanged` instead
    ///
    pub const OnMultiHighlightGradientChanged = onMultiHighlightGradientChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#multiHighlightGradientChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, gradient: QLinearGradient) callconv(.c) void `
    ///
    pub fn onMultiHighlightGradientChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QLinearGradient) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_MultiHighlightGradientChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn nameChanged(self: QSurface3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstract3DSeries_NameChanged(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemLabelChanged` instead
    ///
    pub const ItemLabelChanged = itemLabelChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` label: []const u8 `
    ///
    pub fn itemLabelChanged(self: QSurface3DSeries, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QAbstract3DSeries_ItemLabelChanged(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `onItemLabelChanged` instead
    ///
    pub const OnItemLabelChanged = onItemLabelChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, label: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onItemLabelChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemLabelVisibilityChanged` instead
    ///
    pub const ItemLabelVisibilityChanged = itemLabelVisibilityChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn itemLabelVisibilityChanged(self: QSurface3DSeries, visible: bool) void {
        qtc.QAbstract3DSeries_ItemLabelVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onItemLabelVisibilityChanged` instead
    ///
    pub const OnItemLabelVisibilityChanged = onItemLabelVisibilityChanged;

    /// Inherited from QAbstract3DSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dseries.html#itemLabelVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, visible: bool) callconv(.c) void `
    ///
    pub fn onItemLabelVisibilityChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, bool) callconv(.c) void) void {
        qtc.QAbstract3DSeries_Connect_ItemLabelVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSurface3DSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSurface3DSeries.objectName: Memory allocation failed");
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QSurface3DSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn isWidgetType(self: QSurface3DSeries) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn isWindowType(self: QSurface3DSeries) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn isQuickItemType(self: QSurface3DSeries) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn signalsBlocked(self: QSurface3DSeries) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSurface3DSeries, b: bool) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn thread(self: QSurface3DSeries) QThread {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSurface3DSeries, _thread: anytype) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSurface3DSeries, interval: i32) i32 {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSurface3DSeries, time: i64) i32 {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSurface3DSeries, id: i32) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSurface3DSeries, id: i32) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSurface3DSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSurface3DSeries.children: Memory allocation failed");
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSurface3DSeries, _parent: anytype) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSurface3DSeries, filterObj: anytype) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSurface3DSeries, obj: anytype) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSurface3DSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn disconnect3(self: QSurface3DSeries) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSurface3DSeries, receiver: anytype) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn dumpObjectTree(self: QSurface3DSeries) void {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn dumpObjectInfo(self: QSurface3DSeries) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSurface3DSeries, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QSurface3DSeries, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSurface3DSeries, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSurface3DSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSurface3DSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn bindingStorage(self: QSurface3DSeries) QBindingStorage {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn bindingStorage2(self: QSurface3DSeries) QBindingStorage {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn destroyed(self: QSurface3DSeries) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries) callconv(.c) void) void {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn parent(self: QSurface3DSeries) QObject {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSurface3DSeries, classname: [:0]const u8) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn deleteLater(self: QSurface3DSeries) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSurface3DSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSurface3DSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSurface3DSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSurface3DSeries, signal: [:0]const u8) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSurface3DSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSurface3DSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSurface3DSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSurface3DSeries, param1: anytype) void {
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSurface3DSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSurface3DSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSurface3DSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSurface3DSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QEvent) callconv(.c) bool) void {
        qtc.QSurface3DSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSurface3DSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSurface3DSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSurface3DSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSurface3DSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSurface3DSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSurface3DSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSurface3DSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QSurface3DSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSurface3DSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSurface3DSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QChildEvent) callconv(.c) void) void {
        qtc.QSurface3DSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSurface3DSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSurface3DSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSurface3DSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QEvent) callconv(.c) void) void {
        qtc.QSurface3DSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSurface3DSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSurface3DSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSurface3DSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSurface3DSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSurface3DSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSurface3DSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSurface3DSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSurface3DSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSurface3DSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSurface3DSeries`
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSurface3DSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn sender(self: QSurface3DSeries) QObject {
        return .{ .ptr = qtc.QSurface3DSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSurface3DSeries `
    ///
    pub fn senderSignalIndex(self: QSurface3DSeries) i32 {
        return qtc.QSurface3DSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSurface3DSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSurface3DSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSurface3DSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSurface3DSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSurface3DSeries `
    ///
    /// ` callback: *const fn (self: QSurface3DSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSurface3DSeries, callback: *const fn (QSurface3DSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#dtor.QSurface3DSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSurface3DSeries `
    ///
    pub fn delete(self: QSurface3DSeries) void {
        qtc.QSurface3DSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface3dseries-qtdatavis.html#public-types)
pub const enums = struct {
    pub const DrawFlag = enum {
        pub const DrawWireframe: i32 = 1;
        pub const DrawSurface: i32 = 2;
        pub const DrawSurfaceAndWireframe: i32 = 3;
    };
};
