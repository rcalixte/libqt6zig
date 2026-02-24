const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = @import("libqimage.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)
pub const qbitmap = struct {
    /// New constructs a new QBitmap object.
    ///
    pub fn New() QtC.QBitmap {
        return qtc.QBitmap_new();
    }

    /// New2 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPixmap `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn New3(w: i32, h: i32) QtC.QBitmap {
        return qtc.QBitmap_new3(@bitCast(w), @bitCast(h));
    }

    /// New4 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QSize `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new4(@ptrCast(param1));
    }

    /// New5 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New5(fileName: []const u8) QtC.QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QBitmap_new5(fileName_str);
    }

    /// New6 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QBitmap `
    ///
    pub fn New6(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new6(@ptrCast(param1));
    }

    /// New7 constructs a new QBitmap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn New7(fileName: []const u8, format: [:0]const u8) QtC.QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QBitmap_new7(fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` param1: QtC.QPixmap `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` other: QtC.QBitmap `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QBitmap_ToQVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QBitmap_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn FromImage(image: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromImage(@ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` bits: *const u8 `
    ///
    pub fn FromData(size: ?*anyopaque, bits: *const u8) QtC.QBitmap {
        return qtc.QBitmap_FromData(@ptrCast(size), @ptrCast(bits));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn FromPixmap(pixmap: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromPixmap(@ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` matrix: QtC.QTransform `
    ///
    pub fn Transformed(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_Transformed(@ptrCast(self), @ptrCast(matrix));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` param1: QtC.QBitmap `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn FromImage2(image: ?*anyopaque, flags: i32) QtC.QBitmap {
        return qtc.QBitmap_FromImage2(@ptrCast(image), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` bits: *const u8 `
    ///
    /// ` monoFormat: qimage_enums.Format `
    ///
    pub fn FromData3(size: ?*anyopaque, bits: *const u8, monoFormat: i32) QtC.QBitmap {
        return qtc.QBitmap_FromData3(@ptrCast(size), @ptrCast(bits), @bitCast(monoFormat));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Width(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Height(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QPixmap_Size(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPixmap_Rect(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self));
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
    /// ` self: QtC.QBitmap `
    ///
    pub fn Fill(self: ?*anyopaque) void {
        qtc.QPixmap_Fill(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Mask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_Mask(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` mask: QtC.QBitmap `
    ///
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QPixmap_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self), @bitCast(scaleFactor));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn DeviceIndependentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPixmap_DeviceIndependentSize(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn HasAlphaChannel(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn CreateHeuristicMask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` maskColor: QtC.QColor `
    ///
    pub fn CreateMaskFromColor(self: ?*anyopaque, maskColor: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor(@ptrCast(self), @ptrCast(maskColor));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled(@ptrCast(self), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` w: i32 `
    ///
    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth(@ptrCast(self), @bitCast(w));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` h: i32 `
    ///
    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight(@ptrCast(self), @bitCast(h));
    }

    /// Inherited from QPixmap
    ///
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QPixmap_ToImage(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QtC.QImageReader `
    ///
    pub fn FromImageReader(imageReader: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader(@ptrCast(imageReader));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: u32 `
    ///
    pub fn LoadFromData(self: ?*anyopaque, buf: *const u8, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self), @ptrCast(buf), @bitCast(lenVal));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QPixmap_Save2(@ptrCast(self), @ptrCast(device));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` img: QtC.QImage `
    ///
    pub fn ConvertFromImage(self: ?*anyopaque, img: ?*anyopaque) bool {
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self), @ptrCast(img));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Copy2(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy2(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPixmap_Detach(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn IsQBitmap(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` fillColor: QtC.QColor `
    ///
    pub fn Fill1(self: ?*anyopaque, fillColor: ?*anyopaque) void {
        qtc.QPixmap_Fill1(@ptrCast(self), @ptrCast(fillColor));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` clipTight: bool `
    ///
    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` maskColor: QtC.QColor `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn CreateMaskFromColor2(self: ?*anyopaque, maskColor: ?*anyopaque, mode: i32) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self), @ptrCast(maskColor), @bitCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` s: QtC.QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled22(@ptrCast(self), @ptrCast(s), @bitCast(aspectMode));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` w: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth2(@ptrCast(self), @bitCast(w), @bitCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight2(@ptrCast(self), @bitCast(h), @bitCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` param1: QtC.QTransform `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Transformed2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Transformed2(@ptrCast(self), @ptrCast(param1), @bitCast(mode));
    }

    /// Inherited from QPixmap
    ///
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` img: QtC.QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertFromImage2(self: ?*anyopaque, img: ?*anyopaque, flags: i32) bool {
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self), @ptrCast(img), @bitCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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
    /// ` self: QtC.QBitmap `
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

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QBitmap_DevType(@ptrCast(self));
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
    /// ` self: QtC.QBitmap `
    ///
    pub fn SuperDevType(self: ?*anyopaque) i32 {
        return qtc.QBitmap_SuperDevType(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QBitmap_OnDevType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QBitmap_PaintEngine(@ptrCast(self));
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
    /// ` self: QtC.QBitmap `
    ///
    pub fn SuperPaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QBitmap_SuperPaintEngine(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPaintEngine `
    ///
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QBitmap_OnPaintEngine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBitmap_Metric(@ptrCast(self), @bitCast(param1));
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
    /// ` self: QtC.QBitmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBitmap_SuperMetric(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn (self: QtC.QBitmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QBitmap_OnMetric(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QBitmap_InitPainter(@ptrCast(self), @ptrCast(painter));
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
    /// ` self: QtC.QBitmap `
    ///
    /// ` painter: QtC.QPainter `
    ///
    pub fn SuperInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QBitmap_SuperInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn (self: QtC.QBitmap, painter: QtC.QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBitmap_OnInitPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBitmap_Redirected(@ptrCast(self), @ptrCast(offset));
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
    /// ` self: QtC.QBitmap `
    ///
    /// ` offset: QtC.QPoint `
    ///
    pub fn SuperRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBitmap_SuperRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn (self: QtC.QBitmap, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice `
    ///
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QBitmap_OnRedirected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QBitmap_SharedPainter(@ptrCast(self));
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
    /// ` self: QtC.QBitmap `
    ///
    pub fn SuperSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QBitmap_SuperSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPainter `
    ///
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QBitmap_OnSharedPainter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_GetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QtC.QBitmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_SuperGetDecodedMetricF(@ptrCast(self), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QBitmap`
    ///
    /// ` callback: *const fn (self: QtC.QBitmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QBitmap_OnGetDecodedMetricF(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QBitmap `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBitmap_Delete(@ptrCast(self));
    }
};
