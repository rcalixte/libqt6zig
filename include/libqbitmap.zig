const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = @import("libqimage.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// https://doc.qt.io/qt-6/qbitmap.html
pub const qbitmap = struct {
    /// New constructs a new QBitmap object.
    ///
    ///
    pub fn New() QtC.QBitmap {
        return qtc.QBitmap_new();
    }

    /// New2 constructs a new QBitmap object.
    ///
    /// ``` param1: QtC.QPixmap ```
    pub fn New2(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QBitmap object.
    ///
    /// ``` w: i32, h: i32 ```
    pub fn New3(w: i32, h: i32) QtC.QBitmap {
        return qtc.QBitmap_new3(@intCast(w), @intCast(h));
    }

    /// New4 constructs a new QBitmap object.
    ///
    /// ``` param1: QtC.QSize ```
    pub fn New4(param1: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_new4(@ptrCast(param1));
    }

    /// New5 constructs a new QBitmap object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New5(fileName: []const u8) QtC.QBitmap {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QBitmap_new5(fileName_str);
    }

    /// New6 constructs a new QBitmap object.
    ///
    /// ``` fileName: []const u8, format: []const u8 ```
    pub fn New6(fileName: []const u8, format: []const u8) QtC.QBitmap {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QBitmap_new6(fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator=)
    ///
    /// ``` self: QtC.QBitmap, param1: QtC.QPixmap ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#swap)
    ///
    /// ``` self: QtC.QBitmap, other: QtC.QBitmap ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator QVariant)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QBitmap_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#clear)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QBitmap_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ``` image: QtC.QImage ```
    pub fn FromImage(image: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromImage(@ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ``` size: QtC.QSize, bits: ?*u8 ```
    pub fn FromData(size: ?*anyopaque, bits: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromData(@ptrCast(size), @intCast(bits));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
    ///
    /// ``` pixmap: QtC.QPixmap ```
    pub fn FromPixmap(pixmap: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_FromPixmap(@ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#transformed)
    ///
    /// ``` self: QtC.QBitmap, matrix: QtC.QTransform ```
    pub fn Transformed(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QBitmap {
        return qtc.QBitmap_Transformed(@ptrCast(self), @ptrCast(matrix));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator=)
    ///
    /// ``` self: QtC.QBitmap, param1: QtC.QBitmap ```
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitmap_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ``` image: QtC.QImage, flags: i32 ```
    pub fn FromImage2(image: ?*anyopaque, flags: i64) QtC.QBitmap {
        return qtc.QBitmap_FromImage2(@ptrCast(image), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ``` size: QtC.QSize, bits: ?*u8, monoFormat: qimage_enums.Format ```
    pub fn FromData3(size: ?*anyopaque, bits: ?*anyopaque, monoFormat: i64) QtC.QBitmap {
        return qtc.QBitmap_FromData3(@ptrCast(size), @intCast(bits), @intCast(monoFormat));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Width(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Height(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QPixmap_Size(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPixmap_Rect(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    ///
    pub fn DefaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Fill(self: ?*anyopaque) void {
        qtc.QPixmap_Fill(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Mask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_Mask(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ``` self: QtC.QBitmap, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QPixmap_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.QBitmap, scaleFactor: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self), @floatCast(scaleFactor));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn DeviceIndependentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPixmap_DeviceIndependentSize(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn HasAlphaChannel(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn CreateHeuristicMask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QBitmap, maskColor: QtC.QColor ```
    pub fn CreateMaskFromColor(self: ?*anyopaque, maskColor: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor(@ptrCast(self), @ptrCast(maskColor));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, w: i32, h: i32 ```
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, s: QtC.QSize ```
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ``` self: QtC.QBitmap, w: i32 ```
    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ``` self: QtC.QBitmap, h: i32 ```
    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
    ///
    /// ``` m: QtC.QTransform, w: i32, h: i32 ```
    pub fn TrueMatrix(m: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QPixmap_TrueMatrix(@ptrCast(m), @intCast(w), @intCast(h));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QPixmap_ToImage(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ``` imageReader: QtC.QImageReader ```
    pub fn FromImageReader(imageReader: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader(@ptrCast(imageReader));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8 ```
    pub fn Load(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self), fileName_str);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, buf: ?*u8, lenVal: u32 ```
    pub fn LoadFromData(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self), @intCast(buf), @intCast(lenVal));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, data: []u8 ```
    pub fn LoadFromData2(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self), data_str);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8 ```
    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self), fileName_str);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, device: QtC.QIODevice ```
    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QPixmap_Save2(@ptrCast(self), @ptrCast(device));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ``` self: QtC.QBitmap, img: QtC.QImage ```
    pub fn ConvertFromImage(self: ?*anyopaque, img: ?*anyopaque) bool {
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self), @ptrCast(img));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QBitmap, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Copy(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) QtC.QPixmap {
        return qtc.QPixmap_Copy(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Copy2(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy2(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QBitmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QBitmap, dx: i32, dy: i32, rect: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque) void {
        qtc.QPixmap_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(rect));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPixmap_Detach(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn IsQBitmap(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator!)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ``` self: QtC.QBitmap, fillColor: QtC.QColor ```
    pub fn Fill1(self: ?*anyopaque, fillColor: ?*anyopaque) void {
        qtc.QPixmap_Fill1(@ptrCast(self), @ptrCast(fillColor));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QBitmap, clipTight: bool ```
    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QBitmap, maskColor: QtC.QColor, mode: qnamespace_enums.MaskMode ```
    pub fn CreateMaskFromColor2(self: ?*anyopaque, maskColor: ?*anyopaque, mode: i64) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self), @ptrCast(maskColor), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled3(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i64, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled4(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled22(@ptrCast(self), @ptrCast(s), @intCast(aspectMode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QBitmap, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i64, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled32(@ptrCast(self), @ptrCast(s), @intCast(aspectMode), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ``` self: QtC.QBitmap, w: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth2(@ptrCast(self), @intCast(w), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ``` self: QtC.QBitmap, h: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight2(@ptrCast(self), @intCast(h), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ``` self: QtC.QBitmap, param1: QtC.QTransform, mode: qnamespace_enums.TransformationMode ```
    pub fn Transformed2(self: ?*anyopaque, param1: ?*anyopaque, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Transformed2(@ptrCast(self), @ptrCast(param1), @intCast(mode));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ``` imageReader: QtC.QImageReader, flags: i32 ```
    pub fn FromImageReader2(imageReader: ?*anyopaque, flags: i64) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader2(@ptrCast(imageReader), @intCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8, format: []const u8 ```
    pub fn Load2(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8, format: []const u8, flags: i32 ```
    pub fn Load3(self: ?*anyopaque, fileName: []const u8, format: []const u8, flags: i64) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self), fileName_str, format_Cstring, @intCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, buf: ?*u8, lenVal: u32, format: []const u8 ```
    pub fn LoadFromData3(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self), @intCast(buf), @intCast(lenVal), format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, buf: ?*u8, lenVal: u32, format: []const u8, flags: i32 ```
    pub fn LoadFromData4(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32, format: []const u8, flags: i64) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self), @intCast(buf), @intCast(lenVal), format_Cstring, @intCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, data: []u8, format: []const u8 ```
    pub fn LoadFromData22(self: ?*anyopaque, data: []u8, format: []const u8) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData22(@ptrCast(self), data_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QBitmap, data: []u8, format: []const u8, flags: i32 ```
    pub fn LoadFromData32(self: ?*anyopaque, data: []u8, format: []const u8, flags: i64) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self), data_str, format_Cstring, @intCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8, format: []const u8 ```
    pub fn Save22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, fileName: []const u8, format: []const u8, quality: i32 ```
    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: []const u8, quality: i32) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self), fileName_str, format_Cstring, @intCast(quality));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, device: QtC.QIODevice, format: []const u8 ```
    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QBitmap, device: QtC.QIODevice, format: []const u8, quality: i32 ```
    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: []const u8, quality: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self), @ptrCast(device), format_Cstring, @intCast(quality));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ``` self: QtC.QBitmap, img: QtC.QImage, flags: i32 ```
    pub fn ConvertFromImage2(self: ?*anyopaque, img: ?*anyopaque, flags: i64) bool {
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self), @ptrCast(img), @intCast(flags));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QBitmap, rect: QtC.QRect ```
    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QBitmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: QtC.QRegion ```
    pub fn Scroll7(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll7(@ptrCast(self), @intCast(dx), @intCast(dy), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @ptrCast(exposed));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QBitmap, dx: i32, dy: i32, rect: QtC.QRect, exposed: QtC.QRegion ```
    pub fn Scroll4(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll4(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(rect), @ptrCast(exposed));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QBitmap_DevType(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QBitmap_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QBitmap_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QBitmap_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QBitmap_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QBitmap_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QBitmap_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QBitmap_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QPixmap
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn (self: QtC.QBitmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QBitmap_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QBitmap_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QBitmap_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn (self: QtC.QBitmap, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBitmap_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBitmap_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QBitmap_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn (self: QtC.QBitmap, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QBitmap_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QBitmap_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QBitmap_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QBitmap_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QBitmap_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QBitmap_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBitmap, slot: fn (self: QtC.QBitmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QBitmap_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBitmap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitmap_Delete(@ptrCast(self));
    }
};
