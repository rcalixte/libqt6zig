const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qimageiohandler_enums = @import("libqimageiohandler.zig").enums;
const qimagewriter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html)
pub const qimagewriter = struct {
    /// New constructs a new QImageWriter object.
    ///
    pub fn New() QtC.QImageWriter {
        return qtc.QImageWriter_new();
    }

    /// New2 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn New2(device: ?*anyopaque, format: []u8) QtC.QImageWriter {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QImageWriter_new2(@ptrCast(device), format_str);
    }

    /// New3 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New3(fileName: []const u8) QtC.QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QImageWriter_new3(fileName_str);
    }

    /// New4 constructs a new QImageWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: []u8 `
    ///
    pub fn New4(fileName: []const u8, format: []u8) QtC.QImageWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QImageWriter_new4(fileName_str, format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QImageWriter_SetFormat(@ptrCast(self), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageWriter_Format(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QImageWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QImageWriter_Device(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QImageWriter_SetFileName(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` quality: i32 `
    ///
    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QImageWriter_SetQuality(@ptrCast(self), @intCast(quality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn Quality(self: ?*anyopaque) i32 {
        return qtc.QImageWriter_Quality(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` compression: i32 `
    ///
    pub fn SetCompression(self: ?*anyopaque, compression: i32) void {
        qtc.QImageWriter_SetCompression(@ptrCast(self), @intCast(compression));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#compression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn Compression(self: ?*anyopaque) i32 {
        return qtc.QImageWriter_Compression(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` typeVal: []u8 `
    ///
    pub fn SetSubType(self: ?*anyopaque, typeVal: []u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.QImageWriter_SetSubType(@ptrCast(self), typeVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#subType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubType(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QImageWriter_SubType(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qimagewriter.SubType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedSubTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QImageWriter `
    ///
    /// ` optimize: bool `
    ///
    pub fn SetOptimizedWrite(self: ?*anyopaque, optimize: bool) void {
        qtc.QImageWriter_SetOptimizedWrite(@ptrCast(self), optimize);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn OptimizedWrite(self: ?*anyopaque) bool {
        return qtc.QImageWriter_OptimizedWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` progressive: bool `
    ///
    pub fn SetProgressiveScanWrite(self: ?*anyopaque, progressive: bool) void {
        qtc.QImageWriter_SetProgressiveScanWrite(@ptrCast(self), progressive);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn ProgressiveScanWrite(self: ?*anyopaque) bool {
        return qtc.QImageWriter_ProgressiveScanWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#transformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qimageiohandler_enums.Transformation `
    ///
    pub fn Transformation(self: ?*anyopaque) i32 {
        return qtc.QImageWriter_Transformation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` orientation: flag of qimageiohandler_enums.Transformation `
    ///
    pub fn SetTransformation(self: ?*anyopaque, orientation: i32) void {
        qtc.QImageWriter_SetTransformation(@ptrCast(self), @intCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` key: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, key: []const u8, text: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QImageWriter_SetText(@ptrCast(self), key_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn CanWrite(self: ?*anyopaque) bool {
        return qtc.QImageWriter_CanWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn Write(self: ?*anyopaque, image: ?*anyopaque) bool {
        return qtc.QImageWriter_Write(@ptrCast(self), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ## Returns:
    ///
    /// ` qimagewriter_enums.ImageWriterError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QImageWriter_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImageWriter_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QImageWriter `
    ///
    /// ` option: qimageiohandler_enums.ImageOption `
    ///
    pub fn SupportsOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QImageWriter_SupportsOption(@ptrCast(self), @intCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedImageFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QImageWriter_SupportedImageFormats();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` mimeType: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageFormatsForMimeType(mimeType: []u8, allocator: std.mem.Allocator) [][]u8 {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QImageWriter_ImageFormatsForMimeType(mimeType_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` sourceText: []const u8 `
    ///
    /// ` disambiguation: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: []const u8 `
    ///
    /// ` disambiguation: []const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qimagewriter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qimagewriter.html#dtor.QImageWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QImageWriter `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImageWriter_Delete(@ptrCast(self));
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
