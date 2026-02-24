const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html)
pub const qscreen = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QScreen_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScreen_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScreen_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Manufacturer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Manufacturer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Manufacturer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Model(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Model(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Model: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SerialNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_SerialNumber(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.SerialNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QScreen_Depth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn PhysicalSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QScreen_PhysicalSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn PhysicalDotsPerInchX(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInchX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn PhysicalDotsPerInchY(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInchY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn PhysicalDotsPerInch(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn LogicalDotsPerInchX(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInchX(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn LogicalDotsPerInchY(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInchY(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn LogicalDotsPerInch(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInch(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QScreen_DevicePixelRatio(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn AvailableSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_AvailableSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn AvailableGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_AvailableGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VirtualSiblings(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QScreen {
        const _arr: qtc.libqt_list = qtc.QScreen_VirtualSiblings(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScreen, _arr.len) catch @panic("qscreen.VirtualSiblings: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn VirtualSiblingAt(self: ?*anyopaque, point: QtC.QPoint) QtC.QScreen {
        return qtc.QScreen_VirtualSiblingAt(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn VirtualSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_VirtualSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn VirtualGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_VirtualGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn AvailableVirtualSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_AvailableVirtualSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn AvailableVirtualGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_AvailableVirtualGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn PrimaryOrientation(self: ?*anyopaque) i32 {
        return qtc.QScreen_PrimaryOrientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QScreen_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn NativeOrientation(self: ?*anyopaque) i32 {
        return qtc.QScreen_NativeOrientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    pub fn AngleBetween(self: ?*anyopaque, a: i32, b: i32) i32 {
        return qtc.QScreen_AngleBetween(@ptrCast(self), @bitCast(a), @bitCast(b));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    /// ` target: QtC.QRect `
    ///
    pub fn TransformBetween(self: ?*anyopaque, a: i32, b: i32, target: ?*anyopaque) QtC.QTransform {
        return qtc.QScreen_TransformBetween(@ptrCast(self), @bitCast(a), @bitCast(b), @ptrCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn MapBetween(self: ?*anyopaque, a: i32, b: i32, rect: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_MapBetween(@ptrCast(self), @bitCast(a), @bitCast(b), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn IsPortrait(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QScreen_IsPortrait(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn IsLandscape(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QScreen_IsLandscape(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn GrabWindow(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QScreen_GrabWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn RefreshRate(self: ?*anyopaque) f64 {
        return qtc.QScreen_RefreshRate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn GeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_GeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_GeometryChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn AvailableGeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_AvailableGeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnAvailableGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_AvailableGeometryChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn PhysicalSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScreen_PhysicalSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, size: QtC.QSizeF) callconv(.c) void `
    ///
    pub fn OnPhysicalSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalSizeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` dpi: f64 `
    ///
    pub fn PhysicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_PhysicalDotsPerInchChanged(@ptrCast(self), @bitCast(dpi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, dpi: f64) callconv(.c) void `
    ///
    pub fn OnPhysicalDotsPerInchChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalDotsPerInchChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` dpi: f64 `
    ///
    pub fn LogicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_LogicalDotsPerInchChanged(@ptrCast(self), @bitCast(dpi));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, dpi: f64) callconv(.c) void `
    ///
    pub fn OnLogicalDotsPerInchChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_LogicalDotsPerInchChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn VirtualGeometryChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScreen_VirtualGeometryChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, rect: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnVirtualGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_VirtualGeometryChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn PrimaryOrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QScreen_PrimaryOrientationChanged(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn OnPrimaryOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_PrimaryOrientationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn OrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QScreen_OrientationChanged(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn OnOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_OrientationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` refreshRate: f64 `
    ///
    pub fn RefreshRateChanged(self: ?*anyopaque, refreshRate: f64) void {
        qtc.QScreen_RefreshRateChanged(@ptrCast(self), @bitCast(refreshRate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, refreshRate: f64) callconv(.c) void `
    ///
    pub fn OnRefreshRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_RefreshRateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` window: usize `
    ///
    pub fn GrabWindow1(self: ?*anyopaque, window: usize) QtC.QPixmap {
        return qtc.QScreen_GrabWindow1(@ptrCast(self), @bitCast(window));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    pub fn GrabWindow2(self: ?*anyopaque, window: usize, x: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow2(@ptrCast(self), @bitCast(window), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GrabWindow3(self: ?*anyopaque, window: usize, x: i32, y: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow3(@ptrCast(self), @bitCast(window), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GrabWindow4(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow4(@ptrCast(self), @bitCast(window), @bitCast(x), @bitCast(y), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn GrabWindow5(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32, h: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow5(@ptrCast(self), @bitCast(window), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qscreen.Children: Memory allocation failed");
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qscreen.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscreen.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen) callconv(.c) void `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
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
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QScreen `
    ///
    /// ` callback: *const fn (self: QtC.QScreen, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#dtor.QScreen)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QScreen `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QScreen_Delete(@ptrCast(self));
    }
};
