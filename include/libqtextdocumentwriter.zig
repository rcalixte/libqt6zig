const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextDocumentFragment = @import("libqt6").QTextDocumentFragment;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)
pub const QTextDocumentWriter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextDocumentWriter,

    pub const _is_QTextDocumentWriter = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextDocumentWriter object in C++ memory
    ///
    pub fn new() QTextDocumentWriter {
        return .{ .ptr = qtc.QTextDocumentWriter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextDocumentWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new2(_device: anytype, _format: []u8) QTextDocumentWriter {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new2(@ptrCast(_device.ptr), format_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextDocumentWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn new3(_fileName: []const u8) QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new3(fileName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextDocumentWriter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: []u8 `
    ///
    pub fn new4(_fileName: []const u8, _format: []u8) QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new4(fileName_str, format_str) };
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` _format: []u8 `
    ///
    pub fn setFormat(self: QTextDocumentWriter, _format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QTextDocumentWriter_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QTextDocumentWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTextDocumentWriter_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTextDocumentWriter.format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QTextDocumentWriter, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QTextDocumentWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    pub fn device(self: QTextDocumentWriter) QIODevice {
        return .{ .ptr = qtc.QTextDocumentWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setFileName(self: QTextDocumentWriter, _fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.QTextDocumentWriter_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QTextDocumentWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentWriter_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentWriter.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn write(self: QTextDocumentWriter, document: anytype) bool {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return qtc.QTextDocumentWriter_Write(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` fragment: QTextDocumentFragment `
    ///
    pub fn write2(self: QTextDocumentWriter, fragment: anytype) bool {
        comptime _ = @TypeOf(fragment)._is_QTextDocumentFragment;
        return qtc.QTextDocumentWriter_Write2(@ptrCast(self.ptr), @ptrCast(fragment.ptr));
    }

    /// ### DEPRECATED: Use `supportedDocumentFormats` instead
    ///
    pub const SupportedDocumentFormats = supportedDocumentFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedDocumentFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTextDocumentWriter_SupportedDocumentFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextDocumentWriter.supportedDocumentFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextDocumentWriter.supportedDocumentFormats: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#dtor.QTextDocumentWriter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocumentWriter `
    ///
    pub fn delete(self: QTextDocumentWriter) void {
        qtc.QTextDocumentWriter_Delete(@ptrCast(self.ptr));
    }
};
