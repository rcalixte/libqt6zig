const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qimage.html
pub const qimage = struct {
    /// New constructs a new QImage object.
    ///
    ///
    pub fn New() QtC.QImage {
        return qtc.QImage_new();
    }

    /// New2 constructs a new QImage object.
    ///
    /// ``` size: QtC.QSize, format: qimage_enums.Format ```
    pub fn New2(size: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_new2(@ptrCast(size), @intCast(format));
    }

    /// New3 constructs a new QImage object.
    ///
    /// ``` width: i32, height: i32, format: qimage_enums.Format ```
    pub fn New3(width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new3(@intCast(width), @intCast(height), @intCast(format));
    }

    /// New4 constructs a new QImage object.
    ///
    /// ``` data: *u8, width: i32, height: i32, format: qimage_enums.Format ```
    pub fn New4(data: *u8, width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new4(@ptrCast(data), @intCast(width), @intCast(height), @intCast(format));
    }

    /// New5 constructs a new QImage object.
    ///
    /// ``` data: *const u8, width: i32, height: i32, format: qimage_enums.Format ```
    pub fn New5(data: *const u8, width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new5(@ptrCast(data), @intCast(width), @intCast(height), @intCast(format));
    }

    /// New6 constructs a new QImage object.
    ///
    /// ``` data: *u8, width: i32, height: i32, bytesPerLine: i64, format: qimage_enums.Format ```
    pub fn New6(data: *u8, width: i32, height: i32, bytesPerLine: i64, format: i32) QtC.QImage {
        return qtc.QImage_new6(@ptrCast(data), @intCast(width), @intCast(height), @intCast(bytesPerLine), @intCast(format));
    }

    /// New7 constructs a new QImage object.
    ///
    /// ``` data: *const u8, width: i32, height: i32, bytesPerLine: i64, format: qimage_enums.Format ```
    pub fn New7(data: *const u8, width: i32, height: i32, bytesPerLine: i64, format: i32) QtC.QImage {
        return qtc.QImage_new7(@ptrCast(data), @intCast(width), @intCast(height), @intCast(bytesPerLine), @intCast(format));
    }

    /// New8 constructs a new QImage object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New8(fileName: []const u8) QtC.QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QImage_new8(fileName_str);
    }

    /// New9 constructs a new QImage object.
    ///
    /// ``` param1: QtC.QImage ```
    pub fn New9(param1: ?*anyopaque) QtC.QImage {
        return qtc.QImage_new9(@ptrCast(param1));
    }

    /// New10 constructs a new QImage object.
    ///
    /// ``` fileName: []const u8, format: []const u8 ```
    pub fn New10(fileName: []const u8, format: []const u8) QtC.QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;

        return qtc.QImage_new10(fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-eq)
    ///
    /// ``` self: QtC.QImage, param1: QtC.QImage ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QImage_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#swap)
    ///
    /// ``` self: QtC.QImage, other: QtC.QImage ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QImage_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isNull)
    ///
    /// ``` self: QtC.QImage ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QImage_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QImage_DevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImage_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QImage_QBaseDevType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QImage, param1: QtC.QImage ```
    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QImage_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-not-eq)
    ///
    /// ``` self: QtC.QImage, param1: QtC.QImage ```
    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QImage_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator)
    ///
    /// ``` self: QtC.QImage ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QImage_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detach)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QImage_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isDetached)
    ///
    /// ``` self: QtC.QImage ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QImage_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Copy(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Copy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Copy2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_Copy2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#format)
    ///
    /// ``` self: QtC.QImage ```
    ///
    /// Returns: ``` qimage_enums.Format ```
    pub fn Format(self: ?*anyopaque) i32 {
        return qtc.QImage_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format ```
    pub fn ConvertToFormat(self: ?*anyopaque, f: i32) QtC.QImage {
        return qtc.QImage_ConvertToFormat(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format, colorTable: []u32 ```
    pub fn ConvertToFormat2(self: ?*anyopaque, f: i32, colorTable: []u32) QtC.QImage {
        const colorTable_list = qtc.libqt_list{
            .len = colorTable.len,
            .data = colorTable.ptr,
        };
        return qtc.QImage_ConvertToFormat2(@ptrCast(self), @intCast(f), colorTable_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#reinterpretAsFormat)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format ```
    pub fn ReinterpretAsFormat(self: ?*anyopaque, f: i32) bool {
        return qtc.QImage_ReinterpretAsFormat(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format ```
    pub fn ConvertedTo(self: ?*anyopaque, f: i32) QtC.QImage {
        return qtc.QImage_ConvertedTo(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format ```
    pub fn ConvertTo(self: ?*anyopaque, f: i32) void {
        qtc.QImage_ConvertTo(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#width)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QImage_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#height)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QImage_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#size)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QImage_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rect)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImage_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#depth)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QImage_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorCount)
    ///
    /// ``` self: QtC.QImage ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QImage_ColorCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bitPlaneCount)
    ///
    /// ``` self: QtC.QImage ```
    pub fn BitPlaneCount(self: ?*anyopaque) i32 {
        return qtc.QImage_BitPlaneCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#color)
    ///
    /// ``` self: QtC.QImage, i: i32 ```
    pub fn Color(self: ?*anyopaque, i: i32) u32 {
        return qtc.QImage_Color(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColor)
    ///
    /// ``` self: QtC.QImage, i: i32, c: u32 ```
    pub fn SetColor(self: ?*anyopaque, i: i32, c: u32) void {
        qtc.QImage_SetColor(@ptrCast(self), @intCast(i), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorCount)
    ///
    /// ``` self: QtC.QImage, colorCount: i32 ```
    pub fn SetColorCount(self: ?*anyopaque, colorCount: i32) void {
        qtc.QImage_SetColorCount(@ptrCast(self), @intCast(colorCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#allGray)
    ///
    /// ``` self: QtC.QImage ```
    pub fn AllGray(self: ?*anyopaque) bool {
        return qtc.QImage_AllGray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isGrayscale)
    ///
    /// ``` self: QtC.QImage ```
    pub fn IsGrayscale(self: ?*anyopaque) bool {
        return qtc.QImage_IsGrayscale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Bits(self: ?*anyopaque) ?*u8 {
        return @ptrCast(qtc.QImage_Bits(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Bits2(self: ?*anyopaque) ?*const u8 {
        return @ptrCast(qtc.QImage_Bits2(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constBits)
    ///
    /// ``` self: QtC.QImage ```
    pub fn ConstBits(self: ?*anyopaque) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstBits(@ptrCast(self)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#sizeInBytes)
    ///
    /// ``` self: QtC.QImage ```
    pub fn SizeInBytes(self: ?*anyopaque) i64 {
        return qtc.QImage_SizeInBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ``` self: QtC.QImage, param1: i32 ```
    pub fn ScanLine(self: ?*anyopaque, param1: i32) ?*u8 {
        return @ptrCast(qtc.QImage_ScanLine(@ptrCast(self), @intCast(param1)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ``` self: QtC.QImage, param1: i32 ```
    pub fn ScanLine2(self: ?*anyopaque, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ScanLine2(@ptrCast(self), @intCast(param1)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constScanLine)
    ///
    /// ``` self: QtC.QImage, param1: i32 ```
    pub fn ConstScanLine(self: ?*anyopaque, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstScanLine(@ptrCast(self), @intCast(param1)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bytesPerLine)
    ///
    /// ``` self: QtC.QImage ```
    pub fn BytesPerLine(self: ?*anyopaque) i64 {
        return qtc.QImage_BytesPerLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32 ```
    pub fn Valid(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QImage_Valid(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint ```
    pub fn Valid2(self: ?*anyopaque, pt: ?*anyopaque) bool {
        return qtc.QImage_Valid2(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32 ```
    pub fn PixelIndex(self: ?*anyopaque, x: i32, y: i32) i32 {
        return qtc.QImage_PixelIndex(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint ```
    pub fn PixelIndex2(self: ?*anyopaque, pt: ?*anyopaque) i32 {
        return qtc.QImage_PixelIndex2(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32 ```
    pub fn Pixel(self: ?*anyopaque, x: i32, y: i32) u32 {
        return qtc.QImage_Pixel(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint ```
    pub fn Pixel2(self: ?*anyopaque, pt: ?*anyopaque) u32 {
        return qtc.QImage_Pixel2(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32, index_or_rgb: u32 ```
    pub fn SetPixel(self: ?*anyopaque, x: i32, y: i32, index_or_rgb: u32) void {
        qtc.QImage_SetPixel(@ptrCast(self), @intCast(x), @intCast(y), @intCast(index_or_rgb));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint, index_or_rgb: u32 ```
    pub fn SetPixel2(self: ?*anyopaque, pt: ?*anyopaque, index_or_rgb: u32) void {
        qtc.QImage_SetPixel2(@ptrCast(self), @ptrCast(pt), @intCast(index_or_rgb));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32 ```
    pub fn PixelColor(self: ?*anyopaque, x: i32, y: i32) QtC.QColor {
        return qtc.QImage_PixelColor(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint ```
    pub fn PixelColor2(self: ?*anyopaque, pt: ?*anyopaque) QtC.QColor {
        return qtc.QImage_PixelColor2(@ptrCast(self), @ptrCast(pt));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
    ///
    /// ``` self: QtC.QImage, x: i32, y: i32, c: QtC.QColor ```
    pub fn SetPixelColor(self: ?*anyopaque, x: i32, y: i32, c: ?*anyopaque) void {
        qtc.QImage_SetPixelColor(@ptrCast(self), @intCast(x), @intCast(y), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
    ///
    /// ``` self: QtC.QImage, pt: QtC.QPoint, c: QtC.QColor ```
    pub fn SetPixelColor2(self: ?*anyopaque, pt: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QImage_SetPixelColor2(@ptrCast(self), @ptrCast(pt), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTable)
    ///
    /// ``` self: QtC.QImage, allocator: std.mem.Allocator ```
    pub fn ColorTable(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QImage_ColorTable(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qimage.ColorTable: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorTable)
    ///
    /// ``` self: QtC.QImage, colors: []u32 ```
    pub fn SetColorTable(self: ?*anyopaque, colors: []u32) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = colors.ptr,
        };
        qtc.QImage_SetColorTable(@ptrCast(self), colors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QImage_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDevicePixelRatio)
    ///
    /// ``` self: QtC.QImage, scaleFactor: f64 ```
    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QImage_SetDevicePixelRatio(@ptrCast(self), @floatCast(scaleFactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#deviceIndependentSize)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DeviceIndependentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QImage_DeviceIndependentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ``` self: QtC.QImage, pixel: u32 ```
    pub fn Fill(self: ?*anyopaque, pixel: u32) void {
        qtc.QImage_Fill(@ptrCast(self), @intCast(pixel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ``` self: QtC.QImage, color: QtC.QColor ```
    pub fn Fill2(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QImage_Fill2(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ``` self: QtC.QImage, color: qnamespace_enums.GlobalColor ```
    pub fn Fill3(self: ?*anyopaque, color: i32) void {
        qtc.QImage_Fill3(@ptrCast(self), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#hasAlphaChannel)
    ///
    /// ``` self: QtC.QImage ```
    pub fn HasAlphaChannel(self: ?*anyopaque) bool {
        return qtc.QImage_HasAlphaChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setAlphaChannel)
    ///
    /// ``` self: QtC.QImage, alphaChannel: QtC.QImage ```
    pub fn SetAlphaChannel(self: ?*anyopaque, alphaChannel: ?*anyopaque) void {
        qtc.QImage_SetAlphaChannel(@ptrCast(self), @ptrCast(alphaChannel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ``` self: QtC.QImage ```
    pub fn CreateAlphaMask(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_CreateAlphaMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QImage ```
    pub fn CreateHeuristicMask(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_CreateHeuristicMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QImage, color: u32 ```
    pub fn CreateMaskFromColor(self: ?*anyopaque, color: u32) QtC.QImage {
        return qtc.QImage_CreateMaskFromColor(@ptrCast(self), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, w: i32, h: i32 ```
    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_Scaled(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, s: QtC.QSize ```
    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
    ///
    /// ``` self: QtC.QImage, w: i32 ```
    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QImage {
        return qtc.QImage_ScaledToWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
    ///
    /// ``` self: QtC.QImage, h: i32 ```
    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QImage {
        return qtc.QImage_ScaledToHeight(@ptrCast(self), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
    ///
    /// ``` self: QtC.QImage, matrix: QtC.QTransform ```
    pub fn Transformed(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Transformed(@ptrCast(self), @ptrCast(matrix));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#trueMatrix)
    ///
    /// ``` param1: QtC.QTransform, w: i32, h: i32 ```
    pub fn TrueMatrix(param1: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QImage_TrueMatrix(@ptrCast(param1), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Mirrored(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Mirrored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped)
    ///
    /// ``` self: QtC.QImage ```
    pub fn RgbSwapped(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_RgbSwapped(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Mirror(self: ?*anyopaque) void {
        qtc.QImage_Mirror(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwap)
    ///
    /// ``` self: QtC.QImage ```
    pub fn RgbSwap(self: ?*anyopaque) void {
        qtc.QImage_RgbSwap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ``` self: QtC.QImage ```
    pub fn InvertPixels(self: ?*anyopaque) void {
        qtc.QImage_InvertPixels(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorSpace)
    ///
    /// ``` self: QtC.QImage ```
    pub fn ColorSpace(self: ?*anyopaque) QtC.QColorSpace {
        return qtc.QImage_ColorSpace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace ```
    pub fn ConvertedToColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace, format: qimage_enums.Format ```
    pub fn ConvertedToColorSpace2(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace2(@ptrCast(self), @ptrCast(colorSpace), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace ```
    pub fn ConvertToColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QImage_ConvertToColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace, format: qimage_enums.Format ```
    pub fn ConvertToColorSpace2(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32) void {
        qtc.QImage_ConvertToColorSpace2(@ptrCast(self), @ptrCast(colorSpace), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace ```
    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QImage_SetColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform ```
    pub fn ColorTransformed(self: ?*anyopaque, transform: ?*anyopaque) QtC.QImage {
        return qtc.QImage_ColorTransformed(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform, format: qimage_enums.Format ```
    pub fn ColorTransformed2(self: ?*anyopaque, transform: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_ColorTransformed2(@ptrCast(self), @ptrCast(transform), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform ```
    pub fn ApplyColorTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QImage_ApplyColorTransform(@ptrCast(self), @ptrCast(transform));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform, format: qimage_enums.Format ```
    pub fn ApplyColorTransform2(self: ?*anyopaque, transform: ?*anyopaque, format: i32) void {
        qtc.QImage_ApplyColorTransform2(@ptrCast(self), @ptrCast(transform), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ``` self: QtC.QImage, device: QtC.QIODevice, format: []const u8 ```
    pub fn Load(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_Load(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ``` self: QtC.QImage, fileName: []const u8 ```
    pub fn Load2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Load2(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, data: []const u8 ```
    pub fn LoadFromData(self: ?*anyopaque, data: []const u8) bool {
        return qtc.QImage_LoadFromData(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, buf: *const u8, lenVal: i32 ```
    pub fn LoadFromData2(self: ?*anyopaque, buf: *const u8, lenVal: i32) bool {
        return qtc.QImage_LoadFromData2(@ptrCast(self), @ptrCast(buf), @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, data: []u8 ```
    pub fn LoadFromData3(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_LoadFromData3(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, fileName: []const u8 ```
    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Save(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, device: QtC.QIODevice ```
    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QImage_Save2(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: []const u8 ```
    pub fn FromData(data: []const u8) QtC.QImage {
        return qtc.QImage_FromData(data.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: *const u8, size: i32 ```
    pub fn FromData2(data: *const u8, size: i32) QtC.QImage {
        return qtc.QImage_FromData2(@ptrCast(data), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: []u8 ```
    pub fn FromData3(data: []u8) QtC.QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_FromData3(data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#cacheKey)
    ///
    /// ``` self: QtC.QImage ```
    pub fn CacheKey(self: ?*anyopaque) i64 {
        return qtc.QImage_CacheKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// ``` self: QtC.QImage ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QImage_PaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QImage_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QImage_QBasePaintEngine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterX)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DotsPerMeterX(self: ?*anyopaque) i32 {
        return qtc.QImage_DotsPerMeterX(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterY)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DotsPerMeterY(self: ?*anyopaque) i32 {
        return qtc.QImage_DotsPerMeterY(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterX)
    ///
    /// ``` self: QtC.QImage, dotsPerMeterX: i32 ```
    pub fn SetDotsPerMeterX(self: ?*anyopaque, dotsPerMeterX: i32) void {
        qtc.QImage_SetDotsPerMeterX(@ptrCast(self), @intCast(dotsPerMeterX));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterY)
    ///
    /// ``` self: QtC.QImage, dotsPerMeterY: i32 ```
    pub fn SetDotsPerMeterY(self: ?*anyopaque, dotsPerMeterY: i32) void {
        qtc.QImage_SetDotsPerMeterY(@ptrCast(self), @intCast(dotsPerMeterY));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#offset)
    ///
    /// ``` self: QtC.QImage ```
    pub fn Offset(self: ?*anyopaque) QtC.QPoint {
        return qtc.QImage_Offset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setOffset)
    ///
    /// ``` self: QtC.QImage, offset: QtC.QPoint ```
    pub fn SetOffset(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QImage_SetOffset(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#textKeys)
    ///
    /// ``` self: QtC.QImage, allocator: std.mem.Allocator ```
    pub fn TextKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QImage_TextKeys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qimage.TextKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimage.TextKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
    ///
    /// ``` self: QtC.QImage, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImage_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setText)
    ///
    /// ``` self: QtC.QImage, key: []const u8, value: []const u8 ```
    pub fn SetText(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QImage_SetText(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelFormat)
    ///
    /// ``` self: QtC.QImage ```
    pub fn PixelFormat(self: ?*anyopaque) QtC.QPixelFormat {
        return qtc.QImage_PixelFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toPixelFormat)
    ///
    /// ``` format: qimage_enums.Format ```
    pub fn ToPixelFormat(format: i32) QtC.QPixelFormat {
        return qtc.QImage_ToPixelFormat(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toImageFormat)
    ///
    /// ``` format: QtC.QPixelFormat ```
    ///
    /// Returns: ``` qimage_enums.Format ```
    pub fn ToImageFormat(format: QtC.QPixelFormat) i32 {
        return qtc.QImage_ToImageFormat(@ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// ``` self: QtC.QImage, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QImage_Metric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QImage_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, metric: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QImage_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// ``` self: QtC.QImage, horizontal: bool, vertical: bool ```
    pub fn MirroredHelper(self: ?*anyopaque, horizontal: bool, vertical: bool) QtC.QImage {
        return qtc.QImage_MirroredHelper(@ptrCast(self), horizontal, vertical);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, horizontal: bool, vertical: bool) callconv(.c) QtC.QImage ```
    pub fn OnMirroredHelper(self: ?*anyopaque, slot: fn (?*anyopaque, bool, bool) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnMirroredHelper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, horizontal: bool, vertical: bool ```
    pub fn QBaseMirroredHelper(self: ?*anyopaque, horizontal: bool, vertical: bool) QtC.QImage {
        return qtc.QImage_QBaseMirroredHelper(@ptrCast(self), horizontal, vertical);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// ``` self: QtC.QImage ```
    pub fn RgbSwappedHelper(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_RgbSwappedHelper(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) QtC.QImage ```
    pub fn OnRgbSwappedHelper(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QImage) void {
        qtc.QImage_OnRgbSwappedHelper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBaseRgbSwappedHelper(self: ?*anyopaque) QtC.QImage {
        return qtc.QImage_QBaseRgbSwappedHelper(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// ``` self: QtC.QImage, horizontal: bool, vertical: bool ```
    pub fn MirroredInplace(self: ?*anyopaque, horizontal: bool, vertical: bool) void {
        qtc.QImage_MirroredInplace(@ptrCast(self), horizontal, vertical);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, horizontal: bool, vertical: bool) callconv(.c) void ```
    pub fn OnMirroredInplace(self: ?*anyopaque, slot: fn (?*anyopaque, bool, bool) callconv(.c) void) void {
        qtc.QImage_OnMirroredInplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, horizontal: bool, vertical: bool ```
    pub fn QBaseMirroredInplace(self: ?*anyopaque, horizontal: bool, vertical: bool) void {
        qtc.QImage_QBaseMirroredInplace(@ptrCast(self), horizontal, vertical);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// ``` self: QtC.QImage ```
    pub fn RgbSwappedInplace(self: ?*anyopaque) void {
        qtc.QImage_RgbSwappedInplace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) void ```
    pub fn OnRgbSwappedInplace(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QImage_OnRgbSwappedInplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBaseRgbSwappedInplace(self: ?*anyopaque) void {
        qtc.QImage_QBaseRgbSwappedInplace(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// ``` self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertToFormatHelper(self: ?*anyopaque, format: i32, flags: i64) QtC.QImage {
        return qtc.QImage_ConvertToFormatHelper(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) QtC.QImage ```
    pub fn OnConvertToFormatHelper(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnConvertToFormatHelper(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn QBaseConvertToFormatHelper(self: ?*anyopaque, format: i32, flags: i64) QtC.QImage {
        return qtc.QImage_QBaseConvertToFormatHelper(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// ``` self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertToFormatInplace(self: ?*anyopaque, format: i32, flags: i64) bool {
        return qtc.QImage_ConvertToFormatInplace(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) bool ```
    pub fn OnConvertToFormatInplace(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) bool) void {
        qtc.QImage_OnConvertToFormatInplace(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn QBaseConvertToFormatInplace(self: ?*anyopaque, format: i32, flags: i64) bool {
        return qtc.QImage_QBaseConvertToFormatInplace(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// ``` self: QtC.QImage, w: i32, h: i32 ```
    pub fn SmoothScaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_SmoothScaled(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, w: i32, h: i32) callconv(.c) QtC.QImage ```
    pub fn OnSmoothScaled(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnSmoothScaled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, w: i32, h: i32 ```
    pub fn QBaseSmoothScaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_QBaseSmoothScaled(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DetachMetadata(self: ?*anyopaque) void {
        qtc.QImage_DetachMetadata(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) void ```
    pub fn OnDetachMetadata(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBaseDetachMetadata(self: ?*anyopaque) void {
        qtc.QImage_QBaseDetachMetadata(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ``` self: QtC.QImage, rect: QtC.QRect ```
    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertToFormat22(self: ?*anyopaque, f: i32, flags: i64) QtC.QImage {
        return qtc.QImage_ConvertToFormat22(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format, colorTable: []u32, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertToFormat3(self: ?*anyopaque, f: i32, colorTable: []u32, flags: i64) QtC.QImage {
        const colorTable_list = qtc.libqt_list{
            .len = colorTable.len,
            .data = colorTable.ptr,
        };
        return qtc.QImage_ConvertToFormat3(@ptrCast(self), @intCast(f), colorTable_list, @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertedTo2(self: ?*anyopaque, f: i32, flags: i64) QtC.QImage {
        return qtc.QImage_ConvertedTo2(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
    ///
    /// ``` self: QtC.QImage, f: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertTo2(self: ?*anyopaque, f: i32, flags: i64) void {
        qtc.QImage_ConvertTo2(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ``` self: QtC.QImage, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn CreateAlphaMask1(self: ?*anyopaque, flags: i64) QtC.QImage {
        return qtc.QImage_CreateAlphaMask1(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ``` self: QtC.QImage, clipTight: bool ```
    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QImage {
        return qtc.QImage_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ``` self: QtC.QImage, color: u32, mode: qnamespace_enums.MaskMode ```
    pub fn CreateMaskFromColor2(self: ?*anyopaque, color: u32, mode: i32) QtC.QImage {
        return qtc.QImage_CreateMaskFromColor2(@ptrCast(self), @intCast(color), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32) QtC.QImage {
        return qtc.QImage_Scaled3(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, w: i32, h: i32, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32, mode: i32) QtC.QImage {
        return qtc.QImage_Scaled4(@ptrCast(self), @intCast(w), @intCast(h), @intCast(aspectMode), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode ```
    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32) QtC.QImage {
        return qtc.QImage_Scaled22(@ptrCast(self), @ptrCast(s), @intCast(aspectMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ``` self: QtC.QImage, s: QtC.QSize, aspectMode: qnamespace_enums.AspectRatioMode, mode: qnamespace_enums.TransformationMode ```
    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32, mode: i32) QtC.QImage {
        return qtc.QImage_Scaled32(@ptrCast(self), @ptrCast(s), @intCast(aspectMode), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
    ///
    /// ``` self: QtC.QImage, w: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i32) QtC.QImage {
        return qtc.QImage_ScaledToWidth2(@ptrCast(self), @intCast(w), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
    ///
    /// ``` self: QtC.QImage, h: i32, mode: qnamespace_enums.TransformationMode ```
    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i32) QtC.QImage {
        return qtc.QImage_ScaledToHeight2(@ptrCast(self), @intCast(h), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
    ///
    /// ``` self: QtC.QImage, matrix: QtC.QTransform, mode: qnamespace_enums.TransformationMode ```
    pub fn Transformed2(self: ?*anyopaque, matrix: ?*anyopaque, mode: i32) QtC.QImage {
        return qtc.QImage_Transformed2(@ptrCast(self), @ptrCast(matrix), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ``` self: QtC.QImage, horizontally: bool ```
    pub fn Mirrored1(self: ?*anyopaque, horizontally: bool) QtC.QImage {
        return qtc.QImage_Mirrored1(@ptrCast(self), horizontally);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ``` self: QtC.QImage, horizontally: bool, vertically: bool ```
    pub fn Mirrored2(self: ?*anyopaque, horizontally: bool, vertically: bool) QtC.QImage {
        return qtc.QImage_Mirrored2(@ptrCast(self), horizontally, vertically);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ``` self: QtC.QImage, horizontally: bool ```
    pub fn Mirror1(self: ?*anyopaque, horizontally: bool) void {
        qtc.QImage_Mirror1(@ptrCast(self), horizontally);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ``` self: QtC.QImage, horizontally: bool, vertically: bool ```
    pub fn Mirror2(self: ?*anyopaque, horizontally: bool, vertically: bool) void {
        qtc.QImage_Mirror2(@ptrCast(self), horizontally, vertically);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ``` self: QtC.QImage, param1: qimage_enums.InvertMode ```
    pub fn InvertPixels1(self: ?*anyopaque, param1: i32) void {
        qtc.QImage_InvertPixels1(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertedToColorSpace3(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32, flags: i64) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace3(@ptrCast(self), @ptrCast(colorSpace), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ``` self: QtC.QImage, colorSpace: QtC.QColorSpace, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ConvertToColorSpace3(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32, flags: i64) void {
        qtc.QImage_ConvertToColorSpace3(@ptrCast(self), @ptrCast(colorSpace), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ColorTransformed3(self: ?*anyopaque, transform: ?*anyopaque, format: i32, flags: i64) QtC.QImage {
        return qtc.QImage_ColorTransformed3(@ptrCast(self), @ptrCast(transform), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ``` self: QtC.QImage, transform: QtC.QColorTransform, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag ```
    pub fn ApplyColorTransform3(self: ?*anyopaque, transform: ?*anyopaque, format: i32, flags: i64) void {
        qtc.QImage_ApplyColorTransform3(@ptrCast(self), @ptrCast(transform), @intCast(format), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ``` self: QtC.QImage, fileName: []const u8, format: []const u8 ```
    pub fn Load22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Load22(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, data: []const u8, format: []const u8 ```
    pub fn LoadFromData22(self: ?*anyopaque, data: []const u8, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData22(@ptrCast(self), data.ptr, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, buf: *const u8, lenVal: i32, format: []const u8 ```
    pub fn LoadFromData32(self: ?*anyopaque, buf: *const u8, lenVal: i32, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData32(@ptrCast(self), @ptrCast(buf), @intCast(lenVal), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ``` self: QtC.QImage, data: []u8, format: []const u8 ```
    pub fn LoadFromData23(self: ?*anyopaque, data: []u8, format: []const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData23(@ptrCast(self), data_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, fileName: []const u8, format: []const u8 ```
    pub fn Save22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Save22(@ptrCast(self), fileName_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, fileName: []const u8, format: []const u8, quality: i32 ```
    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: []const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Save3(@ptrCast(self), fileName_str, format_Cstring, @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, device: QtC.QIODevice, format: []const u8 ```
    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_Save23(@ptrCast(self), @ptrCast(device), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ``` self: QtC.QImage, device: QtC.QIODevice, format: []const u8, quality: i32 ```
    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: []const u8, quality: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_Save32(@ptrCast(self), @ptrCast(device), format_Cstring, @intCast(quality));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: []const u8, format: []const u8 ```
    pub fn FromData22(data: []const u8, format: []const u8) QtC.QImage {
        const format_Cstring = format.ptr;
        return qtc.QImage_FromData22(data.ptr, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: *const u8, size: i32, format: []const u8 ```
    pub fn FromData32(data: *const u8, size: i32, format: []const u8) QtC.QImage {
        const format_Cstring = format.ptr;
        return qtc.QImage_FromData32(@ptrCast(data), @intCast(size), format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ``` data: []u8, format: []const u8 ```
    pub fn FromData23(data: []u8, format: []const u8) QtC.QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_FromData23(data_str, format_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
    ///
    /// ``` self: QtC.QImage, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Text1(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.QImage_Text1(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ``` self: QtC.QImage, invalidateCache: bool ```
    pub fn DetachMetadata1(self: ?*anyopaque, invalidateCache: bool) void {
        qtc.QImage_DetachMetadata1(@ptrCast(self), invalidateCache);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, invalidateCache: bool) callconv(.c) void ```
    pub fn OnDetachMetadata1(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImage, invalidateCache: bool ```
    pub fn QBaseDetachMetadata1(self: ?*anyopaque, invalidateCache: bool) void {
        qtc.QImage_QBaseDetachMetadata1(@ptrCast(self), invalidateCache);
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QImage ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QImage ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QImage ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QImage ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QImage ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QImage ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QImage ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QImage ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
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
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImage, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QImage_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QImage_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImage_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImage, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QImage_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QImage_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QImage_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImage ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QImage_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImage ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QImage_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QImage_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImage, slot: fn (self: QtC.QImage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QImage_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dtor.QImage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QImage ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimage.html#types
pub const enums = struct {
    pub const InvertMode = enum {
        pub const InvertRgb: i32 = 0;
        pub const InvertRgba: i32 = 1;
    };

    pub const Format = enum {
        pub const Format_Invalid: i32 = 0;
        pub const Format_Mono: i32 = 1;
        pub const Format_MonoLSB: i32 = 2;
        pub const Format_Indexed8: i32 = 3;
        pub const Format_RGB32: i32 = 4;
        pub const Format_ARGB32: i32 = 5;
        pub const Format_ARGB32_Premultiplied: i32 = 6;
        pub const Format_RGB16: i32 = 7;
        pub const Format_ARGB8565_Premultiplied: i32 = 8;
        pub const Format_RGB666: i32 = 9;
        pub const Format_ARGB6666_Premultiplied: i32 = 10;
        pub const Format_RGB555: i32 = 11;
        pub const Format_ARGB8555_Premultiplied: i32 = 12;
        pub const Format_RGB888: i32 = 13;
        pub const Format_RGB444: i32 = 14;
        pub const Format_ARGB4444_Premultiplied: i32 = 15;
        pub const Format_RGBX8888: i32 = 16;
        pub const Format_RGBA8888: i32 = 17;
        pub const Format_RGBA8888_Premultiplied: i32 = 18;
        pub const Format_BGR30: i32 = 19;
        pub const Format_A2BGR30_Premultiplied: i32 = 20;
        pub const Format_RGB30: i32 = 21;
        pub const Format_A2RGB30_Premultiplied: i32 = 22;
        pub const Format_Alpha8: i32 = 23;
        pub const Format_Grayscale8: i32 = 24;
        pub const Format_RGBX64: i32 = 25;
        pub const Format_RGBA64: i32 = 26;
        pub const Format_RGBA64_Premultiplied: i32 = 27;
        pub const Format_Grayscale16: i32 = 28;
        pub const Format_BGR888: i32 = 29;
        pub const Format_RGBX16FPx4: i32 = 30;
        pub const Format_RGBA16FPx4: i32 = 31;
        pub const Format_RGBA16FPx4_Premultiplied: i32 = 32;
        pub const Format_RGBX32FPx4: i32 = 33;
        pub const Format_RGBA32FPx4: i32 = 34;
        pub const Format_RGBA32FPx4_Premultiplied: i32 = 35;
        pub const Format_CMYK8888: i32 = 36;
        pub const NImageFormats: i32 = 37;
    };
};
