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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBitmap object in C++ memory
    ///
    pub fn new() QBitmap {
        return .{ .ptr = qtc.QBitmap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixmap `
    ///
    pub fn new2(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        return .{ .ptr = qtc.QBitmap_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn new3(w: i32, h: i32) QBitmap {
        return .{ .ptr = qtc.QBitmap_new3(@bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn new4(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QBitmap_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn new5(fileName: []const u8) QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QBitmap_new5(fileName_str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBitmap `
    ///
    pub fn new6(param1: anytype) QBitmap {
        comptime _ = @TypeOf(param1)._is_QBitmap;
        return .{ .ptr = qtc.QBitmap_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QBitmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn new7(fileName: []const u8, format: [:0]const u8) QBitmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QBitmap_new7(fileName_str, format_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn operatorAssign(self: QBitmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QBitmap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` other: QBitmap `
    ///
    pub fn swap(self: QBitmap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitmap;
        qtc.QBitmap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn toQVariant(self: QBitmap) QVariant {
        return .{ .ptr = qtc.QBitmap_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn clear(self: QBitmap) void {
        qtc.QBitmap_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromImage` instead
    ///
    pub const FromImage = fromImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn fromImage(image: anytype) QBitmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_FromImage(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `fromData` instead
    ///
    pub const FromData = fromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` bits: *const u8 `
    ///
    pub fn fromData(_size: anytype, bits: *const u8) QBitmap {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QBitmap_FromData(@ptrCast(_size.ptr), @ptrCast(bits)) };
    }

    /// ### DEPRECATED: Use `fromPixmap` instead
    ///
    pub const FromPixmap = fromPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn fromPixmap(pixmap: anytype) QBitmap {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QBitmap_FromPixmap(@ptrCast(pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `transformed` instead
    ///
    pub const Transformed = transformed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn transformed(self: QBitmap, matrix: anytype) QBitmap {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QBitmap_Transformed(@ptrCast(self.ptr), @ptrCast(matrix.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` param1: QBitmap `
    ///
    pub fn operatorAssign2(self: QBitmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitmap;
        qtc.QBitmap_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `fromImage2` instead
    ///
    pub const FromImage2 = fromImage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn fromImage2(image: anytype, flags: i32) QBitmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_FromImage2(@ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `fromData3` instead
    ///
    pub const FromData3 = fromData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` bits: *const u8 `
    ///
    /// ` monoFormat: qimage_enums.Format `
    ///
    pub fn fromData3(_size: anytype, bits: *const u8, monoFormat: i32) QBitmap {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QBitmap_FromData3(@ptrCast(_size.ptr), @ptrCast(bits), @bitCast(monoFormat)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn isNull(self: QBitmap) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn width(self: QBitmap) i32 {
        return qtc.QPixmap_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn height(self: QBitmap) i32 {
        return qtc.QPixmap_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn size(self: QBitmap) QSize {
        return .{ .ptr = qtc.QPixmap_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn rect(self: QBitmap) QRect {
        return .{ .ptr = qtc.QPixmap_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn depth(self: QBitmap) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultDepth` instead
    ///
    pub const DefaultDepth = defaultDepth;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    pub fn defaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// ### DEPRECATED: Use `fill` instead
    ///
    pub const Fill = fill;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn fill(self: QBitmap) void {
        qtc.QPixmap_Fill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn mask(self: QBitmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QBitmap, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QPixmap_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn devicePixelRatio(self: QBitmap) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

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
    pub fn setDevicePixelRatio(self: QBitmap, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// ### DEPRECATED: Use `deviceIndependentSize` instead
    ///
    pub const DeviceIndependentSize = deviceIndependentSize;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn deviceIndependentSize(self: QBitmap) QSizeF {
        return .{ .ptr = qtc.QPixmap_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasAlpha` instead
    ///
    pub const HasAlpha = hasAlpha;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn hasAlpha(self: QBitmap) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasAlphaChannel` instead
    ///
    pub const HasAlphaChannel = hasAlphaChannel;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn hasAlphaChannel(self: QBitmap) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createHeuristicMask` instead
    ///
    pub const CreateHeuristicMask = createHeuristicMask;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn createHeuristicMask(self: QBitmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor` instead
    ///
    pub const CreateMaskFromColor = createMaskFromColor;

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
    pub fn createMaskFromColor(self: QBitmap, maskColor: anytype) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor(@ptrCast(self.ptr), @ptrCast(maskColor.ptr)) };
    }

    /// ### DEPRECATED: Use `scaled` instead
    ///
    pub const Scaled = scaled;

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
    pub fn scaled(self: QBitmap, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `scaled2` instead
    ///
    pub const Scaled2 = scaled2;

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
    pub fn scaled2(self: QBitmap, s: anytype) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth` instead
    ///
    pub const ScaledToWidth = scaledToWidth;

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
    pub fn scaledToWidth(self: QBitmap, w: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight` instead
    ///
    pub const ScaledToHeight = scaledToHeight;

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
    pub fn scaledToHeight(self: QBitmap, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `trueMatrix` instead
    ///
    pub const TrueMatrix = trueMatrix;

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
    pub fn trueMatrix(m: anytype, w: i32, h: i32) QTransform {
        comptime _ = @TypeOf(m)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_TrueMatrix(@ptrCast(m.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `toImage` instead
    ///
    pub const ToImage = toImage;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn toImage(self: QBitmap) QImage {
        return .{ .ptr = qtc.QPixmap_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromImageReader` instead
    ///
    pub const FromImageReader = fromImageReader;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
    ///
    /// ## Parameter(s):
    ///
    /// ` imageReader: QImageReader `
    ///
    pub fn fromImageReader(imageReader: anytype) QPixmap {
        comptime _ = @TypeOf(imageReader)._is_QImageReader;
        return .{ .ptr = qtc.QPixmap_FromImageReader(@ptrCast(imageReader.ptr)) };
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

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
    pub fn load(self: QBitmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `loadFromData` instead
    ///
    pub const LoadFromData = loadFromData;

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
    /// ` len: u32 `
    ///
    pub fn loadFromData(self: QBitmap, buf: *const u8, len: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len));
    }

    /// ### DEPRECATED: Use `loadFromData2` instead
    ///
    pub const LoadFromData2 = loadFromData2;

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
    pub fn loadFromData2(self: QBitmap, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

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
    pub fn save(self: QBitmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

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
    pub fn save2(self: QBitmap, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QPixmap_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `convertFromImage` instead
    ///
    pub const ConvertFromImage = convertFromImage;

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
    pub fn convertFromImage(self: QBitmap, img: anytype) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self.ptr), @ptrCast(img.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn copy(self: QBitmap, x: i32, y: i32, _width: i32, _height: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `copy2` instead
    ///
    pub const Copy2 = copy2;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn copy2(self: QBitmap) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn scroll(self: QBitmap, dx: i32, dy: i32, x: i32, y: i32, _width: i32, _height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

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
    /// ` _rect: QRect `
    ///
    pub fn scroll2(self: QBitmap, dx: i32, dy: i32, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QPixmap_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `cacheKey` instead
    ///
    pub const CacheKey = cacheKey;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn cacheKey(self: QBitmap) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn isDetached(self: QBitmap) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn detach(self: QBitmap) void {
        qtc.QPixmap_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQBitmap` instead
    ///
    pub const IsQBitmap = isQBitmap;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn isQBitmap(self: QBitmap) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorNot` instead
    ///
    pub const OperatorNot = operatorNot;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn operatorNot(self: QBitmap) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fill1` instead
    ///
    pub const Fill1 = fill1;

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
    pub fn fill1(self: QBitmap, fillColor: anytype) void {
        comptime _ = @TypeOf(fillColor)._is_QColor;
        qtc.QPixmap_Fill1(@ptrCast(self.ptr), @ptrCast(fillColor.ptr));
    }

    /// ### DEPRECATED: Use `createHeuristicMask1` instead
    ///
    pub const CreateHeuristicMask1 = createHeuristicMask1;

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
    pub fn createHeuristicMask1(self: QBitmap, clipTight: bool) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor2` instead
    ///
    pub const CreateMaskFromColor2 = createMaskFromColor2;

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
    pub fn createMaskFromColor2(self: QBitmap, maskColor: anytype, mode: i32) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self.ptr), @ptrCast(maskColor.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled3` instead
    ///
    pub const Scaled3 = scaled3;

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
    pub fn scaled3(self: QBitmap, w: i32, h: i32, aspectMode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled4` instead
    ///
    pub const Scaled4 = scaled4;

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
    pub fn scaled4(self: QBitmap, w: i32, h: i32, aspectMode: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled22` instead
    ///
    pub const Scaled22 = scaled22;

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
    pub fn scaled22(self: QBitmap, s: anytype, aspectMode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled32` instead
    ///
    pub const Scaled32 = scaled32;

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
    pub fn scaled32(self: QBitmap, s: anytype, aspectMode: i32, mode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth2` instead
    ///
    pub const ScaledToWidth2 = scaledToWidth2;

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
    pub fn scaledToWidth2(self: QBitmap, w: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight2` instead
    ///
    pub const ScaledToHeight2 = scaledToHeight2;

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
    pub fn scaledToHeight2(self: QBitmap, h: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `transformed2` instead
    ///
    pub const Transformed2 = transformed2;

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
    pub fn transformed2(self: QBitmap, param1: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `fromImageReader2` instead
    ///
    pub const FromImageReader2 = fromImageReader2;

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
    pub fn fromImageReader2(imageReader: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(imageReader)._is_QImageReader;
        return .{ .ptr = qtc.QPixmap_FromImageReader2(@ptrCast(imageReader.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

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
    pub fn load2(self: QBitmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load2(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `load3` instead
    ///
    pub const Load3 = load3;

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
    pub fn load3(self: QBitmap, fileName: []const u8, format: [:0]const u8, flags: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Load3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `loadFromData3` instead
    ///
    pub const LoadFromData3 = loadFromData3;

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
    /// ` len: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn loadFromData3(self: QBitmap, buf: *const u8, len: u32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len), format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData4` instead
    ///
    pub const LoadFromData4 = loadFromData4;

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
    /// ` len: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn loadFromData4(self: QBitmap, buf: *const u8, len: u32, format: [:0]const u8, flags: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len), format_Cstring, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `loadFromData22` instead
    ///
    pub const LoadFromData22 = loadFromData22;

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
    pub fn loadFromData22(self: QBitmap, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData22(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData32` instead
    ///
    pub const LoadFromData32 = loadFromData32;

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
    pub fn loadFromData32(self: QBitmap, data: []u8, format: [:0]const u8, flags: i32) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData32(@ptrCast(self.ptr), data_str, format_Cstring, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `save22` instead
    ///
    pub const Save22 = save22;

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
    pub fn save22(self: QBitmap, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

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
    pub fn save3(self: QBitmap, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// ### DEPRECATED: Use `save23` instead
    ///
    pub const Save23 = save23;

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
    pub fn save23(self: QBitmap, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### DEPRECATED: Use `save32` instead
    ///
    pub const Save32 = save32;

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
    pub fn save32(self: QBitmap, device: anytype, format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// ### DEPRECATED: Use `convertFromImage2` instead
    ///
    pub const ConvertFromImage2 = convertFromImage2;

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
    pub fn convertFromImage2(self: QBitmap, img: anytype, flags: i32) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self.ptr), @ptrCast(img.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `copy1` instead
    ///
    pub const Copy1 = copy1;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` _rect: QRect `
    ///
    pub fn copy1(self: QBitmap, _rect: anytype) QPixmap {
        comptime _ = @TypeOf(_rect)._is_QRect;
        return .{ .ptr = qtc.QPixmap_Copy1(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `scroll7` instead
    ///
    pub const Scroll7 = scroll7;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn scroll7(self: QBitmap, dx: i32, dy: i32, x: i32, y: i32, _width: i32, _height: i32, exposed: anytype) void {
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll7(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height), @ptrCast(exposed.ptr));
    }

    /// ### DEPRECATED: Use `scroll4` instead
    ///
    pub const Scroll4 = scroll4;

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
    /// ` _rect: QRect `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn scroll4(self: QBitmap, dx: i32, dy: i32, _rect: anytype, exposed: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll4(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr), @ptrCast(exposed.ptr));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn paintingActive(self: QBitmap) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn widthMM(self: QBitmap) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn heightMM(self: QBitmap) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn logicalDpiX(self: QBitmap) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn logicalDpiY(self: QBitmap) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn physicalDpiX(self: QBitmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn physicalDpiY(self: QBitmap) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn devicePixelRatioF(self: QBitmap) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    pub fn colorCount(self: QBitmap) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: QBitmap) i32 {
        return qtc.QBitmap_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: QBitmap) i32 {
        return qtc.QBitmap_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QBitmap, callback: *const fn () callconv(.c) i32) void {
        qtc.QBitmap_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

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
    pub fn paintEngine(self: QBitmap) QPaintEngine {
        return .{ .ptr = qtc.QBitmap_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

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
    pub fn superPaintEngine(self: QBitmap) QPaintEngine {
        return .{ .ptr = qtc.QBitmap_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QBitmap, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QBitmap_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

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
    pub fn metric(self: QBitmap, param1: i32) i32 {
        return qtc.QBitmap_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

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
    pub fn superMetric(self: QBitmap, param1: i32) i32 {
        return qtc.QBitmap_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QBitmap, callback: *const fn (QBitmap, i32) callconv(.c) i32) void {
        qtc.QBitmap_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

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
    pub fn initPainter(self: QBitmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QBitmap_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

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
    pub fn superInitPainter(self: QBitmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QBitmap_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

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
    pub fn onInitPainter(self: QBitmap, callback: *const fn (QBitmap, QPainter) callconv(.c) void) void {
        qtc.QBitmap_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

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
    pub fn redirected(self: QBitmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QBitmap_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

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
    pub fn superRedirected(self: QBitmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QBitmap_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

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
    pub fn onRedirected(self: QBitmap, callback: *const fn (QBitmap, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QBitmap_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

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
    pub fn sharedPainter(self: QBitmap) QPainter {
        return .{ .ptr = qtc.QBitmap_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

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
    pub fn superSharedPainter(self: QBitmap) QPainter {
        return .{ .ptr = qtc.QBitmap_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

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
    pub fn onSharedPainter(self: QBitmap, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QBitmap_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fromImageInPlace` instead
    ///
    pub const FromImageInPlace = fromImageInPlace;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` image: QImage `
    ///
    pub fn fromImageInPlace(self: QBitmap, image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_FromImageInPlace(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `superFromImageInPlace` instead
    ///
    pub const SuperFromImageInPlace = superFromImageInPlace;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitmap `
    ///
    /// ` image: QImage `
    ///
    pub fn superFromImageInPlace(self: QBitmap, image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QBitmap_SuperFromImageInPlace(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `onFromImageInPlace` instead
    ///
    pub const OnFromImageInPlace = onFromImageInPlace;

    /// Inherited from QPixmap
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBitmap`
    ///
    /// ` callback: *const fn (self: QBitmap, image: QImage) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFromImageInPlace(self: QBitmap, callback: *const fn (QBitmap, QImage) callconv(.c) QPixmap) void {
        qtc.QBitmap_OnFromImageInPlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

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
    pub fn getDecodedMetricF(self: QBitmap, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

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
    pub fn superGetDecodedMetricF(self: QBitmap, metricA: i32, metricB: i32) f64 {
        return qtc.QBitmap_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

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
    pub fn onGetDecodedMetricF(self: QBitmap, callback: *const fn (QBitmap, i32, i32) callconv(.c) f64) void {
        qtc.QBitmap_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitmap `
    ///
    pub fn delete(self: QBitmap) void {
        qtc.QBitmap_Delete(@ptrCast(self.ptr));
    }
};
