const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSvg__ImageSet = @import("libqt6").KSvg__ImageSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const framesvg_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const svg_enums = @import("libsvg.zig").enums;

/// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html)
pub const KSvg__FrameSvg = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSvg__FrameSvg,

    pub const _is_KSvg__FrameSvg = {};
    pub const _is_KSvg__Svg = {};
    pub const _is_QObject = {};

    /// New constructs a new KSvg::FrameSvg object.
    ///
    pub fn New() KSvg__FrameSvg {
        return .{ .ptr = qtc.KSvg__FrameSvg_new() };
    }

    /// New2 constructs a new KSvg::FrameSvg object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KSvg__FrameSvg {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSvg__FrameSvg_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn MetaObject(self: KSvg__FrameSvg) QMetaObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSvg__FrameSvg_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SuperMetaObject(self: KSvg__FrameSvg) QMetaObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSvg__FrameSvg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__FrameSvg_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSvg__FrameSvg_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSvg__FrameSvg, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__FrameSvg_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSvg__FrameSvg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSvg__FrameSvg, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetImagePath(self: KSvg__FrameSvg, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_SetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetImagePath(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnSetImagePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetImagePath` instead
    ///
    pub const QBaseSetImagePath = SuperSetImagePath;

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SuperSetImagePath(self: KSvg__FrameSvg, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_SuperSetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setEnabledBorders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` borders: flag of framesvg_enums.EnabledBorder `
    ///
    pub fn SetEnabledBorders(self: KSvg__FrameSvg, borders: i32) void {
        qtc.KSvg__FrameSvg_SetEnabledBorders(@ptrCast(self.ptr), @bitCast(borders));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#enabledBorders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` flag of framesvg_enums.EnabledBorder `
    ///
    pub fn EnabledBorders(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_EnabledBorders(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#resizeFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` size: QSizeF `
    ///
    pub fn ResizeFrame(self: KSvg__FrameSvg, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.KSvg__FrameSvg_ResizeFrame(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn FrameSize(self: KSvg__FrameSvg) QSizeF {
        return .{ .ptr = qtc.KSvg__FrameSvg_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#marginSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn MarginSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_MarginSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetMargins(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#fixedMarginSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn FixedMarginSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_FixedMarginSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getFixedMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetFixedMargins(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetFixedMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#insetSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` edge: framesvg_enums.MarginEdge `
    ///
    pub fn InsetSize(self: KSvg__FrameSvg, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_InsetSize(@ptrCast(self.ptr), @bitCast(edge));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getInset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn GetInset(self: KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetInset(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ContentsRect(self: KSvg__FrameSvg) QRectF {
        return .{ .ptr = qtc.KSvg__FrameSvg_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` location: framesvg_enums.LocationPrefix `
    ///
    pub fn SetElementPrefix(self: KSvg__FrameSvg, location: i32) void {
        qtc.KSvg__FrameSvg_SetElementPrefix(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetElementPrefix2(self: KSvg__FrameSvg, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.KSvg__FrameSvg_SetElementPrefix2(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn HasElementPrefix(self: KSvg__FrameSvg, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.KSvg__FrameSvg_HasElementPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` location: framesvg_enums.LocationPrefix `
    ///
    pub fn HasElementPrefix2(self: KSvg__FrameSvg, location: i32) bool {
        return qtc.KSvg__FrameSvg_HasElementPrefix2(@ptrCast(self.ptr), @bitCast(location));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__FrameSvg_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Mask(self: KSvg__FrameSvg) QRegion {
        return .{ .ptr = qtc.KSvg__FrameSvg_Mask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#alphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn AlphaMask(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__FrameSvg_AlphaMask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setCacheAllRenderedFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` cache: bool `
    ///
    pub fn SetCacheAllRenderedFrames(self: KSvg__FrameSvg, cache: bool) void {
        qtc.KSvg__FrameSvg_SetCacheAllRenderedFrames(@ptrCast(self.ptr), cache);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#cacheAllRenderedFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn CacheAllRenderedFrames(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__FrameSvg_CacheAllRenderedFrames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#clearCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ClearCache(self: KSvg__FrameSvg) void {
        qtc.KSvg__FrameSvg_ClearCache(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#framePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn FramePixmap(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__FrameSvg_FramePixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    pub fn PaintFrame(self: KSvg__FrameSvg, painter: anytype, target: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        qtc.KSvg__FrameSvg_PaintFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    pub fn PaintFrame2(self: KSvg__FrameSvg, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__FrameSvg_PaintFrame2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#actualPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActualPrefix(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__FrameSvg_ActualPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.ActualPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#isRepaintBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsRepaintBlocked(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__FrameSvg_IsRepaintBlocked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setRepaintBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` blocked: bool `
    ///
    pub fn SetRepaintBlocked(self: KSvg__FrameSvg, blocked: bool) void {
        qtc.KSvg__FrameSvg_SetRepaintBlocked(@ptrCast(self.ptr), blocked);
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn MinimumDrawingHeight(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn MinimumDrawingWidth(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingWidth(@ptrCast(self.ptr));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRectF `
    ///
    /// ` source: QRectF `
    ///
    pub fn PaintFrame3(self: KSvg__FrameSvg, painter: anytype, target: anytype, source: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRectF;
        comptime _ = @TypeOf(source)._is_QRectF;
        qtc.KSvg__FrameSvg_PaintFrame3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    pub fn PaintFrame22(self: KSvg__FrameSvg, painter: anytype, pos: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KSvg__FrameSvg_PaintFrame22(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` factor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: KSvg__FrameSvg, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn DevicePixelRatio(self: KSvg__FrameSvg) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Pixmap(self: KSvg__FrameSvg) QPixmap {
        return .{ .ptr = qtc.KSvg__Svg_Pixmap(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` size: QSize `
    ///
    pub fn Image(self: KSvg__FrameSvg, size: anytype) QImage {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KSvg__Svg_Image(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    pub fn Paint(self: KSvg__FrameSvg, painter: anytype, point: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.KSvg__Svg_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Paint2(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn Paint3(self: KSvg__FrameSvg, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.KSvg__Svg_Paint3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn Paint4(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, width: i32, height: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSvg__Svg_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Size(self: KSvg__FrameSvg) QSizeF {
        return .{ .ptr = qtc.KSvg__Svg_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn Resize(self: KSvg__FrameSvg, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` size: QSizeF `
    ///
    pub fn Resize2(self: KSvg__FrameSvg, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.KSvg__Svg_Resize2(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Resize3(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementSize(self: KSvg__FrameSvg, elementId: []const u8) QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementSize(@ptrCast(self.ptr), elementId_str) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn ElementRect(self: KSvg__FrameSvg, elementId: []const u8) QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_ElementRect(@ptrCast(self.ptr), elementId_str) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementId: []const u8 `
    ///
    pub fn HasElement(self: KSvg__FrameSvg, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self.ptr), elementId_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsValid(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` multiple: bool `
    ///
    pub fn SetContainsMultipleImages(self: KSvg__FrameSvg, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self.ptr), multiple);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ContainsMultipleImages(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` useCache: bool `
    ///
    pub fn SetUsingRenderingCache(self: KSvg__FrameSvg, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self.ptr), useCache);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsUsingRenderingCache(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn FromCurrentImageSet(self: KSvg__FrameSvg) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` theme: KSvg__ImageSet `
    ///
    pub fn SetImageSet(self: KSvg__FrameSvg, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ImageSet(self: KSvg__FrameSvg) KSvg__ImageSet {
        return .{ .ptr = qtc.KSvg__Svg_ImageSet(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` status: svg_enums.Status `
    ///
    pub fn SetStatus(self: KSvg__FrameSvg, status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.Status `
    ///
    pub fn Status(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorSet: svg_enums.ColorSet `
    ///
    pub fn SetColorSet(self: KSvg__FrameSvg, colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self.ptr), @bitCast(colorSet));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ## Returns:
    ///
    /// ` svg_enums.ColorSet `
    ///
    pub fn ColorSet(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    pub fn Color(self: KSvg__FrameSvg, colorName: i32) QColor {
        return .{ .ptr = qtc.KSvg__Svg_Color(@ptrCast(self.ptr), @bitCast(colorName)) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorName: svg_enums.StyleSheetColor `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: KSvg__FrameSvg, colorName: i32, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.KSvg__Svg_SetColor(@ptrCast(self.ptr), @bitCast(colorName), @ptrCast(color.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ClearColorOverrides(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn RepaintNeeded(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn OnRepaintNeeded(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SizeChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn OnSizeChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ImagePathChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn OnImagePathChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn ColorHintChanged(self: KSvg__FrameSvg) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn OnColorHintChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` fromCurrentImageSet: bool `
    ///
    pub fn FromCurrentImageSetChanged(self: KSvg__FrameSvg, fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self.ptr), fromCurrentImageSet);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, fromCurrentImageSet: bool) callconv(.c) void `
    ///
    pub fn OnFromCurrentImageSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` status: svg_enums.Status `
    ///
    pub fn StatusChanged(self: KSvg__FrameSvg, status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self.ptr), @bitCast(status));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, status: svg_enums.Status) callconv(.c) void `
    ///
    pub fn OnStatusChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` colorSet: svg_enums.ColorSet `
    ///
    pub fn ColorSetChanged(self: KSvg__FrameSvg, colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self.ptr), @bitCast(colorSet));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, colorSet: svg_enums.ColorSet) callconv(.c) void `
    ///
    pub fn OnColorSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` imageSet: KSvg__ImageSet `
    ///
    pub fn ImageSetChanged(self: KSvg__FrameSvg, imageSet: anytype) void {
        comptime _ = @TypeOf(imageSet)._is_KSvg__ImageSet;
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self.ptr), @ptrCast(imageSet.ptr));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, imageSet: KSvg__ImageSet) callconv(.c) void `
    ///
    pub fn OnImageSetChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, KSvg__ImageSet) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Pixmap1(self: KSvg__FrameSvg, elementID: []const u8) QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Pixmap1(@ptrCast(self.ptr), elementID_str) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` size: QSize `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Image2(self: KSvg__FrameSvg, size: anytype, elementID: []const u8) QImage {
        comptime _ = @TypeOf(size)._is_QSize;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return .{ .ptr = qtc.KSvg__Svg_Image2(@ptrCast(self.ptr), @ptrCast(size.ptr), elementID_str) };
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` point: QPointF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Paint32(self: KSvg__FrameSvg, painter: anytype, point: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(point)._is_QPointF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(point.ptr), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Paint42(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Paint33(self: KSvg__FrameSvg, painter: anytype, rect: anytype, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint33(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// ### [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` elementID: []const u8 `
    ///
    pub fn Paint6(self: KSvg__FrameSvg, painter: anytype, x: i32, y: i32, width: i32, height: i32, elementID: []const u8) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), elementID_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSvg__FrameSvg, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QObject, QEvent) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSvg__FrameSvg, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg__framesvg.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSvg__FrameSvg, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsWidgetType(self: KSvg__FrameSvg) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsWindowType(self: KSvg__FrameSvg) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn IsQuickItemType(self: KSvg__FrameSvg) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SignalsBlocked(self: KSvg__FrameSvg) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSvg__FrameSvg, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Thread(self: KSvg__FrameSvg) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSvg__FrameSvg, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSvg__FrameSvg, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSvg__FrameSvg, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSvg__FrameSvg, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSvg__FrameSvg, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSvg__FrameSvg, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksvg__framesvg.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSvg__FrameSvg, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSvg__FrameSvg, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSvg__FrameSvg, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSvg__FrameSvg, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Disconnect3(self: KSvg__FrameSvg) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSvg__FrameSvg, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn DumpObjectTree(self: KSvg__FrameSvg) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn DumpObjectInfo(self: KSvg__FrameSvg) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSvg__FrameSvg, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSvg__FrameSvg, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSvg__FrameSvg, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksvg__framesvg.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg__framesvg.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn BindingStorage(self: KSvg__FrameSvg) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn BindingStorage2(self: KSvg__FrameSvg) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Destroyed(self: KSvg__FrameSvg) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Parent(self: KSvg__FrameSvg) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSvg__FrameSvg, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn DeleteLater(self: KSvg__FrameSvg) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSvg__FrameSvg, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSvg__FrameSvg, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSvg__FrameSvg, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSvg__FrameSvg, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSvg__FrameSvg, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSvg__FrameSvg, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSvg__FrameSvg, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSvg__FrameSvg, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSvg__FrameSvg, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__FrameSvg_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSvg__FrameSvg, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSvg__FrameSvg_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QEvent) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__FrameSvg_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSvg__FrameSvg_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QTimerEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__FrameSvg_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSvg__FrameSvg_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QChildEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__FrameSvg_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSvg__FrameSvg, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSvg__FrameSvg_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QEvent) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSvg__FrameSvg, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSvg__FrameSvg_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Sender(self: KSvg__FrameSvg) QObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SuperSender(self: KSvg__FrameSvg) QObject {
        return .{ .ptr = qtc.KSvg__FrameSvg_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSvg__FrameSvg_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SenderSignalIndex(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn SuperSenderSignalIndex(self: KSvg__FrameSvg) i32 {
        return qtc.KSvg__FrameSvg_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSvg__FrameSvg, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSvg__FrameSvg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSvg__FrameSvg, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSvg__FrameSvg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__FrameSvg_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSvg__FrameSvg, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSvg__FrameSvg_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg`
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, QMetaMethod) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    /// ` callback: *const fn (self: KSvg__FrameSvg, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSvg__FrameSvg, callback: *const fn (KSvg__FrameSvg, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSvg__FrameSvg `
    ///
    pub fn Delete(self: KSvg__FrameSvg) void {
        qtc.KSvg__FrameSvg_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksvg-framesvg.html#public-types)
pub const enums = struct {
    pub const EnabledBorder = enum(i32) {
        pub const NoBorder: i32 = 0;
        pub const TopBorder: i32 = 1;
        pub const BottomBorder: i32 = 2;
        pub const LeftBorder: i32 = 4;
        pub const RightBorder: i32 = 8;
        pub const AllBorders: i32 = 15;
    };

    pub const LocationPrefix = enum(i32) {
        pub const Floating: i32 = 0;
        pub const TopEdge: i32 = 1;
        pub const BottomEdge: i32 = 2;
        pub const LeftEdge: i32 = 3;
        pub const RightEdge: i32 = 4;
    };

    pub const MarginEdge = enum(i32) {
        pub const TopMargin: i32 = 0;
        pub const BottomMargin: i32 = 1;
        pub const LeftMargin: i32 = 2;
        pub const RightMargin: i32 = 3;
    };
};
