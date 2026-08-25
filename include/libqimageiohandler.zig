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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImageIOHandler object in C++ memory
    ///
    pub fn new() QImageIOHandler {
        return .{ .ptr = qtc.QImageIOHandler_new() };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QImageIOHandler, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QImageIOHandler_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn device(self: QImageIOHandler) QIODevice {
        return .{ .ptr = qtc.QImageIOHandler_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat(self: QImageIOHandler, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QImageIOHandler_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `setFormat2` instead
    ///
    pub const SetFormat2 = setFormat2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat2(self: QImageIOHandler, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QImageIOHandler_SetFormat2(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QImageIOHandler, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageIOHandler_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageIOHandler.format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canRead` instead
    ///
    pub const CanRead = canRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn canRead(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_CanRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanRead` instead
    ///
    pub const OnCanRead = onCanRead;

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
    pub fn onCanRead(self: QImageIOHandler, callback: *const fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnCanRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanRead` instead
    ///
    pub const SuperCanRead = superCanRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superCanRead(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_SuperCanRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn read(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_Read(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

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
    pub fn onRead(self: QImageIOHandler, callback: *const fn (QImageIOHandler, QImage) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

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
    pub fn superRead(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_SuperRead(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` image: QImage `
    ///
    pub fn write(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_Write(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

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
    pub fn onWrite(self: QImageIOHandler, callback: *const fn (QImageIOHandler, QImage) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

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
    pub fn superWrite(self: QImageIOHandler, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_SuperWrite(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `option` instead
    ///
    pub const Option = option;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    pub fn option(self: QImageIOHandler, _option: i32) QVariant {
        return .{ .ptr = qtc.QImageIOHandler_Option(@ptrCast(self.ptr), @bitCast(_option)) };
    }

    /// ### DEPRECATED: Use `onOption` instead
    ///
    pub const OnOption = onOption;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) QVariant) void {
        qtc.QImageIOHandler_OnOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOption` instead
    ///
    pub const SuperOption = superOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    pub fn superOption(self: QImageIOHandler, _option: i32) QVariant {
        return .{ .ptr = qtc.QImageIOHandler_SuperOption(@ptrCast(self.ptr), @bitCast(_option)) };
    }

    /// ### DEPRECATED: Use `setOption` instead
    ///
    pub const SetOption = setOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn setOption(self: QImageIOHandler, _option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QImageIOHandler_SetOption(@ptrCast(self.ptr), @bitCast(_option), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetOption` instead
    ///
    pub const OnSetOption = onSetOption;

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
    pub fn onSetOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32, QVariant) callconv(.c) void) void {
        qtc.QImageIOHandler_OnSetOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetOption` instead
    ///
    pub const SuperSetOption = superSetOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetOption(self: QImageIOHandler, _option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QImageIOHandler_SuperSetOption(@ptrCast(self.ptr), @bitCast(_option), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `supportsOption` instead
    ///
    pub const SupportsOption = supportsOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    pub fn supportsOption(self: QImageIOHandler, _option: i32) bool {
        return qtc.QImageIOHandler_SupportsOption(@ptrCast(self.ptr), @bitCast(_option));
    }

    /// ### DEPRECATED: Use `onSupportsOption` instead
    ///
    pub const OnSupportsOption = onSupportsOption;

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
    pub fn onSupportsOption(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnSupportsOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportsOption` instead
    ///
    pub const SuperSupportsOption = superSupportsOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` _option: qimageiohandler_enums.ImageOption `
    ///
    pub fn superSupportsOption(self: QImageIOHandler, _option: i32) bool {
        return qtc.QImageIOHandler_SuperSupportsOption(@ptrCast(self.ptr), @bitCast(_option));
    }

    /// ### DEPRECATED: Use `jumpToNextImage` instead
    ///
    pub const JumpToNextImage = jumpToNextImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn jumpToNextImage(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_JumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onJumpToNextImage` instead
    ///
    pub const OnJumpToNextImage = onJumpToNextImage;

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
    pub fn onJumpToNextImage(self: QImageIOHandler, callback: *const fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToNextImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJumpToNextImage` instead
    ///
    pub const SuperJumpToNextImage = superJumpToNextImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superJumpToNextImage(self: QImageIOHandler) bool {
        return qtc.QImageIOHandler_SuperJumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `jumpToImage` instead
    ///
    pub const JumpToImage = jumpToImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn jumpToImage(self: QImageIOHandler, imageNumber: i32) bool {
        return qtc.QImageIOHandler_JumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### DEPRECATED: Use `onJumpToImage` instead
    ///
    pub const OnJumpToImage = onJumpToImage;

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
    pub fn onJumpToImage(self: QImageIOHandler, callback: *const fn (QImageIOHandler, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJumpToImage` instead
    ///
    pub const SuperJumpToImage = superJumpToImage;

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
    pub fn superJumpToImage(self: QImageIOHandler, imageNumber: i32) bool {
        return qtc.QImageIOHandler_SuperJumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn loopCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoopCount` instead
    ///
    pub const OnLoopCount = onLoopCount;

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
    pub fn onLoopCount(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnLoopCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoopCount` instead
    ///
    pub const SuperLoopCount = superLoopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superLoopCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperLoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `imageCount` instead
    ///
    pub const ImageCount = imageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn imageCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_ImageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onImageCount` instead
    ///
    pub const OnImageCount = onImageCount;

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
    pub fn onImageCount(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnImageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superImageCount` instead
    ///
    pub const SuperImageCount = superImageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superImageCount(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperImageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextImageDelay` instead
    ///
    pub const NextImageDelay = nextImageDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn nextImageDelay(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_NextImageDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNextImageDelay` instead
    ///
    pub const OnNextImageDelay = onNextImageDelay;

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
    pub fn onNextImageDelay(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnNextImageDelay(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNextImageDelay` instead
    ///
    pub const SuperNextImageDelay = superNextImageDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superNextImageDelay(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperNextImageDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentImageNumber` instead
    ///
    pub const CurrentImageNumber = currentImageNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn currentImageNumber(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_CurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentImageNumber` instead
    ///
    pub const OnCurrentImageNumber = onCurrentImageNumber;

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
    pub fn onCurrentImageNumber(self: QImageIOHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnCurrentImageNumber(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentImageNumber` instead
    ///
    pub const SuperCurrentImageNumber = superCurrentImageNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superCurrentImageNumber(self: QImageIOHandler) i32 {
        return qtc.QImageIOHandler_SuperCurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentImageRect` instead
    ///
    pub const CurrentImageRect = currentImageRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn currentImageRect(self: QImageIOHandler) QRect {
        return .{ .ptr = qtc.QImageIOHandler_CurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentImageRect` instead
    ///
    pub const OnCurrentImageRect = onCurrentImageRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentImageRect(self: QImageIOHandler, callback: *const fn () callconv(.c) QRect) void {
        qtc.QImageIOHandler_OnCurrentImageRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentImageRect` instead
    ///
    pub const SuperCurrentImageRect = superCurrentImageRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn superCurrentImageRect(self: QImageIOHandler) QRect {
        return .{ .ptr = qtc.QImageIOHandler_SuperCurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `allocateImage` instead
    ///
    pub const AllocateImage = allocateImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` _format: qimage_enums.Format `
    ///
    /// ` image: QImage `
    ///
    pub fn allocateImage(size: anytype, _format: i32, image: anytype) bool {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageIOHandler_AllocateImage(@ptrCast(size.ptr), @bitCast(_format), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#dtor.QImageIOHandler)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageIOHandler `
    ///
    pub fn delete(self: QImageIOHandler) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImageIOPlugin object in C++ memory
    ///
    pub fn new() QImageIOPlugin {
        return .{ .ptr = qtc.QImageIOPlugin_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QImageIOPlugin object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QImageIOPlugin {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QImageIOPlugin_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn metaObject(self: QImageIOPlugin) QMetaObject {
        return .{ .ptr = qtc.QImageIOPlugin_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QImageIOPlugin, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QImageIOPlugin_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn superMetaObject(self: QImageIOPlugin) QMetaObject {
        return .{ .ptr = qtc.QImageIOPlugin_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QImageIOPlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageIOPlugin_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QImageIOPlugin_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QImageIOPlugin, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageIOPlugin_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QImageIOPlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageIOPlugin_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` callback: *const fn (self: QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QImageIOPlugin, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QImageIOPlugin_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageIOPlugin.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Capability `
    ///
    pub fn capabilities(self: QImageIOPlugin, _device: anytype, _format: []u8) i32 {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return qtc.QImageIOPlugin_Capabilities(@ptrCast(self.ptr), @ptrCast(_device.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onCapabilities` instead
    ///
    pub const OnCapabilities = onCapabilities;

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
    pub fn onCapabilities(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QIODevice, qtc.libqt_string) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCapabilities` instead
    ///
    pub const SuperCapabilities = superCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Capability `
    ///
    pub fn superCapabilities(self: QImageIOPlugin, _device: anytype, _format: []u8) i32 {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return qtc.QImageIOPlugin_SuperCapabilities(@ptrCast(self.ptr), @ptrCast(_device.ptr), format_str);
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn create(self: QImageIOPlugin, _device: anytype, _format: []u8) QImageIOHandler {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageIOPlugin_Create(@ptrCast(self.ptr), @ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

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
    pub fn onCreate(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QIODevice, qtc.libqt_string) callconv(.c) QImageIOHandler) void {
        qtc.QImageIOPlugin_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn superCreate(self: QImageIOPlugin, _device: anytype, _format: []u8) QImageIOHandler {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageIOPlugin_SuperCreate(@ptrCast(self.ptr), @ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageIOPlugin.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageIOPlugin.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QImageIOPlugin, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageIOPlugin.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QImageIOPlugin, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn isWidgetType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn isWindowType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn isQuickItemType(self: QImageIOPlugin) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn signalsBlocked(self: QImageIOPlugin) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QImageIOPlugin, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn thread(self: QImageIOPlugin) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QImageIOPlugin, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QImageIOPlugin, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QImageIOPlugin, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QImageIOPlugin, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QImageIOPlugin, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QImageIOPlugin, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QImageIOPlugin.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QImageIOPlugin, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QImageIOPlugin, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QImageIOPlugin, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QImageIOPlugin, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn disconnect3(self: QImageIOPlugin) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QImageIOPlugin, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn dumpObjectTree(self: QImageIOPlugin) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn dumpObjectInfo(self: QImageIOPlugin) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QImageIOPlugin, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QImageIOPlugin, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QImageIOPlugin, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageIOPlugin.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageIOPlugin.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn bindingStorage(self: QImageIOPlugin) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn bindingStorage2(self: QImageIOPlugin) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn destroyed(self: QImageIOPlugin) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn parent(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QImageIOPlugin, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn deleteLater(self: QImageIOPlugin) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QImageIOPlugin, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QImageIOPlugin, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageIOPlugin `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QImageIOPlugin, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QImageIOPlugin, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QImageIOPlugin, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QImageIOPlugin, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QImageIOPlugin, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QImageIOPlugin, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QImageIOPlugin, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageIOPlugin_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QImageIOPlugin, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageIOPlugin_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QEvent) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QImageIOPlugin, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageIOPlugin_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QImageIOPlugin, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QImageIOPlugin_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QObject, QEvent) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QImageIOPlugin_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QImageIOPlugin_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QTimerEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QImageIOPlugin_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QImageIOPlugin_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QChildEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QImageIOPlugin_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QImageIOPlugin, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QImageIOPlugin_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QEvent) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QImageIOPlugin, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QImageIOPlugin_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QImageIOPlugin_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QImageIOPlugin) QObject {
        return .{ .ptr = qtc.QImageIOPlugin_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QImageIOPlugin, callback: *const fn () callconv(.c) QObject) void {
        qtc.QImageIOPlugin_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QImageIOPlugin) i32 {
        return qtc.QImageIOPlugin_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QImageIOPlugin) i32 {
        return qtc.QImageIOPlugin_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QImageIOPlugin, callback: *const fn () callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QImageIOPlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QImageIOPlugin, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QImageIOPlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageIOPlugin_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QImageIOPlugin, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QImageIOPlugin_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, QMetaMethod) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QImageIOPlugin, callback: *const fn (QImageIOPlugin, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimageioplugin.html#dtor.QImageIOPlugin)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageIOPlugin `
    ///
    pub fn delete(self: QImageIOPlugin) void {
        qtc.QImageIOPlugin_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimageiohandler.html#public-types)
pub const enums = struct {
    pub const ImageOption = enum {
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

    pub const Transformation = enum {
        pub const TransformationNone: i32 = 0;
        pub const TransformationMirror: i32 = 1;
        pub const TransformationFlip: i32 = 2;
        pub const TransformationRotate180: i32 = 3;
        pub const TransformationRotate90: i32 = 4;
        pub const TransformationMirrorAndRotate90: i32 = 5;
        pub const TransformationFlipAndRotate90: i32 = 6;
        pub const TransformationRotate270: i32 = 7;
    };

    pub const Capability = enum {
        pub const CanRead: i32 = 1;
        pub const CanWrite: i32 = 2;
        pub const CanReadIncremental: i32 = 4;
    };
};
