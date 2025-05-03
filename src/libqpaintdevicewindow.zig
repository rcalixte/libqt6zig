const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsurface_enums = @import("libqsurface.zig").enums;
const qwindow_enums = @import("libqwindow.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpaintdevicewindow.html
pub const qpaintdevicewindow = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QPaintDeviceWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QPaintDeviceWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QPaintDeviceWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QPaintDeviceWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPaintDeviceWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QPaintDeviceWindow_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, rect: ?*C.QRect ```
    pub fn Update(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QPaintDeviceWindow_Update(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, region: ?*C.QRegion ```
    pub fn UpdateWithRegion(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QPaintDeviceWindow_UpdateWithRegion(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Update2(self: ?*anyopaque) void {
        C.QPaintDeviceWindow_Update2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPaintDeviceWindow_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QPaintDeviceWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, surfaceType: qsurface_enums.SurfaceType ```
    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i64) void {
        C.QWindow_SetSurfaceType(@ptrCast(self), @intCast(surfaceType));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn SurfaceType(self: ?*anyopaque) i64 {
        return C.QWindow_SurfaceType(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWindow_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Visibility(self: ?*anyopaque) i64 {
        return C.QWindow_Visibility(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, v: qwindow_enums.Visibility ```
    pub fn SetVisibility(self: ?*anyopaque, v: i64) void {
        C.QWindow_SetVisibility(@ptrCast(self), @intCast(v));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Create(self: ?*anyopaque) void {
        C.QWindow_Create(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWindow_WinId(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Parent(self: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_Parent(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, parent: ?*C.QWindow ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWindow_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWindow_IsModal(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Modality(self: ?*anyopaque) i64 {
        return C.QWindow_Modality(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, modality: qnamespace_enums.WindowModality ```
    pub fn SetModality(self: ?*anyopaque, modality: i64) void {
        C.QWindow_SetModality(@ptrCast(self), @intCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, format: ?*C.QSurfaceFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Format(self: ?*anyopaque) ?*C.QSurfaceFormat {
        return C.QWindow_Format(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn RequestedFormat(self: ?*anyopaque) ?*C.QSurfaceFormat {
        return C.QWindow_RequestedFormat(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QWindow_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QWindow_Flags(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetFlag(self: ?*anyopaque, param1: i64) void {
        C.QWindow_SetFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QWindow_Type(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWindow_Title(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, level: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        C.QWindow_SetOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QWindow_Opacity(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, region: ?*C.QRegion ```
    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWindow_Mask(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QWindow_IsActive(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i64) void {
        C.QWindow_ReportContentOrientationChange(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ContentOrientation(self: ?*anyopaque) i64 {
        return C.QWindow_ContentOrientation(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWindow_WindowState(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn WindowStates(self: ?*anyopaque) i64 {
        return C.QWindow_WindowStates(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, state: qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWindow_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, states: i32 ```
    pub fn SetWindowStates(self: ?*anyopaque, states: i64) void {
        C.QWindow_SetWindowStates(@ptrCast(self), @intCast(states));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, parent: ?*C.QWindow ```
    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn TransientParent(self: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_TransientParent(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, child: ?*C.QWindow ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsExposed(self: ?*anyopaque) bool {
        return C.QWindow_IsExposed(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWindow_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWindow_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWindow_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWindow_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, size: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, size: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, size: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, size: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWindow_Geometry(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn FrameMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWindow_FrameMargins(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWindow_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn FramePosition(self: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_FramePosition(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, point: ?*C.QPoint ```
    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWindow_Width(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWindow_Height(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWindow_X(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWindow_Y(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_Size(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Position(self: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_Position(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, pt: ?*C.QPoint ```
    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        C.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, posx: i32, posy: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        C.QWindow_SetPosition2(@ptrCast(self), @intCast(posx), @intCast(posy));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, newSize: ?*C.QSize ```
    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        C.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, w: i32, h: i32 ```
    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWindow_Resize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, filePath: []const u8 ```
    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWindow_FilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, icon: ?*C.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Icon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWindow_Icon(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QWindow_Destroy(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, grab: bool ```
    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return C.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, grab: bool ```
    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return C.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWindow_Screen(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, screen: ?*C.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn AccessibleRoot(self: ?*anyopaque) ?*C.QAccessibleInterface {
        return C.QWindow_AccessibleRoot(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn FocusObject(self: ?*anyopaque) ?*C.QObject {
        return C.QWindow_FocusObject(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, pos: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPointF {
        return C.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, pos: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPointF {
        return C.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, pos: ?*C.QPoint ```
    pub fn MapToGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_MapToGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, pos: ?*C.QPoint ```
    pub fn MapFromGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_MapFromGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWindow_Cursor(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWindow_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ``` id: usize ```
    pub fn FromWinId(id: usize) ?*C.QWindow {
        return C.QWindow_FromWinId(@intCast(id));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn RequestActivate(self: ?*anyopaque) void {
        C.QWindow_RequestActivate(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QWindow_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWindow_Show(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWindow_Hide(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWindow_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWindow_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWindow_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWindow_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWindow_Close(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWindow_Raise(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWindow_Lower(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, edges: i32 ```
    pub fn StartSystemResize(self: ?*anyopaque, edges: i64) bool {
        return C.QWindow_StartSystemResize(@ptrCast(self), @intCast(edges));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn StartSystemMove(self: ?*anyopaque) bool {
        return C.QWindow_StartSystemMove(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetX(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetY(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetWidth(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetHeight(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, posx: i32, posy: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        C.QWindow_SetGeometry(@ptrCast(self), @intCast(posx), @intCast(posy), @intCast(w), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, rect: ?*C.QRect ```
    pub fn SetGeometryWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QWindow_SetGeometryWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, w: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        C.QWindow_SetMinimumWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, h: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        C.QWindow_SetMinimumHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, w: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        C.QWindow_SetMaximumWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, h: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        C.QWindow_SetMaximumHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, msec: i32 ```
    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        C.QWindow_Alert(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn RequestUpdate(self: ?*anyopaque) void {
        C.QWindow_RequestUpdate(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, screen: ?*C.QScreen ```
    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QScreen) callconv(.c) void ```
    pub fn OnScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_ScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, modality: qnamespace_enums.WindowModality ```
    pub fn ModalityChanged(self: ?*anyopaque, modality: i64) void {
        C.QWindow_ModalityChanged(@ptrCast(self), @intCast(modality));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.WindowModality) callconv(.c) void ```
    pub fn OnModalityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_ModalityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, windowState: qnamespace_enums.WindowState ```
    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i64) void {
        C.QWindow_WindowStateChanged(@ptrCast(self), @intCast(windowState));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.WindowState) callconv(.c) void ```
    pub fn OnWindowStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_WindowStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_XChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_YChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_WidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_HeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MinimumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMinimumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MinimumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMinimumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MaximumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMaximumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: i32 ```
    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MaximumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMaximumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, arg: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        C.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWindow_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, visibility: qwindow_enums.Visibility ```
    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i64) void {
        C.QWindow_VisibilityChanged(@ptrCast(self), @intCast(visibility));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qwindow_enums.Visibility) callconv(.c) void ```
    pub fn OnVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_VisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ActiveChanged(self: ?*anyopaque) void {
        C.QWindow_ActiveChanged(@ptrCast(self));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        C.QWindow_ContentOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnContentOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, object: ?*C.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        C.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, opacity: f64 ```
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        C.QWindow_OpacityChanged(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, f64) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QWindow_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, transientParent: ?*C.QWindow ```
    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        C.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    /// Inherited from QWindow
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QWindow) callconv(.c) void ```
    pub fn OnTransientParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_TransientParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, mode: qwindow_enums.AncestorMode ```
    pub fn Parent1(self: ?*anyopaque, mode: i64) ?*C.QWindow {
        return C.QWindow_Parent1(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWindow_SetFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, child: ?*C.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i64) bool {
        return C.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @intCast(mode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPaintDeviceWindow, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QPaintDeviceWindow, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QPaintDeviceWindow, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn SurfaceClass(self: ?*anyopaque) i64 {
        return C.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return C.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QPaintDevice_DevType(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QPaintDevice_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return C.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPaintDeviceWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPaintDeviceWindow_Delete(@ptrCast(self));
    }
};
