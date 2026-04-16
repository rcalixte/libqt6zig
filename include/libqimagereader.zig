const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qimage_enums = @import("libqimage.zig").enums;
const qimageiohandler_enums = @import("libqimageiohandler.zig").enums;
const qimagereader_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html)
pub const QImageReader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImageReader,

    pub const _is_QImageReader = {};

    /// New constructs a new QImageReader object.
    ///
    pub fn New() QImageReader {
        return .{ .ptr = qtc.QImageReader_new() };
    }

    /// New2 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New2(device: anytype) QImageReader {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QImageReader_new2(@ptrCast(device.ptr)) };
    }

    /// New3 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New3(fileName: []const u8) QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new3(fileName_str) };
    }

    /// New4 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn New4(device: anytype, format: []u8) QImageReader {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new4(@ptrCast(device.ptr), format_str) };
    }

    /// New5 constructs a new QImageReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: []u8 `
    ///
    pub fn New5(fileName: []const u8, format: []u8) QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new5(fileName_str, format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
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
    /// ` self: QImageReader `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: QImageReader, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageReader_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: QImageReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoDetectImageFormat(self: QImageReader, enabled: bool) void {
        qtc.QImageReader_SetAutoDetectImageFormat(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn AutoDetectImageFormat(self: QImageReader) bool {
        return qtc.QImageReader_AutoDetectImageFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDecideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` ignored: bool `
    ///
    pub fn SetDecideFormatFromContent(self: QImageReader, ignored: bool) void {
        qtc.QImageReader_SetDecideFormatFromContent(@ptrCast(self.ptr), ignored);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#decideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn DecideFormatFromContent(self: QImageReader) bool {
        return qtc.QImageReader_DecideFormatFromContent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QImageReader, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QImageReader_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn Device(self: QImageReader) QIODevice {
        return .{ .ptr = qtc.QImageReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: QImageReader, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageReader_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QImageReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn Size(self: QImageReader) QSize {
        return .{ .ptr = qtc.QImageReader_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` qimage_enums.Format `
    ///
    pub fn ImageFormat(self: QImageReader) i32 {
        return qtc.QImageReader_ImageFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#textKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextKeys(self: QImageReader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_TextKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Text(self: QImageReader, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QImageReader_Text(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetClipRect(self: QImageReader, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QImageReader_SetClipRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#clipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn ClipRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_ClipRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` size: QSize `
    ///
    pub fn SetScaledSize(self: QImageReader, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QImageReader_SetScaledSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn ScaledSize(self: QImageReader) QSize {
        return .{ .ptr = qtc.QImageReader_ScaledSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` quality: i32 `
    ///
    pub fn SetQuality(self: QImageReader, quality: i32) void {
        qtc.QImageReader_SetQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn Quality(self: QImageReader) i32 {
        return qtc.QImageReader_Quality(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetScaledClipRect(self: QImageReader, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QImageReader_SetScaledClipRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn ScaledClipRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_ScaledClipRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBackgroundColor(self: QImageReader, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QImageReader_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn BackgroundColor(self: QImageReader) QColor {
        return .{ .ptr = qtc.QImageReader_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn SupportsAnimation(self: QImageReader) bool {
        return qtc.QImageReader_SupportsAnimation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#transformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Transformation `
    ///
    pub fn Transformation(self: QImageReader) i32 {
        return qtc.QImageReader_Transformation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoTransform(self: QImageReader, enabled: bool) void {
        qtc.QImageReader_SetAutoTransform(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn AutoTransform(self: QImageReader) bool {
        return qtc.QImageReader_AutoTransform(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubType(self: QImageReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_SubType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagereader.SubType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubTypes(self: QImageReader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedSubTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QImageReader `
    ///
    pub fn CanRead(self: QImageReader) bool {
        return qtc.QImageReader_CanRead(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn Read(self: QImageReader) QImage {
        return .{ .ptr = qtc.QImageReader_Read(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` image: QImage `
    ///
    pub fn Read2(self: QImageReader, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageReader_Read2(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToNextImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn JumpToNextImage(self: QImageReader) bool {
        return qtc.QImageReader_JumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn JumpToImage(self: QImageReader, imageNumber: i32) bool {
        return qtc.QImageReader_JumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn LoopCount(self: QImageReader) i32 {
        return qtc.QImageReader_LoopCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn ImageCount(self: QImageReader) i32 {
        return qtc.QImageReader_ImageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#nextImageDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn NextImageDelay(self: QImageReader) i32 {
        return qtc.QImageReader_NextImageDelay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn CurrentImageNumber(self: QImageReader) i32 {
        return qtc.QImageReader_CurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn CurrentImageRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_CurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ## Returns:
    ///
    /// ` qimagereader_enums.ImageReaderError `
    ///
    pub fn Error(self: QImageReader) i32 {
        return qtc.QImageReader_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QImageReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SupportsOption(self: QImageReader, option: i32) bool {
        return qtc.QImageReader_SupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn ImageFormat2(allocator: std.mem.Allocator, fileName: []const u8) []u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` device: QIODevice `
    ///
    pub fn ImageFormat3(allocator: std.mem.Allocator, device: anytype) []u8 {
        comptime _ = @TypeOf(device)._is_QIODevice;
        var _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat3(@ptrCast(device.ptr));
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
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []u8 `
    ///
    pub fn ImageFormatsForMimeType(allocator: std.mem.Allocator, mimeType: []u8) [][]u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QImageReader_ImageFormatsForMimeType(mimeType_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
        qtc.QImageReader_SetAllocationLimit(@bitCast(mbLimit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagereader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#dtor.QImageReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageReader `
    ///
    pub fn Delete(self: QImageReader) void {
        qtc.QImageReader_Delete(@ptrCast(self.ptr));
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
