const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsurface_enums = @import("libqsurface.zig").enums;
const qwindow_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html)
pub const qwindow = struct {
    /// New constructs a new QWindow object.
    ///
    pub fn New() QtC.QWindow {
        return qtc.QWindow_new();
    }

    /// New2 constructs a new QWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QWindow `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new2(@ptrCast(parent));
    }

    /// New3 constructs a new QWindow object.
    ///
    /// ## Parameter(s):
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn New3(screen: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_new3(@ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWindow_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QWindow_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWindow_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWindow_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWindow_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWindow_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWindow_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWindow_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn SetSurfaceType(self: ?*anyopaque, surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self), @bitCast(surfaceType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SurfaceType(self: ?*anyopaque) i32 {
        return qtc.QWindow_SurfaceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSurfaceType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWindow_OnSurfaceType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSurfaceType` instead
    ///
    pub const QBaseSurfaceType = SuperSurfaceType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn SuperSurfaceType(self: ?*anyopaque) i32 {
        return qtc.QWindow_SuperSurfaceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qwindow_enums.Visibility `
    ///
    pub fn Visibility(self: ?*anyopaque) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` v: qwindow_enums.Visibility `
    ///
    pub fn SetVisibility(self: ?*anyopaque, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Create(self: ?*anyopaque) void {
        qtc.QWindow_Create(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWindow_WinId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` parent: QtC.QWindow `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWindow_IsModal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn Modality(self: ?*anyopaque) i32 {
        return qtc.QWindow_Modality(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` modality: qnamespace_enums.WindowModality `
    ///
    pub fn SetModality(self: ?*anyopaque, modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self), @bitCast(modality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` format: QtC.QSurfaceFormat `
    ///
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QWindow_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Format(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_Format(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSurfaceFormat `
    ///
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSurfaceFormat) void {
        qtc.QWindow_OnFormat(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_SuperFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn RequestedFormat(self: ?*anyopaque) QtC.QSurfaceFormat {
        return qtc.QWindow_RequestedFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QWindow_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetFlag(self: ?*anyopaque, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QWindow_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` level: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` region: QtC.QRegion `
    ///
    pub fn SetMask(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QWindow_SetMask(@ptrCast(self), @ptrCast(region));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWindow_Mask(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QWindow_IsActive(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn ReportContentOrientationChange(self: ?*anyopaque, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn ContentOrientation(self: ?*anyopaque) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowStates(self: ?*anyopaque) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` state: qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` states: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowStates(self: ?*anyopaque, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self), @bitCast(states));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` parent: QtC.QWindow `
    ///
    pub fn SetTransientParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWindow_SetTransientParent(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn TransientParent(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWindow_TransientParent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` child: QtC.QWindow `
    ///
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWindow_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn IsExposed(self: ?*anyopaque) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_BaseSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_SizeIncrement(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetBaseSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetBaseSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetSizeIncrement(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QWindow_SetSizeIncrement(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn FrameMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWindow_FrameMargins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWindow_FrameGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn FramePosition(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_FramePosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn SetFramePosition(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QWindow_SetFramePosition(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWindow_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWindow_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWindow_X(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWindow_Y(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QWindow_OnSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWindow_SuperSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Position(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` pt: QtC.QPoint `
    ///
    pub fn SetPosition(self: ?*anyopaque, pt: ?*anyopaque) void {
        qtc.QWindow_SetPosition(@ptrCast(self), @ptrCast(pt));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    pub fn SetPosition2(self: ?*anyopaque, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self), @bitCast(posx), @bitCast(posy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` newSize: QtC.QSize `
    ///
    pub fn Resize(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QWindow_Resize(@ptrCast(self), @ptrCast(newSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWindow_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWindow_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QWindow_Destroy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` grab: bool `
    ///
    pub fn SetKeyboardGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self), grab);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` grab: bool `
    ///
    pub fn SetMouseGrabEnabled(self: ?*anyopaque, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self), grab);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWindow_Screen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn AccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QWindow_AccessibleRoot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleRoot(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QWindow_OnAccessibleRoot(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAccessibleRoot` instead
    ///
    pub const QBaseAccessibleRoot = SuperAccessibleRoot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperAccessibleRoot(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QWindow_SuperAccessibleRoot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn FocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_FocusObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnFocusObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QWindow_OnFocusObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusObject` instead
    ///
    pub const QBaseFocusObject = SuperFocusObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperFocusObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_SuperFocusObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn MapToGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapToGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn MapFromGlobal(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPointF {
        return qtc.QWindow_MapFromGlobal(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn MapToGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapToGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn MapFromGlobal2(self: ?*anyopaque, pos: ?*anyopaque) QtC.QPoint {
        return qtc.QWindow_MapFromGlobal2(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWindow_Cursor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` cursor: QtC.QCursor `
    ///
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWindow_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn FromWinId(id: usize) QtC.QWindow {
        return qtc.QWindow_FromWinId(@bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QWindow_ResolveInterface(@ptrCast(self), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QWindow_OnResolveInterface(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveInterface` instead
    ///
    pub const QBaseResolveInterface = SuperResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn SuperResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QWindow_SuperResolveInterface(@ptrCast(self), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn RequestActivate(self: ?*anyopaque) void {
        qtc.QWindow_RequestActivate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWindow_Show(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWindow_Hide(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWindow_ShowNormal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWindow_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWindow_Raise(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWindow_Lower(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` edges: flag of qnamespace_enums.Edge `
    ///
    pub fn StartSystemResize(self: ?*anyopaque, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self), @bitCast(edges));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn StartSystemMove(self: ?*anyopaque) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetX(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetY(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetWidth(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn SetHeight(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: ?*anyopaque, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetGeometry2(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QWindow_SetGeometry2(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn SetMinimumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn SetMinimumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` w: i32 `
    ///
    pub fn SetMaximumWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` h: i32 `
    ///
    pub fn SetMaximumHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` msec: i32 `
    ///
    pub fn Alert(self: ?*anyopaque, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn RequestUpdate(self: ?*anyopaque) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn ScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWindow_ScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, screen: QtC.QScreen) callconv(.c) void `
    ///
    pub fn OnScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` modality: qnamespace_enums.WindowModality `
    ///
    pub fn ModalityChanged(self: ?*anyopaque, modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self), @bitCast(modality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, modality: qnamespace_enums.WindowModality) callconv(.c) void `
    ///
    pub fn OnModalityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` windowState: qnamespace_enums.WindowState `
    ///
    pub fn WindowStateChanged(self: ?*anyopaque, windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self), @bitCast(windowState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, windowState: qnamespace_enums.WindowState) callconv(.c) void `
    ///
    pub fn OnWindowStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn XChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnXChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn YChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnYChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn WidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn HeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MinimumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMinimumWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MinimumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMinimumHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MaximumWidthChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMaximumWidthChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: i32 `
    ///
    pub fn MaximumHeightChanged(self: ?*anyopaque, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self), @bitCast(arg));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: i32) callconv(.c) void `
    ///
    pub fn OnMaximumHeightChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` arg: bool `
    ///
    pub fn VisibleChanged(self: ?*anyopaque, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self), arg);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, arg: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` visibility: qwindow_enums.Visibility `
    ///
    pub fn VisibilityChanged(self: ?*anyopaque, visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, visibility: qwindow_enums.Visibility) callconv(.c) void `
    ///
    pub fn OnVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn ActiveChanged(self: ?*anyopaque) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn ContentOrientationChanged(self: ?*anyopaque, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self), @bitCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn OnContentOrientationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` object: QtC.QObject `
    ///
    pub fn FocusObjectChanged(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QWindow_FocusObjectChanged(@ptrCast(self), @ptrCast(object));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, object: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnFocusObjectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` opacity: f64 `
    ///
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, opacity: f64) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` transientParent: QtC.QWindow `
    ///
    pub fn TransientParentChanged(self: ?*anyopaque, transientParent: ?*anyopaque) void {
        qtc.QWindow_TransientParentChanged(@ptrCast(self), @ptrCast(transientParent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, transientParent: QtC.QWindow) callconv(.c) void `
    ///
    pub fn OnTransientParentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QExposeEvent `
    ///
    pub fn ExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QExposeEvent) callconv(.c) void `
    ///
    pub fn OnExposeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnExposeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExposeEvent` instead
    ///
    pub const QBaseExposeEvent = SuperExposeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QExposeEvent `
    ///
    pub fn SuperExposeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperExposeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QResizeEvent `
    ///
    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnResizeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QPaintEvent `
    ///
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnPaintEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperPaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMoveEvent `
    ///
    pub fn MoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn FocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusInEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperFocusInEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn FocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_FocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnFocusOutEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperFocusOutEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QShowEvent `
    ///
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnShowEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QShowEvent `
    ///
    pub fn SuperShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QHideEvent `
    ///
    pub fn HideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_HideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnHideEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QHideEvent `
    ///
    pub fn SuperHideEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperHideEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QCloseEvent `
    ///
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnCloseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWindow_SuperEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn KeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyPressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperKeyPressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnKeyReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperKeyReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn MousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMousePressEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperMousePressEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseReleaseEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperMouseReleaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseDoubleClickEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperMouseDoubleClickEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnMouseMoveEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QWheelEvent `
    ///
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnWheelEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QTouchEvent `
    ///
    pub fn TouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QTouchEvent) callconv(.c) void `
    ///
    pub fn OnTouchEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTouchEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTouchEvent` instead
    ///
    pub const QBaseTouchEvent = SuperTouchEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QTouchEvent `
    ///
    pub fn SuperTouchEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperTouchEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QTabletEvent `
    ///
    pub fn TabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_TabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTabletEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: QtC.QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWindow_SuperTabletEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QWindow_NativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QWindow_OnNativeEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QWindow_SuperNativeEvent(@ptrCast(self), eventType_str, @ptrCast(message), @ptrCast(result));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn Parent1(self: ?*anyopaque, mode: i32) QtC.QWindow {
        return qtc.QWindow_Parent1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetFlag2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self), @bitCast(param1), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` child: QtC.QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn IsAncestorOf2(self: ?*anyopaque, child: ?*anyopaque, mode: i32) bool {
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self), @ptrCast(child), @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
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
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn SurfaceClass(self: ?*anyopaque) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self));
    }

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SupportsOpenGL(self: ?*anyopaque) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWindow_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWindow_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWindow_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWindow_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWindow_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QWindow_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWindow_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWindow_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWindow_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWindow_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWindow_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow`
    ///
    /// ` callback: *const fn (self: QtC.QWindow, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWindow_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWindow `
    ///
    /// ` callback: *const fn (self: QtC.QWindow, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#dtor.QWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWindow `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QWindow_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#public-types)
pub const enums = struct {
    pub const Visibility = enum(i32) {
        pub const Hidden: i32 = 0;
        pub const AutomaticVisibility: i32 = 1;
        pub const Windowed: i32 = 2;
        pub const Minimized: i32 = 3;
        pub const Maximized: i32 = 4;
        pub const FullScreen: i32 = 5;
    };

    pub const AncestorMode = enum(i32) {
        pub const ExcludeTransients: i32 = 0;
        pub const IncludeTransients: i32 = 1;
    };
};
