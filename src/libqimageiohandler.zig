const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qimage_enums = @import("libqimage.zig").enums;
const qimageiohandler_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html)
pub const QImageIOHandler = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImageIOHandler,

    pub const _is_QImageIOHandler = {};

    /// New constructs a new QImageIOHandler object.
    ///
    pub fn New() QImageIOHandler {
        return .{ .ptr = qtc.QImageIOHandler_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QImageIOHandler, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QImageIOHandler_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn Device(self: QImageIOHandler) QIODevice {
        return .{ .ptr = qtc.QImageIOHandler_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: QImageIOHandler, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageIOHandler_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat2(self: QImageIOHandler, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageIOHandler_SetFormat2(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: QImageIOHandler, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageIOHandler_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimageiohandler.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn CanRead(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_CanRead(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanRead(self: QImageIOHandler, callback: *const fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnCanRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanRead` instead
    ///
    pub const QBaseCanRead = SuperCanRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperCanRead(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_SuperCanRead(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn Read(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_Read(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, image: QImage) callconv(.c) bool `
    ///
    pub fn OnRead(self: QImageIOHandler, callback: *const fn (QImageIOHandler, QImage) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn SuperRead(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_SuperRead(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn Write(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_Write(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, image: QImage) callconv(.c) bool `
    ///
    pub fn OnWrite(self: QImageIOHandler, callback: *const fn (QImageIOHandler, QImage) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn SuperWrite(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_SuperWrite(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn Option(self: QImageIOHandler, option: i32) QVariant {
        return .{ .ptr = qtc.QImageIOHandler_Option(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, option: qimageiohandler_enums.ImageOption) callconv(.c) QVariant `
    ///
    pub fn OnOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) QVariant) void {
        qtc.QImageIOHandler_OnOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOption` instead
    ///
    pub const QBaseOption = SuperOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SuperOption(self: QImageIOHandler, option: i32) QVariant {
        return .{ .ptr = qtc.QImageIOHandler_SuperOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetOption(self: QImageIOHandler, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QImageIOHandler_SetOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32, QVariant) callconv(.c) void) void {
        qtc.QImageIOHandler_OnSetOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetOption` instead
    ///
    pub const QBaseSetOption = SuperSetOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetOption(self: QImageIOHandler, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QImageIOHandler_SuperSetOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SupportsOption(self: QImageIOHandler, option: i32) bool {
        return qtc.QImageIOHandler_SupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, option: qimageiohandler_enums.ImageOption) callconv(.c) bool `
    ///
    pub fn OnSupportsOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnSupportsOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportsOption` instead
    ///
    pub const QBaseSupportsOption = SuperSupportsOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SuperSupportsOption(self: QImageIOHandler, option: i32) bool {
        return qtc.QImageIOHandler_SuperSupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn JumpToNextImage(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_JumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnJumpToNextImage(self: QImageIOHandler, callback: *const fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToNextImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJumpToNextImage` instead
    ///
    pub const QBaseJumpToNextImage = SuperJumpToNextImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperJumpToNextImage(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_SuperJumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn JumpToImage(self: QImageIOHandler, imageNumber: i32) bool {
        return qtc.QImageIOHandler_JumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn (self: QImageIOHandler, imageNumber: i32) callconv(.c) bool `
    ///
    pub fn OnJumpToImage(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJumpToImage` instead
    ///
    pub const QBaseJumpToImage = SuperJumpToImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn SuperJumpToImage(self: QImageIOHandler, imageNumber: i32) bool {
        return qtc.QImageIOHandler_SuperJumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn LoopCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_LoopCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLoopCount(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnLoopCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoopCount` instead
    ///
    pub const QBaseLoopCount = SuperLoopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperLoopCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperLoopCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn ImageCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_ImageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnImageCount(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnImageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperImageCount` instead
    ///
    pub const QBaseImageCount = SuperImageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperImageCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperImageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn NextImageDelay(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_NextImageDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnNextImageDelay(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnNextImageDelay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNextImageDelay` instead
    ///
    pub const QBaseNextImageDelay = SuperNextImageDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperNextImageDelay(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperNextImageDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn CurrentImageNumber(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_CurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentImageNumber(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnCurrentImageNumber(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentImageNumber` instead
    ///
    pub const QBaseCurrentImageNumber = SuperCurrentImageNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperCurrentImageNumber(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperCurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn CurrentImageRect(self: QImageIOHandler) QRect {
        return .{ .ptr = qtc.QImageIOHandler_CurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnCurrentImageRect(self: QImageIOHandler, callback: *const fn () callconv(.c) QRect) void {
        qtc.QImageIOHandler_OnCurrentImageRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentImageRect` instead
    ///
    pub const QBaseCurrentImageRect = SuperCurrentImageRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn SuperCurrentImageRect(self: QImageIOHandler) QRect {
        return .{ .ptr = qtc.QImageIOHandler_SuperCurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` format: qimage_enums.Format `
    ///
    /// ` image: QImage `
    ///
    pub fn AllocateImage(size: anytype, format: i32, image: anytype) bool {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_AllocateImage(@ptrCast(size.ptr), @bitCast(format), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#dtor.QImageIOHandler)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn Delete(self: QImageIOHandler) void {
        qtc.QImageIOHandler_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html)
pub const QImageIOPlugin = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImageIOPlugin,

    pub const _is_QImageIOPlugin = {};
    pub const _is_QObject = {};

    /// New constructs a new QImageIOPlugin object.
    ///
    pub fn New() QImageIOPlugin {
        return .{ .ptr = qtc.QImageIOPlugin_new() };
    }

    /// New2 constructs a new QImageIOPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QImageIOPlugin {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QImageIOPlugin_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn MetaObject(self: QImageIOPlugin) QMetaObject {
        return .{ .ptr = qtc.QImageIOPlugin_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QImageIOPlugin, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QImageIOPlugin_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn SuperMetaObject(self: QImageIOPlugin) QMetaObject {
        return .{ .ptr = qtc.QImageIOPlugin_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QImageIOPlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageIOPlugin_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QImageIOPlugin_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QImageIOPlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageIOPlugin_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QImageIOPlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageIOPlugin_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QImageIOPlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageIOPlugin_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Capability `
    ///
    pub fn Capabilities(self: QImageIOPlugin, device: anytype, format: []u8) i32 {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_Capabilities(@ptrCast(self.ptr), @ptrCast(device.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, device: QIODevice, format: qtc.libqt_string) callconv(.c) i32 `
    ///
    pub fn OnCapabilities(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QIODevice, qtc.libqt_string) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCapabilities` instead
    ///
    pub const QBaseCapabilities = SuperCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Capability `
    ///
    pub fn SuperCapabilities(self: QImageIOPlugin, device: anytype, format: []u8) i32 {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_SuperCapabilities(@ptrCast(self.ptr), @ptrCast(device.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn Create(self: QImageIOPlugin, device: anytype, format: []u8) QImageIOHandler {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageIOPlugin_Create(@ptrCast(self.ptr), @ptrCast(device.ptr), format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, device: QIODevice, format: qtc.libqt_string) callconv(.c) QImageIOHandler `
    ///
    pub fn OnCreate(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QIODevice, qtc.libqt_string) callconv(.c) QImageIOHandler) void {
        qtc.QImageIOPlugin_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn SuperCreate(self: QImageIOPlugin, device: anytype, format: []u8) QImageIOHandler {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageIOPlugin_SuperCreate(@ptrCast(self.ptr), @ptrCast(device.ptr), format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QImageIOPlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QImageIOPlugin, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn IsWidgetType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn IsWindowType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn IsQuickItemType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn SignalsBlocked(self: QImageIOPlugin) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QImageIOPlugin, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Thread(self: QImageIOPlugin) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QImageIOPlugin, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QImageIOPlugin, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QImageIOPlugin, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QImageIOPlugin, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QImageIOPlugin, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QImageIOPlugin, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qimageioplugin.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QImageIOPlugin, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QImageIOPlugin, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QImageIOPlugin, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QImageIOPlugin, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Disconnect3(self: QImageIOPlugin) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QImageIOPlugin, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn DumpObjectTree(self: QImageIOPlugin) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn DumpObjectInfo(self: QImageIOPlugin) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QImageIOPlugin, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QImageIOPlugin, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QImageIOPlugin, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimageioplugin.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimageioplugin.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn BindingStorage(self: QImageIOPlugin) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn BindingStorage2(self: QImageIOPlugin) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Destroyed(self: QImageIOPlugin) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Parent(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QImageIOPlugin, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn DeleteLater(self: QImageIOPlugin) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QImageIOPlugin, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QImageIOPlugin, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QImageIOPlugin, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QImageIOPlugin, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QImageIOPlugin, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QImageIOPlugin, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QImageIOPlugin, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QImageIOPlugin, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QImageIOPlugin, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageIOPlugin_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QImageIOPlugin, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageIOPlugin_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QEvent) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QImageIOPlugin, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageIOPlugin_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QImageIOPlugin, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QImageIOPlugin_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QObject, QEvent) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QImageIOPlugin_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QImageIOPlugin_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QTimerEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QImageIOPlugin_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QImageIOPlugin_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QChildEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QImageIOPlugin_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QImageIOPlugin, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QImageIOPlugin_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Sender(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QImageIOPlugin_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn SuperSender(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QImageIOPlugin_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QImageIOPlugin, callback: *const fn () callconv(.c) QObject) void {
        qtc.QImageIOPlugin_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn SenderSignalIndex(self: QImageIOPlugin) i32 {
        return qtc.QImageIOPlugin_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn SuperSenderSignalIndex(self: QImageIOPlugin) i32 {
        return qtc.QImageIOPlugin_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QImageIOPlugin, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QImageIOPlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QImageIOPlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QImageIOPlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageIOPlugin_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QImageIOPlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageIOPlugin_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin`
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#dtor.QImageIOPlugin)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn Delete(self: QImageIOPlugin) void {
        qtc.QImageIOPlugin_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#public-types)
pub const enums = struct {
    pub const ImageOption = enum(i32) {
        pub const Size: i32 = 0;
        pub const ClipRect: i32 = 1;
        pub const Description: i32 = 2;
        pub const ScaledClipRect: i32 = 3;
        pub const ScaledSize: i32 = 4;
        pub const CompressionRatio: i32 = 5;
        pub const Gamma: i32 = 6;
        pub const Quality: i32 = 7;
        pub const Name: i32 = 8;
        pub const SubType: i32 = 9;
        pub const IncrementalReading: i32 = 10;
        pub const Endianness: i32 = 11;
        pub const Animation: i32 = 12;
        pub const BackgroundColor: i32 = 13;
        pub const ImageFormat: i32 = 14;
        pub const SupportedSubTypes: i32 = 15;
        pub const OptimizedWrite: i32 = 16;
        pub const ProgressiveScanWrite: i32 = 17;
        pub const ImageTransformation: i32 = 18;
    };

    pub const Transformation = enum(i32) {
        pub const TransformationNone: i32 = 0;
        pub const TransformationMirror: i32 = 1;
        pub const TransformationFlip: i32 = 2;
        pub const TransformationRotate180: i32 = 3;
        pub const TransformationRotate90: i32 = 4;
        pub const TransformationMirrorAndRotate90: i32 = 5;
        pub const TransformationFlipAndRotate90: i32 = 6;
        pub const TransformationRotate270: i32 = 7;
    };

    pub const Capability = enum(i32) {
        pub const CanRead: i32 = 1;
        pub const CanWrite: i32 = 2;
        pub const CanReadIncremental: i32 = 4;
    };
};
