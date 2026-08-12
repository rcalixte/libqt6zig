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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPixmap object in C++ memory
    ///
    pub fn new() QPixmap {
        return .{ .ptr = qtc.QPixmap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn new2(w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_new2(@bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QSize `
    ///
    pub fn new3(param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QSize;
        return .{ .ptr = qtc.QPixmap_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn new4(fileName: []const u8) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QPixmap_new4(fileName_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xpm: []const [:0]const u8 `
    ///
    pub fn new5(allocator: std.mem.Allocator, xpm: []const [:0]const u8) QPixmap {
        const xpm_chararr = allocator.alloc([*:0]const u8, xpm.len) catch @panic("QPixmap.new5: Memory allocation failed");
        defer allocator.free(xpm_chararr);
        for (xpm, 0..xpm.len) |str, i|
            xpm_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QPixmap_new5(@ptrCast(xpm_chararr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixmap `
    ///
    pub fn new6(param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        return .{ .ptr = qtc.QPixmap_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn new7(fileName: []const u8, format: [:0]const u8) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QPixmap_new7(fileName_str, format_Cstring) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QPixmap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn new8(fileName: []const u8, format: [:0]const u8, flags: i32) QPixmap {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QPixmap_new8(fileName_str, format_Cstring, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn operatorAssign(self: QPixmap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QPixmap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` other: QPixmap `
    ///
    pub fn swap(self: QPixmap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPixmap;
        qtc.QPixmap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn toQVariant(self: QPixmap) QVariant {
        return .{ .ptr = qtc.QPixmap_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn isNull(self: QPixmap) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn devType(self: QPixmap) i32 {
        return qtc.QPixmap_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QPixmap, callback: *const fn () callconv(.c) i32) void {
        qtc.QPixmap_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn superDevType(self: QPixmap) i32 {
        return qtc.QPixmap_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn width(self: QPixmap) i32 {
        return qtc.QPixmap_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn height(self: QPixmap) i32 {
        return qtc.QPixmap_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn size(self: QPixmap) QSize {
        return .{ .ptr = qtc.QPixmap_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn rect(self: QPixmap) QRect {
        return .{ .ptr = qtc.QPixmap_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn depth(self: QPixmap) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultDepth` instead
    ///
    pub const DefaultDepth = defaultDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
    ///
    pub fn defaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    /// ### DEPRECATED: Use `fill` instead
    ///
    pub const Fill = fill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn fill(self: QPixmap) void {
        qtc.QPixmap_Fill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn mask(self: QPixmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QPixmap, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QPixmap_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn devicePixelRatio(self: QPixmap) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn setDevicePixelRatio(self: QPixmap, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// ### DEPRECATED: Use `deviceIndependentSize` instead
    ///
    pub const DeviceIndependentSize = deviceIndependentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn deviceIndependentSize(self: QPixmap) QSizeF {
        return .{ .ptr = qtc.QPixmap_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasAlpha` instead
    ///
    pub const HasAlpha = hasAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn hasAlpha(self: QPixmap) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasAlphaChannel` instead
    ///
    pub const HasAlphaChannel = hasAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn hasAlphaChannel(self: QPixmap) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createHeuristicMask` instead
    ///
    pub const CreateHeuristicMask = createHeuristicMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn createHeuristicMask(self: QPixmap) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor` instead
    ///
    pub const CreateMaskFromColor = createMaskFromColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` maskColor: QColor `
    ///
    pub fn createMaskFromColor(self: QPixmap, maskColor: anytype) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor(@ptrCast(self.ptr), @ptrCast(maskColor.ptr)) };
    }

    /// ### DEPRECATED: Use `scaled` instead
    ///
    pub const Scaled = scaled;

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
    pub fn scaled(self: QPixmap, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `scaled2` instead
    ///
    pub const Scaled2 = scaled2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` s: QSize `
    ///
    pub fn scaled2(self: QPixmap, s: anytype) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth` instead
    ///
    pub const ScaledToWidth = scaledToWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` w: i32 `
    ///
    pub fn scaledToWidth(self: QPixmap, w: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight` instead
    ///
    pub const ScaledToHeight = scaledToHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` h: i32 `
    ///
    pub fn scaledToHeight(self: QPixmap, h: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `transformed` instead
    ///
    pub const Transformed = transformed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: QTransform `
    ///
    pub fn transformed(self: QPixmap, param1: anytype) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `trueMatrix` instead
    ///
    pub const TrueMatrix = trueMatrix;

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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn toImage(self: QPixmap) QImage {
        return .{ .ptr = qtc.QPixmap_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromImage` instead
    ///
    pub const FromImage = fromImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn fromImage(image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImage(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `fromImageReader` instead
    ///
    pub const FromImageReader = fromImageReader;

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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn load(self: QPixmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Load(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `loadFromData` instead
    ///
    pub const LoadFromData = loadFromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` len: u32 `
    ///
    pub fn loadFromData(self: QPixmap, buf: *const u8, len: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len));
    }

    /// ### DEPRECATED: Use `loadFromData2` instead
    ///
    pub const LoadFromData2 = loadFromData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` data: []u8 `
    ///
    pub fn loadFromData2(self: QPixmap, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QPixmap_LoadFromData2(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn save(self: QPixmap, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QPixmap_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` device: QIODevice `
    ///
    pub fn save2(self: QPixmap, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QPixmap_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `convertFromImage` instead
    ///
    pub const ConvertFromImage = convertFromImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` img: QImage `
    ///
    pub fn convertFromImage(self: QPixmap, img: anytype) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self.ptr), @ptrCast(img.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn copy(self: QPixmap, x: i32, y: i32, _width: i32, _height: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `copy2` instead
    ///
    pub const Copy2 = copy2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn copy2(self: QPixmap) QPixmap {
        return .{ .ptr = qtc.QPixmap_Copy2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn scroll(self: QPixmap, dx: i32, dy: i32, x: i32, y: i32, _width: i32, _height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

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
    /// ` _rect: QRect `
    ///
    pub fn scroll2(self: QPixmap, dx: i32, dy: i32, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QPixmap_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `cacheKey` instead
    ///
    pub const CacheKey = cacheKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn cacheKey(self: QPixmap) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn isDetached(self: QPixmap) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn detach(self: QPixmap) void {
        qtc.QPixmap_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQBitmap` instead
    ///
    pub const IsQBitmap = isQBitmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn isQBitmap(self: QPixmap) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn paintEngine(self: QPixmap) QPaintEngine {
        return .{ .ptr = qtc.QPixmap_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QPixmap, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPixmap_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn superPaintEngine(self: QPixmap) QPaintEngine {
        return .{ .ptr = qtc.QPixmap_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorNot` instead
    ///
    pub const OperatorNot = operatorNot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    pub fn operatorNot(self: QPixmap) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QPixmap, param1: i32) i32 {
        return qtc.QPixmap_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QPixmap, callback: *const fn (QPixmap, i32) callconv(.c) i32) void {
        qtc.QPixmap_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

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
    pub fn superMetric(self: QPixmap, param1: i32) i32 {
        return qtc.QPixmap_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `fromImageInPlace` instead
    ///
    pub const FromImageInPlace = fromImageInPlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` image: QImage `
    ///
    pub fn fromImageInPlace(self: QPixmap, image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImageInPlace(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `onFromImageInPlace` instead
    ///
    pub const OnFromImageInPlace = onFromImageInPlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap `
    ///
    /// ` callback: *const fn (self: QPixmap, image: QImage) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFromImageInPlace(self: QPixmap, callback: *const fn (QPixmap, QImage) callconv(.c) QPixmap) void {
        qtc.QPixmap_OnFromImageInPlace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFromImageInPlace` instead
    ///
    pub const SuperFromImageInPlace = superFromImageInPlace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` image: QImage `
    ///
    pub fn superFromImageInPlace(self: QPixmap, image: anytype) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_SuperFromImageInPlace(@ptrCast(self.ptr), @ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `fill1` instead
    ///
    pub const Fill1 = fill1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` fillColor: QColor `
    ///
    pub fn fill1(self: QPixmap, fillColor: anytype) void {
        comptime _ = @TypeOf(fillColor)._is_QColor;
        qtc.QPixmap_Fill1(@ptrCast(self.ptr), @ptrCast(fillColor.ptr));
    }

    /// ### DEPRECATED: Use `createHeuristicMask1` instead
    ///
    pub const CreateHeuristicMask1 = createHeuristicMask1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` clipTight: bool `
    ///
    pub fn createHeuristicMask1(self: QPixmap, clipTight: bool) QBitmap {
        return .{ .ptr = qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor2` instead
    ///
    pub const CreateMaskFromColor2 = createMaskFromColor2;

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
    pub fn createMaskFromColor2(self: QPixmap, maskColor: anytype, mode: i32) QBitmap {
        comptime _ = @TypeOf(maskColor)._is_QColor;
        return .{ .ptr = qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self.ptr), @ptrCast(maskColor.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled3` instead
    ///
    pub const Scaled3 = scaled3;

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
    pub fn scaled3(self: QPixmap, w: i32, h: i32, aspectMode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled4` instead
    ///
    pub const Scaled4 = scaled4;

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
    pub fn scaled4(self: QPixmap, w: i32, h: i32, aspectMode: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled22` instead
    ///
    pub const Scaled22 = scaled22;

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
    pub fn scaled22(self: QPixmap, s: anytype, aspectMode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled32` instead
    ///
    pub const Scaled32 = scaled32;

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
    pub fn scaled32(self: QPixmap, s: anytype, aspectMode: i32, mode: i32) QPixmap {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QPixmap_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth2` instead
    ///
    pub const ScaledToWidth2 = scaledToWidth2;

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
    pub fn scaledToWidth2(self: QPixmap, w: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight2` instead
    ///
    pub const ScaledToHeight2 = scaledToHeight2;

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
    pub fn scaledToHeight2(self: QPixmap, h: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QPixmap_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `transformed2` instead
    ///
    pub const Transformed2 = transformed2;

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
    pub fn transformed2(self: QPixmap, param1: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QPixmap_Transformed2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `fromImage2` instead
    ///
    pub const FromImage2 = fromImage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn fromImage2(image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImage2(@ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `fromImageReader2` instead
    ///
    pub const FromImageReader2 = fromImageReader2;

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
    pub fn load2(self: QPixmap, fileName: []const u8, format: [:0]const u8) bool {
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
    pub fn load3(self: QPixmap, fileName: []const u8, format: [:0]const u8, flags: i32) bool {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` len: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn loadFromData3(self: QPixmap, buf: *const u8, len: u32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData3(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len), format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData4` instead
    ///
    pub const LoadFromData4 = loadFromData4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` len: u32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn loadFromData4(self: QPixmap, buf: *const u8, len: u32, format: [:0]const u8, flags: i32) bool {
        const format_Cstring = format.ptr;
        return qtc.QPixmap_LoadFromData4(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len), format_Cstring, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `loadFromData22` instead
    ///
    pub const LoadFromData22 = loadFromData22;

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
    pub fn loadFromData22(self: QPixmap, data: []u8, format: [:0]const u8) bool {
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
    pub fn loadFromData32(self: QPixmap, data: []u8, format: [:0]const u8, flags: i32) bool {
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
    pub fn save22(self: QPixmap, fileName: []const u8, format: [:0]const u8) bool {
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
    pub fn save3(self: QPixmap, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
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
    pub fn save23(self: QPixmap, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### DEPRECATED: Use `save32` instead
    ///
    pub const Save32 = save32;

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
    pub fn save32(self: QPixmap, device: anytype, format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QPixmap_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// ### DEPRECATED: Use `convertFromImage2` instead
    ///
    pub const ConvertFromImage2 = convertFromImage2;

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
    pub fn convertFromImage2(self: QPixmap, img: anytype, flags: i32) bool {
        comptime _ = @TypeOf(img)._is_QImage;
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self.ptr), @ptrCast(img.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `copy1` instead
    ///
    pub const Copy1 = copy1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` _rect: QRect `
    ///
    pub fn copy1(self: QPixmap, _rect: anytype) QPixmap {
        comptime _ = @TypeOf(_rect)._is_QRect;
        return .{ .ptr = qtc.QPixmap_Copy1(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `scroll7` instead
    ///
    pub const Scroll7 = scroll7;

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
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn scroll7(self: QPixmap, dx: i32, dy: i32, x: i32, y: i32, _width: i32, _height: i32, exposed: anytype) void {
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll7(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @bitCast(x), @bitCast(y), @bitCast(_width), @bitCast(_height), @ptrCast(exposed.ptr));
    }

    /// ### DEPRECATED: Use `scroll4` instead
    ///
    pub const Scroll4 = scroll4;

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
    /// ` _rect: QRect `
    ///
    /// ` exposed: QRegion `
    ///
    pub fn scroll4(self: QPixmap, dx: i32, dy: i32, _rect: anytype, exposed: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        comptime _ = @TypeOf(exposed)._is_QRegion;
        qtc.QPixmap_Scroll4(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr), @ptrCast(exposed.ptr));
    }

    /// ### DEPRECATED: Use `fromImageInPlace2` instead
    ///
    pub const FromImageInPlace2 = fromImageInPlace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn fromImageInPlace2(self: QPixmap, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_FromImageInPlace2(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onFromImageInPlace2` instead
    ///
    pub const OnFromImageInPlace2 = onFromImageInPlace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixmap `
    ///
    /// ` callback: *const fn (self: QPixmap, image: QImage, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFromImageInPlace2(self: QPixmap, callback: *const fn (QPixmap, QImage, i32) callconv(.c) QPixmap) void {
        qtc.QPixmap_OnFromImageInPlace2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFromImageInPlace2` instead
    ///
    pub const SuperFromImageInPlace2 = superFromImageInPlace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixmap `
    ///
    /// ` image: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn superFromImageInPlace2(self: QPixmap, image: anytype, flags: i32) QPixmap {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QPixmap_SuperFromImageInPlace2(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(flags)) };
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
    /// ` self: QPixmap `
    ///
    pub fn paintingActive(self: QPixmap) bool {
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
    /// ` self: QPixmap `
    ///
    pub fn widthMM(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn heightMM(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn logicalDpiX(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn logicalDpiY(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn physicalDpiX(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn physicalDpiY(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    pub fn devicePixelRatioF(self: QPixmap) f64 {
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
    /// ` self: QPixmap `
    ///
    pub fn colorCount(self: QPixmap) i32 {
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
    /// ` self: QPixmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QPixmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPixmap_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPixmap `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QPixmap, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPixmap_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QPixmap, callback: *const fn (QPixmap, QPainter) callconv(.c) void) void {
        qtc.QPixmap_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QPixmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPixmap_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPixmap `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QPixmap, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPixmap_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QPixmap, callback: *const fn (QPixmap, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPixmap_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    pub fn sharedPainter(self: QPixmap) QPainter {
        return .{ .ptr = qtc.QPixmap_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPixmap `
    ///
    pub fn superSharedPainter(self: QPixmap) QPainter {
        return .{ .ptr = qtc.QPixmap_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QPixmap, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPixmap_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QPixmap, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPixmap `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QPixmap, metricA: i32, metricB: i32) f64 {
        return qtc.QPixmap_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPixmap`
    ///
    /// ` callback: *const fn (self: QPixmap, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QPixmap, callback: *const fn (QPixmap, i32, i32) callconv(.c) f64) void {
        qtc.QPixmap_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixmap `
    ///
    pub fn delete(self: QPixmap) void {
        qtc.QPixmap_Delete(@ptrCast(self.ptr));
    }
};
