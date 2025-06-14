const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qsurface_enums = @import("libqsurface.zig").enums;
const qwindow_enums = @import("libqwindow.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qrasterwindow.html
pub const qrasterwindow = struct {
    /// New constructs a new QRasterWindow object.
    ///
    ///
    pub fn New() QtC.QRasterWindow {
        return qtc.QRasterWindow_new();
    }

    /// New2 constructs a new QRasterWindow object.
    ///
    /// ``` parent: QtC.QWindow ```
    pub fn New2(parent: ?*anyopaque) QtC.QRasterWindow {
        return qtc.QRasterWindow_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QRasterWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QRasterWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QRasterWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QRasterWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QRasterWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QRasterWindow_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QRasterWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QRasterWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QRasterWindow_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
    ///
    /// ``` self: QtC.QRasterWindow, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, metric: i64) i32 {
        return qtc.QRasterWindow_Metric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QRasterWindow_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QRasterWindow, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, metric: i64) i32 {
        return qtc.QRasterWindow_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QRasterWindow_Redirected(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QRasterWindow_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QRasterWindow_QBaseRedirected(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QRasterWindow_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QRasterWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: QtC.QRasterWindow, rect: QtC.QRect ```
    pub fn Update(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_Update(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: QtC.QRasterWindow, region: QtC.QRegion ```
    pub fn UpdateWithRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_UpdateWithRegion(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Update2(self: ?*anyopaque) void {
        qtc.QPaintDeviceWindow_Update2(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ``` self: QtC.QRasterWindow, surfaceType: qsurface_enums.SurfaceType ```
    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i64) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self), @intCast(surfaceType));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Visibility(self: ?*anyopaque) i64 {
        return qtc.QWindow_Visibility(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ``` self: QtC.QRasterWindow, v: qwindow_enums.Visibility ```
    pub fn SetVisibility(self: ?*anyopaque, v: i64) void {
        qtc.QWindow_SetVisibility(@ptrCast(self), @intCast(v));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QWindow_Create(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWindow_WinId(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Parent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_Parent(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ``` self: QtC.QRasterWindow, parent: QtC.QWindow ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWindow_IsModal(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Modality(self: ?*anyopaque) i64 {
        return qtc.QWindow_Modality(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ``` self: QtC.QRasterWindow, modality: qnamespace_enums.WindowModality ```
    pub fn SetModality(self: ?*anyopaque, modality: i64) void {
        qtc.QWindow_SetModality(@ptrCast(self), @intCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ``` self: QtC.QRasterWindow, format: QtC.QSurfaceFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn RequestedFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_RequestedFormat(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ``` self: QtC.QRasterWindow, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QWindow_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QWindow_Flags(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: QtC.QRasterWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWindow_SetFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QWindow_Type(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ``` self: QtC.QRasterWindow, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ``` self: QtC.QRasterWindow, level: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ``` self: QtC.QRasterWindow, region: QtC.QRegion ```
    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWindow_Mask(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QWindow_IsActive(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ``` self: QtC.QRasterWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i64) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ContentOrientation(self: ?*anyopaque) i64 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return qtc.QWindow_WindowState(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn WindowStates(self: ?*anyopaque) i64 {
        return qtc.QWindow_WindowStates(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ``` self: QtC.QRasterWindow, state: qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWindow_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ``` self: QtC.QRasterWindow, states: i32 ```
    pub fn SetWindowStates(self: ?*anyopaque, states: i64) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self), @intCast(states));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ``` self: QtC.QRasterWindow, parent: QtC.QWindow ```
    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn TransientParent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_TransientParent(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: QtC.QRasterWindow, child: QtC.QWindow ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsExposed(self: ?*anyopaque) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ``` self: QtC.QRasterWindow, size: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ``` self: QtC.QRasterWindow, size: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ``` self: QtC.QRasterWindow, size: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QRasterWindow, size: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_Geometry(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn FrameMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWindow_FrameMargins(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn FramePosition(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_FramePosition(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ``` self: QtC.QRasterWindow, point: QtC.QPoint ```
    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWindow_Width(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWindow_Height(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWindow_X(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWindow_Y(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Position(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_Position(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: QtC.QRasterWindow, pt: QtC.QPoint ```
    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: QtC.QRasterWindow, posx: i32, posy: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self), @intCast(posx), @intCast(posy));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: QtC.QRasterWindow, newSize: QtC.QSize ```
    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: QtC.QRasterWindow, w: i32, h: i32 ```
    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ``` self: QtC.QRasterWindow, filePath: []const u8 ```
    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.struct_libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ``` self: QtC.QRasterWindow, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ``` self: QtC.QRasterWindow, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWindow_Icon(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QWindow_Destroy(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ``` self: QtC.QRasterWindow, grab: bool ```
    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ``` self: QtC.QRasterWindow, grab: bool ```
    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWindow_Screen(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ``` self: QtC.QRasterWindow, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: QtC.QRasterWindow, pos: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QRasterWindow, pos: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: QtC.QRasterWindow, pos: QtC.QPoint ```
    pub fn MapToGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapToGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QRasterWindow, pos: QtC.QPoint ```
    pub fn MapFromGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapFromGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWindow_Cursor(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ``` self: QtC.QRasterWindow, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ``` id: usize ```
    pub fn FromWinId(id: usize) QtC.QWindow {
        return qtc.QWindow_FromWinId(@intCast(id));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn RequestActivate(self: ?*anyopaque) void {
        qtc.QWindow_RequestActivate(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ``` self: QtC.QRasterWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWindow_Show(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWindow_Hide(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWindow_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWindow_Close(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWindow_Raise(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWindow_Lower(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ``` self: QtC.QRasterWindow, edges: i32 ```
    pub fn StartSystemResize(self: ?*anyopaque, edges: i64) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self), @intCast(edges));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn StartSystemMove(self: ?*anyopaque) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ``` self: QtC.QRasterWindow, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: QtC.QRasterWindow, posx: i32, posy: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self), @intCast(posx), @intCast(posy), @intCast(w), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: QtC.QRasterWindow, rect: QtC.QRect ```
    pub fn SetGeometryWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QWindow_SetGeometryWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QRasterWindow, w: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QRasterWindow, h: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QRasterWindow, w: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QRasterWindow, h: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ``` self: QtC.QRasterWindow, msec: i32 ```
    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn RequestUpdate(self: ?*anyopaque) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: QtC.QRasterWindow, screen: QtC.QScreen ```
    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: QtC.QRasterWindow, modality: qnamespace_enums.WindowModality ```
    pub fn ModalityChanged(self: ?*anyopaque, modality: i64) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self), @intCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, modality: qnamespace_enums.WindowModality) callconv(.c) void ```
    pub fn OnModalityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: QtC.QRasterWindow, windowState: qnamespace_enums.WindowState ```
    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i64) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self), @intCast(windowState));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, windowState: qnamespace_enums.WindowState) callconv(.c) void ```
    pub fn OnWindowStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QRasterWindow, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, title: []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMinimumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMinimumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMaximumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: i32 ```
    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMaximumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: QtC.QRasterWindow, arg: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: QtC.QRasterWindow, visibility: qwindow_enums.Visibility ```
    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i64) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self), @intCast(visibility));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, visibility: qwindow_enums.Visibility) callconv(.c) void ```
    pub fn OnVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ActiveChanged(self: ?*anyopaque) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: QtC.QRasterWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnContentOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QRasterWindow, object: QtC.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, object: QtC.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: QtC.QRasterWindow, opacity: f64 ```
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, opacity: f64) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: QtC.QRasterWindow, transientParent: QtC.QWindow ```
    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        qtc.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, transientParent: QtC.QWindow) callconv(.c) void ```
    pub fn OnTransientParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: QtC.QRasterWindow, mode: qwindow_enums.AncestorMode ```
    pub fn Parent1(self: ?*anyopaque, mode: i64) QtC.QWindow {
        return qtc.QWindow_Parent1(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: QtC.QRasterWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: QtC.QRasterWindow, child: QtC.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i64) bool {
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @intCast(mode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QRasterWindow, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qrasterwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QRasterWindow, name: []const u8 ```
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
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QRasterWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QRasterWindow, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QRasterWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QRasterWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QRasterWindow, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qrasterwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QRasterWindow, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QRasterWindow, obj: QtC.QObject ```
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
    /// ``` self: QtC.QRasterWindow, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QRasterWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QRasterWindow, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QRasterWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QRasterWindow, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qrasterwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qrasterwindow.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QRasterWindow ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QRasterWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QRasterWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QRasterWindow, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QObject ```
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

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SurfaceClass(self: ?*anyopaque) i64 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QExposeEvent ```
    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QExposeEvent ```
    pub fn QBaseExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QExposeEvent) callconv(.c) void ```
    pub fn OnExposeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnExposeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, event: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QRasterWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QRasterWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QPaintDeviceWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRasterWindow_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SurfaceType(self: ?*anyopaque) i64 {
        return qtc.QRasterWindow_SurfaceType(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseSurfaceType(self: ?*anyopaque) i64 {
        return qtc.QRasterWindow_QBaseSurfaceType(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) i64 ```
    pub fn OnSurfaceType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QRasterWindow_OnSurfaceType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Format(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QRasterWindow_Format(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QRasterWindow_QBaseFormat(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QSurfaceFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QRasterWindow_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QRasterWindow_Size(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QRasterWindow_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QRasterWindow_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn AccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QRasterWindow_AccessibleRoot(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseAccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QRasterWindow_QBaseAccessibleRoot(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleRoot(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QRasterWindow_OnAccessibleRoot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn FocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QRasterWindow_FocusObject(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseFocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QRasterWindow_QBaseFocusObject(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnFocusObject(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QRasterWindow_OnFocusObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QTouchEvent ```
    pub fn TouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_TouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QTouchEvent ```
    pub fn QBaseTouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseTouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QTouchEvent) callconv(.c) void ```
    pub fn OnTouchEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnTouchEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_TabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, param1: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, param1: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QRasterWindow_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QRasterWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRasterWindow_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QRasterWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QRasterWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRasterWindow_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QRasterWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QRasterWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QRasterWindow_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QRasterWindow_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QRasterWindow_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QRasterWindow_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QRasterWindow_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRasterWindow_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QRasterWindow_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QRasterWindow_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QRasterWindow_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QRasterWindow_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QRasterWindow_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, name: []const u8, revision: i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QRasterWindow_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QRasterWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QRasterWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QRasterWindow_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QRasterWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QRasterWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QRasterWindow_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QRasterWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QRasterWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QRasterWindow_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QRasterWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QRasterWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QRasterWindow, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QRasterWindow_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QRasterWindow, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#dtor.QRasterWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QRasterWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRasterWindow_Delete(@ptrCast(self));
    }
};
