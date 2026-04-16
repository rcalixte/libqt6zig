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

    /// New constructs a new QImageWriter object.
    ///
    pub fn New() QImageWriter {
        return .{ .ptr = qtc.QImageWriter_new() };
    }

    /// New2 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn New2(device: anytype, format: []u8) QImageWriter {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new2(@ptrCast(device.ptr), format_str) };
    }

    /// New3 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New3(fileName: []const u8) QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new3(fileName_str) };
    }

    /// New4 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: []u8 `
    ///
    pub fn New4(fileName: []const u8, format: []u8) QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QImageWriter_new4(fileName_str, format_str) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: QImageWriter, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageWriter_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: QImageWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageWriter_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QImageWriter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QImageWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn Device(self: QImageWriter) QIODevice {
        return .{ .ptr = qtc.QImageWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: QImageWriter, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageWriter_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QImageWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageWriter_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` quality: i32 `
    ///
    pub fn SetQuality(self: QImageWriter, quality: i32) void {
        qtc.QImageWriter_SetQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn Quality(self: QImageWriter) i32 {
        return qtc.QImageWriter_Quality(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` compression: i32 `
    ///
    pub fn SetCompression(self: QImageWriter, compression: i32) void {
        qtc.QImageWriter_SetCompression(@ptrCast(self.ptr), @bitCast(compression));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#compression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn Compression(self: QImageWriter) i32 {
        return qtc.QImageWriter_Compression(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` typeVal: []u8 `
    ///
    pub fn SetSubType(self: QImageWriter, typeVal: []u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.QImageWriter_SetSubType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubType(self: QImageWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QImageWriter_SubType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.SubType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubTypes(self: QImageWriter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedSubTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagewriter.SupportedSubTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagewriter.SupportedSubTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setOptimizedWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` optimize: bool `
    ///
    pub fn SetOptimizedWrite(self: QImageWriter, optimize: bool) void {
        qtc.QImageWriter_SetOptimizedWrite(@ptrCast(self.ptr), optimize);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn OptimizedWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_OptimizedWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` progressive: bool `
    ///
    pub fn SetProgressiveScanWrite(self: QImageWriter, progressive: bool) void {
        qtc.QImageWriter_SetProgressiveScanWrite(@ptrCast(self.ptr), progressive);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn ProgressiveScanWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_ProgressiveScanWrite(@ptrCast(self.ptr));
    }

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
    pub fn Transformation(self: QImageWriter) i32 {
        return qtc.QImageWriter_Transformation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` orientation: flag of qimageiohandler_enums.Transformation `
    ///
    pub fn SetTransformation(self: QImageWriter, orientation: i32) void {
        qtc.QImageWriter_SetTransformation(@ptrCast(self.ptr), @bitCast(orientation));
    }

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
    pub fn SetText(self: QImageWriter, key: []const u8, text: []const u8) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    pub fn CanWrite(self: QImageWriter) bool {
        return qtc.QImageWriter_CanWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` image: QImage `
    ///
    pub fn Write(self: QImageWriter, image: anytype) bool {
        comptime _ = @TypeOf(image)._is_QImage;
        return qtc.QImageWriter_Write(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

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
    pub fn Error(self: QImageWriter) i32 {
        return qtc.QImageWriter_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QImageWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QImageWriter_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QImageWriter `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SupportsOption(self: QImageWriter, option: i32) bool {
        return qtc.QImageWriter_SupportsOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedImageFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedImageFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagewriter.SupportedImageFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagewriter.SupportedImageFormats: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedMimeTypes(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedMimeTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagewriter.SupportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagewriter.SupportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#imageFormatsForMimeType)
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
        const _arr: qtc.libqt_list = qtc.QImageWriter_ImageFormatsForMimeType(mimeType_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qimagewriter.ImageFormatsForMimeType: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qimagewriter.ImageFormatsForMimeType: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
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
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#dtor.QImageWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QImageWriter `
    ///
    pub fn Delete(self: QImageWriter) void {
        qtc.QImageWriter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#public-types)
pub const enums = struct {
    pub const ImageWriterError = enum(i32) {
        pub const UnknownError: i32 = 0;
        pub const DeviceError: i32 = 1;
        pub const UnsupportedFormatError: i32 = 2;
        pub const InvalidImageError: i32 = 3;
    };
};
