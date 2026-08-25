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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImage object in C++ memory
    ///
    pub fn new() QImage {
        return .{ .ptr = qtc.QImage_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new2(_size: anytype, _format: i32) QImage {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QImage_new2(@ptrCast(_size.ptr), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new3(_width: i32, _height: i32, _format: i32) QImage {
        return .{ .ptr = qtc.QImage_new3(@bitCast(_width), @bitCast(_height), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new4(data: *u8, _width: i32, _height: i32, _format: i32) QImage {
        return .{ .ptr = qtc.QImage_new4(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new5(data: *const u8, _width: i32, _height: i32, _format: i32) QImage {
        return .{ .ptr = qtc.QImage_new5(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new6(data: *u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32) QImage {
        return .{ .ptr = qtc.QImage_new6(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn new7(data: *const u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32) QImage {
        return .{ .ptr = qtc.QImage_new7(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xpm: []const [:0]const u8 `
    ///
    pub fn new8(allocator: std.mem.Allocator, xpm: []const [:0]const u8) QImage {
        const xpm_chararr = allocator.alloc([*:0]const u8, xpm.len) catch @panic("QImage.new8: Memory allocation failed");
        defer allocator.free(xpm_chararr);
        for (xpm, 0..xpm.len) |str, i|
            xpm_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QImage_new8(@ptrCast(xpm_chararr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn new9(fileName: []const u8) QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QImage_new9(fileName_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QImage `
    ///
    pub fn new10(param1: anytype) QImage {
        comptime _ = @TypeOf(param1)._is_QImage;
        return .{ .ptr = qtc.QImage_new10(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn new11(data: *u8, _width: i32, _height: i32, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new11(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn new12(data: *u8, _width: i32, _height: i32, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new12(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn new13(data: *const u8, _width: i32, _height: i32, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new13(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn new14(data: *const u8, _width: i32, _height: i32, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new14(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn new15(data: *u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new15(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// ### DEPRECATED: Use `new16` instead
    ///
    pub const New16 = new16;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn new16(data: *u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new16(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// ### DEPRECATED: Use `new17` instead
    ///
    pub const New17 = new17;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    pub fn new17(data: *const u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void) QImage {
        return .{ .ptr = qtc.QImage_new17(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction))) };
    }

    /// ### DEPRECATED: Use `new18` instead
    ///
    pub const New18 = new18;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _bytesPerLine: isize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` cleanupFunction: *const fn (funcparam1: ?*anyopaque) callconv(.c) void `
    ///
    /// ` cleanupInfo: ?*anyopaque `
    ///
    pub fn new18(data: *const u8, _width: i32, _height: i32, _bytesPerLine: isize, _format: i32, cleanupFunction: *const fn (?*anyopaque) callconv(.c) void, cleanupInfo: ?*anyopaque) QImage {
        return .{ .ptr = qtc.QImage_new18(@ptrCast(data), @bitCast(_width), @bitCast(_height), @bitCast(_bytesPerLine), @bitCast(_format), @bitCast(@intFromPtr(cleanupFunction)), @ptrCast(cleanupInfo)) };
    }

    /// ### DEPRECATED: Use `new19` instead
    ///
    pub const New19 = new19;

    /// Allocate a new QImage object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn new19(fileName: []const u8, _format: [:0]const u8) QImage {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = _format.ptr;
        return .{ .ptr = qtc.QImage_new19(fileName_str, format_Cstring) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn operatorAssign(self: QImage, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QImage_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` other: QImage `
    ///
    pub fn swap(self: QImage, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QImage;
        qtc.QImage_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn isNull(self: QImage) bool {
        return qtc.QImage_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn devType(self: QImage) i32 {
        return qtc.QImage_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: QImage, callback: *const fn () callconv(.c) i32) void {
        qtc.QImage_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devType)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn superDevType(self: QImage) i32 {
        return qtc.QImage_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn operatorEqual(self: QImage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QImage;
        return qtc.QImage_OperatorEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: QImage `
    ///
    pub fn operatorNotEqual(self: QImage, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QImage;
        return qtc.QImage_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn toQVariant(self: QImage) QVariant {
        return .{ .ptr = qtc.QImage_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn detach(self: QImage) void {
        qtc.QImage_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn isDetached(self: QImage) bool {
        return qtc.QImage_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn copy(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_Copy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `copy2` instead
    ///
    pub const Copy2 = copy2;

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
    pub fn copy2(self: QImage, x: i32, y: i32, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_Copy2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

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
    pub fn format(self: QImage) i32 {
        return qtc.QImage_Format(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `convertToFormat` instead
    ///
    pub const ConvertToFormat = convertToFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn convertToFormat(self: QImage, f: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormat(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `convertToFormat2` instead
    ///
    pub const ConvertToFormat2 = convertToFormat2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` _colorTable: []u32 `
    ///
    pub fn convertToFormat2(self: QImage, f: i32, _colorTable: []u32) QImage {
        const colorTable_list = qtc.libqt_list{
            .len = _colorTable.len,
            .data = _colorTable.ptr,
        };
        return .{ .ptr = qtc.QImage_ConvertToFormat2(@ptrCast(self.ptr), @bitCast(f), colorTable_list) };
    }

    /// ### DEPRECATED: Use `reinterpretAsFormat` instead
    ///
    pub const ReinterpretAsFormat = reinterpretAsFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#reinterpretAsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn reinterpretAsFormat(self: QImage, f: i32) bool {
        return qtc.QImage_ReinterpretAsFormat(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `convertedTo` instead
    ///
    pub const ConvertedTo = convertedTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn convertedTo(self: QImage, f: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertedTo(@ptrCast(self.ptr), @bitCast(f)) };
    }

    /// ### DEPRECATED: Use `convertTo` instead
    ///
    pub const ConvertTo = convertTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    pub fn convertTo(self: QImage, f: i32) void {
        qtc.QImage_ConvertTo(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn width(self: QImage) i32 {
        return qtc.QImage_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn height(self: QImage) i32 {
        return qtc.QImage_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn size(self: QImage) QSize {
        return .{ .ptr = qtc.QImage_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn rect(self: QImage) QRect {
        return .{ .ptr = qtc.QImage_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn depth(self: QImage) i32 {
        return qtc.QImage_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn colorCount(self: QImage) i32 {
        return qtc.QImage_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bitPlaneCount` instead
    ///
    pub const BitPlaneCount = bitPlaneCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bitPlaneCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn bitPlaneCount(self: QImage) i32 {
        return qtc.QImage_BitPlaneCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` i: i32 `
    ///
    pub fn color(self: QImage, i: i32) u32 {
        return qtc.QImage_Color(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

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
    pub fn setColor(self: QImage, i: i32, c: u32) void {
        qtc.QImage_SetColor(@ptrCast(self.ptr), @bitCast(i), @bitCast(c));
    }

    /// ### DEPRECATED: Use `setColorCount` instead
    ///
    pub const SetColorCount = setColorCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorCount: i32 `
    ///
    pub fn setColorCount(self: QImage, _colorCount: i32) void {
        qtc.QImage_SetColorCount(@ptrCast(self.ptr), @bitCast(_colorCount));
    }

    /// ### DEPRECATED: Use `allGray` instead
    ///
    pub const AllGray = allGray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#allGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn allGray(self: QImage) bool {
        return qtc.QImage_AllGray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isGrayscale` instead
    ///
    pub const IsGrayscale = isGrayscale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#isGrayscale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn isGrayscale(self: QImage) bool {
        return qtc.QImage_IsGrayscale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bits` instead
    ///
    pub const Bits = bits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn bits(self: QImage) ?*u8 {
        return @ptrCast(qtc.QImage_Bits(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `bits2` instead
    ///
    pub const Bits2 = bits2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn bits2(self: QImage) ?*const u8 {
        return @ptrCast(qtc.QImage_Bits2(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `constBits` instead
    ///
    pub const ConstBits = constBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#constBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn constBits(self: QImage) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstBits(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `sizeInBytes` instead
    ///
    pub const SizeInBytes = sizeInBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#sizeInBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn sizeInBytes(self: QImage) isize {
        return qtc.QImage_SizeInBytes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scanLine` instead
    ///
    pub const ScanLine = scanLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn scanLine(self: QImage, param1: i32) ?*u8 {
        return @ptrCast(qtc.QImage_ScanLine(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### DEPRECATED: Use `scanLine2` instead
    ///
    pub const ScanLine2 = scanLine2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn scanLine2(self: QImage, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ScanLine2(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### DEPRECATED: Use `constScanLine` instead
    ///
    pub const ConstScanLine = constScanLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#constScanLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: i32 `
    ///
    pub fn constScanLine(self: QImage, param1: i32) ?*const u8 {
        return @ptrCast(qtc.QImage_ConstScanLine(@ptrCast(self.ptr), @bitCast(param1)));
    }

    /// ### DEPRECATED: Use `bytesPerLine` instead
    ///
    pub const BytesPerLine = bytesPerLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#bytesPerLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn bytesPerLine(self: QImage) isize {
        return qtc.QImage_BytesPerLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `valid` instead
    ///
    pub const Valid = valid;

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
    pub fn valid(self: QImage, x: i32, y: i32) bool {
        return qtc.QImage_Valid(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `valid2` instead
    ///
    pub const Valid2 = valid2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#valid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn valid2(self: QImage, pt: anytype) bool {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_Valid2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `pixelIndex` instead
    ///
    pub const PixelIndex = pixelIndex;

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
    pub fn pixelIndex(self: QImage, x: i32, y: i32) i32 {
        return qtc.QImage_PixelIndex(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `pixelIndex2` instead
    ///
    pub const PixelIndex2 = pixelIndex2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn pixelIndex2(self: QImage, pt: anytype) i32 {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_PixelIndex2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `pixel` instead
    ///
    pub const Pixel = pixel;

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
    pub fn pixel(self: QImage, x: i32, y: i32) u32 {
        return qtc.QImage_Pixel(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `pixel2` instead
    ///
    pub const Pixel2 = pixel2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn pixel2(self: QImage, pt: anytype) u32 {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return qtc.QImage_Pixel2(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `setPixel` instead
    ///
    pub const SetPixel = setPixel;

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
    pub fn setPixel(self: QImage, x: i32, y: i32, index_or_rgb: u32) void {
        qtc.QImage_SetPixel(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(index_or_rgb));
    }

    /// ### DEPRECATED: Use `setPixel2` instead
    ///
    pub const SetPixel2 = setPixel2;

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
    pub fn setPixel2(self: QImage, pt: anytype, index_or_rgb: u32) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QImage_SetPixel2(@ptrCast(self.ptr), @ptrCast(pt.ptr), @bitCast(index_or_rgb));
    }

    /// ### DEPRECATED: Use `pixelColor` instead
    ///
    pub const PixelColor = pixelColor;

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
    pub fn pixelColor(self: QImage, x: i32, y: i32) QColor {
        return .{ .ptr = qtc.QImage_PixelColor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `pixelColor2` instead
    ///
    pub const PixelColor2 = pixelColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` pt: QPoint `
    ///
    pub fn pixelColor2(self: QImage, pt: anytype) QColor {
        comptime _ = @TypeOf(pt)._is_QPoint;
        return .{ .ptr = qtc.QImage_PixelColor2(@ptrCast(self.ptr), @ptrCast(pt.ptr)) };
    }

    /// ### DEPRECATED: Use `setPixelColor` instead
    ///
    pub const SetPixelColor = setPixelColor;

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
    pub fn setPixelColor(self: QImage, x: i32, y: i32, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QImage_SetPixelColor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setPixelColor2` instead
    ///
    pub const SetPixelColor2 = setPixelColor2;

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
    pub fn setPixelColor2(self: QImage, pt: anytype, c: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QImage_SetPixelColor2(@ptrCast(self.ptr), @ptrCast(pt.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `colorTable` instead
    ///
    pub const ColorTable = colorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn colorTable(self: QImage, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QImage_ColorTable(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("QImage.colorTable: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setColorTable` instead
    ///
    pub const SetColorTable = setColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` colors: []u32 `
    ///
    pub fn setColorTable(self: QImage, colors: []u32) void {
        const colors_list = qtc.libqt_list{
            .len = colors.len,
            .data = colors.ptr,
        };
        qtc.QImage_SetColorTable(@ptrCast(self.ptr), colors_list);
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn devicePixelRatio(self: QImage) f64 {
        return qtc.QImage_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevicePixelRatio` instead
    ///
    pub const SetDevicePixelRatio = setDevicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDevicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` scaleFactor: f64 `
    ///
    pub fn setDevicePixelRatio(self: QImage, scaleFactor: f64) void {
        qtc.QImage_SetDevicePixelRatio(@ptrCast(self.ptr), @bitCast(scaleFactor));
    }

    /// ### DEPRECATED: Use `deviceIndependentSize` instead
    ///
    pub const DeviceIndependentSize = deviceIndependentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#deviceIndependentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn deviceIndependentSize(self: QImage) QSizeF {
        return .{ .ptr = qtc.QImage_DeviceIndependentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fill` instead
    ///
    pub const Fill = fill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _pixel: u32 `
    ///
    pub fn fill(self: QImage, _pixel: u32) void {
        qtc.QImage_Fill(@ptrCast(self.ptr), @bitCast(_pixel));
    }

    /// ### DEPRECATED: Use `fill2` instead
    ///
    pub const Fill2 = fill2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _color: QColor `
    ///
    pub fn fill2(self: QImage, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QImage_Fill2(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `fill3` instead
    ///
    pub const Fill3 = fill3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _color: qnamespace_enums.GlobalColor `
    ///
    pub fn fill3(self: QImage, _color: i32) void {
        qtc.QImage_Fill3(@ptrCast(self.ptr), @bitCast(_color));
    }

    /// ### DEPRECATED: Use `hasAlphaChannel` instead
    ///
    pub const HasAlphaChannel = hasAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#hasAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn hasAlphaChannel(self: QImage) bool {
        return qtc.QImage_HasAlphaChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlphaChannel` instead
    ///
    pub const SetAlphaChannel = setAlphaChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setAlphaChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` alphaChannel: QImage `
    ///
    pub fn setAlphaChannel(self: QImage, alphaChannel: anytype) void {
        comptime _ = @TypeOf(alphaChannel)._is_QImage;
        qtc.QImage_SetAlphaChannel(@ptrCast(self.ptr), @ptrCast(alphaChannel.ptr));
    }

    /// ### DEPRECATED: Use `createAlphaMask` instead
    ///
    pub const CreateAlphaMask = createAlphaMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn createAlphaMask(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_CreateAlphaMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createHeuristicMask` instead
    ///
    pub const CreateHeuristicMask = createHeuristicMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn createHeuristicMask(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_CreateHeuristicMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor` instead
    ///
    pub const CreateMaskFromColor = createMaskFromColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _color: u32 `
    ///
    pub fn createMaskFromColor(self: QImage, _color: u32) QImage {
        return .{ .ptr = qtc.QImage_CreateMaskFromColor(@ptrCast(self.ptr), @bitCast(_color)) };
    }

    /// ### DEPRECATED: Use `scaled` instead
    ///
    pub const Scaled = scaled;

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
    pub fn scaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `scaled2` instead
    ///
    pub const Scaled2 = scaled2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` s: QSize `
    ///
    pub fn scaled2(self: QImage, s: anytype) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled2(@ptrCast(self.ptr), @ptrCast(s.ptr)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth` instead
    ///
    pub const ScaledToWidth = scaledToWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` w: i32 `
    ///
    pub fn scaledToWidth(self: QImage, w: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToWidth(@ptrCast(self.ptr), @bitCast(w)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight` instead
    ///
    pub const ScaledToHeight = scaledToHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` h: i32 `
    ///
    pub fn scaledToHeight(self: QImage, h: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToHeight(@ptrCast(self.ptr), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `transformed` instead
    ///
    pub const Transformed = transformed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#transformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn transformed(self: QImage, matrix: anytype) QImage {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QImage_Transformed(@ptrCast(self.ptr), @ptrCast(matrix.ptr)) };
    }

    /// ### DEPRECATED: Use `trueMatrix` instead
    ///
    pub const TrueMatrix = trueMatrix;

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
    pub fn trueMatrix(param1: anytype, w: i32, h: i32) QTransform {
        comptime _ = @TypeOf(param1)._is_QTransform;
        return .{ .ptr = qtc.QImage_TrueMatrix(@ptrCast(param1.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mirrored` instead
    ///
    pub const Mirrored = mirrored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn mirrored(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_Mirrored(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rgbSwapped` instead
    ///
    pub const RgbSwapped = rgbSwapped;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn rgbSwapped(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_RgbSwapped(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mirror` instead
    ///
    pub const Mirror = mirror;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn mirror(self: QImage) void {
        qtc.QImage_Mirror(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rgbSwap` instead
    ///
    pub const RgbSwap = rgbSwap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn rgbSwap(self: QImage) void {
        qtc.QImage_RgbSwap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invertPixels` instead
    ///
    pub const InvertPixels = invertPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn invertPixels(self: QImage) void {
        qtc.QImage_InvertPixels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorSpace` instead
    ///
    pub const ColorSpace = colorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn colorSpace(self: QImage) QColorSpace {
        return .{ .ptr = qtc.QImage_ColorSpace(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `convertedToColorSpace` instead
    ///
    pub const ConvertedToColorSpace = convertedToColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    pub fn convertedToColorSpace(self: QImage, _colorSpace: anytype) QImage {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr)) };
    }

    /// ### DEPRECATED: Use `convertedToColorSpace2` instead
    ///
    pub const ConvertedToColorSpace2 = convertedToColorSpace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn convertedToColorSpace2(self: QImage, _colorSpace: anytype, _format: i32) QImage {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace2(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `convertToColorSpace` instead
    ///
    pub const ConvertToColorSpace = convertToColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    pub fn convertToColorSpace(self: QImage, _colorSpace: anytype) void {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr));
    }

    /// ### DEPRECATED: Use `convertToColorSpace2` instead
    ///
    pub const ConvertToColorSpace2 = convertToColorSpace2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn convertToColorSpace2(self: QImage, _colorSpace: anytype, _format: i32) void {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace2(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr), @bitCast(_format));
    }

    /// ### DEPRECATED: Use `setColorSpace` instead
    ///
    pub const SetColorSpace = setColorSpace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    pub fn setColorSpace(self: QImage, _colorSpace: anytype) void {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        qtc.QImage_SetColorSpace(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr));
    }

    /// ### DEPRECATED: Use `colorTransformed` instead
    ///
    pub const ColorTransformed = colorTransformed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    pub fn colorTransformed(self: QImage, transform: anytype) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed(@ptrCast(self.ptr), @ptrCast(transform.ptr)) };
    }

    /// ### DEPRECATED: Use `colorTransformed2` instead
    ///
    pub const ColorTransformed2 = colorTransformed2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn colorTransformed2(self: QImage, transform: anytype, _format: i32) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed2(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `applyColorTransform` instead
    ///
    pub const ApplyColorTransform = applyColorTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    pub fn applyColorTransform(self: QImage, transform: anytype) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform(@ptrCast(self.ptr), @ptrCast(transform.ptr));
    }

    /// ### DEPRECATED: Use `applyColorTransform2` instead
    ///
    pub const ApplyColorTransform2 = applyColorTransform2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn applyColorTransform2(self: QImage, transform: anytype, _format: i32) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform2(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(_format));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn load(self: QImage, device: anytype, _format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = _format.ptr;
        return qtc.QImage_Load(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn load2(self: QImage, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Load2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `loadFromData` instead
    ///
    pub const LoadFromData = loadFromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    pub fn loadFromData(self: QImage, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_LoadFromData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `loadFromData2` instead
    ///
    pub const LoadFromData2 = loadFromData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` len: i32 `
    ///
    pub fn loadFromData2(self: QImage, buf: *const u8, len: i32) bool {
        return qtc.QImage_LoadFromData2(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len));
    }

    /// ### DEPRECATED: Use `loadFromData3` instead
    ///
    pub const LoadFromData3 = loadFromData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    pub fn loadFromData3(self: QImage, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QImage_LoadFromData3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn save(self: QImage, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QImage_Save(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    pub fn save2(self: QImage, device: anytype) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return qtc.QImage_Save2(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `fromData` instead
    ///
    pub const FromData = fromData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn fromData(data: []u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QImage_FromData(data_str) };
    }

    /// ### DEPRECATED: Use `fromData2` instead
    ///
    pub const FromData2 = fromData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _size: i32 `
    ///
    pub fn fromData2(data: *const u8, _size: i32) QImage {
        return .{ .ptr = qtc.QImage_FromData2(@ptrCast(data), @bitCast(_size)) };
    }

    /// ### DEPRECATED: Use `fromData3` instead
    ///
    pub const FromData3 = fromData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn fromData3(data: []u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QImage_FromData3(data_str) };
    }

    /// ### DEPRECATED: Use `cacheKey` instead
    ///
    pub const CacheKey = cacheKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn cacheKey(self: QImage) i64 {
        return qtc.QImage_CacheKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn paintEngine(self: QImage) QPaintEngine {
        return .{ .ptr = qtc.QImage_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: QImage, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QImage_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#paintEngine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn superPaintEngine(self: QImage) QPaintEngine {
        return .{ .ptr = qtc.QImage_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dotsPerMeterX` instead
    ///
    pub const DotsPerMeterX = dotsPerMeterX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn dotsPerMeterX(self: QImage) i32 {
        return qtc.QImage_DotsPerMeterX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dotsPerMeterY` instead
    ///
    pub const DotsPerMeterY = dotsPerMeterY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn dotsPerMeterY(self: QImage) i32 {
        return qtc.QImage_DotsPerMeterY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDotsPerMeterX` instead
    ///
    pub const SetDotsPerMeterX = setDotsPerMeterX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _dotsPerMeterX: i32 `
    ///
    pub fn setDotsPerMeterX(self: QImage, _dotsPerMeterX: i32) void {
        qtc.QImage_SetDotsPerMeterX(@ptrCast(self.ptr), @bitCast(_dotsPerMeterX));
    }

    /// ### DEPRECATED: Use `setDotsPerMeterY` instead
    ///
    pub const SetDotsPerMeterY = setDotsPerMeterY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _dotsPerMeterY: i32 `
    ///
    pub fn setDotsPerMeterY(self: QImage, _dotsPerMeterY: i32) void {
        qtc.QImage_SetDotsPerMeterY(@ptrCast(self.ptr), @bitCast(_dotsPerMeterY));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn offset(self: QImage) QPoint {
        return .{ .ptr = qtc.QImage_Offset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn setOffset(self: QImage, _offset: anytype) void {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        qtc.QImage_SetOffset(@ptrCast(self.ptr), @ptrCast(_offset.ptr));
    }

    /// ### DEPRECATED: Use `textKeys` instead
    ///
    pub const TextKeys = textKeys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#textKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textKeys(self: QImage, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QImage_TextKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QImage.textKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImage.textKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QImage, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImage_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImage.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

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
    pub fn setText(self: QImage, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `pixelFormat` instead
    ///
    pub const PixelFormat = pixelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#pixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn pixelFormat(self: QImage) QPixelFormat {
        return .{ .ptr = qtc.QImage_PixelFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toPixelFormat` instead
    ///
    pub const ToPixelFormat = toPixelFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#toPixelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qimage_enums.Format `
    ///
    pub fn toPixelFormat(_format: i32) QPixelFormat {
        return .{ .ptr = qtc.QImage_ToPixelFormat(@bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn toImageFormat(_format: anytype) i32 {
        comptime _ = @TypeOf(_format)._is_QPixelFormat;
        return qtc.QImage_ToImageFormat(@ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QImage, _metric: i32) i32 {
        return qtc.QImage_Metric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: QImage, callback: *const fn (QImage, i32) callconv(.c) i32) void {
        qtc.QImage_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#metric)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QImage, _metric: i32) i32 {
        return qtc.QImage_SuperMetric(@ptrCast(self.ptr), @bitCast(_metric));
    }

    /// ### DEPRECATED: Use `mirroredHelper` instead
    ///
    pub const MirroredHelper = mirroredHelper;

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
    pub fn mirroredHelper(self: QImage, horizontal: bool, vertical: bool) QImage {
        return .{ .ptr = qtc.QImage_MirroredHelper(@ptrCast(self.ptr), horizontal, vertical) };
    }

    /// ### DEPRECATED: Use `onMirroredHelper` instead
    ///
    pub const OnMirroredHelper = onMirroredHelper;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMirroredHelper(self: QImage, callback: *const fn (QImage, bool, bool) callconv(.c) QImage) void {
        qtc.QImage_OnMirroredHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMirroredHelper` instead
    ///
    pub const SuperMirroredHelper = superMirroredHelper;

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
    pub fn superMirroredHelper(self: QImage, horizontal: bool, vertical: bool) QImage {
        return .{ .ptr = qtc.QImage_SuperMirroredHelper(@ptrCast(self.ptr), horizontal, vertical) };
    }

    /// ### DEPRECATED: Use `rgbSwappedHelper` instead
    ///
    pub const RgbSwappedHelper = rgbSwappedHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn rgbSwappedHelper(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_RgbSwappedHelper(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRgbSwappedHelper` instead
    ///
    pub const OnRgbSwappedHelper = onRgbSwappedHelper;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRgbSwappedHelper(self: QImage, callback: *const fn () callconv(.c) QImage) void {
        qtc.QImage_OnRgbSwappedHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRgbSwappedHelper` instead
    ///
    pub const SuperRgbSwappedHelper = superRgbSwappedHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn superRgbSwappedHelper(self: QImage) QImage {
        return .{ .ptr = qtc.QImage_SuperRgbSwappedHelper(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mirroredInplace` instead
    ///
    pub const MirroredInplace = mirroredInplace;

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
    pub fn mirroredInplace(self: QImage, horizontal: bool, vertical: bool) void {
        qtc.QImage_MirroredInplace(@ptrCast(self.ptr), horizontal, vertical);
    }

    /// ### DEPRECATED: Use `onMirroredInplace` instead
    ///
    pub const OnMirroredInplace = onMirroredInplace;

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
    pub fn onMirroredInplace(self: QImage, callback: *const fn (QImage, bool, bool) callconv(.c) void) void {
        qtc.QImage_OnMirroredInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMirroredInplace` instead
    ///
    pub const SuperMirroredInplace = superMirroredInplace;

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
    pub fn superMirroredInplace(self: QImage, horizontal: bool, vertical: bool) void {
        qtc.QImage_SuperMirroredInplace(@ptrCast(self.ptr), horizontal, vertical);
    }

    /// ### DEPRECATED: Use `rgbSwappedInplace` instead
    ///
    pub const RgbSwappedInplace = rgbSwappedInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn rgbSwappedInplace(self: QImage) void {
        qtc.QImage_RgbSwappedInplace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRgbSwappedInplace` instead
    ///
    pub const OnRgbSwappedInplace = onRgbSwappedInplace;

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
    pub fn onRgbSwappedInplace(self: QImage, callback: *const fn () callconv(.c) void) void {
        qtc.QImage_OnRgbSwappedInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRgbSwappedInplace` instead
    ///
    pub const SuperRgbSwappedInplace = superRgbSwappedInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn superRgbSwappedInplace(self: QImage) void {
        qtc.QImage_SuperRgbSwappedInplace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `convertToFormatHelper` instead
    ///
    pub const ConvertToFormatHelper = convertToFormatHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn convertToFormatHelper(self: QImage, _format: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(_format), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onConvertToFormatHelper` instead
    ///
    pub const OnConvertToFormatHelper = onConvertToFormatHelper;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onConvertToFormatHelper(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) QImage) void {
        qtc.QImage_OnConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConvertToFormatHelper` instead
    ///
    pub const SuperConvertToFormatHelper = superConvertToFormatHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn superConvertToFormatHelper(self: QImage, _format: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_SuperConvertToFormatHelper(@ptrCast(self.ptr), @bitCast(_format), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `convertToFormatInplace` instead
    ///
    pub const ConvertToFormatInplace = convertToFormatInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn convertToFormatInplace(self: QImage, _format: i32, flags: i32) bool {
        return qtc.QImage_ConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(_format), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onConvertToFormatInplace` instead
    ///
    pub const OnConvertToFormatInplace = onConvertToFormatInplace;

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
    pub fn onConvertToFormatInplace(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) bool) void {
        qtc.QImage_OnConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConvertToFormatInplace` instead
    ///
    pub const SuperConvertToFormatInplace = superConvertToFormatInplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn superConvertToFormatInplace(self: QImage, _format: i32, flags: i32) bool {
        return qtc.QImage_SuperConvertToFormatInplace(@ptrCast(self.ptr), @bitCast(_format), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `smoothScaled` instead
    ///
    pub const SmoothScaled = smoothScaled;

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
    pub fn smoothScaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_SmoothScaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `onSmoothScaled` instead
    ///
    pub const OnSmoothScaled = onSmoothScaled;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSmoothScaled(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) QImage) void {
        qtc.QImage_OnSmoothScaled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSmoothScaled` instead
    ///
    pub const SuperSmoothScaled = superSmoothScaled;

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
    pub fn superSmoothScaled(self: QImage, w: i32, h: i32) QImage {
        return .{ .ptr = qtc.QImage_SuperSmoothScaled(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `detachMetadata` instead
    ///
    pub const DetachMetadata = detachMetadata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn detachMetadata(self: QImage) void {
        qtc.QImage_DetachMetadata(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDetachMetadata` instead
    ///
    pub const OnDetachMetadata = onDetachMetadata;

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
    pub fn onDetachMetadata(self: QImage, callback: *const fn () callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDetachMetadata` instead
    ///
    pub const SuperDetachMetadata = superDetachMetadata;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    pub fn superDetachMetadata(self: QImage) void {
        qtc.QImage_SuperDetachMetadata(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy1` instead
    ///
    pub const Copy1 = copy1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _rect: QRect `
    ///
    pub fn copy1(self: QImage, _rect: anytype) QImage {
        comptime _ = @TypeOf(_rect)._is_QRect;
        return .{ .ptr = qtc.QImage_Copy1(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `convertToFormat22` instead
    ///
    pub const ConvertToFormat22 = convertToFormat22;

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
    pub fn convertToFormat22(self: QImage, f: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertToFormat22(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `convertToFormat3` instead
    ///
    pub const ConvertToFormat3 = convertToFormat3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` f: qimage_enums.Format `
    ///
    /// ` _colorTable: []u32 `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn convertToFormat3(self: QImage, f: i32, _colorTable: []u32, flags: i32) QImage {
        const colorTable_list = qtc.libqt_list{
            .len = _colorTable.len,
            .data = _colorTable.ptr,
        };
        return .{ .ptr = qtc.QImage_ConvertToFormat3(@ptrCast(self.ptr), @bitCast(f), colorTable_list, @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `convertedTo2` instead
    ///
    pub const ConvertedTo2 = convertedTo2;

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
    pub fn convertedTo2(self: QImage, f: i32, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_ConvertedTo2(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `convertTo2` instead
    ///
    pub const ConvertTo2 = convertTo2;

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
    pub fn convertTo2(self: QImage, f: i32, flags: i32) void {
        qtc.QImage_ConvertTo2(@ptrCast(self.ptr), @bitCast(f), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `createAlphaMask1` instead
    ///
    pub const CreateAlphaMask1 = createAlphaMask1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn createAlphaMask1(self: QImage, flags: i32) QImage {
        return .{ .ptr = qtc.QImage_CreateAlphaMask1(@ptrCast(self.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `createHeuristicMask1` instead
    ///
    pub const CreateHeuristicMask1 = createHeuristicMask1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` clipTight: bool `
    ///
    pub fn createHeuristicMask1(self: QImage, clipTight: bool) QImage {
        return .{ .ptr = qtc.QImage_CreateHeuristicMask1(@ptrCast(self.ptr), clipTight) };
    }

    /// ### DEPRECATED: Use `createMaskFromColor2` instead
    ///
    pub const CreateMaskFromColor2 = createMaskFromColor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _color: u32 `
    ///
    /// ` mode: qnamespace_enums.MaskMode `
    ///
    pub fn createMaskFromColor2(self: QImage, _color: u32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_CreateMaskFromColor2(@ptrCast(self.ptr), @bitCast(_color), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled3` instead
    ///
    pub const Scaled3 = scaled3;

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
    pub fn scaled3(self: QImage, w: i32, h: i32, aspectMode: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled3(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled4` instead
    ///
    pub const Scaled4 = scaled4;

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
    pub fn scaled4(self: QImage, w: i32, h: i32, aspectMode: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_Scaled4(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaled22` instead
    ///
    pub const Scaled22 = scaled22;

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
    pub fn scaled22(self: QImage, s: anytype, aspectMode: i32) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled22(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode)) };
    }

    /// ### DEPRECATED: Use `scaled32` instead
    ///
    pub const Scaled32 = scaled32;

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
    pub fn scaled32(self: QImage, s: anytype, aspectMode: i32, mode: i32) QImage {
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QImage_Scaled32(@ptrCast(self.ptr), @ptrCast(s.ptr), @bitCast(aspectMode), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToWidth2` instead
    ///
    pub const ScaledToWidth2 = scaledToWidth2;

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
    pub fn scaledToWidth2(self: QImage, w: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToWidth2(@ptrCast(self.ptr), @bitCast(w), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `scaledToHeight2` instead
    ///
    pub const ScaledToHeight2 = scaledToHeight2;

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
    pub fn scaledToHeight2(self: QImage, h: i32, mode: i32) QImage {
        return .{ .ptr = qtc.QImage_ScaledToHeight2(@ptrCast(self.ptr), @bitCast(h), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `transformed2` instead
    ///
    pub const Transformed2 = transformed2;

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
    pub fn transformed2(self: QImage, matrix: anytype, mode: i32) QImage {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        return .{ .ptr = qtc.QImage_Transformed2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `mirrored1` instead
    ///
    pub const Mirrored1 = mirrored1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirrored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    pub fn mirrored1(self: QImage, horizontally: bool) QImage {
        return .{ .ptr = qtc.QImage_Mirrored1(@ptrCast(self.ptr), horizontally) };
    }

    /// ### DEPRECATED: Use `mirrored2` instead
    ///
    pub const Mirrored2 = mirrored2;

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
    pub fn mirrored2(self: QImage, horizontally: bool, vertically: bool) QImage {
        return .{ .ptr = qtc.QImage_Mirrored2(@ptrCast(self.ptr), horizontally, vertically) };
    }

    /// ### DEPRECATED: Use `mirror1` instead
    ///
    pub const Mirror1 = mirror1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#mirror)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` horizontally: bool `
    ///
    pub fn mirror1(self: QImage, horizontally: bool) void {
        qtc.QImage_Mirror1(@ptrCast(self.ptr), horizontally);
    }

    /// ### DEPRECATED: Use `mirror2` instead
    ///
    pub const Mirror2 = mirror2;

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
    pub fn mirror2(self: QImage, horizontally: bool, vertically: bool) void {
        qtc.QImage_Mirror2(@ptrCast(self.ptr), horizontally, vertically);
    }

    /// ### DEPRECATED: Use `invertPixels1` instead
    ///
    pub const InvertPixels1 = invertPixels1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#invertPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` param1: qimage_enums.InvertMode `
    ///
    pub fn invertPixels1(self: QImage, param1: i32) void {
        qtc.QImage_InvertPixels1(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `convertedToColorSpace3` instead
    ///
    pub const ConvertedToColorSpace3 = convertedToColorSpace3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn convertedToColorSpace3(self: QImage, _colorSpace: anytype, _format: i32, flags: i32) QImage {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        return .{ .ptr = qtc.QImage_ConvertedToColorSpace3(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr), @bitCast(_format), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `convertToColorSpace3` instead
    ///
    pub const ConvertToColorSpace3 = convertToColorSpace3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` _colorSpace: QColorSpace `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn convertToColorSpace3(self: QImage, _colorSpace: anytype, _format: i32, flags: i32) void {
        comptime _ = @TypeOf(_colorSpace)._is_QColorSpace;
        qtc.QImage_ConvertToColorSpace3(@ptrCast(self.ptr), @ptrCast(_colorSpace.ptr), @bitCast(_format), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `colorTransformed3` instead
    ///
    pub const ColorTransformed3 = colorTransformed3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn colorTransformed3(self: QImage, transform: anytype, _format: i32, flags: i32) QImage {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        return .{ .ptr = qtc.QImage_ColorTransformed3(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(_format), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `applyColorTransform3` instead
    ///
    pub const ApplyColorTransform3 = applyColorTransform3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` transform: QColorTransform `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` flags: flag of qnamespace_enums.ImageConversionFlag `
    ///
    pub fn applyColorTransform3(self: QImage, transform: anytype, _format: i32, flags: i32) void {
        comptime _ = @TypeOf(transform)._is_QColorTransform;
        qtc.QImage_ApplyColorTransform3(@ptrCast(self.ptr), @ptrCast(transform.ptr), @bitCast(_format), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `load22` instead
    ///
    pub const Load22 = load22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn load22(self: QImage, fileName: []const u8, _format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = _format.ptr;
        return qtc.QImage_Load22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData22` instead
    ///
    pub const LoadFromData22 = loadFromData22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn loadFromData22(self: QImage, data: []u8, _format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = _format.ptr;
        return qtc.QImage_LoadFromData22(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData32` instead
    ///
    pub const LoadFromData32 = loadFromData32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` buf: *const u8 `
    ///
    /// ` len: i32 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn loadFromData32(self: QImage, buf: *const u8, len: i32, _format: [:0]const u8) bool {
        const format_Cstring = _format.ptr;
        return qtc.QImage_LoadFromData32(@ptrCast(self.ptr), @ptrCast(buf), @bitCast(len), format_Cstring);
    }

    /// ### DEPRECATED: Use `loadFromData23` instead
    ///
    pub const LoadFromData23 = loadFromData23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#loadFromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn loadFromData23(self: QImage, data: []u8, _format: [:0]const u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = _format.ptr;
        return qtc.QImage_LoadFromData23(@ptrCast(self.ptr), data_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `save22` instead
    ///
    pub const Save22 = save22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn save22(self: QImage, fileName: []const u8, _format: [:0]const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = _format.ptr;
        return qtc.QImage_Save22(@ptrCast(self.ptr), fileName_str, format_Cstring);
    }

    /// ### DEPRECATED: Use `save3` instead
    ///
    pub const Save3 = save3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn save3(self: QImage, fileName: []const u8, _format: [:0]const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_Cstring = _format.ptr;
        return qtc.QImage_Save3(@ptrCast(self.ptr), fileName_str, format_Cstring, @bitCast(quality));
    }

    /// ### DEPRECATED: Use `save23` instead
    ///
    pub const Save23 = save23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn save23(self: QImage, device: anytype, _format: [:0]const u8) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = _format.ptr;
        return qtc.QImage_Save23(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring);
    }

    /// ### DEPRECATED: Use `save32` instead
    ///
    pub const Save32 = save32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` device: QIODevice `
    ///
    /// ` _format: [:0]const u8 `
    ///
    /// ` quality: i32 `
    ///
    pub fn save32(self: QImage, device: anytype, _format: [:0]const u8, quality: i32) bool {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_Cstring = _format.ptr;
        return qtc.QImage_Save32(@ptrCast(self.ptr), @ptrCast(device.ptr), format_Cstring, @bitCast(quality));
    }

    /// ### DEPRECATED: Use `fromData22` instead
    ///
    pub const FromData22 = fromData22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn fromData22(data: []u8, _format: [:0]const u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = _format.ptr;
        return .{ .ptr = qtc.QImage_FromData22(data_str, format_Cstring) };
    }

    /// ### DEPRECATED: Use `fromData32` instead
    ///
    pub const FromData32 = fromData32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` _size: i32 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn fromData32(data: *const u8, _size: i32, _format: [:0]const u8) QImage {
        const format_Cstring = _format.ptr;
        return .{ .ptr = qtc.QImage_FromData32(@ptrCast(data), @bitCast(_size), format_Cstring) };
    }

    /// ### DEPRECATED: Use `fromData23` instead
    ///
    pub const FromData23 = fromData23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#fromData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` _format: [:0]const u8 `
    ///
    pub fn fromData23(data: []u8, _format: [:0]const u8) QImage {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        const format_Cstring = _format.ptr;
        return .{ .ptr = qtc.QImage_FromData23(data_str, format_Cstring) };
    }

    /// ### DEPRECATED: Use `text1` instead
    ///
    pub const Text1 = text1;

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
    pub fn text1(self: QImage, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QImage_Text1(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImage.text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `detachMetadata1` instead
    ///
    pub const DetachMetadata1 = detachMetadata1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImage `
    ///
    /// ` invalidateCache: bool `
    ///
    pub fn detachMetadata1(self: QImage, invalidateCache: bool) void {
        qtc.QImage_DetachMetadata1(@ptrCast(self.ptr), invalidateCache);
    }

    /// ### DEPRECATED: Use `onDetachMetadata1` instead
    ///
    pub const OnDetachMetadata1 = onDetachMetadata1;

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
    pub fn onDetachMetadata1(self: QImage, callback: *const fn (QImage, bool) callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDetachMetadata1` instead
    ///
    pub const SuperDetachMetadata1 = superDetachMetadata1;

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
    pub fn superDetachMetadata1(self: QImage, invalidateCache: bool) void {
        qtc.QImage_SuperDetachMetadata1(@ptrCast(self.ptr), invalidateCache);
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
    /// ` self: QImage `
    ///
    pub fn paintingActive(self: QImage) bool {
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
    /// ` self: QImage `
    ///
    pub fn widthMM(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn heightMM(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn logicalDpiX(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn logicalDpiY(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn physicalDpiX(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn physicalDpiY(self: QImage) i32 {
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
    /// ` self: QImage `
    ///
    pub fn devicePixelRatioF(self: QImage) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
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
    /// ` self: QImage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QImage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QImage_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QImage `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QImage, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QImage_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QImage, callback: *const fn (QImage, QPainter) callconv(.c) void) void {
        qtc.QImage_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImage `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn redirected(self: QImage, _offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        return .{ .ptr = qtc.QImage_Redirected(@ptrCast(self.ptr), @ptrCast(_offset.ptr)) };
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
    /// ` self: QImage `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn superRedirected(self: QImage, _offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        return .{ .ptr = qtc.QImage_SuperRedirected(@ptrCast(self.ptr), @ptrCast(_offset.ptr)) };
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
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QImage, callback: *const fn (QImage, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QImage_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImage `
    ///
    pub fn sharedPainter(self: QImage) QPainter {
        return .{ .ptr = qtc.QImage_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QImage `
    ///
    pub fn superSharedPainter(self: QImage) QPainter {
        return .{ .ptr = qtc.QImage_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QImage`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QImage, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QImage_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QImage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QImage, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QImage `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QImage, metricA: i32, metricB: i32) f64 {
        return qtc.QImage_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QImage`
    ///
    /// ` callback: *const fn (self: QImage, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QImage, callback: *const fn (QImage, i32, i32) callconv(.c) f64) void {
        qtc.QImage_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#dtor.QImage)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImage `
    ///
    pub fn delete(self: QImage) void {
        qtc.QImage_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimage.html#public-types)
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
