const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const svg_enums = enums;

/// https://api.kde.org/ksvg-svg.html
pub const ksvg__svg = struct {
    /// New constructs a new KSvg::Svg object.
    ///
    ///
    pub fn New() QtC.KSvg__Svg {
        return qtc.KSvg__Svg_new();
    }

    /// New2 constructs a new KSvg::Svg object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KSvg__Svg {
        return qtc.KSvg__Svg_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KSvg__Svg_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KSvg__Svg, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSvg__Svg_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KSvg__Svg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__Svg, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KSvg__Svg_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::svg.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.KSvg__Svg, factor: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, factor: f64) void {
        qtc.KSvg__Svg_SetDevicePixelRatio(@ptrCast(self), @floatCast(factor));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.KSvg__Svg_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KSvg__Svg_Pixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ``` self: QtC.KSvg__Svg, size: QtC.QSize ```
    pub fn Image(self: ?*anyopaque, size: ?*anyopaque) QtC.QImage {
        return qtc.KSvg__Svg_Image(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, point: QtC.QPointF ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, point: ?*anyopaque) void {
        qtc.KSvg__Svg_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(point));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, x: i32, y: i32 ```
    pub fn Paint2(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32) void {
        qtc.KSvg__Svg_Paint2(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, rect: QtC.QRectF ```
    pub fn Paint3(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.KSvg__Svg_Paint3(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Paint4(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.KSvg__Svg_Paint4(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#size)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.KSvg__Svg_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__Svg, width: f64, height: f64 ```
    pub fn Resize(self: ?*anyopaque, width: f64, height: f64) void {
        qtc.KSvg__Svg_Resize(@ptrCast(self), @floatCast(width), @floatCast(height));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__Svg, size: QtC.QSizeF ```
    pub fn Resize2(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.KSvg__Svg_Resize2(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#resize)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Resize3(self: ?*anyopaque) void {
        qtc.KSvg__Svg_Resize3(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#elementSize)
    ///
    /// ``` self: QtC.KSvg__Svg, elementId: []const u8 ```
    pub fn ElementSize(self: ?*anyopaque, elementId: []const u8) QtC.QSizeF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_ElementSize(@ptrCast(self), elementId_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#elementRect)
    ///
    /// ``` self: QtC.KSvg__Svg, elementId: []const u8 ```
    pub fn ElementRect(self: ?*anyopaque, elementId: []const u8) QtC.QRectF {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_ElementRect(@ptrCast(self), elementId_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#hasElement)
    ///
    /// ``` self: QtC.KSvg__Svg, elementId: []const u8 ```
    pub fn HasElement(self: ?*anyopaque, elementId: []const u8) bool {
        const elementId_str = qtc.libqt_string{
            .len = elementId.len,
            .data = elementId.ptr,
        };
        return qtc.KSvg__Svg_HasElement(@ptrCast(self), elementId_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#isValid)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
    ///
    /// ``` self: QtC.KSvg__Svg, multiple: bool ```
    pub fn SetContainsMultipleImages(self: ?*anyopaque, multiple: bool) void {
        qtc.KSvg__Svg_SetContainsMultipleImages(@ptrCast(self), multiple);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn ContainsMultipleImages(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_ContainsMultipleImages(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// ``` self: QtC.KSvg__Svg, svgFilePath: []const u8 ```
    pub fn SetImagePath(self: ?*anyopaque, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_SetImagePath(@ptrCast(self), svgFilePath_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, svgFilePath: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetImagePath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KSvg__Svg_OnSetImagePath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setImagePath)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__Svg, svgFilePath: []const u8 ```
    pub fn QBaseSetImagePath(self: ?*anyopaque, svgFilePath: []const u8) void {
        const svgFilePath_str = qtc.libqt_string{
            .len = svgFilePath.len,
            .data = svgFilePath.ptr,
        };
        qtc.KSvg__Svg_QBaseSetImagePath(@ptrCast(self), svgFilePath_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePath)
    ///
    /// ``` self: QtC.KSvg__Svg, allocator: std.mem.Allocator ```
    pub fn ImagePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSvg__Svg_ImagePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::svg.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
    ///
    /// ``` self: QtC.KSvg__Svg, useCache: bool ```
    pub fn SetUsingRenderingCache(self: ?*anyopaque, useCache: bool) void {
        qtc.KSvg__Svg_SetUsingRenderingCache(@ptrCast(self), useCache);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn IsUsingRenderingCache(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_IsUsingRenderingCache(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn FromCurrentImageSet(self: ?*anyopaque) bool {
        return qtc.KSvg__Svg_FromCurrentImageSet(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setImageSet)
    ///
    /// ``` self: QtC.KSvg__Svg, theme: QtC.KSvg__ImageSet ```
    pub fn SetImageSet(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSvg__Svg_SetImageSet(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSet)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn ImageSet(self: ?*anyopaque) QtC.KSvg__ImageSet {
        return qtc.KSvg__Svg_ImageSet(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setStatus)
    ///
    /// ``` self: QtC.KSvg__Svg, status: svg_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.KSvg__Svg_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#status)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    ///
    /// Returns: ``` svg_enums.Status ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setColorSet)
    ///
    /// ``` self: QtC.KSvg__Svg, colorSet: svg_enums.ColorSet ```
    pub fn SetColorSet(self: ?*anyopaque, colorSet: i32) void {
        qtc.KSvg__Svg_SetColorSet(@ptrCast(self), @intCast(colorSet));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSet)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    ///
    /// Returns: ``` svg_enums.ColorSet ```
    pub fn ColorSet(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_ColorSet(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#color)
    ///
    /// ``` self: QtC.KSvg__Svg, colorName: svg_enums.StyleSheetColor ```
    pub fn Color(self: ?*anyopaque, colorName: i32) QtC.QColor {
        return qtc.KSvg__Svg_Color(@ptrCast(self), @intCast(colorName));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#setColor)
    ///
    /// ``` self: QtC.KSvg__Svg, colorName: svg_enums.StyleSheetColor, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, colorName: i32, color: ?*anyopaque) void {
        qtc.KSvg__Svg_SetColor(@ptrCast(self), @intCast(colorName), @ptrCast(color));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn ClearColorOverrides(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ClearColorOverrides(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn RepaintNeeded(self: ?*anyopaque) void {
        qtc.KSvg__Svg_RepaintNeeded(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#repaintNeeded)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg) callconv(.c) void ```
    pub fn OnRepaintNeeded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_RepaintNeeded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn SizeChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_SizeChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#sizeChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg) callconv(.c) void ```
    pub fn OnSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_SizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn ImagePathChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ImagePathChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imagePathChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg) callconv(.c) void ```
    pub fn OnImagePathChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImagePathChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn ColorHintChanged(self: ?*anyopaque) void {
        qtc.KSvg__Svg_ColorHintChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorHintChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg) callconv(.c) void ```
    pub fn OnColorHintChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorHintChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, fromCurrentImageSet: bool ```
    pub fn FromCurrentImageSetChanged(self: ?*anyopaque, fromCurrentImageSet: bool) void {
        qtc.KSvg__Svg_FromCurrentImageSetChanged(@ptrCast(self), fromCurrentImageSet);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, fromCurrentImageSet: bool) callconv(.c) void ```
    pub fn OnFromCurrentImageSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_FromCurrentImageSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, status: svg_enums.Status ```
    pub fn StatusChanged(self: ?*anyopaque, status: i32) void {
        qtc.KSvg__Svg_StatusChanged(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#statusChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, status: svg_enums.Status) callconv(.c) void ```
    pub fn OnStatusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_StatusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, colorSet: svg_enums.ColorSet ```
    pub fn ColorSetChanged(self: ?*anyopaque, colorSet: i32) void {
        qtc.KSvg__Svg_ColorSetChanged(@ptrCast(self), @intCast(colorSet));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#colorSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, colorSet: svg_enums.ColorSet) callconv(.c) void ```
    pub fn OnColorSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ColorSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, imageSet: QtC.KSvg__ImageSet ```
    pub fn ImageSetChanged(self: ?*anyopaque, imageSet: ?*anyopaque) void {
        qtc.KSvg__Svg_ImageSetChanged(@ptrCast(self), @ptrCast(imageSet));
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#imageSetChanged)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, imageSet: QtC.KSvg__ImageSet) callconv(.c) void ```
    pub fn OnImageSetChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_Connect_ImageSetChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSvg__Svg_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::svg.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSvg__Svg_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::svg.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#pixmap)
    ///
    /// ``` self: QtC.KSvg__Svg, elementID: []const u8 ```
    pub fn Pixmap1(self: ?*anyopaque, elementID: []const u8) QtC.QPixmap {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return qtc.KSvg__Svg_Pixmap1(@ptrCast(self), elementID_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#image)
    ///
    /// ``` self: QtC.KSvg__Svg, size: QtC.QSize, elementID: []const u8 ```
    pub fn Image2(self: ?*anyopaque, size: ?*anyopaque, elementID: []const u8) QtC.QImage {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        return qtc.KSvg__Svg_Image2(@ptrCast(self), @ptrCast(size), elementID_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, point: QtC.QPointF, elementID: []const u8 ```
    pub fn Paint32(self: ?*anyopaque, painter: ?*anyopaque, point: ?*anyopaque, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint32(@ptrCast(self), @ptrCast(painter), @ptrCast(point), elementID_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, x: i32, y: i32, elementID: []const u8 ```
    pub fn Paint42(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint42(@ptrCast(self), @ptrCast(painter), @intCast(x), @intCast(y), elementID_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, rect: QtC.QRectF, elementID: []const u8 ```
    pub fn Paint33(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, elementID: []const u8) void {
        const elementID_str = qtc.libqt_string{
            .len = elementID.len,
            .data = elementID.ptr,
        };
        qtc.KSvg__Svg_Paint33(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), elementID_str);
    }

    /// [Qt documentation](https://api.kde.org/ksvg-svg.html#paint)
    ///
    /// ``` self: QtC.KSvg__Svg, painter: QtC.QPainter, x: i32, y: i32, width: i32, height: i32, elementID: []const u8 ```
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
    /// ``` self: QtC.KSvg__Svg, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSvg__Svg, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KSvg__Svg, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksvg::svg.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KSvg__Svg, name: []const u8 ```
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
    /// ``` self: QtC.KSvg__Svg ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KSvg__Svg, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSvg__Svg, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSvg__Svg, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSvg__Svg, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSvg__Svg, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KSvg__Svg, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ksvg::svg.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KSvg__Svg, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KSvg__Svg, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KSvg__Svg, obj: QtC.QObject ```
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
    /// ``` self: QtC.KSvg__Svg, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KSvg__Svg ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KSvg__Svg, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KSvg__Svg, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KSvg__Svg, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksvg::svg.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksvg::svg.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KSvg__Svg, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSvg__Svg, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSvg__Svg, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KSvg__Svg, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__Svg, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSvg__Svg_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSvg__Svg_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSvg__Svg_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__Svg_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__Svg_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__Svg_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSvg__Svg_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSvg__Svg_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSvg__Svg_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSvg__Svg_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KSvg__Svg_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSvg__Svg_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KSvg__Svg_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSvg__Svg_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSvg__Svg_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSvg__Svg_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSvg__Svg_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSvg__Svg_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KSvg__Svg, callback: *const fn (self: QtC.KSvg__Svg, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSvg__Svg ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSvg__Svg_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ksvg-svg.html#types
pub const enums = struct {
    pub const Status = enum {
        pub const Normal: i32 = 0;
        pub const Selected: i32 = 1;
        pub const Inactive: i32 = 2;
    };

    pub const ColorSet = enum {
        pub const View: i32 = 0;
        pub const Window: i32 = 1;
        pub const Button: i32 = 2;
        pub const Selection: i32 = 3;
        pub const Tooltip: i32 = 4;
        pub const Complementary: i32 = 5;
        pub const Header: i32 = 6;
    };

    pub const StyleSheetColor = enum {
        pub const Text: i32 = 0;
        pub const Background: i32 = 1;
        pub const Highlight: i32 = 2;
        pub const HighlightedText: i32 = 3;
        pub const PositiveText: i32 = 4;
        pub const NeutralText: i32 = 5;
        pub const NegativeText: i32 = 6;
        pub const ButtonText: i32 = 7;
        pub const ButtonBackground: i32 = 8;
        pub const ButtonHover: i32 = 9;
        pub const ButtonFocus: i32 = 10;
        pub const ButtonHighlightedText: i32 = 11;
        pub const ButtonPositiveText: i32 = 12;
        pub const ButtonNeutralText: i32 = 13;
        pub const ButtonNegativeText: i32 = 14;
        pub const ViewText: i32 = 15;
        pub const ViewBackground: i32 = 16;
        pub const ViewHover: i32 = 17;
        pub const ViewFocus: i32 = 18;
        pub const ViewHighlightedText: i32 = 19;
        pub const ViewPositiveText: i32 = 20;
        pub const ViewNeutralText: i32 = 21;
        pub const ViewNegativeText: i32 = 22;
        pub const TooltipText: i32 = 23;
        pub const TooltipBackground: i32 = 24;
        pub const TooltipHover: i32 = 25;
        pub const TooltipFocus: i32 = 26;
        pub const TooltipHighlightedText: i32 = 27;
        pub const TooltipPositiveText: i32 = 28;
        pub const TooltipNeutralText: i32 = 29;
        pub const TooltipNegativeText: i32 = 30;
        pub const ComplementaryText: i32 = 31;
        pub const ComplementaryBackground: i32 = 32;
        pub const ComplementaryHover: i32 = 33;
        pub const ComplementaryFocus: i32 = 34;
        pub const ComplementaryHighlightedText: i32 = 35;
        pub const ComplementaryPositiveText: i32 = 36;
        pub const ComplementaryNeutralText: i32 = 37;
        pub const ComplementaryNegativeText: i32 = 38;
        pub const HeaderText: i32 = 39;
        pub const HeaderBackground: i32 = 40;
        pub const HeaderHover: i32 = 41;
        pub const HeaderFocus: i32 = 42;
        pub const HeaderHighlightedText: i32 = 43;
        pub const HeaderPositiveText: i32 = 44;
        pub const HeaderNeutralText: i32 = 45;
        pub const HeaderNegativeText: i32 = 46;
    };
};
