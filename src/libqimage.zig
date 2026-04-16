const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QColorSpace = @import("libqt6").QColorSpace;
const QColorTransform = @import("libqt6").QColorTransform;
const QIODevice = @import("libqt6").QIODevice;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPainter = @import("libqt6").QPainter;
const QPixelFormat = @import("libqt6").QPixelFormat;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qimage_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html)
pub const QImage = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImage,

    pub const _is_QImage = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QImage object.
    ///
    pub fn New() QImage {
        return .{ .ptr = qtc.QImage_new() };
    }

    /// New2 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New2(size: anytype, format: i32) QImage {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QImage_new2(@ptrCast(size.ptr), @bitCast(format)) };
    }

    /// New3 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New3(width: i32, height: i32, format: i32) QImage {
        return .{ .ptr = qtc.QImage_new3(@bitCast(width), @bitCast(height), @bitCast(format)) };
    }

    /// New4 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New4(data: *u8, width: i32, height: i32, format: i32) QImage {
        return .{ .ptr = qtc.QImage_new4(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format)) };
    }

    /// New5 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New5(data: *const u8, width: i32, height: i32, format: i32) QImage {
        return .{ .ptr = qtc.QImage_new5(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format)) };
    }

    /// New6 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New6(data: *u8, width: i32, height: i32, bytesPerLine: isize, format: i32) QImage {
        return .{ .ptr = qtc.QImage_new6(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format)) };
    }

    /// New7 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn New7(data: *const u8, width: i32, height: i32, bytesPerLine: isize, format: i32) QImage {
        return .{ .ptr = qtc.QImage_new7(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format)) };
    }

    /// New8 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xpm: []const [:0]const u8 `
    ///
    pub fn New8(allocator: std.mem.Allocator, xpm: []const [:0]const u8) QImage {
        const xpm_chararr = allocator.alloc([*c]const u8, xpm.len) catch @panic("qimage.New8: Memory allocation failed");
        defer allocator.free(xpm_chararr);
        for (xpm, 0..xpm.len) |str, i|
            xpm_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QImage_new8(xpm_chararr.ptr) };
    }

    /// New9 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New9(fileName: []const u8) QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QImage_new9(fileName_str) };
    }

    /// New10 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QImage `
    ///
    pub fn New10(param1: anytype) QImage {
        comptime _ = @TypeOf(param1)._is_QImage;
        return .{ .ptr = qtc.QImage_new10(@ptrCast(param1.ptr)) };
    }

    /// New11 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn New11(data: *u8, width: i32, height: i32, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new11(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// New12 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn New12(data: *u8, width: i32, height: i32, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new12(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// New13 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn New13(data: *const u8, width: i32, height: i32, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new13(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// New14 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn New14(data: *const u8, width: i32, height: i32, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new14(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// New15 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn New15(data: *u8, width: i32, height: i32, bytesPerLine: isize, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new15(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// New16 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn New16(data: *u8, width: i32, height: i32, bytesPerLine: isize, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new16(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// New17 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn New17(data: *const u8, width: i32, height: i32, bytesPerLine: isize, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new17(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// New18 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` bytesPerLine: isize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn New18(data: *const u8, width: i32, height: i32, bytesPerLine: isize, format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new18(@ptrCast(data), @bitCast(width), @bitCast(height), @bitCast(bytesPerLine), @bitCast(format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// New19 constructs a new QImage object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn New19(fileName: []const u8, format: [:0]const u8) QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QImage_new19(fileName_str, format_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn OperatorAssign(self: QImage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QImage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` other: QImage `
    ///
    pub fn Swap(self: QImage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QImage;
        qtc.QImage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn IsNull(self: QImage) bool {
        return qtc.QImage_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DevType(self: QImage) i32 {
        return qtc.QImage_DevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QImage, callback: *const fn () callconv(.c) i32) void {
        qtc.QImage_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SuperDevType(self: QImage) i32 {
        return qtc.QImage_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn OperatorEqual(self: QImage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QImage;
        return qtc.QImage_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn OperatorNotEqual(self: QImage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QImage;
        return qtc.QImage_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn ToQVariant(self: QImage) QVariant {
        return .{ .ptr = qtc.QImage_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Detach(self: QImage) void {
        qtc.QImage_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn IsDetached(self: QImage) bool {
        return qtc.QImage_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Copy(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_Copy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Copy2(self: QImage, x: i32, y: i32, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_Copy2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn Format(self: QImage) i32 {
        return qtc.QImage_Format(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn ConvertToFormat(self: QImage, f: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormat(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` colorTable: []u32 `
    ///
    pub fn ConvertToFormat2(self: QImage, f: i32, colorTable: []u32) QImage {
        const colorTable_list = qtc.libqt_list{
            .len = colorTable.len,
            .data = colorTable.ptr,
        };
        return .{ .ptr = qtc.QImage_ConvertToFormat2(@ptrCast(self.ptr), @bitCast(f), colorTable_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#reinterpretAsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn ReinterpretAsFormat(self: QImage, f: i32) bool {
        return qtc.QImage_ReinterpretAsFormat(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn ConvertedTo(self: QImage, f: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertedTo(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn ConvertTo(self: QImage, f: i32) void {
        qtc.QImage_ConvertTo(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Width(self: QImage) i32 {
        return qtc.QImage_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Height(self: QImage) i32 {
        return qtc.QImage_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Size(self: QImage) QSize {
        return .{ .ptr = qtc.QImage_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Rect(self: QImage) QRect {
        return .{ .ptr = qtc.QImage_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Depth(self: QImage) i32 {
        return qtc.QImage_Depth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn ColorCount(self: QImage) i32 {
        return qtc.QImage_ColorCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bitPlaneCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn BitPlaneCount(self: QImage) i32 {
        return qtc.QImage_BitPlaneCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` i: i32 `
    ///
    pub fn Color(self: QImage, i: i32) u32 {
        return qtc.QImage_Color(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` i: i32 `
    ///
    /// ` c: u32 `
    ///
    pub fn SetColor(self: QImage, i: i32, c: u32) void {
        qtc.QImage_SetColor(@ptrCast(self.ptr), @bitCast(i), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorCount: i32 `
    ///
    pub fn SetColorCount(self: QImage, colorCount: i32) void {
        qtc.QImage_SetColorCount(@ptrCast(self.ptr), @bitCast(colorCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#allGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn AllGray(self: QImage) bool {
        return qtc.QImage_AllGray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isGrayscale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn IsGrayscale(self: QImage) bool {
        return qtc.QImage_IsGrayscale(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Bits(self: QImage) ?*u8 {
        return @ptrCast(qtc.QImage_Bits(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Bits2(self: QImage) ?*const u8 {
        return @ptrCast(qtc.QImage_Bits2(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#constBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn ConstBits(self: QImage) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstBits(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#sizeInBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SizeInBytes(self: QImage) isize {
        return qtc.QImage_SizeInBytes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn ScanLine(self: QImage, param1: i32) ?*u8 {
        return @ptrCast(qtc.QImage_ScanLine(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn ScanLine2(self: QImage, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ScanLine2(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#constScanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn ConstScanLine(self: QImage, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstScanLine(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bytesPerLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn BytesPerLine(self: QImage) isize {
        return qtc.QImage_BytesPerLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Valid(self: QImage, x: i32, y: i32) bool {
        return qtc.QImage_Valid(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn Valid2(self: QImage, pt: anytype) bool {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_Valid2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn PixelIndex(self: QImage, x: i32, y: i32) i32 {
        return qtc.QImage_PixelIndex(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn PixelIndex2(self: QImage, pt: anytype) i32 {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_PixelIndex2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Pixel(self: QImage, x: i32, y: i32) u32 {
        return qtc.QImage_Pixel(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn Pixel2(self: QImage, pt: anytype) u32 {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_Pixel2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setPixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` index_or_rgb: u32 `
    ///
    pub fn SetPixel(self: QImage, x: i32, y: i32, index_or_rgb: u32) void {
        qtc.QImage_SetPixel(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(index_or_rgb));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setPixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    /// ` index_or_rgb: u32 `
    ///
    pub fn SetPixel2(self: QImage, pt: anytype, index_or_rgb: u32) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QImage_SetPixel2(@ptrCast(self.ptr), @ptrCast(pt.ptr), @bitCast(index_or_rgb));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn PixelColor(self: QImage, x: i32, y: i32) QColor {
        return .{ .ptr = qtc.QImage_PixelColor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn PixelColor2(self: QImage, pt: anytype) QColor {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QImage_PixelColor2(@ptrCast(self.ptr), @ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` c: QColor `
    ///
    pub fn SetPixelColor(self: QImage, x: i32, y: i32, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QImage_SetPixelColor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    /// ` c: QColor `
    ///
    pub fn SetPixelColor2(self: QImage, pt: anytype, c: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QImage_SetPixelColor2(@ptrCast(self.ptr), @ptrCast(pt.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColorTable(self: QImage, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QImage_ColorTable(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qimage.ColorTable: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colors: []u32 `
    ///
    pub fn SetColorTable(self: QImage, colors: []u32) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = colors.ptr,
        };
        qtc.QImage_SetColorTable(@ptrCast(self.ptr), colors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DevicePixelRatio(self: QImage) f64 {
        return qtc.QImage_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn SetDevicePixelRatio(self: QImage, scaleFactor: f64) void {
        qtc.QImage_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DeviceIndependentSize(self: QImage) QSizeF {
        return .{ .ptr = qtc.QImage_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pixel: u32 `
    ///
    pub fn Fill(self: QImage, pixel: u32) void {
        qtc.QImage_Fill(@ptrCast(self.ptr), @bitCast(pixel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` color: QColor `
    ///
    pub fn Fill2(self: QImage, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QImage_Fill2(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` color: qnamespace_enums.GlobalColor `
    ///
    pub fn Fill3(self: QImage, color: i32) void {
        qtc.QImage_Fill3(@ptrCast(self.ptr), @bitCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn HasAlphaChannel(self: QImage) bool {
        return qtc.QImage_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` alphaChannel: QImage `
    ///
    pub fn SetAlphaChannel(self: QImage, alphaChannel: anytype) void {
        comptime _ = @TypeOf(alphaChannel)._is_QImage;
        qtc.QImage_SetAlphaChannel(@ptrCast(self.ptr), @ptrCast(alphaChannel.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn CreateAlphaMask(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_CreateAlphaMask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn CreateHeuristicMask(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` color: u32 `
    ///
    pub fn CreateMaskFromColor(self: QImage, color: u32) QImage {
        return .{ .ptr = qtc.QImage_CreateMaskFromColor(@ptrCast(self.ptr), @bitCast(color)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Scaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` s: QSize `
    ///
    pub fn Scaled2(self: QImage, s: anytype) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    pub fn ScaledToWidth(self: QImage, w: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` h: i32 `
    ///
    pub fn ScaledToHeight(self: QImage, h: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn Transformed(self: QImage, matrix: anytype) QImage {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QImage_Transformed(@ptrCast(self.ptr), @ptrCast(matrix.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#trueMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTransform `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn TrueMatrix(param1: anytype, w: i32, h: i32) QTransform {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QImage_TrueMatrix(@ptrCast(param1.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Mirrored(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_Mirrored(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn RgbSwapped(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_RgbSwapped(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Mirror(self: QImage) void {
        qtc.QImage_Mirror(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn RgbSwap(self: QImage) void {
        qtc.QImage_RgbSwap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn InvertPixels(self: QImage) void {
        qtc.QImage_InvertPixels(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn ColorSpace(self: QImage) QColorSpace {
        return .{ .ptr = qtc.QImage_ColorSpace(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn ConvertedToColorSpace(self: QImage, colorSpace: anytype) QImage {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn ConvertedToColorSpace2(self: QImage, colorSpace: anytype, format: i32) QImage {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace2(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn ConvertToColorSpace(self: QImage, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn ConvertToColorSpace2(self: QImage, colorSpace: anytype, format: i32) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace2(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    pub fn SetColorSpace(self: QImage, colorSpace: anytype) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QImage_SetColorSpace(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    pub fn ColorTransformed(self: QImage, transform: anytype) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed(@ptrCast(self.ptr), @ptrCast(transform.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn ColorTransformed2(self: QImage, transform: anytype, format: i32) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed2(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    pub fn ApplyColorTransform(self: QImage, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn ApplyColorTransform2(self: QImage, transform: anytype, format: i32) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform2(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Load(self: QImage, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QImage_Load(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Load2(self: QImage, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Load2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    pub fn LoadFromData(self: QImage, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_LoadFromData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn LoadFromData2(self: QImage, buf: *const u8, lenVal: i32) bool {
        return qtc.QImage_LoadFromData2(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    pub fn LoadFromData3(self: QImage, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_LoadFromData3(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Save(self: QImage, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Save2(self: QImage, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QImage_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn FromData(data: []u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QImage_FromData(data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn FromData2(data: *const u8, size: i32) QImage {
        return .{ .ptr = qtc.QImage_FromData2(@ptrCast(data), @bitCast(size)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn FromData3(data: []u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QImage_FromData3(data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn CacheKey(self: QImage) i64 {
        return qtc.QImage_CacheKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn PaintEngine(self: QImage) QPaintEngine {
        return .{ .ptr = qtc.QImage_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QImage, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QImage_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SuperPaintEngine(self: QImage) QPaintEngine {
        return .{ .ptr = qtc.QImage_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DotsPerMeterX(self: QImage) i32 {
        return qtc.QImage_DotsPerMeterX(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DotsPerMeterY(self: QImage) i32 {
        return qtc.QImage_DotsPerMeterY(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` dotsPerMeterX: i32 `
    ///
    pub fn SetDotsPerMeterX(self: QImage, dotsPerMeterX: i32) void {
        qtc.QImage_SetDotsPerMeterX(@ptrCast(self.ptr), @bitCast(dotsPerMeterX));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` dotsPerMeterY: i32 `
    ///
    pub fn SetDotsPerMeterY(self: QImage, dotsPerMeterY: i32) void {
        qtc.QImage_SetDotsPerMeterY(@ptrCast(self.ptr), @bitCast(dotsPerMeterY));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn Offset(self: QImage) QPoint {
        return .{ .ptr = qtc.QImage_Offset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SetOffset(self: QImage, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.QImage_SetOffset(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#textKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextKeys(self: QImage, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QImage_TextKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QImage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImage_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetText(self: QImage, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QImage_SetText(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn PixelFormat(self: QImage) QPixelFormat {
        return .{ .ptr = qtc.QImage_PixelFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#toPixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qimage_enums.Format `
    ///
    pub fn ToPixelFormat(format: i32) QPixelFormat {
        return .{ .ptr = qtc.QImage_ToPixelFormat(@bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn ToImageFormat(format: anytype) i32 {
        comptime _ = @TypeOf(format)._is_QPixelFormat;
        return qtc.QImage_ToImageFormat(@ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QImage, metric: i32) i32 {
        return qtc.QImage_Metric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, metric: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QImage, callback: *const fn (QImage, i32) callconv(.c) i32) void {
        qtc.QImage_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QImage, metric: i32) i32 {
        return qtc.QImage_SuperMetric(@ptrCast(self.ptr), @bitCast(metric));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontal: bool `
    ///
    /// ` vertical: bool `
    ///
    pub fn MirroredHelper(self: QImage, horizontal: bool, vertical: bool) QImage {
        return .{ .ptr = qtc.QImage_MirroredHelper(@ptrCast(self.ptr), horizontal, vertical) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, horizontal: bool, vertical: bool) callconv(.c) QImage `
    ///
    pub fn OnMirroredHelper(self: QImage, callback: *const fn (QImage, bool, bool) callconv(.c) QImage) void {
        qtc.QImage_OnMirroredHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMirroredHelper` instead
    ///
    pub const QBaseMirroredHelper = SuperMirroredHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontal: bool `
    ///
    /// ` vertical: bool `
    ///
    pub fn SuperMirroredHelper(self: QImage, horizontal: bool, vertical: bool) QImage {
        return .{ .ptr = qtc.QImage_SuperMirroredHelper(@ptrCast(self.ptr), horizontal, vertical) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn RgbSwappedHelper(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_RgbSwappedHelper(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn () callconv(.c) QImage `
    ///
    pub fn OnRgbSwappedHelper(self: QImage, callback: *const fn () callconv(.c) QImage) void {
        qtc.QImage_OnRgbSwappedHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRgbSwappedHelper` instead
    ///
    pub const QBaseRgbSwappedHelper = SuperRgbSwappedHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SuperRgbSwappedHelper(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_SuperRgbSwappedHelper(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontal: bool `
    ///
    /// ` vertical: bool `
    ///
    pub fn MirroredInplace(self: QImage, horizontal: bool, vertical: bool) void {
        qtc.QImage_MirroredInplace(@ptrCast(self.ptr), horizontal, vertical);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, horizontal: bool, vertical: bool) callconv(.c) void `
    ///
    pub fn OnMirroredInplace(self: QImage, callback: *const fn (QImage, bool, bool) callconv(.c) void) void {
        qtc.QImage_OnMirroredInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMirroredInplace` instead
    ///
    pub const QBaseMirroredInplace = SuperMirroredInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontal: bool `
    ///
    /// ` vertical: bool `
    ///
    pub fn SuperMirroredInplace(self: QImage, horizontal: bool, vertical: bool) void {
        qtc.QImage_SuperMirroredInplace(@ptrCast(self.ptr), horizontal, vertical);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn RgbSwappedInplace(self: QImage) void {
        qtc.QImage_RgbSwappedInplace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRgbSwappedInplace(self: QImage, callback: *const fn () callconv(.c) void) void {
        qtc.QImage_OnRgbSwappedInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRgbSwappedInplace` instead
    ///
    pub const QBaseRgbSwappedInplace = SuperRgbSwappedInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SuperRgbSwappedInplace(self: QImage) void {
        qtc.QImage_SuperRgbSwappedInplace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertToFormatHelper(self: QImage, format: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(format), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) QImage `
    ///
    pub fn OnConvertToFormatHelper(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) QImage) void {
        qtc.QImage_OnConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConvertToFormatHelper` instead
    ///
    pub const QBaseConvertToFormatHelper = SuperConvertToFormatHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn SuperConvertToFormatHelper(self: QImage, format: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_SuperConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(format), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertToFormatInplace(self: QImage, format: i32, flags: i32) bool {
        return qtc.QImage_ConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(format), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, format: qimage_enums.Format, flags: flag of qnamespace_enums.ImageConversionFlag) callconv(.c) bool `
    ///
    pub fn OnConvertToFormatInplace(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) bool) void {
        qtc.QImage_OnConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConvertToFormatInplace` instead
    ///
    pub const QBaseConvertToFormatInplace = SuperConvertToFormatInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn SuperConvertToFormatInplace(self: QImage, format: i32, flags: i32) bool {
        return qtc.QImage_SuperConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(format), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SmoothScaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_SmoothScaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, w: i32, h: i32) callconv(.c) QImage `
    ///
    pub fn OnSmoothScaled(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) QImage) void {
        qtc.QImage_OnSmoothScaled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSmoothScaled` instead
    ///
    pub const QBaseSmoothScaled = SuperSmoothScaled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SuperSmoothScaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_SuperSmoothScaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DetachMetadata(self: QImage) void {
        qtc.QImage_DetachMetadata(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDetachMetadata(self: QImage, callback: *const fn () callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDetachMetadata` instead
    ///
    pub const QBaseDetachMetadata = SuperDetachMetadata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SuperDetachMetadata(self: QImage) void {
        qtc.QImage_SuperDetachMetadata(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` rect: QRect `
    ///
    pub fn Copy1(self: QImage, rect: anytype) QImage {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QImage_Copy1(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertToFormat22(self: QImage, f: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormat22(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` colorTable: []u32 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertToFormat3(self: QImage, f: i32, colorTable: []u32, flags: i32) QImage {
        const colorTable_list = qtc.libqt_list{
            .len = colorTable.len,
            .data = colorTable.ptr,
        };
        return .{ .ptr = qtc.QImage_ConvertToFormat3(@ptrCast(self.ptr), @bitCast(f), colorTable_list, @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertedTo2(self: QImage, f: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertedTo2(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertTo2(self: QImage, f: i32, flags: i32) void {
        qtc.QImage_ConvertTo2(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn CreateAlphaMask1(self: QImage, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_CreateAlphaMask1(@ptrCast(self.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` clipTight: bool `
    ///
    pub fn CreateHeuristicMask1(self: QImage, clipTight: bool) QImage {
        return .{ .ptr = qtc.QImage_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` color: u32 `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn CreateMaskFromColor2(self: QImage, color: u32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_CreateMaskFromColor2(@ptrCast(self.ptr), @bitCast(color), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled3(self: QImage, w: i32, h: i32, aspectMode: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled4(self: QImage, w: i32, h: i32, aspectMode: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    pub fn Scaled22(self: QImage, s: anytype, aspectMode: i32) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` s: QSize `
    ///
    /// ` aspectMode: qnamespace_enums.AspectRatioMode `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Scaled32(self: QImage, s: anytype, aspectMode: i32, mode: i32) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToWidth2(self: QImage, w: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn ScaledToHeight2(self: QImage, h: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` mode: qnamespace_enums.TransformationMode `
    ///
    pub fn Transformed2(self: QImage, matrix: anytype, mode: i32) QImage {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QImage_Transformed2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    pub fn Mirrored1(self: QImage, horizontally: bool) QImage {
        return .{ .ptr = qtc.QImage_Mirrored1(@ptrCast(self.ptr), horizontally) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    /// ` vertically: bool `
    ///
    pub fn Mirrored2(self: QImage, horizontally: bool, vertically: bool) QImage {
        return .{ .ptr = qtc.QImage_Mirrored2(@ptrCast(self.ptr), horizontally, vertically) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    pub fn Mirror1(self: QImage, horizontally: bool) void {
        qtc.QImage_Mirror1(@ptrCast(self.ptr), horizontally);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    /// ` vertically: bool `
    ///
    pub fn Mirror2(self: QImage, horizontally: bool, vertically: bool) void {
        qtc.QImage_Mirror2(@ptrCast(self.ptr), horizontally, vertically);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: qimage_enums.InvertMode `
    ///
    pub fn InvertPixels1(self: QImage, param1: i32) void {
        qtc.QImage_InvertPixels1(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertedToColorSpace3(self: QImage, colorSpace: anytype, format: i32, flags: i32) QImage {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace3(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr), @bitCast(format), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colorSpace: QColorSpace `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ConvertToColorSpace3(self: QImage, colorSpace: anytype, format: i32, flags: i32) void {
        comptime _ = @TypeOf(colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace3(@ptrCast(self.ptr), @ptrCast(colorSpace.ptr), @bitCast(format), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ColorTransformed3(self: QImage, transform: anytype, format: i32, flags: i32) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed3(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(format), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn ApplyColorTransform3(self: QImage, transform: anytype, format: i32, flags: i32) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform3(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(format), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Load22(self: QImage, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Load22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData22(self: QImage, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData22(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData32(self: QImage, buf: *const u8, lenVal: i32, format: [:0]const u8) bool {
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData32(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(lenVal), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn LoadFromData23(self: QImage, data: []u8, format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_LoadFromData23(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save22(self: QImage, fileName: []const u8, format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Save22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save3(self: QImage, fileName: []const u8, format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = format.ptr;
        return qtc.QImage_Save3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn Save23(self: QImage, device: anytype, format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QImage_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn Save32(self: QImage, device: anytype, format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = format.ptr;
        return qtc.QImage_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn FromData22(data: []u8, format: [:0]const u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QImage_FromData22(data_str, format_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn FromData32(data: *const u8, size: i32, format: [:0]const u8) QImage {
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QImage_FromData32(@ptrCast(data), @bitCast(size), format_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` format: [:0]const u8 `
    ///
    pub fn FromData23(data: []u8, format: [:0]const u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = format.ptr;
        return .{ .ptr = qtc.QImage_FromData23(data_str, format_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Text1(self: QImage, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QImage_Text1(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` invalidateCache: bool `
    ///
    pub fn DetachMetadata1(self: QImage, invalidateCache: bool) void {
        qtc.QImage_DetachMetadata1(@ptrCast(self.ptr), invalidateCache);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage `
    ///
    /// ` callback: *const fn (self: QImage, invalidateCache: bool) callconv(.c) void `
    ///
    pub fn OnDetachMetadata1(self: QImage, callback: *const fn (QImage, bool) callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDetachMetadata1` instead
    ///
    pub const QBaseDetachMetadata1 = SuperDetachMetadata1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` invalidateCache: bool `
    ///
    pub fn SuperDetachMetadata1(self: QImage, invalidateCache: bool) void {
        qtc.QImage_SuperDetachMetadata1(@ptrCast(self.ptr), invalidateCache);
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn PaintingActive(self: QImage) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn WidthMM(self: QImage) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn HeightMM(self: QImage) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn LogicalDpiX(self: QImage) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn LogicalDpiY(self: QImage) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn PhysicalDpiX(self: QImage) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn PhysicalDpiY(self: QImage) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn DevicePixelRatioF(self: QImage) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
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
    /// ` self: QImage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QImage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QImage_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QImage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QImage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QImage_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QImage, callback: *const fn (QImage, QPainter) callconv(.c) void) void {
        qtc.QImage_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QImage, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QImage_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QImage `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QImage, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QImage_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QImage, callback: *const fn (QImage, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QImage_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn SharedPainter(self: QImage) QPainter {
        return .{ .ptr = qtc.QImage_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QImage `
    ///
    pub fn SuperSharedPainter(self: QImage) QPainter {
        return .{ .ptr = qtc.QImage_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QImage, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QImage_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QImage, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QImage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QImage, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) f64) void {
        qtc.QImage_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dtor.QImage)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImage `
    ///
    pub fn Delete(self: QImage) void {
        qtc.QImage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#public-types)
pub const enums = struct {
    pub const InvertMode = enum(i32) {
        pub const InvertRgb: i32 = 0;
        pub const InvertRgba: i32 = 1;
    };

    pub const Format = enum(i32) {
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
