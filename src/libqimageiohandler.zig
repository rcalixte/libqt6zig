const C = @import("qt6c");
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
    pub fn New() ?*C.QImageIOHandler {
        return C.QImageIOHandler_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setDevice)
    ///
    /// ``` self: ?*C.QImageIOHandler, device: ?*C.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        C.QImageIOHandler_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#device)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn Device(self: ?*anyopaque) ?*C.QIODevice {
        return C.QImageIOHandler_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ``` self: ?*C.QImageIOHandler, format: []u8 ```
    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QImageIOHandler_SetFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setFormat)
    ///
    /// ``` self: ?*C.QImageIOHandler, format: []u8 ```
    pub fn SetFormatWithFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        C.QImageIOHandler_SetFormatWithFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#format)
    ///
    /// ``` self: ?*C.QImageIOHandler, allocator: std.mem.Allocator ```
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QImageIOHandler_Format(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#canRead)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn CanRead(self: ?*anyopaque) bool {
        return C.QImageIOHandler_CanRead(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) bool ```
    pub fn OnCanRead(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QImageIOHandler_OnCanRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseCanRead(self: ?*anyopaque) bool {
        return C.QImageIOHandler_QBaseCanRead(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#read)
    ///
    /// ``` self: ?*C.QImageIOHandler, image: ?*C.QImage ```
    pub fn Read(self: ?*anyopaque, image: ?*anyopaque) bool {
        return C.QImageIOHandler_Read(@ptrCast(self), @ptrCast(image));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, ?*C.QImage) callconv(.c) bool ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QImageIOHandler_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, image: ?*C.QImage ```
    pub fn QBaseRead(self: ?*anyopaque, image: ?*anyopaque) bool {
        return C.QImageIOHandler_QBaseRead(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#write)
    ///
    /// ``` self: ?*C.QImageIOHandler, image: ?*C.QImage ```
    pub fn Write(self: ?*anyopaque, image: ?*anyopaque) bool {
        return C.QImageIOHandler_Write(@ptrCast(self), @ptrCast(image));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, ?*C.QImage) callconv(.c) bool ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QImageIOHandler_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, image: ?*C.QImage ```
    pub fn QBaseWrite(self: ?*anyopaque, image: ?*anyopaque) bool {
        return C.QImageIOHandler_QBaseWrite(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#option)
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn Option(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QImageIOHandler_Option(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, qimageiohandler_enums.ImageOption) callconv(.c) ?*C.QVariant ```
    pub fn OnOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QImageIOHandler_OnOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn QBaseOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QImageIOHandler_QBaseOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#setOption)
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: ?*C.QVariant ```
    pub fn SetOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QImageIOHandler_SetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, qimageiohandler_enums.ImageOption, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOHandler_OnSetOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption, value: ?*C.QVariant ```
    pub fn QBaseSetOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QImageIOHandler_QBaseSetOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#supportsOption)
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn SupportsOption(self: ?*anyopaque, option: i64) bool {
        return C.QImageIOHandler_SupportsOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, qimageiohandler_enums.ImageOption) callconv(.c) bool ```
    pub fn OnSupportsOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QImageIOHandler_OnSupportsOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, option: qimageiohandler_enums.ImageOption ```
    pub fn QBaseSupportsOption(self: ?*anyopaque, option: i64) bool {
        return C.QImageIOHandler_QBaseSupportsOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToNextImage)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn JumpToNextImage(self: ?*anyopaque) bool {
        return C.QImageIOHandler_JumpToNextImage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) bool ```
    pub fn OnJumpToNextImage(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QImageIOHandler_OnJumpToNextImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseJumpToNextImage(self: ?*anyopaque) bool {
        return C.QImageIOHandler_QBaseJumpToNextImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#jumpToImage)
    ///
    /// ``` self: ?*C.QImageIOHandler, imageNumber: i32 ```
    pub fn JumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return C.QImageIOHandler_JumpToImage(@ptrCast(self), @intCast(imageNumber));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn (?*C.QImageIOHandler, i32) callconv(.c) bool ```
    pub fn OnJumpToImage(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QImageIOHandler_OnJumpToImage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler, imageNumber: i32 ```
    pub fn QBaseJumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return C.QImageIOHandler_QBaseJumpToImage(@ptrCast(self), @intCast(imageNumber));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#loopCount)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_LoopCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnLoopCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QImageIOHandler_OnLoopCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseLoopCount(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_QBaseLoopCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#imageCount)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn ImageCount(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_ImageCount(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnImageCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QImageIOHandler_OnImageCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseImageCount(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_QBaseImageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#nextImageDelay)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn NextImageDelay(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_NextImageDelay(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnNextImageDelay(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QImageIOHandler_OnNextImageDelay(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseNextImageDelay(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_QBaseNextImageDelay(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageNumber)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn CurrentImageNumber(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_CurrentImageNumber(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) i32 ```
    pub fn OnCurrentImageNumber(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QImageIOHandler_OnCurrentImageNumber(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseCurrentImageNumber(self: ?*anyopaque) i32 {
        return C.QImageIOHandler_QBaseCurrentImageNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#currentImageRect)
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn CurrentImageRect(self: ?*anyopaque) ?*C.QRect {
        return C.QImageIOHandler_CurrentImageRect(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOHandler, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnCurrentImageRect(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QImageIOHandler_OnCurrentImageRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QBaseCurrentImageRect(self: ?*anyopaque) ?*C.QRect {
        return C.QImageIOHandler_QBaseCurrentImageRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageiohandler.html#allocateImage)
    ///
    /// ``` size: ?*C.QSize, format: qimage_enums.Format, image: ?*C.QImage ```
    pub fn AllocateImage(size: ?*C.QSize, format: i64, image: ?*anyopaque) bool {
        return C.QImageIOHandler_AllocateImage(@ptrCast(size), @intCast(format), @ptrCast(image));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QImageIOHandler ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QImageIOHandler_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qimageioplugin.html
pub const qimageioplugin = struct {
    /// New constructs a new QImageIOPlugin object.
    ///
    ///
    pub fn New() ?*C.QImageIOPlugin {
        return C.QImageIOPlugin_new();
    }

    /// New2 constructs a new QImageIOPlugin object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QImageIOPlugin {
        return C.QImageIOPlugin_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QImageIOPlugin_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QImageIOPlugin, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QImageIOPlugin_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QImageIOPlugin_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QImageIOPlugin_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOPlugin, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QImageIOPlugin_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QImageIOPlugin_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#capabilities)
    ///
    /// ``` self: ?*C.QImageIOPlugin, device: ?*C.QIODevice, format: []u8 ```
    pub fn Capabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i64 {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        return C.QImageIOPlugin_Capabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QIODevice, []u8) callconv(.c) i64 ```
    pub fn OnCapabilities(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []u8) callconv(.c) i64) void {
        C.QImageIOPlugin_OnCapabilities(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOPlugin, device: ?*C.QIODevice, format: []u8 ```
    pub fn QBaseCapabilities(self: ?*anyopaque, device: ?*anyopaque, format: []u8) i64 {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        return C.QImageIOPlugin_QBaseCapabilities(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qimageioplugin.html#create)
    ///
    /// ``` self: ?*C.QImageIOPlugin, device: ?*C.QIODevice, format: []u8 ```
    pub fn Create(self: ?*anyopaque, device: ?*anyopaque, format: []u8) ?*C.QImageIOHandler {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        return C.QImageIOPlugin_Create(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QIODevice, []u8) callconv(.c) ?*C.QImageIOHandler ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []u8) callconv(.c) ?*C.QImageIOHandler) void {
        C.QImageIOPlugin_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QImageIOPlugin, device: ?*C.QIODevice, format: []u8 ```
    pub fn QBaseCreate(self: ?*anyopaque, device: ?*anyopaque, format: []u8) ?*C.QImageIOHandler {
        const format_str = C.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        return C.QImageIOPlugin_QBaseCreate(@ptrCast(self), @ptrCast(device), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QImageIOPlugin_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QImageIOPlugin_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QImageIOPlugin, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QImageIOPlugin, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QImageIOPlugin, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QImageIOPlugin, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QImageIOPlugin, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QImageIOPlugin, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QImageIOPlugin, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QImageIOPlugin, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QImageIOPlugin, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QImageIOPlugin, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QImageIOPlugin, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QImageIOPlugin, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QImageIOPlugin, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QImageIOPlugin, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QImageIOPlugin, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QImageIOPlugin, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QImageIOPlugin_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QImageIOPlugin_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QImageIOPlugin_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QImageIOPlugin_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QImageIOPlugin_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QImageIOPlugin_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOPlugin_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOPlugin_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QImageIOPlugin_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOPlugin_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QImageIOPlugin_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QImageIOPlugin_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOPlugin_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QImageIOPlugin_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QImageIOPlugin_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QImageIOPlugin_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QImageIOPlugin_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QImageIOPlugin_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QImageIOPlugin_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QImageIOPlugin_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QImageIOPlugin_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QImageIOPlugin_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QImageIOPlugin_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QImageIOPlugin_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QImageIOPlugin_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QImageIOPlugin_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QImageIOPlugin_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QImageIOPlugin, slot: fn (?*C.QImageIOPlugin, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QImageIOPlugin_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QImageIOPlugin ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QImageIOPlugin_Delete(@ptrCast(self));
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
