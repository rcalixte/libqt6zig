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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImageReader object in C++ memory
    ///
    pub fn new() QImageReader {
        return .{ .ptr = qtc.QImageReader_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QImageReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new2(_device: anytype) QImageReader {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QImageReader_new2(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QImageReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new3(_fileName: []const u8) QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new3(fileName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QImageReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new4(_device: anytype, _format: []u8) QImageReader {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new4(@ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QImageReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new5(_fileName: []const u8, _format: []u8) QImageReader {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageReader_new5(fileName_str, format_str) };
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
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat(self: QImageReader, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QImageReader_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QImageReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageReader.format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAutoDetectImageFormat` instead
    ///
    pub const SetAutoDetectImageFormat = setAutoDetectImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoDetectImageFormat(self: QImageReader, enabled: bool) void {
        qtc.QImageReader_SetAutoDetectImageFormat(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `autoDetectImageFormat` instead
    ///
    pub const AutoDetectImageFormat = autoDetectImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoDetectImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn autoDetectImageFormat(self: QImageReader) bool {
        return qtc.QImageReader_AutoDetectImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecideFormatFromContent` instead
    ///
    pub const SetDecideFormatFromContent = setDecideFormatFromContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDecideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` ignored: bool `
    ///
    pub fn setDecideFormatFromContent(self: QImageReader, ignored: bool) void {
        qtc.QImageReader_SetDecideFormatFromContent(@ptrCast(self.ptr), ignored);
    }

    /// ### DEPRECATED: Use `decideFormatFromContent` instead
    ///
    pub const DecideFormatFromContent = decideFormatFromContent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#decideFormatFromContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn decideFormatFromContent(self: QImageReader) bool {
        return qtc.QImageReader_DecideFormatFromContent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QImageReader, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QImageReader_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn device(self: QImageReader) QIODevice {
        return .{ .ptr = qtc.QImageReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setFileName(self: QImageReader, _fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.QImageReader_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QImageReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn size(self: QImageReader) QSize {
        return .{ .ptr = qtc.QImageReader_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imageFormat` instead
    ///
    pub const ImageFormat = imageFormat;

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
    pub fn imageFormat(self: QImageReader) i32 {
        return qtc.QImageReader_ImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textKeys` instead
    ///
    pub const TextKeys = textKeys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#textKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textKeys(self: QImageReader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_TextKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QImageReader.textKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageReader.textKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: QImageReader, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.QImageReader_Text(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setClipRect` instead
    ///
    pub const SetClipRect = setClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` rect: QRect `
    ///
    pub fn setClipRect(self: QImageReader, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QImageReader_SetClipRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `clipRect` instead
    ///
    pub const ClipRect = clipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#clipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn clipRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_ClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScaledSize` instead
    ///
    pub const SetScaledSize = setScaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` _size: QSize `
    ///
    pub fn setScaledSize(self: QImageReader, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QImageReader_SetScaledSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `scaledSize` instead
    ///
    pub const ScaledSize = scaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn scaledSize(self: QImageReader) QSize {
        return .{ .ptr = qtc.QImageReader_ScaledSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setQuality` instead
    ///
    pub const SetQuality = setQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` _quality: i32 `
    ///
    pub fn setQuality(self: QImageReader, _quality: i32) void {
        qtc.QImageReader_SetQuality(@ptrCast(self.ptr), @bitCast(_quality));
    }

    /// ### DEPRECATED: Use `quality` instead
    ///
    pub const Quality = quality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn quality(self: QImageReader) i32 {
        return qtc.QImageReader_Quality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScaledClipRect` instead
    ///
    pub const SetScaledClipRect = setScaledClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` rect: QRect `
    ///
    pub fn setScaledClipRect(self: QImageReader, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QImageReader_SetScaledClipRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `scaledClipRect` instead
    ///
    pub const ScaledClipRect = scaledClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn scaledClipRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_ScaledClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: QImageReader, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QImageReader_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn backgroundColor(self: QImageReader) QColor {
        return .{ .ptr = qtc.QImageReader_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportsAnimation` instead
    ///
    pub const SupportsAnimation = supportsAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn supportsAnimation(self: QImageReader) bool {
        return qtc.QImageReader_SupportsAnimation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transformation` instead
    ///
    pub const Transformation = transformation;

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
    pub fn transformation(self: QImageReader) i32 {
        return qtc.QImageReader_Transformation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoTransform` instead
    ///
    pub const SetAutoTransform = setAutoTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAutoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoTransform(self: QImageReader, enabled: bool) void {
        qtc.QImageReader_SetAutoTransform(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `autoTransform` instead
    ///
    pub const AutoTransform = autoTransform;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#autoTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn autoTransform(self: QImageReader) bool {
        return qtc.QImageReader_AutoTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subType(self: QImageReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageReader_SubType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageReader.subType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedSubTypes` instead
    ///
    pub const SupportedSubTypes = supportedSubTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSubTypes(self: QImageReader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedSubTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageReader.supportedSubTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageReader.supportedSubTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `canRead` instead
    ///
    pub const CanRead = canRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#canRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn canRead(self: QImageReader) bool {
        return qtc.QImageReader_CanRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn read(self: QImageReader) QImage {
        return .{ .ptr = qtc.QImageReader_Read(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` image: QImage `
    ///
    pub fn read2(self: QImageReader, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageReader_Read2(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `jumpToNextImage` instead
    ///
    pub const JumpToNextImage = jumpToNextImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToNextImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn jumpToNextImage(self: QImageReader) bool {
        return qtc.QImageReader_JumpToNextImage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `jumpToImage` instead
    ///
    pub const JumpToImage = jumpToImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#jumpToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` imageNumber: i32 `
    ///
    pub fn jumpToImage(self: QImageReader, imageNumber: i32) bool {
        return qtc.QImageReader_JumpToImage(@ptrCast(self.ptr), @bitCast(imageNumber));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn loopCount(self: QImageReader) i32 {
        return qtc.QImageReader_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `imageCount` instead
    ///
    pub const ImageCount = imageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn imageCount(self: QImageReader) i32 {
        return qtc.QImageReader_ImageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextImageDelay` instead
    ///
    pub const NextImageDelay = nextImageDelay;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#nextImageDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn nextImageDelay(self: QImageReader) i32 {
        return qtc.QImageReader_NextImageDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentImageNumber` instead
    ///
    pub const CurrentImageNumber = currentImageNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn currentImageNumber(self: QImageReader) i32 {
        return qtc.QImageReader_CurrentImageNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentImageRect` instead
    ///
    pub const CurrentImageRect = currentImageRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#currentImageRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    pub fn currentImageRect(self: QImageReader) QRect {
        return .{ .ptr = qtc.QImageReader_CurrentImageRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QImageReader) i32 {
        return qtc.QImageReader_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QImageReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageReader_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsOption` instead
    ///
    pub const SupportsOption = supportsOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageReader `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn supportsOption(self: QImageReader, option: i32) bool {
        return qtc.QImageReader_SupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `imageFormat2` instead
    ///
    pub const ImageFormat2 = imageFormat2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn imageFormat2(allocator: std.mem.Allocator, _fileName: []const u8) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat2(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageReader.imageFormat2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageFormat3` instead
    ///
    pub const ImageFormat3 = imageFormat3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn imageFormat3(allocator: std.mem.Allocator, _device: anytype) []u8 {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        var _bytearray: qtc.libqt_string = qtc.QImageReader_ImageFormat3(@ptrCast(_device.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageReader.imageFormat3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedImageFormats` instead
    ///
    pub const SupportedImageFormats = supportedImageFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedImageFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedImageFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedImageFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageReader.supportedImageFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageReader.supportedImageFormats: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedMimeTypes` instead
    ///
    pub const SupportedMimeTypes = supportedMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedMimeTypes(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageReader_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageReader.supportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageReader.supportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `imageFormatsForMimeType` instead
    ///
    pub const ImageFormatsForMimeType = imageFormatsForMimeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#imageFormatsForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []u8 `
    ///
    pub fn imageFormatsForMimeType(allocator: std.mem.Allocator, mimeType: []u8) [][]u8 {
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageReader.imageFormatsForMimeType: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageReader.imageFormatsForMimeType: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allocationLimit` instead
    ///
    pub const AllocationLimit = allocationLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#allocationLimit)
    ///
    pub fn allocationLimit() i32 {
        return qtc.QImageReader_AllocationLimit();
    }

    /// ### DEPRECATED: Use `setAllocationLimit` instead
    ///
    pub const SetAllocationLimit = setAllocationLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#setAllocationLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` mbLimit: i32 `
    ///
    pub fn setAllocationLimit(mbLimit: i32) void {
        qtc.QImageReader_SetAllocationLimit(@bitCast(mbLimit));
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.tr2: Memory allocation failed");
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageReader.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#dtor.QImageReader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageReader `
    ///
    pub fn delete(self: QImageReader) void {
        qtc.QImageReader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagereader.html#public-types)
pub const enums = struct {
    pub const ImageReaderError = enum {
        pub const UnknownError: i32 = 0;
        pub const FileNotFoundError: i32 = 1;
        pub const DeviceError: i32 = 2;
        pub const UnsupportedFormatError: i32 = 3;
        pub const InvalidDataError: i32 = 4;
    };
};
