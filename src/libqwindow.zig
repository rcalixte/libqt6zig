const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
    pub fn New() QtC.QWindow {
        return qtc.QWindow_new();
    }

    /// New2 constructs a new QWindow object.
    ///
    /// ``` parent: QtC.QWindow ```
    pub fn New2(parent: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QWindow object.
    ///
    /// ``` screen: QtC.QScreen ```
    pub fn New3(screen: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new3(@ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QWindow_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QWindow_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ``` self: QtC.QWindow, surfaceType: qsurface_enums.SurfaceType ```
    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i64) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self), @intCast(surfaceType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn SurfaceType(self: ?*anyopaque) i64 {
        return qtc.QWindow_SurfaceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) i64 ```
    pub fn OnSurfaceType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QWindow_OnSurfaceType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseSurfaceType(self: ?*anyopaque) i64 {
        return qtc.QWindow_QBaseSurfaceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Visibility(self: ?*anyopaque) i64 {
        return qtc.QWindow_Visibility(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ``` self: QtC.QWindow, v: qwindow_enums.Visibility ```
    pub fn SetVisibility(self: ?*anyopaque, v: i64) void {
        qtc.QWindow_SetVisibility(@ptrCast(self), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QWindow_Create(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWindow_WinId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Parent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ``` self: QtC.QWindow, parent: QtC.QWindow ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWindow_IsModal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Modality(self: ?*anyopaque) i64 {
        return qtc.QWindow_Modality(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ``` self: QtC.QWindow, modality: qnamespace_enums.WindowModality ```
    pub fn SetModality(self: ?*anyopaque, modality: i64) void {
        qtc.QWindow_SetModality(@ptrCast(self), @intCast(modality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ``` self: QtC.QWindow, format: QtC.QSurfaceFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Format(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) QtC.QSurfaceFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QWindow_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_QBaseFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn RequestedFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_RequestedFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ``` self: QtC.QWindow, flags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QWindow_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QWindow_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: QtC.QWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWindow_SetFlag(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QWindow_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ``` self: QtC.QWindow, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ``` self: QtC.QWindow, level: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self), @floatCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ``` self: QtC.QWindow, region: QtC.QRegion ```
    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWindow_Mask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QWindow_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ``` self: QtC.QWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i64) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ContentOrientation(self: ?*anyopaque) i64 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return qtc.QWindow_WindowState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn WindowStates(self: ?*anyopaque) i64 {
        return qtc.QWindow_WindowStates(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ``` self: QtC.QWindow, state: qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWindow_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ``` self: QtC.QWindow, states: i32 ```
    pub fn SetWindowStates(self: ?*anyopaque, states: i64) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self), @intCast(states));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ``` self: QtC.QWindow, parent: QtC.QWindow ```
    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn TransientParent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_TransientParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: QtC.QWindow, child: QtC.QWindow ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsExposed(self: ?*anyopaque) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_BaseSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_SizeIncrement(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ``` self: QtC.QWindow, size: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ``` self: QtC.QWindow, size: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ``` self: QtC.QWindow, size: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QWindow, size: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn FrameMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWindow_FrameMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_FrameGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn FramePosition(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_FramePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ``` self: QtC.QWindow, point: QtC.QPoint ```
    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWindow_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWindow_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWindow_X(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWindow_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QWindow_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_QBaseSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Position(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: QtC.QWindow, pt: QtC.QPoint ```
    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ``` self: QtC.QWindow, posx: i32, posy: i32 ```
    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self), @intCast(posx), @intCast(posy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: QtC.QWindow, newSize: QtC.QSize ```
    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ``` self: QtC.QWindow, w: i32, h: i32 ```
    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ``` self: QtC.QWindow, filePath: []const u8 ```
    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.struct_libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ``` self: QtC.QWindow, allocator: std.mem.Allocator ```
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWindow_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ``` self: QtC.QWindow, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWindow_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QWindow_Destroy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ``` self: QtC.QWindow, grab: bool ```
    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ``` self: QtC.QWindow, grab: bool ```
    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWindow_Screen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ``` self: QtC.QWindow, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn AccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QWindow_AccessibleRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleRoot(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QWindow_OnAccessibleRoot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseAccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QWindow_QBaseAccessibleRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn FocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_FocusObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnFocusObject(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QWindow_OnFocusObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseFocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_QBaseFocusObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: QtC.QWindow, pos: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QWindow, pos: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ``` self: QtC.QWindow, pos: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapToGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QWindow, pos: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapFromGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWindow_Cursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ``` self: QtC.QWindow, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ``` id: usize ```
    pub fn FromWinId(id: usize) QtC.QWindow {
        return qtc.QWindow_FromWinId(@intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// ``` self: QtC.QWindow, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QWindow_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, name: []const u8, revision: i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QWindow_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QWindow_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn RequestActivate(self: ?*anyopaque) void {
        qtc.QWindow_RequestActivate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ``` self: QtC.QWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWindow_Show(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWindow_Hide(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWindow_ShowNormal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWindow_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWindow_Raise(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWindow_Lower(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ``` self: QtC.QWindow, edges: i32 ```
    pub fn StartSystemResize(self: ?*anyopaque, edges: i64) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self), @intCast(edges));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn StartSystemMove(self: ?*anyopaque) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ``` self: QtC.QWindow, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: QtC.QWindow, posx: i32, posy: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self), @intCast(posx), @intCast(posy), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ``` self: QtC.QWindow, rect: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QWindow_SetGeometry2(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QWindow, w: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QWindow, h: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QWindow, w: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QWindow, h: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ``` self: QtC.QWindow, msec: i32 ```
    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self), @intCast(msec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn RequestUpdate(self: ?*anyopaque) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: QtC.QWindow, screen: QtC.QScreen ```
    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: QtC.QWindow, modality: qnamespace_enums.WindowModality ```
    pub fn ModalityChanged(self: ?*anyopaque, modality: i64) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self), @intCast(modality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, modality: qnamespace_enums.WindowModality) callconv(.c) void ```
    pub fn OnModalityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: QtC.QWindow, windowState: qnamespace_enums.WindowState ```
    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i64) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self), @intCast(windowState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, windowState: qnamespace_enums.WindowState) callconv(.c) void ```
    pub fn OnWindowStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QWindow, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, title: []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnXChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnYChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMinimumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMinimumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMaximumWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, arg: i32 ```
    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self), @intCast(arg));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: i32) callconv(.c) void ```
    pub fn OnMaximumHeightChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: QtC.QWindow, arg: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, arg: bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: QtC.QWindow, visibility: qwindow_enums.Visibility ```
    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i64) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self), @intCast(visibility));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, visibility: qwindow_enums.Visibility) callconv(.c) void ```
    pub fn OnVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn ActiveChanged(self: ?*anyopaque) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow) callconv(.c) void ```
    pub fn OnActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: QtC.QWindow, orientation: qnamespace_enums.ScreenOrientation ```
    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i64) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void ```
    pub fn OnContentOrientationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QWindow, object: QtC.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, object: QtC.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: QtC.QWindow, opacity: f64 ```
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, opacity: f64) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: QtC.QWindow, transientParent: QtC.QWindow ```
    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        qtc.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, transientParent: QtC.QWindow) callconv(.c) void ```
    pub fn OnTransientParentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QExposeEvent ```
    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QExposeEvent) callconv(.c) void ```
    pub fn OnExposeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnExposeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QExposeEvent ```
    pub fn QBaseExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QTouchEvent ```
    pub fn TouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QTouchEvent) callconv(.c) void ```
    pub fn OnTouchEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTouchEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QTouchEvent ```
    pub fn QBaseTouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseTouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, param1: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// ``` self: QtC.QWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QWindow_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QWindow, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWindow_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ``` self: QtC.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn Parent1(self: ?*anyopaque, mode: i64) QtC.QWindow {
        return qtc.QWindow_Parent1(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ``` self: QtC.QWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ``` self: QtC.QWindow, child: QtC.QWindow, mode: qwindow_enums.AncestorMode ```
    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i64) bool {
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @intCast(mode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QWindow, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QWindow, name: []const u8 ```
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
    /// ``` self: QtC.QWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWindow, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWindow, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QWindow, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QWindow, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QWindow, obj: QtC.QObject ```
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
    /// ``` self: QtC.QWindow, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QWindow, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QWindow, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwindow.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWindow ```
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
    /// ``` self: QtC.QWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWindow, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QWindow, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWindow, param1: QtC.QObject ```
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
    /// ``` self: QtC.QWindow ```
    pub fn SurfaceClass(self: ?*anyopaque) i64 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// Inherited from QSurface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ``` self: QtC.QWindow ```
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QWindow_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QWindow_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QWindow_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QWindow, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#dtor.QWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWindow_Delete(@ptrCast(self));
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
