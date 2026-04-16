const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBitmap = @import("libqt6").QBitmap;
const QColor = @import("libqt6").QColor;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QImageReader = @import("libqt6").QImageReader;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)
pub const QPixmap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPixmap,

    pub const _is_QPixmap = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QPixmap object.
    ///
    pub fn New() QPixmap {
        return .{ .ptr = qtc.QPixmap_new() };
    }

    /// New2 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New2(w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_new2(@bitCast(w), @bitCast(h)) };
    }

    /// New3 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn New3(param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QPixmap_new3(@ptrCast(param1.ptr)) };
    }

    /// New4 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New4(fileName: []const u8) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QPixmap_new4(fileName_str) };
    }

    /// New5 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xpm: []const [:0]const u8 `
    ///
    pub fn New5(allocator: std.mem.Allocator, xpm: []const [:0]const u8) QPixmap {
        const xpm_chararr = allocator.alloc([*c]const u8, xpm.len) catch @panic("qpixmap.New5: Memory allocation failed");
        defer allocator.free(xpm_chararr);
        for (xpm, 0..xpm.len) |str, i|
            xpm_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QPixmap_new5(xpm_chararr.ptr) };
    }

    /// New6 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixmap `
    ///
    pub fn New6(param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        return .{ .ptr = qtc.QPixmap_new6(@ptrCast(param1.ptr)) };
    }

    /// New7 constructs a new QPixmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn New7(fileName: []const u8, format: [:0]const u8) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QPixmap_new7(fileName_str, format_Cstring) };
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
    pub fn New8(fileName: []const u8, format: [:0]const u8, flags: i32) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QPixmap_new8(fileName_str, format_Cstring, @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn OperatorAssign(self: QPixmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QPixmap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` other: QPixmap `
    ///
    pub fn Swap(self: QPixmap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmap;
        qtc.QPixmap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn ToQVariant(self: QPixmap) QVariant {
        return .{ .ptr = qtc.QPixmap_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn IsNull(self: QPixmap) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn DevType(self: QPixmap) i32 {
        return qtc.QPixmap_DevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QPixmap, callback: *const fn () callconv(.c) i32) void {
        qtc.QPixmap_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    pub fn SuperDevType(self: QPixmap) i32 {
        return qtc.QPixmap_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Width(self: QPixmap) i32 {
        return qtc.QPixmap_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Height(self: QPixmap) i32 {
        return qtc.QPixmap_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Size(self: QPixmap) QSize {
        return .{ .ptr = qtc.QPixmap_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Rect(self: QPixmap) QRect {
        return .{ .ptr = qtc.QPixmap_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Depth(self: QPixmap) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self.ptr));
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
    /// ` self: QPixmap `
    ///
    pub fn Fill(self: QPixmap) void {
        qtc.QPixmap_Fill(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Mask(self: QPixmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_Mask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QPixmap, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QPixmap_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn DevicePixelRatio(self: QPixmap) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: QPixmap, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn DeviceIndependentSize(self: QPixmap) QSizeF {
        return .{ .ptr = qtc.QPixmap_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn HasAlpha(self: QPixmap) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn HasAlphaChannel(self: QPixmap) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn CreateHeuristicMask(self: QPixmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` maskColor: QColor `
    ///
    pub fn CreateMaskFromColor(self: QPixmap, maskColor: anytype) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor(@ptrCast(self.ptr), @ptrCast(maskColor.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Scaled(self: QPixmap, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` s: QSize `
    ///
    pub fn Scaled2(self: QPixmap, s: anytype) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    pub fn ScaledToWidth(self: QPixmap, w: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` h: i32 `
    ///
    pub fn ScaledToHeight(self: QPixmap, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: QTransform `
    ///
    pub fn Transformed(self: QPixmap, param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` m: QTransform `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn TrueMatrix(m: anytype, w: i32, h: i32) QTransform {
        comptime _ = @TypeOf(m)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_TrueMatrix(@ptrCast(m.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn ToImage(self: QPixmap) QImage {
        return .{ .ptr = qtc.QPixmap_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn FromImage(image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImage(@ptrCast(image.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QImageReader `
    ///
    pub fn FromImageReader(imageReader: anytype) QPixmap {
        comptime _ = @TypeOf(imageReader)._is_QImageReader;
        return .{ .ptr = qtc.QPixmap_FromImageReader(@ptrCast(imageReader.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load(self: QPixmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    pub fn LoadFromData(self: QPixmap, buf: *const u8, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` data: []u8 `
    ///
    pub fn LoadFromData2(self: QPixmap, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save(self: QPixmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Save2(self: QPixmap, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QPixmap_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` img: QImage `
    ///
    pub fn ConvertFromImage(self: QPixmap, img: anytype) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self.ptr), @ptrCast(img.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn Copy(self: QPixmap, x: i32, y: i32, width: i32, height: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Copy2(self: QPixmap) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
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
    pub fn Scroll(self: QPixmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QRect `
    ///
    pub fn Scroll2(self: QPixmap, dx: i32, dy: i32, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPixmap_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn CacheKey(self: QPixmap) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn IsDetached(self: QPixmap) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn Detach(self: QPixmap) void {
        qtc.QPixmap_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn IsQBitmap(self: QPixmap) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn PaintEngine(self: QPixmap) QPaintEngine {
        return .{ .ptr = qtc.QPixmap_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QPixmap, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPixmap_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    pub fn SuperPaintEngine(self: QPixmap) QPaintEngine {
        return .{ .ptr = qtc.QPixmap_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn OperatorNot(self: QPixmap) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QPixmap, param1: i32) i32 {
        return qtc.QPixmap_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap `
    ///
    /// ` callback: *const fn (self: QPixmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QPixmap, callback: *const fn (QPixmap, i32) callconv(.c) i32) void {
        qtc.QPixmap_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QPixmap, param1: i32) i32 {
        return qtc.QPixmap_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fillColor: QColor `
    ///
    pub fn Fill1(self: QPixmap, fillColor: anytype) void {
        comptime _ = @TypeOf(fillColor)._is_QColor;
        qtc.QPixmap_Fill1(@ptrCast(self.ptr), @ptrCast(fillColor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` clipTight: bool `
    ///
    pub fn CreateHeuristicMask1(self: QPixmap, clipTight: bool) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` maskColor: QColor `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn CreateMaskFromColor2(self: QPixmap, maskColor: anytype, mode: i32) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self.ptr), @ptrCast(maskColor.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled3(self: QPixmap, w: i32, h: i32, aspectMode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled4(self: QPixmap, w: i32, h: i32, aspectMode: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled22(self: QPixmap, s: anytype, aspectMode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled32(self: QPixmap, s: anytype, aspectMode: i32, mode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToWidth2(self: QPixmap, w: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToHeight2(self: QPixmap, h: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: QTransform `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Transformed2(self: QPixmap, param1: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImage2(image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImage2(@ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QImageReader `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImageReader2(imageReader: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(imageReader)._is_QImageReader;
        return .{ .ptr = qtc.QPixmap_FromImageReader2(@ptrCast(imageReader.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Load2(self: QPixmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn Load3(self: QPixmap, fileName: []const u8, format: [:0]const u8, flags: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData3(self: QPixmap, buf: *const u8, lenVal: u32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData4(self: QPixmap, buf: *const u8, lenVal: u32, format: [:0]const u8, flags: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal), format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData22(self: QPixmap, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData22(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData32(self: QPixmap, data: []u8, format: [:0]const u8, flags: i32) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self.ptr), data_str, format_Cstring, @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save22(self: QPixmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save3(self: QPixmap, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save23(self: QPixmap, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save32(self: QPixmap, device: anytype, format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` img: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertFromImage2(self: QPixmap, img: anytype, flags: i32) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self.ptr), @ptrCast(img.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` rect: QRect `
    ///
    pub fn Copy1(self: QPixmap, rect: anytype) QPixmap {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QPixmap_Copy1(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
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
    /// ` exposed: QRegion `
    ///
    pub fn Scroll7(self: QPixmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: anytype) void {
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll7(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @ptrCast(exposed.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QRect `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn Scroll4(self: QPixmap, dx: i32, dy: i32, rect: anytype, exposed: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll4(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr), @ptrCast(exposed.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn PaintingActive(self: QPixmap) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn WidthMM(self: QPixmap) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn HeightMM(self: QPixmap) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn LogicalDpiX(self: QPixmap) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn LogicalDpiY(self: QPixmap) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn PhysicalDpiX(self: QPixmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn PhysicalDpiY(self: QPixmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn DevicePixelRatioF(self: QPixmap) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn ColorCount(self: QPixmap) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
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
    /// ` self: QPixmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QPixmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPixmap_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPixmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QPixmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPixmap_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QPixmap, callback: *const fn (QPixmap, QPainter) callconv(.c) void) void {
        qtc.QPixmap_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QPixmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPixmap_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPixmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QPixmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPixmap_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QPixmap, callback: *const fn (QPixmap, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPixmap_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn SharedPainter(self: QPixmap) QPainter {
        return .{ .ptr = qtc.QPixmap_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPixmap `
    ///
    pub fn SuperSharedPainter(self: QPixmap) QPainter {
        return .{ .ptr = qtc.QPixmap_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QPixmap, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPixmap_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QPixmap, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QPixmap, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QPixmap, callback: *const fn (QPixmap, i32, i32) callconv(.c) f64) void {
        qtc.QPixmap_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    pub fn Delete(self: QPixmap) void {
        qtc.QPixmap_Delete(@ptrCast(self.ptr));
    }
};
