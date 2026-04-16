const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QImageReader = @import("libqt6").QImageReader;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qimage_enums = @import("libqimage.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)
pub const QBitmap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBitmap,

    pub const _is_QBitmap = {};
    pub const _is_QPixmap = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QBitmap object.
    ///
    pub fn New() QBitmap {
        return .{ .ptr = qtc.QBitmap_new() };
    }

    /// New2 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixmap `
    ///
    pub fn New2(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        return .{ .ptr = qtc.QBitmap_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New3(w: i32, h: i32) QBitmap {
        return .{ .ptr = qtc.QBitmap_new3(@bitCast(w), @bitCast(h)) };
    }

    /// New4 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn New4(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QBitmap_new4(@ptrCast(param1.ptr)) };
    }

    /// New5 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New5(fileName: []const u8) QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QBitmap_new5(fileName_str) };
    }

    /// New6 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBitmap `
    ///
    pub fn New6(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QBitmap;
        return .{ .ptr = qtc.QBitmap_new6(@ptrCast(param1.ptr)) };
    }

    /// New7 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn New7(fileName: []const u8, format: [:0]const u8) QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QBitmap_new7(fileName_str, format_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn OperatorAssign(self: QBitmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QBitmap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` other: QBitmap `
    ///
    pub fn Swap(self: QBitmap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitmap;
        qtc.QBitmap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn ToQVariant(self: QBitmap) QVariant {
        return .{ .ptr = qtc.QBitmap_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Clear(self: QBitmap) void {
        qtc.QBitmap_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn FromImage(image: anytype) QBitmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_FromImage(@ptrCast(image.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` bits: *const u8 `
    ///
    pub fn FromData(size: anytype, bits: *const u8) QBitmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QBitmap_FromData(@ptrCast(size.ptr), @ptrCast(bits)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn FromPixmap(pixmap: anytype) QBitmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBitmap_FromPixmap(@ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn Transformed(self: QBitmap, matrix: anytype) QBitmap {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QBitmap_Transformed(@ptrCast(self.ptr), @ptrCast(matrix.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: QBitmap `
    ///
    pub fn OperatorAssign2(self: QBitmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitmap;
        qtc.QBitmap_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImage2(image: anytype, flags: i32) QBitmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_FromImage2(@ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` bits: *const u8 `
    ///
    /// ` monoFormat: qimage_enums.Format `
    ///
    pub fn FromData3(size: anytype, bits: *const u8, monoFormat: i32) QBitmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QBitmap_FromData3(@ptrCast(size.ptr), @ptrCast(bits), @bitCast(monoFormat)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn IsNull(self: QBitmap) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Width(self: QBitmap) i32 {
        return qtc.QPixmap_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Height(self: QBitmap) i32 {
        return qtc.QPixmap_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Size(self: QBitmap) QSize {
        return .{ .ptr = qtc.QPixmap_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Rect(self: QBitmap) QRect {
        return .{ .ptr = qtc.QPixmap_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Depth(self: QBitmap) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    pub fn DefaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Fill(self: QBitmap) void {
        qtc.QPixmap_Fill(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Mask(self: QBitmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QBitmap, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QPixmap_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn DevicePixelRatio(self: QBitmap) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: QBitmap, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn DeviceIndependentSize(self: QBitmap) QSizeF {
        return .{ .ptr = qtc.QPixmap_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn HasAlpha(self: QBitmap) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn HasAlphaChannel(self: QBitmap) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn CreateHeuristicMask(self: QBitmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` maskColor: QColor `
    ///
    pub fn CreateMaskFromColor(self: QBitmap, maskColor: anytype) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor(@ptrCast(self.ptr), @ptrCast(maskColor.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Scaled(self: QBitmap, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` s: QSize `
    ///
    pub fn Scaled2(self: QBitmap, s: anytype) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` w: i32 `
    ///
    pub fn ScaledToWidth(self: QBitmap, w: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` h: i32 `
    ///
    pub fn ScaledToHeight(self: QBitmap, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// Inherited from QPixmap
    ///
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn ToImage(self: QBitmap) QImage {
        return .{ .ptr = qtc.QPixmap_ToImage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load(self: QBitmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self.ptr), fileName_str);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    pub fn LoadFromData(self: QBitmap, buf: *const u8, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` data: []u8 `
    ///
    pub fn LoadFromData2(self: QBitmap, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save(self: QBitmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Save2(self: QBitmap, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QPixmap_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` img: QImage `
    ///
    pub fn ConvertFromImage(self: QBitmap, img: anytype) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self.ptr), @ptrCast(img.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn Copy(self: QBitmap, x: i32, y: i32, width: i32, height: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Copy2(self: QBitmap) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
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
    pub fn Scroll(self: QBitmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QRect `
    ///
    pub fn Scroll2(self: QBitmap, dx: i32, dy: i32, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPixmap_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(rect.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn CacheKey(self: QBitmap) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn IsDetached(self: QBitmap) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn Detach(self: QBitmap) void {
        qtc.QPixmap_Detach(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn IsQBitmap(self: QBitmap) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn OperatorNot(self: QBitmap) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fillColor: QColor `
    ///
    pub fn Fill1(self: QBitmap, fillColor: anytype) void {
        comptime _ = @TypeOf(fillColor)._is_QColor;
        qtc.QPixmap_Fill1(@ptrCast(self.ptr), @ptrCast(fillColor.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` clipTight: bool `
    ///
    pub fn CreateHeuristicMask1(self: QBitmap, clipTight: bool) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` maskColor: QColor `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn CreateMaskFromColor2(self: QBitmap, maskColor: anytype, mode: i32) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self.ptr), @ptrCast(maskColor.ptr), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled3(self: QBitmap, w: i32, h: i32, aspectMode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled4(self: QBitmap, w: i32, h: i32, aspectMode: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled22(self: QBitmap, s: anytype, aspectMode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled32(self: QBitmap, s: anytype, aspectMode: i32, mode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToWidth2(self: QBitmap, w: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToHeight2(self: QBitmap, h: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: QTransform `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Transformed2(self: QBitmap, param1: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode)) };
    }

    /// Inherited from QPixmap
    ///
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Load2(self: QBitmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn Load3(self: QBitmap, fileName: []const u8, format: [:0]const u8, flags: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData3(self: QBitmap, buf: *const u8, lenVal: u32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal), format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData4(self: QBitmap, buf: *const u8, lenVal: u32, format: [:0]const u8, flags: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal), format_Cstring, @bitCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData22(self: QBitmap, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData22(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn LoadFromData32(self: QBitmap, data: []u8, format: [:0]const u8, flags: i32) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self.ptr), data_str, format_Cstring, @bitCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save22(self: QBitmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save3(self: QBitmap, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save23(self: QBitmap, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save32(self: QBitmap, device: anytype, format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` img: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertFromImage2(self: QBitmap, img: anytype, flags: i32) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self.ptr), @ptrCast(img.ptr), @bitCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` rect: QRect `
    ///
    pub fn Copy1(self: QBitmap, rect: anytype) QPixmap {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QPixmap_Copy1(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
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
    pub fn Scroll7(self: QBitmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: anytype) void {
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll7(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @ptrCast(exposed.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` rect: QRect `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn Scroll4(self: QBitmap, dx: i32, dy: i32, rect: anytype, exposed: anytype) void {
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
    /// ` self: QBitmap `
    ///
    pub fn PaintingActive(self: QBitmap) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn WidthMM(self: QBitmap) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn HeightMM(self: QBitmap) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn LogicalDpiX(self: QBitmap) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn LogicalDpiY(self: QBitmap) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn PhysicalDpiX(self: QBitmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn PhysicalDpiY(self: QBitmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn DevicePixelRatioF(self: QBitmap) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn ColorCount(self: QBitmap) i32 {
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn DevType(self: QBitmap) i32 {
        return qtc.QBitmap_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn SuperDevType(self: QBitmap) i32 {
        return qtc.QBitmap_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QBitmap, callback: *const fn () callconv(.c) i32) void {
        qtc.QBitmap_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn PaintEngine(self: QBitmap) QPaintEngine {
        return .{ .ptr = qtc.QBitmap_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn SuperPaintEngine(self: QBitmap) QPaintEngine {
        return .{ .ptr = qtc.QBitmap_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QBitmap, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QBitmap_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QBitmap, param1: i32) i32 {
        return qtc.QBitmap_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QBitmap, param1: i32) i32 {
        return qtc.QBitmap_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn (self: QBitmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QBitmap, callback: *const fn (QBitmap, i32) callconv(.c) i32) void {
        qtc.QBitmap_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QBitmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QBitmap_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QBitmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QBitmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QBitmap_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn (self: QBitmap, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QBitmap, callback: *const fn (QBitmap, QPainter) callconv(.c) void) void {
        qtc.QBitmap_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QBitmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QBitmap_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QBitmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QBitmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QBitmap_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn (self: QBitmap, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QBitmap, callback: *const fn (QBitmap, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QBitmap_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn SharedPainter(self: QBitmap) QPainter {
        return .{ .ptr = qtc.QBitmap_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QBitmap `
    ///
    pub fn SuperSharedPainter(self: QBitmap) QPainter {
        return .{ .ptr = qtc.QBitmap_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QBitmap, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QBitmap_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QBitmap, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QBitmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QBitmap, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn (self: QBitmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QBitmap, callback: *const fn (QBitmap, i32, i32) callconv(.c) f64) void {
        qtc.QBitmap_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitmap `
    ///
    pub fn Delete(self: QBitmap) void {
        qtc.QBitmap_Delete(@ptrCast(self.ptr));
    }
};
