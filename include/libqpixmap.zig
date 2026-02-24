const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)
pub const qpixmap = struct {
    /// New constructs a new QPixmap object.
    ///
    pub fn New() QtC.QPixmap {
        return qtc.QPixmap_new();
    }

    /// New2 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New2(w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_new2(@bitCast(w), @bitCast(h));
    }

    /// New3 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New4(fileName: []const u8) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QPixmap_new4(fileName_str);
    }

    /// New5 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` xpm: []const [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New5(xpm: []const [:0]const u8, allocator: std.mem.Allocator) QtC.QPixmap {
        const xpm_chararr = allocator.alloc([*c]const u8, xpm.len) catch @panic("qpixmap.New5: Memory allocation failed");
        defer allocator.free(xpm_chararr);
        for (xpm, 0..xpm.len) |str, i| {
            xpm_chararr[i] = @ptrCast(str.ptr);
        }

        return qtc.QPixmap_new5(xpm_chararr.ptr);
    }

    /// New6 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPixmap `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new6(@ptrCast(param1));
    }

    /// New7 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn New7(fileName: []const u8, format: [:0]const u8) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QPixmap_new7(fileName_str, format_Cstring);
    }

    /// New8 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn New8(fileName: []const u8, format: [:0]const u8, flags: i32) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QPixmap_new8(fileName_str, format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` param1: QtC.QPixmap `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPixmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` other: QtC.QPixmap `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPixmap_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPixmap_DevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPixmap_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QPixmap_SuperDevType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QPixmap_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPixmap_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    pub fn DefaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Fill(self: ?*anyopaque) void {
        qtc.QPixmap_Fill(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Mask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_Mask(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` mask: QtC.QBitmap `
    ///
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QPixmap_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self), @bitCast(scaleFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn DeviceIndependentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPixmap_DeviceIndependentSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn HasAlphaChannel(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn CreateHeuristicMask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` maskColor: QtC.QColor `
    ///
    pub fn CreateMaskFromColor(self: ?*anyopaque, maskColor: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor(@ptrCast(self), @ptrCast(maskColor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` w: i32 `
    ///
    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` h: i32 `
    ///
    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight(@ptrCast(self), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` param1: QtC.QTransform `
    ///
    pub fn Transformed(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Transformed(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` m: QtC.QTransform `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn TrueMatrix(m: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QPixmap_TrueMatrix(@ptrCast(m), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QPixmap_ToImage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn FromImage(image: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImage(@ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QtC.QImageReader `
    ///
    pub fn FromImageReader(imageReader: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader(@ptrCast(imageReader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    pub fn LoadFromData(self: ?*anyopaque, buf: *const u8, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self), @ptrCast(buf), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` data: []u8 `
    ///
    pub fn LoadFromData2(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QPixmap_Save2(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` img: QtC.QImage `
    ///
    pub fn ConvertFromImage(self: ?*anyopaque, img: ?*anyopaque) bool {
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn Copy(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) QtC.QPixmap {
        return qtc.QPixmap_Copy(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Copy2(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque) void {
        qtc.QPixmap_Scroll2(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPixmap_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn IsQBitmap(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPixmap_PaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPixmap_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPixmap_SuperPaintEngine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPixmap_Metric(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` callback: *const fn (self: QtC.QPixmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPixmap_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPixmap_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fillColor: QtC.QColor `
    ///
    pub fn Fill1(self: ?*anyopaque, fillColor: ?*anyopaque) void {
        qtc.QPixmap_Fill1(@ptrCast(self), @ptrCast(fillColor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` clipTight: bool `
    ///
    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` maskColor: QtC.QColor `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn CreateMaskFromColor2(self: ?*anyopaque, maskColor: ?*anyopaque, mode: i32) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self), @ptrCast(maskColor), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled3(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(aspectMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled4(@ptrCast(self), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` s: QtC.QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled22(@ptrCast(self), @ptrCast(s), @bitCast(aspectMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` s: QtC.QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled32(@ptrCast(self), @ptrCast(s), @bitCast(aspectMode), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth2(@ptrCast(self), @bitCast(w), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight2(@ptrCast(self), @bitCast(h), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` param1: QtC.QTransform `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Transformed2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Transformed2(@ptrCast(self), @ptrCast(param1), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImage2(image: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_FromImage2(@ptrCast(image), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QtC.QImageReader `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImageReader2(imageReader: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader2(@ptrCast(imageReader), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Load2(self: ?*anyopaque, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn Load3(self: ?*anyopaque, fileName: []const u8, format: [:0]const u8, flags: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self), fileName_str, format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData3(self: ?*anyopaque, buf: *const u8, lenVal: u32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self), @ptrCast(buf), @bitCast(lenVal), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData4(self: ?*anyopaque, buf: *const u8, lenVal: u32, format: [:0]const u8, flags: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self), @ptrCast(buf), @bitCast(lenVal), format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData22(self: ?*anyopaque, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData22(@ptrCast(self), data_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData32(self: ?*anyopaque, data: []u8, format: [:0]const u8, flags: i32) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self), data_str, format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save22(self: ?*anyopaque, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: [:0]const u8, quality: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self), @ptrCast(device), format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` img: QtC.QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertFromImage2(self: ?*anyopaque, img: ?*anyopaque, flags: i32) bool {
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self), @ptrCast(img), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` exposed: QtC.QRegion `
    ///
    pub fn Scroll7(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll7(@ptrCast(self), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @ptrCast(exposed));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` exposed: QtC.QRegion `
    ///
    pub fn Scroll4(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll4(@ptrCast(self), @bitCast(dx), @bitCast(dy), @ptrCast(rect), @ptrCast(exposed));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPixmap_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPixmap_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap`
    ///
    /// ` callback: *const fn (self: QtC.QPixmap, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPixmap_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPixmap_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPixmap_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap`
    ///
    /// ` callback: *const fn (self: QtC.QPixmap, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPixmap_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPixmap_SharedPainter(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPixmap_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QPixmap_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPixmap`
    ///
    /// ` callback: *const fn (self: QtC.QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QPixmap_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPixmap `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPixmap_Delete(@ptrCast(self));
    }
};
