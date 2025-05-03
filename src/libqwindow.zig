const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsurface_enums = @import("libqsurface.zig").enums;
const qwindow_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwindow.html
pub const qwindow = struct {
    /// New constructs a new QWindow object.
    ///
    ///
    pub fn New() ?*C.QWindow {
        return C.QWindow_new();
    }

    /// New2 constructs a new QWindow object.
    ///
    /// ``` parent: ?*C.QWindow ```
    pub fn New2(parent: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QWindow object.
    ///
    /// ``` screen: ?*C.QScreen ```
    pub fn New3(screen: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_new3(@ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QWindow_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QWindow_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ``` self: ?*C.QWindow, surfaceType: qsurface_enums.SurfaceType ```
    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i64) void {
        C.QWindow_SetSurfaceType(@ptrCast(self), @intCast(surfaceType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn SurfaceType(self: ?*anyopaque) i64 {
        return C.QWindow_SurfaceType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) i64 ```
    pub fn OnSurfaceType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QWindow_OnSurfaceType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseSurfaceType(self: ?*anyopaque) i64 {
        return C.QWindow_QBaseSurfaceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWindow_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Visibility(self: ?*anyopaque) i64 {
        return C.QWindow_Visibility(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ``` self: ?*C.QWindow, v: qwindow_enums.Visibility ```
    pub fn SetVisibility(self: ?*anyopaque, v: i64) void {
        C.QWindow_SetVisibility(@ptrCast(self), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Create(self: ?*anyopaque) void {
        C.QWindow_Create(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWindow_WinId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Parent(self: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ``` self: ?*C.QWindow, parent: ?*C.QWindow ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWindow_IsTopLevel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWindow_IsModal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Modality(self: ?*anyopaque) i64 {
        return C.QWindow_Modality(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ``` self: ?*C.QWindow, modality: qnamespace_enums.WindowModality ```
    pub fn SetModality(self: ?*anyopaque, modality: i64) void {
        C.QWindow_SetModality(@ptrCast(self), @intCast(modality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ``` self: ?*C.QWindow, format: ?*C.QSurfaceFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Format(self: ?*anyopaque) ?*C.QSurfaceFormat {
        return C.QWindow_Format(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) ?*C.QSurfaceFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSurfaceFormat) void {
        C.QWindow_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseFormat(self: ?*anyopaque) ?*C.QSurfaceFormat {
        return C.QWindow_QBaseFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn RequestedFormat(self: ?*anyopaque) ?*C.QSurfaceFormat {
        return C.QWindow_RequestedFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ``` self: ?*C.QWindow, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        C.QWindow_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return C.QWindow_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: ?*C.QWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetFlag(self: ?*anyopaque, param1: i64) void {
        C.QWindow_SetFlag(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QWindow_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ``` self: ?*C.QWindow, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWindow_Title(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ``` self: ?*C.QWindow, level: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        C.QWindow_SetOpacity(@ptrCast(self), @floatCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QWindow_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ``` self: ?*C.QWindow, region: ?*C.QRegion ```
    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        C.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWindow_Mask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QWindow_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ``` self: ?*C.QWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i64) void {
        C.QWindow_ReportContentOrientationChange(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ContentOrientation(self: ?*anyopaque) i64 {
        return C.QWindow_ContentOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWindow_WindowState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn WindowStates(self: ?*anyopaque) i64 {
        return C.QWindow_WindowStates(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ``` self: ?*C.QWindow, state: qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWindow_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ``` self: ?*C.QWindow, states: i32 ```
    pub fn SetWindowStates(self: ?*anyopaque, states: i64) void {
        C.QWindow_SetWindowStates(@ptrCast(self), @intCast(states));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ``` self: ?*C.QWindow, parent: ?*C.QWindow ```
    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn TransientParent(self: ?*anyopaque) ?*C.QWindow {
        return C.QWindow_TransientParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QWindow, child: ?*C.QWindow ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsExposed(self: ?*anyopaque) bool {
        return C.QWindow_IsExposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWindow_MinimumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWindow_MinimumHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWindow_MaximumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWindow_MaximumHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_BaseSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_SizeIncrement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QWindow, size: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QWindow, size: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ``` self: ?*C.QWindow, size: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QWindow, size: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWindow_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn FrameMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWindow_FrameMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWindow_FrameGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn FramePosition(self: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_FramePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ``` self: ?*C.QWindow, point: ?*C.QPoint ```
    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        C.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWindow_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWindow_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWindow_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWindow_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QWindow_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWindow_QBaseSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Position(self: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: ?*C.QWindow, pt: ?*C.QPoint ```
    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        C.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: ?*C.QWindow, posx: i32, posy: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        C.QWindow_SetPosition2(@ptrCast(self), @intCast(posx), @intCast(posy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: ?*C.QWindow, newSize: ?*C.QSize ```
    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        C.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: ?*C.QWindow, w: i32, h: i32 ```
    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWindow_Resize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ``` self: ?*C.QWindow, filePath: []const u8 ```
    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ``` self: ?*C.QWindow, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWindow_FilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ``` self: ?*C.QWindow, icon: ?*C.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Icon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWindow_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QWindow_Destroy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ``` self: ?*C.QWindow, grab: bool ```
    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return C.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ``` self: ?*C.QWindow, grab: bool ```
    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return C.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWindow_Screen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ``` self: ?*C.QWindow, screen: ?*C.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn AccessibleRoot(self: ?*anyopaque) ?*C.QAccessibleInterface {
        return C.QWindow_AccessibleRoot(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) ?*C.QAccessibleInterface ```
    pub fn OnAccessibleRoot(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QAccessibleInterface) void {
        C.QWindow_OnAccessibleRoot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseAccessibleRoot(self: ?*anyopaque) ?*C.QAccessibleInterface {
        return C.QWindow_QBaseAccessibleRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn FocusObject(self: ?*anyopaque) ?*C.QObject {
        return C.QWindow_FocusObject(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnFocusObject(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QWindow_OnFocusObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseFocusObject(self: ?*anyopaque) ?*C.QObject {
        return C.QWindow_QBaseFocusObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QWindow, pos: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPointF {
        return C.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QWindow, pos: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPointF {
        return C.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QWindow, pos: ?*C.QPoint ```
    pub fn MapToGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_MapToGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QWindow, pos: ?*C.QPoint ```
    pub fn MapFromGlobalWithPos(self: ?*anyopaque, pos: ?*anyopaque) ?*C.QPoint {
        return C.QWindow_MapFromGlobalWithPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWindow_Cursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ``` self: ?*C.QWindow, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWindow_UnsetCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ``` id: usize ```
    pub fn FromWinId(id: usize) ?*C.QWindow {
        return C.QWindow_FromWinId(@intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// ``` self: ?*C.QWindow, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = @constCast(name.ptr);
        return C.QWindow_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, []const u8, i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        C.QWindow_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = @constCast(name.ptr);
        return C.QWindow_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn RequestActivate(self: ?*anyopaque) void {
        C.QWindow_RequestActivate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ``` self: ?*C.QWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QWindow_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWindow_Show(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWindow_Hide(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWindow_ShowMinimized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWindow_ShowMaximized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWindow_ShowFullScreen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWindow_ShowNormal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWindow_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWindow_Raise(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWindow_Lower(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ``` self: ?*C.QWindow, edges: i32 ```
    pub fn StartSystemResize(self: ?*anyopaque, edges: i64) bool {
        return C.QWindow_StartSystemResize(@ptrCast(self), @intCast(edges));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn StartSystemMove(self: ?*anyopaque) bool {
        return C.QWindow_StartSystemMove(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ``` self: ?*C.QWindow, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetX(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetY(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetWidth(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        C.QWindow_SetHeight(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: ?*C.QWindow, posx: i32, posy: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        C.QWindow_SetGeometry(@ptrCast(self), @intCast(posx), @intCast(posy), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: ?*C.QWindow, rect: ?*C.QRect ```
    pub fn SetGeometryWithRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QWindow_SetGeometryWithRect(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QWindow, w: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        C.QWindow_SetMinimumWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QWindow, h: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        C.QWindow_SetMinimumHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QWindow, w: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        C.QWindow_SetMaximumWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QWindow, h: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        C.QWindow_SetMaximumHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ``` self: ?*C.QWindow, msec: i32 ```
    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        C.QWindow_Alert(@ptrCast(self), @intCast(msec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn RequestUpdate(self: ?*anyopaque) void {
        C.QWindow_RequestUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: ?*C.QWindow, screen: ?*C.QScreen ```
    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QScreen) callconv(.c) void ```
    pub fn OnScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_ScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: ?*C.QWindow, modality: qnamespace_enums.WindowModality ```
    pub fn ModalityChanged(self: ?*anyopaque, modality: i64) void {
        C.QWindow_ModalityChanged(@ptrCast(self), @intCast(modality));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.WindowModality) callconv(.c) void ```
    pub fn OnModalityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_ModalityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: ?*C.QWindow, windowState: qnamespace_enums.WindowState ```
    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i64) void {
        C.QWindow_WindowStateChanged(@ptrCast(self), @intCast(windowState));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.WindowState) callconv(.c) void ```
    pub fn OnWindowStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_WindowStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: ?*C.QWindow, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_XChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_YChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_WidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_HeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MinimumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMinimumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MinimumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMinimumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MaximumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMaximumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: i32 ```
    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        C.QWindow_MaximumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, i32) callconv(.c) void ```
    pub fn OnMaximumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: ?*C.QWindow, arg: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        C.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QWindow_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: ?*C.QWindow, visibility: qwindow_enums.Visibility ```
    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i64) void {
        C.QWindow_VisibilityChanged(@ptrCast(self), @intCast(visibility));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qwindow_enums.Visibility) callconv(.c) void ```
    pub fn OnVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_VisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn ActiveChanged(self: ?*anyopaque) void {
        C.QWindow_ActiveChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: ?*C.QWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        C.QWindow_ContentOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnContentOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: ?*C.QWindow, object: ?*C.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        C.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: ?*C.QWindow, opacity: f64 ```
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        C.QWindow_OpacityChanged(@ptrCast(self), @floatCast(opacity));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, f64) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QWindow_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: ?*C.QWindow, transientParent: ?*C.QWindow ```
    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        C.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QWindow) callconv(.c) void ```
    pub fn OnTransientParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_Connect_TransientParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QExposeEvent ```
    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QExposeEvent) callconv(.c) void ```
    pub fn OnExposeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnExposeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QExposeEvent ```
    pub fn QBaseExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWindow_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWindow_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWindow_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QTouchEvent ```
    pub fn TouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_TouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QTouchEvent) callconv(.c) void ```
    pub fn OnTouchEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnTouchEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QTouchEvent ```
    pub fn QBaseTouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseTouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_TabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// ``` self: ?*C.QWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QWindow_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, []u8, ?*anyopaque, ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWindow_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWindow_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: ?*C.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn Parent1(self: ?*anyopaque, mode: i64) ?*C.QWindow {
        return C.QWindow_Parent1(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: ?*C.QWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWindow_SetFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QWindow, child: ?*C.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i64) bool {
        return C.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @intCast(mode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QWindow, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWindow, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QWindow, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QWindow, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWindow, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QWindow, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QWindow, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QWindow, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QWindow, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWindow ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWindow ```
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
    /// ``` self: ?*C.QWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QWindow, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWindow, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QWindow ```
    pub fn SurfaceClass(self: ?*anyopaque) i64 {
        return C.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return C.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWindow_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWindow_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QWindow_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QWindow_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QWindow_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWindow, slot: fn (?*C.QWindow, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWindow_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QWindow_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwindow.html#types
pub const enums = struct {
    pub const Visibility = enum {
        pub const Hidden: i32 = 0;
        pub const AutomaticVisibility: i32 = 1;
        pub const Windowed: i32 = 2;
        pub const Minimized: i32 = 3;
        pub const Maximized: i32 = 4;
        pub const FullScreen: i32 = 5;
    };

    pub const AncestorMode = enum {
        pub const ExcludeTransients: i32 = 0;
        pub const IncludeTransients: i32 = 1;
    };
};
