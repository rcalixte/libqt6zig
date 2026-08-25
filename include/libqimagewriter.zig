const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QImage = @import("libqt6").QImage;
const qimageiohandler_enums = @import("libqimageiohandler.zig").enums;
const qimagewriter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html)
pub const QImageWriter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QImageWriter,

    pub const _is_QImageWriter = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QImageWriter object in C++ memory
    ///
    pub fn new() QImageWriter {
        return .{ .ptr = qtc.QImageWriter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QImageWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new2(_device: anytype, _format: []u8) QImageWriter {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new2(@ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QImageWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new3(_fileName: []const u8) QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new3(fileName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QImageWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new4(_fileName: []const u8, _format: []u8) QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new4(fileName_str, format_str) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageWriter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat(self: QImageWriter, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QImageWriter_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QImageWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageWriter_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageWriter.format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QImageWriter, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QImageWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn device(self: QImageWriter) QIODevice {
        return .{ .ptr = qtc.QImageWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setFileName(self: QImageWriter, _fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.QImageWriter_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QImageWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageWriter_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageWriter.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setQuality` instead
    ///
    pub const SetQuality = setQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` _quality: i32 `
    ///
    pub fn setQuality(self: QImageWriter, _quality: i32) void {
        qtc.QImageWriter_SetQuality(@ptrCast(self.ptr), @bitCast(_quality));
    }

    /// ### DEPRECATED: Use `quality` instead
    ///
    pub const Quality = quality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn quality(self: QImageWriter) i32 {
        return qtc.QImageWriter_Quality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompression` instead
    ///
    pub const SetCompression = setCompression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` _compression: i32 `
    ///
    pub fn setCompression(self: QImageWriter, _compression: i32) void {
        qtc.QImageWriter_SetCompression(@ptrCast(self.ptr), @bitCast(_compression));
    }

    /// ### DEPRECATED: Use `compression` instead
    ///
    pub const Compression = compression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#compression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn compression(self: QImageWriter) i32 {
        return qtc.QImageWriter_Compression(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubType` instead
    ///
    pub const SetSubType = setSubType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` typeVal: []u8 `
    ///
    pub fn setSubType(self: QImageWriter, typeVal: []u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.QImageWriter_SetSubType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subType(self: QImageWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageWriter_SubType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QImageWriter.subType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedSubTypes` instead
    ///
    pub const SupportedSubTypes = supportedSubTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSubTypes(self: QImageWriter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedSubTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageWriter.supportedSubTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageWriter.supportedSubTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setOptimizedWrite` instead
    ///
    pub const SetOptimizedWrite = setOptimizedWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setOptimizedWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` optimize: bool `
    ///
    pub fn setOptimizedWrite(self: QImageWriter, optimize: bool) void {
        qtc.QImageWriter_SetOptimizedWrite(@ptrCast(self.ptr), optimize);
    }

    /// ### DEPRECATED: Use `optimizedWrite` instead
    ///
    pub const OptimizedWrite = optimizedWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn optimizedWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_OptimizedWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgressiveScanWrite` instead
    ///
    pub const SetProgressiveScanWrite = setProgressiveScanWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` progressive: bool `
    ///
    pub fn setProgressiveScanWrite(self: QImageWriter, progressive: bool) void {
        qtc.QImageWriter_SetProgressiveScanWrite(@ptrCast(self.ptr), progressive);
    }

    /// ### DEPRECATED: Use `progressiveScanWrite` instead
    ///
    pub const ProgressiveScanWrite = progressiveScanWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn progressiveScanWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_ProgressiveScanWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transformation` instead
    ///
    pub const Transformation = transformation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#transformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Transformation `
    ///
    pub fn transformation(self: QImageWriter) i32 {
        return qtc.QImageWriter_Transformation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransformation` instead
    ///
    pub const SetTransformation = setTransformation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` orientation: flag of qimageiohandler_enums.Transformation `
    ///
    pub fn setTransformation(self: QImageWriter, orientation: i32) void {
        qtc.QImageWriter_SetTransformation(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` key: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setText(self: QImageWriter, key: []const u8, text: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QImageWriter_SetText(@ptrCast(self.ptr), key_str, text_str);
    }

    /// ### DEPRECATED: Use `canWrite` instead
    ///
    pub const CanWrite = canWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn canWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_CanWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` image: QImage `
    ///
    pub fn write(self: QImageWriter, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageWriter_Write(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ## Returns:
    ///
    /// ` qimagewriter_enums.ImageWriterError `
    ///
    pub fn error0(self: QImageWriter) i32 {
        return qtc.QImageWriter_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QImageWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageWriter_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageWriter.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsOption` instead
    ///
    pub const SupportsOption = supportsOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn supportsOption(self: QImageWriter, option: i32) bool {
        return qtc.QImageWriter_SupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `supportedImageFormats` instead
    ///
    pub const SupportedImageFormats = supportedImageFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedImageFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedImageFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageWriter.supportedImageFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageWriter.supportedImageFormats: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedMimeTypes` instead
    ///
    pub const SupportedMimeTypes = supportedMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedMimeTypes(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageWriter.supportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageWriter.supportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `imageFormatsForMimeType` instead
    ///
    pub const ImageFormatsForMimeType = imageFormatsForMimeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#imageFormatsForMimeType)
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
        const _arr: qtc.libqt_list = qtc.QImageWriter_ImageFormatsForMimeType(mimeType_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QImageWriter.imageFormatsForMimeType: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QImageWriter.imageFormatsForMimeType: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageWriter.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QImageWriter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#dtor.QImageWriter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageWriter `
    ///
    pub fn delete(self: QImageWriter) void {
        qtc.QImageWriter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#public-types)
pub const enums = struct {
    pub const ImageWriterError = enum {
        pub const UnknownError: i32 = 0;
        pub const DeviceError: i32 = 1;
        pub const UnsupportedFormatError: i32 = 2;
        pub const InvalidImageError: i32 = 3;
    };
};
