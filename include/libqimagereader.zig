const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimage_enums = @import("libqimage.zig").enums;
const qimageiohandler_enums = @import("libqimageiohandler.zig").enums;
const qimagereader_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html)
pub const qimagereader = struct {
    /// New constructs a new QImageReader object.
    ///
    pub fn New() QtC.QImageReader {
        return qtc.QImageReader_new();
    }

    /// New2 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn New2(device: ?*anyopaque) QtC.QImageReader {
        return qtc.QImageReader_new2(@ptrCast(device));
    }

    /// New3 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New3(fileName: []const u8) QtC.QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QImageReader_new3(fileName_str);
    }

    /// New4 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn New4(device: ?*anyopaque, format: []u8) QtC.QImageReader {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QImageReader_new4(@ptrCast(device), format_str);
    }

    /// New5 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: []u8 `
    ///
    pub fn New5(fileName: []const u8, format: []u8) QtC.QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QImageReader_new5(fileName_str, format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageReader_SetFormat(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_Format(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoDetectImageFormat(self: ?*anyopaque, enabled: bool) void {
        qtc.QImageReader_SetAutoDetectImageFormat(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn AutoDetectImageFormat(self: ?*anyopaque) bool {
        return qtc.QImageReader_AutoDetectImageFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDecideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` ignored: bool `
    ///
    pub fn SetDecideFormatFromContent(self: ?*anyopaque, ignored: bool) void {
        qtc.QImageReader_SetDecideFormatFromContent(@ptrCast(self), ignored);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#decideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn DecideFormatFromContent(self: ?*anyopaque) bool {
        return qtc.QImageReader_DecideFormatFromContent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageReader_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QImageReader_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageReader_SetFileName(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QImageReader_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn ImageFormat(self: ?*anyopaque) i32 {
        return qtc.QImageReader_ImageFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#textKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextKeys(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_TextKeys(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qimagereader.TextKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagereader.TextKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` key: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QImageReader_Text(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetClipRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QImageReader_SetClipRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#clipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn ClipRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImageReader_ClipRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetScaledSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QImageReader_SetScaledSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn ScaledSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QImageReader_ScaledSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` quality: i32 `
    ///
    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageReader_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn Quality(self: ?*anyopaque) i32 {
        return qtc.QImageReader_Quality(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` rect: QtC.QRect `
    ///
    pub fn SetScaledClipRect(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QImageReader_SetScaledClipRect(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn ScaledClipRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImageReader_ScaledClipRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QImageReader_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QImageReader_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn SupportsAnimation(self: ?*anyopaque) bool {
        return qtc.QImageReader_SupportsAnimation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#transformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Transformation `
    ///
    pub fn Transformation(self: ?*anyopaque) i32 {
        return qtc.QImageReader_Transformation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoTransform(self: ?*anyopaque, enabled: bool) void {
        qtc.QImageReader_SetAutoTransform(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn AutoTransform(self: ?*anyopaque) bool {
        return qtc.QImageReader_AutoTransform(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubType(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_SubType(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.SubType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedSubTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagereader.SupportedSubTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagereader.SupportedSubTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#canRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn CanRead(self: ?*anyopaque) bool {
        return qtc.QImageReader_CanRead(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn Read(self: ?*anyopaque) QtC.QImage {
        return qtc.QImageReader_Read(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn Read2(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageReader_Read2(@ptrCast(self), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToNextImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn JumpToNextImage(self: ?*anyopaque) bool {
        return qtc.QImageReader_JumpToNextImage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn JumpToImage(self: ?*anyopaque, imageNumber: i32) bool {
        return qtc.QImageReader_JumpToImage(@ptrCast(self), @intCast(imageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return qtc.QImageReader_LoopCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn ImageCount(self: ?*anyopaque) i32 {
        return qtc.QImageReader_ImageCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#nextImageDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn NextImageDelay(self: ?*anyopaque) i32 {
        return qtc.QImageReader_NextImageDelay(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn CurrentImageNumber(self: ?*anyopaque) i32 {
        return qtc.QImageReader_CurrentImageNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn CurrentImageRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QImageReader_CurrentImageRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` qimagereader_enums.ImageReaderError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QImageReader_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageReader `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageReader_SupportsOption(@ptrCast(self), @intCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageFormat2(fileName: []const u8, allocator: std.mem.Allocator) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat2(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.ImageFormat2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageFormat3(device: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat3(@ptrCast(device));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.ImageFormat3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedImageFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedImageFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedImageFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagereader.SupportedImageFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagereader.SupportedImageFormats: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedMimeTypes(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagereader.SupportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagereader.SupportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormatsForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeType: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageFormatsForMimeType(mimeType: []u8, allocator: std.mem.Allocator) [][]u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QImageReader_ImageFormatsForMimeType(mimeType_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagereader.ImageFormatsForMimeType: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagereader.ImageFormatsForMimeType: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#allocationLimit)
    ///
    pub fn AllocationLimit() i32 {
        return qtc.QImageReader_AllocationLimit();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAllocationLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` mbLimit: i32 `
    ///
    pub fn SetAllocationLimit(mbLimit: i32) void {
        qtc.QImageReader_SetAllocationLimit(@intCast(mbLimit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#dtor.QImageReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QImageReader `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageReader_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#public-types)
pub const enums = struct {
    pub const ImageReaderError = enum(i32) {
        pub const UnknownError: i32 = 0;
        pub const FileNotFoundError: i32 = 1;
        pub const DeviceError: i32 = 2;
        pub const UnsupportedFormatError: i32 = 3;
        pub const InvalidDataError: i32 = 4;
    };
};
