const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscreen.html
pub const qscreen = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QScreen_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QScreen, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QScreen_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QScreen, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QScreen_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QScreen_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#name)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QScreen_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn Manufacturer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QScreen_Manufacturer(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#model)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn Model(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QScreen_Model(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn SerialNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QScreen_SerialNumber(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#depth)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QScreen_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#size)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QScreen_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometry)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QScreen_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn PhysicalSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QScreen_PhysicalSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn PhysicalDotsPerInchX(self: ?*anyopaque) f64 {
        return C.QScreen_PhysicalDotsPerInchX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn PhysicalDotsPerInchY(self: ?*anyopaque) f64 {
        return C.QScreen_PhysicalDotsPerInchY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn PhysicalDotsPerInch(self: ?*anyopaque) f64 {
        return C.QScreen_PhysicalDotsPerInch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn LogicalDotsPerInchX(self: ?*anyopaque) f64 {
        return C.QScreen_LogicalDotsPerInchX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn LogicalDotsPerInchY(self: ?*anyopaque) f64 {
        return C.QScreen_LogicalDotsPerInchY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn LogicalDotsPerInch(self: ?*anyopaque) f64 {
        return C.QScreen_LogicalDotsPerInch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QScreen_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableSize)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn AvailableSize(self: ?*anyopaque) ?*C.QSize {
        return C.QScreen_AvailableSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn AvailableGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QScreen_AvailableGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn VirtualSiblings(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QScreen {
        const _arr: C.struct_libqt_list = C.QScreen_VirtualSiblings(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QScreen, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
    ///
    /// ``` self: ?*C.QScreen, point: ?*C.QPoint ```
    pub fn VirtualSiblingAt(self: ?*anyopaque, point: ?*C.QPoint) ?*C.QScreen {
        return C.QScreen_VirtualSiblingAt(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn VirtualSize(self: ?*anyopaque) ?*C.QSize {
        return C.QScreen_VirtualSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn VirtualGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QScreen_VirtualGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn AvailableVirtualSize(self: ?*anyopaque) ?*C.QSize {
        return C.QScreen_AvailableVirtualSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn AvailableVirtualGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QScreen_AvailableVirtualGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn PrimaryOrientation(self: ?*anyopaque) i64 {
        return C.QScreen_PrimaryOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientation)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return C.QScreen_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn NativeOrientation(self: ?*anyopaque) i64 {
        return C.QScreen_NativeOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
    ///
    /// ``` self: ?*C.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation ```
    pub fn AngleBetween(self: ?*anyopaque, a: i64, b: i64) i32 {
        return C.QScreen_AngleBetween(@ptrCast(self), @intCast(a), @intCast(b));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
    ///
    /// ``` self: ?*C.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation, target: ?*C.QRect ```
    pub fn TransformBetween(self: ?*anyopaque, a: i64, b: i64, target: ?*anyopaque) ?*C.QTransform {
        return C.QScreen_TransformBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
    ///
    /// ``` self: ?*C.QScreen, a: qnamespace_enums.ScreenOrientation, b: qnamespace_enums.ScreenOrientation, rect: ?*C.QRect ```
    pub fn MapBetween(self: ?*anyopaque, a: i64, b: i64, rect: ?*anyopaque) ?*C.QRect {
        return C.QScreen_MapBetween(@ptrCast(self), @intCast(a), @intCast(b), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
    ///
    /// ``` self: ?*C.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn IsPortrait(self: ?*anyopaque, orientation: i64) bool {
        return C.QScreen_IsPortrait(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
    ///
    /// ``` self: ?*C.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn IsLandscape(self: ?*anyopaque, orientation: i64) bool {
        return C.QScreen_IsLandscape(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn GrabWindow(self: ?*anyopaque) ?*C.QPixmap {
        return C.QScreen_GrabWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn RefreshRate(self: ?*anyopaque) f64 {
        return C.QScreen_RefreshRate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ``` self: ?*C.QScreen, geometry: ?*C.QRect ```
    pub fn GeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QScreen_GeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, ?*C.QRect) callconv(.c) void ```
    pub fn OnGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QScreen_Connect_GeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ``` self: ?*C.QScreen, geometry: ?*C.QRect ```
    pub fn AvailableGeometryChanged(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QScreen_AvailableGeometryChanged(@ptrCast(self), @ptrCast(geometry));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, ?*C.QRect) callconv(.c) void ```
    pub fn OnAvailableGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QScreen_Connect_AvailableGeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ``` self: ?*C.QScreen, size: ?*C.QSizeF ```
    pub fn PhysicalSizeChanged(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QScreen_PhysicalSizeChanged(@ptrCast(self), @ptrCast(size));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, ?*C.QSizeF) callconv(.c) void ```
    pub fn OnPhysicalSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QScreen_Connect_PhysicalSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ``` self: ?*C.QScreen, dpi: f64 ```
    pub fn PhysicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        C.QScreen_PhysicalDotsPerInchChanged(@ptrCast(self), @floatCast(dpi));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, f64) callconv(.c) void ```
    pub fn OnPhysicalDotsPerInchChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QScreen_Connect_PhysicalDotsPerInchChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ``` self: ?*C.QScreen, dpi: f64 ```
    pub fn LogicalDotsPerInchChanged(self: ?*anyopaque, dpi: f64) void {
        C.QScreen_LogicalDotsPerInchChanged(@ptrCast(self), @floatCast(dpi));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, f64) callconv(.c) void ```
    pub fn OnLogicalDotsPerInchChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QScreen_Connect_LogicalDotsPerInchChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ``` self: ?*C.QScreen, rect: ?*C.QRect ```
    pub fn VirtualGeometryChanged(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QScreen_VirtualGeometryChanged(@ptrCast(self), @ptrCast(rect));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, ?*C.QRect) callconv(.c) void ```
    pub fn OnVirtualGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QScreen_Connect_VirtualGeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ``` self: ?*C.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn PrimaryOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        C.QScreen_PrimaryOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnPrimaryOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QScreen_Connect_PrimaryOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ``` self: ?*C.QScreen, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn OrientationChanged(self: ?*anyopaque, orientation: i64) void {
        C.QScreen_OrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QScreen_Connect_OrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ``` self: ?*C.QScreen, refreshRate: f64 ```
    pub fn RefreshRateChanged(self: ?*anyopaque, refreshRate: f64) void {
        C.QScreen_RefreshRateChanged(@ptrCast(self), @floatCast(refreshRate));
    }

    /// ``` self: ?*C.QScreen, slot: fn (?*C.QScreen, f64) callconv(.c) void ```
    pub fn OnRefreshRateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QScreen_Connect_RefreshRateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QScreen_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QScreen_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen, window: usize ```
    pub fn GrabWindow1(self: ?*anyopaque, window: usize) ?*C.QPixmap {
        return C.QScreen_GrabWindow1(@ptrCast(self), @intCast(window));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen, window: usize, x: i32 ```
    pub fn GrabWindow2(self: ?*anyopaque, window: usize, x: i32) ?*C.QPixmap {
        return C.QScreen_GrabWindow2(@ptrCast(self), @intCast(window), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen, window: usize, x: i32, y: i32 ```
    pub fn GrabWindow3(self: ?*anyopaque, window: usize, x: i32, y: i32) ?*C.QPixmap {
        return C.QScreen_GrabWindow3(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen, window: usize, x: i32, y: i32, w: i32 ```
    pub fn GrabWindow4(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32) ?*C.QPixmap {
        return C.QScreen_GrabWindow4(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ``` self: ?*C.QScreen, window: usize, x: i32, y: i32, w: i32, h: i32 ```
    pub fn GrabWindow5(self: ?*anyopaque, window: usize, x: i32, y: i32, w: i32, h: i32) ?*C.QPixmap {
        return C.QScreen_GrabWindow5(@ptrCast(self), @intCast(window), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QScreen, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QScreen, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QScreen, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QScreen, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QScreen, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QScreen, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QScreen, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QScreen, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QScreen, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QScreen, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QScreen, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QScreen, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QScreen, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QScreen, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QScreen, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QScreen, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QScreen, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QScreen, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QScreen ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QScreen_Delete(@ptrCast(self));
    }
};
