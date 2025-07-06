const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;

/// https://doc.qt.io/qt-6/qpixmap.html
pub const qpixmap = struct {
    /// New constructs a new QPixmap object.
    ///
    ///
    pub fn New() QtC.QPixmap {
        return qtc.QPixmap_new();
    }

    /// New2 constructs a new QPixmap object.
    ///
    /// ``` w: i32, h: i32 ```
    pub fn New2(w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_new2(@intCast(w), @intCast(h));
    }

    /// New3 constructs a new QPixmap object.
    ///
    /// ``` param1: QtC.QSize ```
    pub fn New3(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QPixmap object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New4(fileName: []const u8) QtC.QPixmap {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QPixmap_new4(fileName_str);
    }

    /// New5 constructs a new QPixmap object.
    ///
    /// ``` param1: QtC.QPixmap ```
    pub fn New5(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new5(@ptrCast(param1));
    }

    /// New6 constructs a new QPixmap object.
    ///
    /// ``` fileName: []const u8, format: []const u8 ```
    pub fn New6(fileName: []const u8, format: []const u8) QtC.QPixmap {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QPixmap_new6(fileName_str, format_Cstring);
    }

    /// New7 constructs a new QPixmap object.
    ///
    /// ``` fileName: []const u8, format: []const u8, flags: i32 ```
    pub fn New7(fileName: []const u8, format: []const u8, flags: i64) QtC.QPixmap {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QPixmap_new7(fileName_str, format_Cstring, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator=)
    ///
    /// ``` self: QtC.QPixmap, param1: QtC.QPixmap ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPixmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#swap)
    ///
    /// ``` self: QtC.QPixmap, other: QtC.QPixmap ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator QVariant)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPixmap_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPixmap_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPixmap, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPixmap_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QPixmap_QBaseDevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QPixmap_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPixmap_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    ///
    pub fn DefaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Fill(self: ?*anyopaque) void {
        qtc.QPixmap_Fill(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Mask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_Mask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ``` self: QtC.QPixmap, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QPixmap_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.QPixmap, scaleFactor: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self), @floatCast(scaleFactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn DeviceIndependentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPixmap_DeviceIndependentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn HasAlpha(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn HasAlphaChannel(self: ?*anyopaque) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn CreateHeuristicMask(self: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QPixmap, maskColor: QtC.QColor ```
    pub fn CreateMaskFromColor(self: ?*anyopaque, maskColor: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor(@ptrCast(self), @ptrCast(maskColor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, w: i32, h: i32 ```
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, s: QtC.QSize ```
    pub fn ScaledWithQSize(self: ?*anyopaque, s: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_ScaledWithQSize(@ptrCast(self), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ``` self: QtC.QPixmap, w: i32 ```
    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ``` self: QtC.QPixmap, h: i32 ```
    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ``` self: QtC.QPixmap, param1: QtC.QTransform ```
    pub fn Transformed(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Transformed(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
    ///
    /// ``` m: QtC.QTransform, w: i32, h: i32 ```
    pub fn TrueMatrix(m: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QPixmap_TrueMatrix(@ptrCast(m), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QPixmap_ToImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ``` image: QtC.QImage ```
    pub fn FromImage(image: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImage(@ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ``` imageReader: QtC.QImageReader ```
    pub fn FromImageReader(imageReader: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader(@ptrCast(imageReader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8 ```
    pub fn Load(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, buf: ?*u8, lenVal: u32 ```
    pub fn LoadFromData(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self), @intCast(buf), @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, data: []u8 ```
    pub fn LoadFromDataWithData(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromDataWithData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8 ```
    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, device: QtC.QIODevice ```
    pub fn SaveWithDevice(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QPixmap_SaveWithDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ``` self: QtC.QPixmap, img: QtC.QImage ```
    pub fn ConvertFromImage(self: ?*anyopaque, img: ?*anyopaque) bool {
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self), @ptrCast(img));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QPixmap, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Copy(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) QtC.QPixmap {
        return qtc.QPixmap_Copy(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Copy2(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QPixmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QPixmap, dx: i32, dy: i32, rect: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque) void {
        qtc.QPixmap_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPixmap_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn IsQBitmap(self: ?*anyopaque) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPixmap_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPixmap, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPixmap_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPixmap_QBasePaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator!)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// ``` self: QtC.QPixmap, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPixmap_Metric(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPixmap, slot: fn (self: QtC.QPixmap, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QPixmap_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPixmap, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPixmap_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ``` self: QtC.QPixmap, fillColor: QtC.QColor ```
    pub fn Fill1(self: ?*anyopaque, fillColor: ?*anyopaque) void {
        qtc.QPixmap_Fill1(@ptrCast(self), @ptrCast(fillColor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QPixmap, clipTight: bool ```
    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QPixmap, maskColor: QtC.QColor, mode: qnamespace_enums.MaskMode ```
    pub fn CreateMaskFromColor2(self: ?*anyopaque, maskColor: ?*anyopaque, mode: i64) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self), @ptrCast(maskColor), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled3(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i64, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled4(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled2(@ptrCast(self), @ptrCast(s), @intCast(aspectMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ``` self: QtC.QPixmap, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i64, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Scaled32(@ptrCast(self), @ptrCast(s), @intCast(aspectMode), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ``` self: QtC.QPixmap, w: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth2(@ptrCast(self), @intCast(w), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ``` self: QtC.QPixmap, h: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight2(@ptrCast(self), @intCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ``` self: QtC.QPixmap, param1: QtC.QTransform, mode: qnamespace_enums.TransformationMode ```
    pub fn Transformed2(self: ?*anyopaque, param1: ?*anyopaque, mode: i64) QtC.QPixmap {
        return qtc.QPixmap_Transformed2(@ptrCast(self), @ptrCast(param1), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ``` image: QtC.QImage, flags: i32 ```
    pub fn FromImage2(image: ?*anyopaque, flags: i64) QtC.QPixmap {
        return qtc.QPixmap_FromImage2(@ptrCast(image), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ``` imageReader: QtC.QImageReader, flags: i32 ```
    pub fn FromImageReader2(imageReader: ?*anyopaque, flags: i64) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader2(@ptrCast(imageReader), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8, format: []const u8 ```
    pub fn Load2(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8, format: []const u8, flags: i32 ```
    pub fn Load3(self: ?*anyopaque, fileName: []const u8, format: []const u8, flags: i64) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self), fileName_str, format_Cstring, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, buf: ?*u8, lenVal: u32, format: []const u8 ```
    pub fn LoadFromData3(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self), @intCast(buf), @intCast(lenVal), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, buf: ?*u8, lenVal: u32, format: []const u8, flags: i32 ```
    pub fn LoadFromData4(self: ?*anyopaque, buf: ?*anyopaque, lenVal: u32, format: []const u8, flags: i64) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self), @intCast(buf), @intCast(lenVal), format_Cstring, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, data: []u8, format: []const u8 ```
    pub fn LoadFromData2(self: ?*anyopaque, data: []u8, format: []const u8) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData2(@ptrCast(self), data_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ``` self: QtC.QPixmap, data: []u8, format: []const u8, flags: i32 ```
    pub fn LoadFromData32(self: ?*anyopaque, data: []u8, format: []const u8, flags: i64) bool {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self), data_str, format_Cstring, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8, format: []const u8 ```
    pub fn Save2(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save2(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, fileName: []const u8, format: []const u8, quality: i32 ```
    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: []const u8, quality: i32) bool {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self), fileName_str, format_Cstring, @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, device: QtC.QIODevice, format: []const u8 ```
    pub fn Save22(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ``` self: QtC.QPixmap, device: QtC.QIODevice, format: []const u8, quality: i32 ```
    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: []const u8, quality: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self), @ptrCast(device), format_Cstring, @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ``` self: QtC.QPixmap, img: QtC.QImage, flags: i32 ```
    pub fn ConvertFromImage2(self: ?*anyopaque, img: ?*anyopaque, flags: i64) bool {
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self), @ptrCast(img), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ``` self: QtC.QPixmap, rect: QtC.QRect ```
    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QPixmap, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: QtC.QRegion ```
    pub fn Scroll7(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll7(@ptrCast(self), @intCast(dx), @intCast(dy), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @ptrCast(exposed));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
    ///
    /// ``` self: QtC.QPixmap, dx: i32, dy: i32, rect: QtC.QRect, exposed: QtC.QRegion ```
    pub fn Scroll4(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll4(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(rect), @ptrCast(exposed));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QPixmap ```
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

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPixmap_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPixmap_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, slot: fn (self: QtC.QPixmap, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPixmap_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPixmap_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPixmap_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, slot: fn (self: QtC.QPixmap, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPixmap_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPixmap_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPixmap_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QPixmap_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPixmap_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPixmap_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPixmap, slot: fn (self: QtC.QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QPixmap_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPixmap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmap_Delete(@ptrCast(self));
    }
};
