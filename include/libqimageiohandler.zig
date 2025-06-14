const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = @import("libqimage.zig").enums;
const qimageiohandler_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qimageiohandler.html
pub const qimageiohandler = struct {
    /// New constructs a new QImageIOHandler object.
    ///
    ///
    pub fn New() QtC.QImageIOHandler {
        return qtc.QImageIOHandler_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
    ///
    /// ``` self: QtC.QImageIOHandler, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageIOHandler_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#device)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QImageIOHandler_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ``` self: QtC.QImageIOHandler, format: []u8 ```
    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageIOHandler_SetFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ``` self: QtC.QImageIOHandler, format: []u8 ```
    pub fn SetFormatWithFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageIOHandler_SetFormatWithFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#format)
    ///
    /// ``` self: QtC.QImageIOHandler, allocator: std.mem.Allocator ```
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QImageIOHandler_Format(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimageiohandler.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn CanRead(self: ?*anyopaque) bool {
        return qtc.QImageIOHandler_CanRead(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) bool ```
    pub fn OnCanRead(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnCanRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseCanRead(self: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseCanRead(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// ``` self: QtC.QImageIOHandler, image: QtC.QImage ```
    pub fn Read(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_Read(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, image: QtC.QImage) callconv(.c) bool ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, image: QtC.QImage ```
    pub fn QBaseRead(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseRead(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// ``` self: QtC.QImageIOHandler, image: QtC.QImage ```
    pub fn Write(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_Write(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, image: QtC.QImage) callconv(.c) bool ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, image: QtC.QImage ```
    pub fn QBaseWrite(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseWrite(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn Option(self: ?*anyopaque, option: i64) QtC.QVariant {
        return qtc.QImageIOHandler_Option(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption) callconv(.c) QtC.QVariant ```
    pub fn OnOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QImageIOHandler_OnOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn QBaseOption(self: ?*anyopaque, option: i64) QtC.QVariant {
        return qtc.QImageIOHandler_QBaseOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: QtC.QVariant ```
    pub fn SetOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        qtc.QImageIOHandler_SetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOHandler_OnSetOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: QtC.QVariant ```
    pub fn QBaseSetOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        qtc.QImageIOHandler_QBaseSetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn SupportsOption(self: ?*anyopaque, option: i64) bool {
        return qtc.QImageIOHandler_SupportsOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption) callconv(.c) bool ```
    pub fn OnSupportsOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnSupportsOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn QBaseSupportsOption(self: ?*anyopaque, option: i64) bool {
        return qtc.QImageIOHandler_QBaseSupportsOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn JumpToNextImage(self: ?*anyopaque) bool {
        return qtc.QImageIOHandler_JumpToNextImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) bool ```
    pub fn OnJumpToNextImage(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToNextImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseJumpToNextImage(self: ?*anyopaque) bool {
        return qtc.QImageIOHandler_QBaseJumpToNextImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// ``` self: QtC.QImageIOHandler, imageNumber: i32 ```
    pub fn JumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageIOHandler_JumpToImage(@ptrCast(self), @intCast(imageNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn (self: QtC.QImageIOHandler, imageNumber: i32) callconv(.c) bool ```
    pub fn OnJumpToImage(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QImageIOHandler_OnJumpToImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler, imageNumber: i32 ```
    pub fn QBaseJumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageIOHandler_QBaseJumpToImage(@ptrCast(self), @intCast(imageNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_LoopCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnLoopCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnLoopCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseLoopCount(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_QBaseLoopCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn ImageCount(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_ImageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnImageCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnImageCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseImageCount(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_QBaseImageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn NextImageDelay(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_NextImageDelay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnNextImageDelay(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnNextImageDelay(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseNextImageDelay(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_QBaseNextImageDelay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn CurrentImageNumber(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_CurrentImageNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnCurrentImageNumber(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImageIOHandler_OnCurrentImageNumber(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseCurrentImageNumber(self: ?*anyopaque) i32 {
        return qtc.QImageIOHandler_QBaseCurrentImageNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn CurrentImageRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImageIOHandler_CurrentImageRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOHandler, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnCurrentImageRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QImageIOHandler_OnCurrentImageRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QBaseCurrentImageRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImageIOHandler_QBaseCurrentImageRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
    ///
    /// ``` size: QtC.QSize, format: qimage_enums.Format, image: QtC.QImage ```
    pub fn AllocateImage(size: QtC.QSize, format: i64, image: ?*anyopaque) bool {
        return qtc.QImageIOHandler_AllocateImage(@ptrCast(size), @intCast(format), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#dtor.QImageIOHandler)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QImageIOHandler ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageIOHandler_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimageioplugin.html
pub const qimageioplugin = struct {
    /// New constructs a new QImageIOPlugin object.
    ///
    ///
    pub fn New() QtC.QImageIOPlugin {
        return qtc.QImageIOPlugin_new();
    }

    /// New2 constructs a new QImageIOPlugin object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QImageIOPlugin {
        return qtc.QImageIOPlugin_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QImageIOPlugin_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QImageIOPlugin, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QImageIOPlugin_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QImageIOPlugin_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QImageIOPlugin_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QImageIOPlugin_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// ``` self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8 ```
    pub fn Capabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i64 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_Capabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8) callconv(.c) i64 ```
    pub fn OnCapabilities(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []u8) callconv(.c) i64) void {
        qtc.QImageIOPlugin_OnCapabilities(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8 ```
    pub fn QBaseCapabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i64 {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_QBaseCapabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// ``` self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8 ```
    pub fn Create(self: ?*anyopaque, device: ?*anyopaque, format: []u8) QtC.QImageIOHandler {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_Create(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8) callconv(.c) QtC.QImageIOHandler ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []u8) callconv(.c) QtC.QImageIOHandler) void {
        qtc.QImageIOPlugin_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QImageIOPlugin, device: QtC.QIODevice, format: []u8 ```
    pub fn QBaseCreate(self: ?*anyopaque, device: ?*anyopaque, format: []u8) QtC.QImageIOHandler {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return qtc.QImageIOPlugin_QBaseCreate(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QImageIOPlugin_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QImageIOPlugin_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimageioplugin.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QImageIOPlugin, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QImageIOPlugin, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QImageIOPlugin, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QImageIOPlugin, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QImageIOPlugin, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qimageioplugin.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QImageIOPlugin, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QImageIOPlugin, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QImageIOPlugin, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QImageIOPlugin, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QImageIOPlugin, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QImageIOPlugin, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QImageIOPlugin, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QImageIOPlugin, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QImageIOPlugin, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QImageIOPlugin, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QImageIOPlugin_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageIOPlugin_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageIOPlugin_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageIOPlugin_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QImageIOPlugin_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QImageIOPlugin_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QImageIOPlugin_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QImageIOPlugin_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QImageIOPlugin_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QImageIOPlugin_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QImageIOPlugin_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QImageIOPlugin_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QImageIOPlugin_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QImageIOPlugin_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QImageIOPlugin, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QImageIOPlugin_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QImageIOPlugin, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#dtor.QImageIOPlugin)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QImageIOPlugin ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageIOPlugin_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimageiohandler.html#types
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
