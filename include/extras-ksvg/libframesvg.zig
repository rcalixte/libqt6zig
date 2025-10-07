const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const framesvg_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const svg_enums = @import("libsvg.zig").enums;

/// https://api.kde.org/ksvg-framesvg.html
pub const ksvg__framesvg = struct {
    /// New constructs a new KSvg::FrameSvg object.
    ///
    ///
    pub fn New() QtC.KSvg__FrameSvg {
        return qtc.KSvg__FrameSvg_new();
    }

    /// New2 constructs a new KSvg::FrameSvg object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KSvg__FrameSvg {
        return qtc.KSvg__FrameSvg_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KSvg__FrameSvg_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KSvg__FrameSvg, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__FrameSvg_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KSvg__FrameSvg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__FrameSvg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KSvg__FrameSvg_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, path: []const u8 ```
    pub fn SetImagePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_SetImagePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, path: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetImagePath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnSetImagePath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setImagePath)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__FrameSvg, path: []const u8 ```
    pub fn QBaseSetImagePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSvg__FrameSvg_QBaseSetImagePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setEnabledBorders)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, borders: flag of framesvg_enums.EnabledBorder ```
    pub fn SetEnabledBorders(self: ?*anyopaque, borders: i32) void {
        qtc.KSvg__FrameSvg_SetEnabledBorders(@ptrCast(self), @intCast(borders));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#enabledBorders)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    ///
    /// Returns: ``` flag of framesvg_enums.EnabledBorder ```
    pub fn EnabledBorders(self: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_EnabledBorders(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#resizeFrame)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, size: QtC.QSizeF ```
    pub fn ResizeFrame(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_ResizeFrame(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#frameSize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.KSvg__FrameSvg_FrameSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#marginSize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, edge: framesvg_enums.MarginEdge ```
    pub fn MarginSize(self: ?*anyopaque, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_MarginSize(@ptrCast(self), @intCast(edge));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#getMargins)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#fixedMarginSize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, edge: framesvg_enums.MarginEdge ```
    pub fn FixedMarginSize(self: ?*anyopaque, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_FixedMarginSize(@ptrCast(self), @intCast(edge));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#getFixedMargins)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetFixedMargins(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetFixedMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#insetSize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, edge: framesvg_enums.MarginEdge ```
    pub fn InsetSize(self: ?*anyopaque, edge: i32) f64 {
        return qtc.KSvg__FrameSvg_InsetSize(@ptrCast(self), @intCast(edge));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#getInset)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, left: *f64, top: *f64, right: *f64, bottom: *f64 ```
    pub fn GetInset(self: ?*anyopaque, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.KSvg__FrameSvg_GetInset(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#contentsRect)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.KSvg__FrameSvg_ContentsRect(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, location: framesvg_enums.LocationPrefix ```
    pub fn SetElementPrefix(self: ?*anyopaque, location: i32) void {
        qtc.KSvg__FrameSvg_SetElementPrefix(@ptrCast(self), @intCast(location));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, prefix: []const u8 ```
    pub fn SetElementPrefix2(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.KSvg__FrameSvg_SetElementPrefix2(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, prefix: []const u8 ```
    pub fn HasElementPrefix(self: ?*anyopaque, prefix: []const u8) bool {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.KSvg__FrameSvg_HasElementPrefix(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, location: framesvg_enums.LocationPrefix ```
    pub fn HasElementPrefix2(self: ?*anyopaque, location: i32) bool {
        return qtc.KSvg__FrameSvg_HasElementPrefix2(@ptrCast(self), @intCast(location));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#prefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn Prefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSvg__FrameSvg_Prefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#mask)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.KSvg__FrameSvg_Mask(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#alphaMask)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn AlphaMask(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KSvg__FrameSvg_AlphaMask(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setCacheAllRenderedFrames)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, cache: bool ```
    pub fn SetCacheAllRenderedFrames(self: ?*anyopaque, cache: bool) void {
        qtc.KSvg__FrameSvg_SetCacheAllRenderedFrames(@ptrCast(self), cache);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#cacheAllRenderedFrames)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn CacheAllRenderedFrames(self: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_CacheAllRenderedFrames(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#clearCache)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ClearCache(self: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_ClearCache(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#framePixmap)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn FramePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KSvg__FrameSvg_FramePixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, target: QtC.QRectF ```
    pub fn PaintFrame(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_PaintFrame(@ptrCast(self), @ptrCast(painter), @ptrCast(target));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter ```
    pub fn PaintFrame2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_PaintFrame2(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#actualPrefix)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn ActualPrefix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSvg__FrameSvg_ActualPrefix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.ActualPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#isRepaintBlocked)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsRepaintBlocked(self: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_IsRepaintBlocked(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#setRepaintBlocked)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, blocked: bool ```
    pub fn SetRepaintBlocked(self: ?*anyopaque, blocked: bool) void {
        qtc.KSvg__FrameSvg_SetRepaintBlocked(@ptrCast(self), blocked);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#minimumDrawingHeight)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn MinimumDrawingHeight(self: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingHeight(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#minimumDrawingWidth)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn MinimumDrawingWidth(self: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_MinimumDrawingWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSvg__FrameSvg_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSvg__FrameSvg_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, target: QtC.QRectF, source: QtC.QRectF ```
    pub fn PaintFrame3(self: ?*anyopaque, painter: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_PaintFrame3(@ptrCast(self), @ptrCast(painter), @ptrCast(target), @ptrCast(source));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-framesvg.html#paintFrame)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, pos: QtC.QPointF ```
    pub fn PaintFrame22(self: ?*anyopaque, painter: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_PaintFrame22(@ptrCast(self), @ptrCast(painter), @ptrCast(pos));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, factor: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self), @floatCast(factor));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KSvg__Svg_Pixmap(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, size: QtC.QSize ```
    pub fn Image(self: ?*anyopaque, size: ?*anyopaque) QtC.QImage {
        return qtc.KSvg__Svg_Image(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, point: QtC.QPointF ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, point: ?*anyopaque) void {
        qtc.KSvg__Svg_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(point));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, x: i32, y: i32 ```
    pub fn Paint2(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32) void {
        qtc.KSvg__Svg_Paint2(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn Paint3(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.KSvg__Svg_Paint3(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Paint4(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.KSvg__Svg_Paint4(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.KSvg__Svg_Size(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, width: f64, height: f64 ```
    pub fn Resize(self: ?*anyopaque, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self), @floatCast(width), @floatCast(height));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, size: QtC.QSizeF ```
    pub fn Resize2(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.KSvg__Svg_Resize2(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Resize3(self: ?*anyopaque) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, elementId: []const u8 ```
    pub fn ElementSize(self: ?*anyopaque, elementId: []const u8) QtC.QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_ElementSize(@ptrCast(self), elementId_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, elementId: []const u8 ```
    pub fn ElementRect(self: ?*anyopaque, elementId: []const u8) QtC.QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_ElementRect(@ptrCast(self), elementId_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, elementId: []const u8 ```
    pub fn HasElement(self: ?*anyopaque, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self), elementId_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, multiple: bool ```
    pub fn SetContainsMultipleImages(self: ?*anyopaque, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self), multiple);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ContainsMultipleImages(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn ImagePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, useCache: bool ```
    pub fn SetUsingRenderingCache(self: ?*anyopaque, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self), useCache);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsUsingRenderingCache(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn FromCurrentImageSet(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, theme: QtC.KSvg__ImageSet ```
    pub fn SetImageSet(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self), @ptrCast(theme));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ImageSet(self: ?*anyopaque) QtC.KSvg__ImageSet {
        return qtc.KSvg__Svg_ImageSet(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, status: svg_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#status)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    ///
    /// Returns: ``` svg_enums.Status ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, colorSet: svg_enums.ColorSet ```
    pub fn SetColorSet(self: ?*anyopaque, colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self), @intCast(colorSet));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSet)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    ///
    /// Returns: ``` svg_enums.ColorSet ```
    pub fn ColorSet(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, colorName: svg_enums.StyleSheetColor ```
    pub fn Color(self: ?*anyopaque, colorName: i32) QtC.QColor {
        return qtc.KSvg__Svg_Color(@ptrCast(self), @intCast(colorName));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, colorName: svg_enums.StyleSheetColor, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, colorName: i32, color: ?*anyopaque) void {
        qtc.KSvg__Svg_SetColor(@ptrCast(self), @intCast(colorName), @ptrCast(color));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ClearColorOverrides(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn RepaintNeeded(self: ?*anyopaque) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg) callconv(.c) void ```
    pub fn OnRepaintNeeded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn SizeChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg) callconv(.c) void ```
    pub fn OnSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ImagePathChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg) callconv(.c) void ```
    pub fn OnImagePathChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn ColorHintChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg) callconv(.c) void ```
    pub fn OnColorHintChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, fromCurrentImageSet: bool ```
    pub fn FromCurrentImageSetChanged(self: ?*anyopaque, fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self), fromCurrentImageSet);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, fromCurrentImageSet: bool) callconv(.c) void ```
    pub fn OnFromCurrentImageSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, status: svg_enums.Status ```
    pub fn StatusChanged(self: ?*anyopaque, status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self), @intCast(status));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, status: svg_enums.Status) callconv(.c) void ```
    pub fn OnStatusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, colorSet: svg_enums.ColorSet ```
    pub fn ColorSetChanged(self: ?*anyopaque, colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self), @intCast(colorSet));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, colorSet: svg_enums.ColorSet) callconv(.c) void ```
    pub fn OnColorSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, imageSet: QtC.KSvg__ImageSet ```
    pub fn ImageSetChanged(self: ?*anyopaque, imageSet: ?*anyopaque) void {
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self), @ptrCast(imageSet));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, imageSet: QtC.KSvg__ImageSet) callconv(.c) void ```
    pub fn OnImageSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, elementID: []const u8 ```
    pub fn Pixmap1(self: ?*anyopaque, elementID: []const u8) QtC.QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return qtc.KSvg__Svg_Pixmap1(@ptrCast(self), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, size: QtC.QSize, elementID: []const u8 ```
    pub fn Image2(self: ?*anyopaque, size: ?*anyopaque, elementID: []const u8) QtC.QImage {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return qtc.KSvg__Svg_Image2(@ptrCast(self), @ptrCast(size), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, point: QtC.QPointF, elementID: []const u8 ```
    pub fn Paint32(self: ?*anyopaque, painter: ?*anyopaque, point: ?*anyopaque, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint32(@ptrCast(self), @ptrCast(painter), @ptrCast(point), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, x: i32, y: i32, elementID: []const u8 ```
    pub fn Paint42(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint42(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, rect: QtC.QRectF, elementID: []const u8 ```
    pub fn Paint33(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint33(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), elementID_str);
    }

    /// Inherited from KSvg::Svg
    ///
    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, painter: QtC.QPainter, x: i32, y: i32, width: i32, height: i32, elementID: []const u8 ```
    pub fn Paint6(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint6(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), @intCast(width), @intCast(height), elementID_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__FrameSvg, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::framesvg.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ksvg::framesvg.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, obj: QtC.QObject ```
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
    /// ``` self: QtC.KSvg__FrameSvg, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksvg::framesvg.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg::framesvg.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__FrameSvg_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSvg__FrameSvg_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSvg__FrameSvg_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KSvg__FrameSvg_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSvg__FrameSvg_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__FrameSvg_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__FrameSvg_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSvg__FrameSvg_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSvg__FrameSvg_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KSvg__FrameSvg, callback: *const fn (self: QtC.KSvg__FrameSvg, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSvg__FrameSvg ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSvg__FrameSvg_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksvg-framesvg.html#types
pub const enums = struct {
    pub const EnabledBorder = enum {
        pub const NoBorder: i32 = 0;
        pub const TopBorder: i32 = 1;
        pub const BottomBorder: i32 = 2;
        pub const LeftBorder: i32 = 4;
        pub const RightBorder: i32 = 8;
        pub const AllBorders: i32 = 15;
    };

    pub const LocationPrefix = enum {
        pub const Floating: i32 = 0;
        pub const TopEdge: i32 = 1;
        pub const BottomEdge: i32 = 2;
        pub const LeftEdge: i32 = 3;
        pub const RightEdge: i32 = 4;
    };

    pub const MarginEdge = enum {
        pub const TopMargin: i32 = 0;
        pub const BottomMargin: i32 = 1;
        pub const LeftMargin: i32 = 2;
        pub const RightMargin: i32 = 3;
    };
};
