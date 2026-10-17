const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DCamera = @import("libqt6").Q3DCamera;
const Q3DLight = @import("libqt6").Q3DLight;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html)
pub const Q3DScene = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Q3DScene,

    pub const _is_Q3DScene = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Q3DScene object in C++ memory
    ///
    pub fn new() Q3DScene {
        return .{ .ptr = qtc.Q3DScene_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Q3DScene object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) Q3DScene {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Q3DScene_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn metaObject(self: Q3DScene) QMetaObject {
        return .{ .ptr = qtc.Q3DScene_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Q3DScene, callback: *const fn (Q3DScene) callconv(.c) QMetaObject) void {
        qtc.Q3DScene_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    pub fn superMetaObject(self: Q3DScene) QMetaObject {
        return .{ .ptr = qtc.Q3DScene_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Q3DScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DScene_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Q3DScene, callback: *const fn (Q3DScene, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Q3DScene_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Q3DScene, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Q3DScene_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Q3DScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DScene_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Q3DScene, callback: *const fn (Q3DScene, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Q3DScene_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Q3DScene, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Q3DScene_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.Q3DScene_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DScene.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn viewport(self: Q3DScene) QRect {
        return .{ .ptr = qtc.Q3DScene_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `primarySubViewport` instead
    ///
    pub const PrimarySubViewport = primarySubViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn primarySubViewport(self: Q3DScene) QRect {
        return .{ .ptr = qtc.Q3DScene_PrimarySubViewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPrimarySubViewport` instead
    ///
    pub const SetPrimarySubViewport = setPrimarySubViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setPrimarySubViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` _primarySubViewport: QRect `
    ///
    pub fn setPrimarySubViewport(self: Q3DScene, _primarySubViewport: anytype) void {
        comptime _ = @TypeOf(_primarySubViewport)._is_QRect;
        qtc.Q3DScene_SetPrimarySubViewport(@ptrCast(self.ptr), @ptrCast(_primarySubViewport.ptr));
    }

    /// ### DEPRECATED: Use `isPointInPrimarySubView` instead
    ///
    pub const IsPointInPrimarySubView = isPointInPrimarySubView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isPointInPrimarySubView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` point: QPoint `
    ///
    pub fn isPointInPrimarySubView(self: Q3DScene, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.Q3DScene_IsPointInPrimarySubView(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `secondarySubViewport` instead
    ///
    pub const SecondarySubViewport = secondarySubViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn secondarySubViewport(self: Q3DScene) QRect {
        return .{ .ptr = qtc.Q3DScene_SecondarySubViewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSecondarySubViewport` instead
    ///
    pub const SetSecondarySubViewport = setSecondarySubViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSecondarySubViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` _secondarySubViewport: QRect `
    ///
    pub fn setSecondarySubViewport(self: Q3DScene, _secondarySubViewport: anytype) void {
        comptime _ = @TypeOf(_secondarySubViewport)._is_QRect;
        qtc.Q3DScene_SetSecondarySubViewport(@ptrCast(self.ptr), @ptrCast(_secondarySubViewport.ptr));
    }

    /// ### DEPRECATED: Use `isPointInSecondarySubView` instead
    ///
    pub const IsPointInSecondarySubView = isPointInSecondarySubView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isPointInSecondarySubView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` point: QPoint `
    ///
    pub fn isPointInSecondarySubView(self: Q3DScene, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.Q3DScene_IsPointInSecondarySubView(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionQueryPosition` instead
    ///
    pub const SetSelectionQueryPosition = setSelectionQueryPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSelectionQueryPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` point: QPoint `
    ///
    pub fn setSelectionQueryPosition(self: Q3DScene, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.Q3DScene_SetSelectionQueryPosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `selectionQueryPosition` instead
    ///
    pub const SelectionQueryPosition = selectionQueryPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn selectionQueryPosition(self: Q3DScene) QPoint {
        return .{ .ptr = qtc.Q3DScene_SelectionQueryPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `invalidSelectionPoint` instead
    ///
    pub const InvalidSelectionPoint = invalidSelectionPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#invalidSelectionPoint)
    ///
    pub fn invalidSelectionPoint() QPoint {
        return .{ .ptr = qtc.Q3DScene_InvalidSelectionPoint() };
    }

    /// ### DEPRECATED: Use `setGraphPositionQuery` instead
    ///
    pub const SetGraphPositionQuery = setGraphPositionQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setGraphPositionQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` point: QPoint `
    ///
    pub fn setGraphPositionQuery(self: Q3DScene, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.Q3DScene_SetGraphPositionQuery(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `graphPositionQuery` instead
    ///
    pub const GraphPositionQuery = graphPositionQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn graphPositionQuery(self: Q3DScene) QPoint {
        return .{ .ptr = qtc.Q3DScene_GraphPositionQuery(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSlicingActive` instead
    ///
    pub const SetSlicingActive = setSlicingActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSlicingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` isSlicing: bool `
    ///
    pub fn setSlicingActive(self: Q3DScene, isSlicing: bool) void {
        qtc.Q3DScene_SetSlicingActive(@ptrCast(self.ptr), isSlicing);
    }

    /// ### DEPRECATED: Use `isSlicingActive` instead
    ///
    pub const IsSlicingActive = isSlicingActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isSlicingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn isSlicingActive(self: Q3DScene) bool {
        return qtc.Q3DScene_IsSlicingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSecondarySubviewOnTop` instead
    ///
    pub const SetSecondarySubviewOnTop = setSecondarySubviewOnTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setSecondarySubviewOnTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` isSecondaryOnTop: bool `
    ///
    pub fn setSecondarySubviewOnTop(self: Q3DScene, isSecondaryOnTop: bool) void {
        qtc.Q3DScene_SetSecondarySubviewOnTop(@ptrCast(self.ptr), isSecondaryOnTop);
    }

    /// ### DEPRECATED: Use `isSecondarySubviewOnTop` instead
    ///
    pub const IsSecondarySubviewOnTop = isSecondarySubviewOnTop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#isSecondarySubviewOnTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn isSecondarySubviewOnTop(self: Q3DScene) bool {
        return qtc.Q3DScene_IsSecondarySubviewOnTop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeCamera` instead
    ///
    pub const ActiveCamera = activeCamera;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCamera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn activeCamera(self: Q3DScene) Q3DCamera {
        return .{ .ptr = qtc.Q3DScene_ActiveCamera(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActiveCamera` instead
    ///
    pub const SetActiveCamera = setActiveCamera;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setActiveCamera)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` camera: Q3DCamera `
    ///
    pub fn setActiveCamera(self: Q3DScene, camera: anytype) void {
        comptime _ = @TypeOf(camera)._is_Q3DCamera;
        qtc.Q3DScene_SetActiveCamera(@ptrCast(self.ptr), @ptrCast(camera.ptr));
    }

    /// ### DEPRECATED: Use `activeLight` instead
    ///
    pub const ActiveLight = activeLight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn activeLight(self: Q3DScene) Q3DLight {
        return .{ .ptr = qtc.Q3DScene_ActiveLight(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActiveLight` instead
    ///
    pub const SetActiveLight = setActiveLight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setActiveLight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` light: Q3DLight `
    ///
    pub fn setActiveLight(self: Q3DScene, light: anytype) void {
        comptime _ = @TypeOf(light)._is_Q3DLight;
        qtc.Q3DScene_SetActiveLight(@ptrCast(self.ptr), @ptrCast(light.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    pub fn devicePixelRatio(self: Q3DScene) f32 {
        return qtc.Q3DScene_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` pixelRatio: f32 `
    ///
    pub fn setDevicePixelRatio(self: Q3DScene, pixelRatio: f32) void {
        qtc.Q3DScene_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(pixelRatio));
    }

    /// ### DEPRECATED: Use `viewportChanged` instead
    ///
    pub const ViewportChanged = viewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewportChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` _viewport: QRect `
    ///
    pub fn viewportChanged(self: Q3DScene, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QRect;
        qtc.Q3DScene_ViewportChanged(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `onViewportChanged` instead
    ///
    pub const OnViewportChanged = onViewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#viewportChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, viewport: QRect) callconv(.c) void `
    ///
    pub fn onViewportChanged(self: Q3DScene, callback: *const fn (Q3DScene, QRect) callconv(.c) void) void {
        qtc.Q3DScene_Connect_ViewportChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `primarySubViewportChanged` instead
    ///
    pub const PrimarySubViewportChanged = primarySubViewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewportChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` subViewport: QRect `
    ///
    pub fn primarySubViewportChanged(self: Q3DScene, subViewport: anytype) void {
        comptime _ = @TypeOf(subViewport)._is_QRect;
        qtc.Q3DScene_PrimarySubViewportChanged(@ptrCast(self.ptr), @ptrCast(subViewport.ptr));
    }

    /// ### DEPRECATED: Use `onPrimarySubViewportChanged` instead
    ///
    pub const OnPrimarySubViewportChanged = onPrimarySubViewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#primarySubViewportChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, subViewport: QRect) callconv(.c) void `
    ///
    pub fn onPrimarySubViewportChanged(self: Q3DScene, callback: *const fn (Q3DScene, QRect) callconv(.c) void) void {
        qtc.Q3DScene_Connect_PrimarySubViewportChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `secondarySubViewportChanged` instead
    ///
    pub const SecondarySubViewportChanged = secondarySubViewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewportChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` subViewport: QRect `
    ///
    pub fn secondarySubViewportChanged(self: Q3DScene, subViewport: anytype) void {
        comptime _ = @TypeOf(subViewport)._is_QRect;
        qtc.Q3DScene_SecondarySubViewportChanged(@ptrCast(self.ptr), @ptrCast(subViewport.ptr));
    }

    /// ### DEPRECATED: Use `onSecondarySubViewportChanged` instead
    ///
    pub const OnSecondarySubViewportChanged = onSecondarySubViewportChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubViewportChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, subViewport: QRect) callconv(.c) void `
    ///
    pub fn onSecondarySubViewportChanged(self: Q3DScene, callback: *const fn (Q3DScene, QRect) callconv(.c) void) void {
        qtc.Q3DScene_Connect_SecondarySubViewportChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `secondarySubviewOnTopChanged` instead
    ///
    pub const SecondarySubviewOnTopChanged = secondarySubviewOnTopChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubviewOnTopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` isSecondaryOnTop: bool `
    ///
    pub fn secondarySubviewOnTopChanged(self: Q3DScene, isSecondaryOnTop: bool) void {
        qtc.Q3DScene_SecondarySubviewOnTopChanged(@ptrCast(self.ptr), isSecondaryOnTop);
    }

    /// ### DEPRECATED: Use `onSecondarySubviewOnTopChanged` instead
    ///
    pub const OnSecondarySubviewOnTopChanged = onSecondarySubviewOnTopChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#secondarySubviewOnTopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, isSecondaryOnTop: bool) callconv(.c) void `
    ///
    pub fn onSecondarySubviewOnTopChanged(self: Q3DScene, callback: *const fn (Q3DScene, bool) callconv(.c) void) void {
        qtc.Q3DScene_Connect_SecondarySubviewOnTopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slicingActiveChanged` instead
    ///
    pub const SlicingActiveChanged = slicingActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#slicingActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` _isSlicingActive: bool `
    ///
    pub fn slicingActiveChanged(self: Q3DScene, _isSlicingActive: bool) void {
        qtc.Q3DScene_SlicingActiveChanged(@ptrCast(self.ptr), _isSlicingActive);
    }

    /// ### DEPRECATED: Use `onSlicingActiveChanged` instead
    ///
    pub const OnSlicingActiveChanged = onSlicingActiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#slicingActiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, isSlicingActive: bool) callconv(.c) void `
    ///
    pub fn onSlicingActiveChanged(self: Q3DScene, callback: *const fn (Q3DScene, bool) callconv(.c) void) void {
        qtc.Q3DScene_Connect_SlicingActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeCameraChanged` instead
    ///
    pub const ActiveCameraChanged = activeCameraChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCameraChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` camera: Q3DCamera `
    ///
    pub fn activeCameraChanged(self: Q3DScene, camera: anytype) void {
        comptime _ = @TypeOf(camera)._is_Q3DCamera;
        qtc.Q3DScene_ActiveCameraChanged(@ptrCast(self.ptr), @ptrCast(camera.ptr));
    }

    /// ### DEPRECATED: Use `onActiveCameraChanged` instead
    ///
    pub const OnActiveCameraChanged = onActiveCameraChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeCameraChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, camera: Q3DCamera) callconv(.c) void `
    ///
    pub fn onActiveCameraChanged(self: Q3DScene, callback: *const fn (Q3DScene, Q3DCamera) callconv(.c) void) void {
        qtc.Q3DScene_Connect_ActiveCameraChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeLightChanged` instead
    ///
    pub const ActiveLightChanged = activeLightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` light: Q3DLight `
    ///
    pub fn activeLightChanged(self: Q3DScene, light: anytype) void {
        comptime _ = @TypeOf(light)._is_Q3DLight;
        qtc.Q3DScene_ActiveLightChanged(@ptrCast(self.ptr), @ptrCast(light.ptr));
    }

    /// ### DEPRECATED: Use `onActiveLightChanged` instead
    ///
    pub const OnActiveLightChanged = onActiveLightChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#activeLightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, light: Q3DLight) callconv(.c) void `
    ///
    pub fn onActiveLightChanged(self: Q3DScene, callback: *const fn (Q3DScene, Q3DLight) callconv(.c) void) void {
        qtc.Q3DScene_Connect_ActiveLightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `devicePixelRatioChanged` instead
    ///
    pub const DevicePixelRatioChanged = devicePixelRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` pixelRatio: f32 `
    ///
    pub fn devicePixelRatioChanged(self: Q3DScene, pixelRatio: f32) void {
        qtc.Q3DScene_DevicePixelRatioChanged(@ptrCast(self.ptr), @bitCast(pixelRatio));
    }

    /// ### DEPRECATED: Use `onDevicePixelRatioChanged` instead
    ///
    pub const OnDevicePixelRatioChanged = onDevicePixelRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#devicePixelRatioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, pixelRatio: f32) callconv(.c) void `
    ///
    pub fn onDevicePixelRatioChanged(self: Q3DScene, callback: *const fn (Q3DScene, f32) callconv(.c) void) void {
        qtc.Q3DScene_Connect_DevicePixelRatioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionQueryPositionChanged` instead
    ///
    pub const SelectionQueryPositionChanged = selectionQueryPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` position: QPoint `
    ///
    pub fn selectionQueryPositionChanged(self: Q3DScene, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.Q3DScene_SelectionQueryPositionChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionQueryPositionChanged` instead
    ///
    pub const OnSelectionQueryPositionChanged = onSelectionQueryPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#selectionQueryPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, position: QPoint) callconv(.c) void `
    ///
    pub fn onSelectionQueryPositionChanged(self: Q3DScene, callback: *const fn (Q3DScene, QPoint) callconv(.c) void) void {
        qtc.Q3DScene_Connect_SelectionQueryPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `graphPositionQueryChanged` instead
    ///
    pub const GraphPositionQueryChanged = graphPositionQueryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQueryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Q3DScene `
    ///
    /// ` position: QPoint `
    ///
    pub fn graphPositionQueryChanged(self: Q3DScene, position: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.Q3DScene_GraphPositionQueryChanged(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onGraphPositionQueryChanged` instead
    ///
    pub const OnGraphPositionQueryChanged = onGraphPositionQueryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#graphPositionQueryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, position: QPoint) callconv(.c) void `
    ///
    pub fn onGraphPositionQueryChanged(self: Q3DScene, callback: *const fn (Q3DScene, QPoint) callconv(.c) void) void {
        qtc.Q3DScene_Connect_GraphPositionQueryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        var _str = qtc.Q3DScene_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DScene.tr2: Memory allocation failed");
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
        var _str = qtc.Q3DScene_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DScene.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: Q3DScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Q3DScene, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Q3DScene.objectName: Memory allocation failed");
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
    /// ` self: Q3DScene `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Q3DScene, name: []const u8) void {
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
    /// ` self: Q3DScene `
    ///
    pub fn isWidgetType(self: Q3DScene) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn isWindowType(self: Q3DScene) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn isQuickItemType(self: Q3DScene) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn signalsBlocked(self: Q3DScene) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Q3DScene, b: bool) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn thread(self: Q3DScene) QThread {
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
    /// ` self: Q3DScene `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Q3DScene, _thread: anytype) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Q3DScene, interval: i32) i32 {
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
    /// ` self: Q3DScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Q3DScene, time: i64) i32 {
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
    /// ` self: Q3DScene `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Q3DScene, id: i32) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Q3DScene, id: i32) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Q3DScene, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Q3DScene.children: Memory allocation failed");
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
    /// ` self: Q3DScene `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Q3DScene, _parent: anytype) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Q3DScene, filterObj: anytype) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Q3DScene, obj: anytype) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Q3DScene, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Q3DScene `
    ///
    pub fn disconnect3(self: Q3DScene) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Q3DScene, receiver: anytype) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn dumpObjectTree(self: Q3DScene) void {
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
    /// ` self: Q3DScene `
    ///
    pub fn dumpObjectInfo(self: Q3DScene) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Q3DScene, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Q3DScene, name: [:0]const u8) QVariant {
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
    /// ` self: Q3DScene `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Q3DScene, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Q3DScene.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Q3DScene.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Q3DScene `
    ///
    pub fn bindingStorage(self: Q3DScene) QBindingStorage {
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
    /// ` self: Q3DScene `
    ///
    pub fn bindingStorage2(self: Q3DScene) QBindingStorage {
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
    /// ` self: Q3DScene `
    ///
    pub fn destroyed(self: Q3DScene) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Q3DScene, callback: *const fn (Q3DScene) callconv(.c) void) void {
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
    /// ` self: Q3DScene `
    ///
    pub fn parent(self: Q3DScene) QObject {
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
    /// ` self: Q3DScene `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Q3DScene, classname: [:0]const u8) bool {
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
    /// ` self: Q3DScene `
    ///
    pub fn deleteLater(self: Q3DScene) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Q3DScene, interval: i32, timerType: i32) i32 {
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
    /// ` self: Q3DScene `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Q3DScene, time: i64, timerType: i32) i32 {
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
    /// ` self: Q3DScene `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Q3DScene, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Q3DScene, signal: [:0]const u8) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Q3DScene, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Q3DScene, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Q3DScene, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Q3DScene `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Q3DScene, param1: anytype) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Q3DScene, callback: *const fn (Q3DScene, QObject) callconv(.c) void) void {
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Q3DScene, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DScene_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Q3DScene, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DScene_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Q3DScene, callback: *const fn (Q3DScene, QEvent) callconv(.c) bool) void {
        qtc.Q3DScene_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Q3DScene, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DScene_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Q3DScene, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Q3DScene_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Q3DScene, callback: *const fn (Q3DScene, QObject, QEvent) callconv(.c) bool) void {
        qtc.Q3DScene_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DScene_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Q3DScene_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Q3DScene, callback: *const fn (Q3DScene, QTimerEvent) callconv(.c) void) void {
        qtc.Q3DScene_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DScene_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Q3DScene_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Q3DScene, callback: *const fn (Q3DScene, QChildEvent) callconv(.c) void) void {
        qtc.Q3DScene_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DScene_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Q3DScene, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Q3DScene_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Q3DScene, callback: *const fn (Q3DScene, QEvent) callconv(.c) void) void {
        qtc.Q3DScene_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Q3DScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DScene_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Q3DScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DScene_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Q3DScene, callback: *const fn (Q3DScene, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DScene_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Q3DScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DScene_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Q3DScene, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Q3DScene_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DScene`
    ///
    /// ` callback: *const fn (self: Q3DScene, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Q3DScene, callback: *const fn (Q3DScene, QMetaMethod) callconv(.c) void) void {
        qtc.Q3DScene_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Q3DScene `
    ///
    pub fn sender(self: Q3DScene) QObject {
        return .{ .ptr = qtc.Q3DScene_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Q3DScene `
    ///
    pub fn senderSignalIndex(self: Q3DScene) i32 {
        return qtc.Q3DScene_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Q3DScene, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Q3DScene_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Q3DScene `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Q3DScene, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Q3DScene_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Q3DScene `
    ///
    /// ` callback: *const fn (self: Q3DScene, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Q3DScene, callback: *const fn (Q3DScene, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q3dscene-qtdatavis.html#dtor.Q3DScene)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Q3DScene `
    ///
    pub fn delete(self: Q3DScene) void {
        qtc.Q3DScene_Delete(@ptrCast(self.ptr));
    }
};
