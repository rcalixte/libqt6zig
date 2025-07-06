const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscreen.html
pub const qscreen = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QScreen_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QScreen, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScreen_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QScreen, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QScreen_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QScreen_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#name)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn Manufacturer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Manufacturer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Manufacturer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#model)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn Model(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_Model(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Model: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn SerialNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScreen_SerialNumber(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.SerialNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#depth)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QScreen_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#size)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometry)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn PhysicalSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QScreen_PhysicalSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn PhysicalDotsPerInchX(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInchX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn PhysicalDotsPerInchY(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInchY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn PhysicalDotsPerInch(self: ?*anyopaque) f64 {
        return qtc.QScreen_PhysicalDotsPerInch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn LogicalDotsPerInchX(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInchX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn LogicalDotsPerInchY(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInchY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn LogicalDotsPerInch(self: ?*anyopaque) f64 {
        return qtc.QScreen_LogicalDotsPerInch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QScreen_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableSize)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn AvailableSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_AvailableSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn AvailableGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_AvailableGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn VirtualSiblings(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QScreen {
        const _arr: qtc.struct_libqt_list = qtc.QScreen_VirtualSiblings(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScreen, _arr.len) catch @panic("qscreen.VirtualSiblings: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
    ///
    /// ``` self: QtC.QScreen, point: QtC.QPoint ```
    pub fn VirtualSiblingAt(self: ?*anyopaque, point: QtC.QPoint) QtC.QScreen {
        return qtc.QScreen_VirtualSiblingAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn VirtualSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_VirtualSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn VirtualGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_VirtualGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn AvailableVirtualSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QScreen_AvailableVirtualSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn AvailableVirtualGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_AvailableVirtualGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn PrimaryOrientation(self: ?*anyopaque) i64 {
        return qtc.QScreen_PrimaryOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientation)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QScreen_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn NativeOrientation(self: ?*anyopaque) i64 {
        return qtc.QScreen_NativeOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
    ///
    /// ``` self: QtC.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation ```
    pub fn AngleBetween(self: ?*anyopaque, a: i64, b: i64) i32 {
        return qtc.QScreen_AngleBetween(@ptrCast(self), @intCast(a), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
    ///
    /// ``` self: QtC.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation, target: QtC.QRect ```
    pub fn TransformBetween(self: ?*anyopaque, a: i64, b: i64, target: ?*anyopaque) QtC.QTransform {
        return qtc.QScreen_TransformBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
    ///
    /// ``` self: QtC.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation, rect: QtC.QRect ```
    pub fn MapBetween(self: ?*anyopaque, a: i64, b: i64, rect: ?*anyopaque) QtC.QRect {
        return qtc.QScreen_MapBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
    ///
    /// ``` self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn IsPortrait(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QScreen_IsPortrait(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
    ///
    /// ``` self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn IsLandscape(self: ?*anyopaque, orientation: i64) bool {
        return qtc.QScreen_IsLandscape(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn GrabWindow(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QScreen_GrabWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn RefreshRate(self: ?*anyopaque) f64 {
        return qtc.QScreen_RefreshRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ``` self: QtC.QScreen, geometry: QtC.QRect ```
    pub fn GeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_GeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_GeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ``` self: QtC.QScreen, geometry: QtC.QRect ```
    pub fn AvailableGeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QScreen_AvailableGeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnAvailableGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_AvailableGeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ``` self: QtC.QScreen, size: QtC.QSizeF ```
    pub fn PhysicalSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QScreen_PhysicalSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, size: QtC.QSizeF) callconv(.c) void ```
    pub fn OnPhysicalSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ``` self: QtC.QScreen, dpi: f64 ```
    pub fn PhysicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_PhysicalDotsPerInchChanged(@ptrCast(self), @floatCast(dpi));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, dpi: f64) callconv(.c) void ```
    pub fn OnPhysicalDotsPerInchChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalDotsPerInchChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ``` self: QtC.QScreen, dpi: f64 ```
    pub fn LogicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        qtc.QScreen_LogicalDotsPerInchChanged(@ptrCast(self), @floatCast(dpi));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, dpi: f64) callconv(.c) void ```
    pub fn OnLogicalDotsPerInchChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_LogicalDotsPerInchChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ``` self: QtC.QScreen, rect: QtC.QRect ```
    pub fn VirtualGeometryChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QScreen_VirtualGeometryChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, rect: QtC.QRect) callconv(.c) void ```
    pub fn OnVirtualGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScreen_Connect_VirtualGeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ``` self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn PrimaryOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        qtc.QScreen_PrimaryOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnPrimaryOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QScreen_Connect_PrimaryOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ``` self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn OrientationChanged(self: ?*anyopaque, orientation: i64) void {
        qtc.QScreen_OrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QScreen_Connect_OrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ``` self: QtC.QScreen, refreshRate: f64 ```
    pub fn RefreshRateChanged(self: ?*anyopaque, refreshRate: f64) void {
        qtc.QScreen_RefreshRateChanged(@ptrCast(self), @floatCast(refreshRate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QScreen, refreshRate: f64) callconv(.c) void ```
    pub fn OnRefreshRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_RefreshRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QScreen_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QScreen_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen, window: usize ```
    pub fn GrabWindow1(self: ?*anyopaque, window: usize) QtC.QPixmap {
        return qtc.QScreen_GrabWindow1(@ptrCast(self), @intCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen, window: usize, x: i32 ```
    pub fn GrabWindow2(self: ?*anyopaque, window: usize, x: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow2(@ptrCast(self), @intCast(window), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen, window: usize, x: i32, y: i32 ```
    pub fn GrabWindow3(self: ?*anyopaque, window: usize, x: i32, y: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow3(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen, window: usize, x: i32, y: i32, w: i32 ```
    pub fn GrabWindow4(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow4(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: QtC.QScreen, window: usize, x: i32, y: i32, w: i32, h: i32 ```
    pub fn GrabWindow5(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32, h: i32) QtC.QPixmap {
        return qtc.QScreen_GrabWindow5(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QScreen, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QScreen, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscreen.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QScreen, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QScreen, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QScreen, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QScreen, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QScreen, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QScreen, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qscreen.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QScreen, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QScreen, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QScreen, obj: QtC.QObject ```
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
    /// ``` self: QtC.QScreen, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QScreen, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QScreen, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QScreen, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QScreen, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QScreen ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QScreen, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QScreen, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QScreen, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScreen, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QScreen, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#dtor.QScreen)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScreen ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScreen_Delete(@ptrCast(self));
    }
};
