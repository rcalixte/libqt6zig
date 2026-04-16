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

    /// New constructs a new QTextDocumentWriter object.
    ///
    pub fn New() QTextDocumentWriter {
        return .{ .ptr = qtc.QTextDocumentWriter_new() };
    }

    /// New2 constructs a new QTextDocumentWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    /// ` format: []u8 `
    ///
    pub fn New2(device: anytype, format: []u8) QTextDocumentWriter {
        comptime _ = @TypeOf(device)._is_QIODevice;
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new2(@ptrCast(device.ptr), format_str) };
    }

    /// New3 constructs a new QTextDocumentWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New3(fileName: []const u8) QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new3(fileName_str) };
    }

    /// New4 constructs a new QTextDocumentWriter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: []u8 `
    ///
    pub fn New4(fileName: []const u8, format: []u8) QTextDocumentWriter {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentWriter_new4(fileName_str, format_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` format: []u8 `
    ///
    pub fn SetFormat(self: QTextDocumentWriter, format: []u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QTextDocumentWriter_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: QTextDocumentWriter, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QTextDocumentWriter_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtextdocumentwriter.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QTextDocumentWriter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QTextDocumentWriter_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    pub fn Device(self: QTextDocumentWriter) QIODevice {
        return .{ .ptr = qtc.QTextDocumentWriter_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: QTextDocumentWriter, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QTextDocumentWriter_SetFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QTextDocumentWriter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentWriter_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentwriter.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn Write(self: QTextDocumentWriter, document: anytype) bool {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return qtc.QTextDocumentWriter_Write(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentWriter `
    ///
    /// ` fragment: QTextDocumentFragment `
    ///
    pub fn Write2(self: QTextDocumentWriter, fragment: anytype) bool {
        comptime _ = @TypeOf(fragment)._is_QTextDocumentFragment;
        return qtc.QTextDocumentWriter_Write2(@ptrCast(self.ptr), @ptrCast(fragment.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedDocumentFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QTextDocumentWriter_SupportedDocumentFormats();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextdocumentwriter.SupportedDocumentFormats: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextdocumentwriter.SupportedDocumentFormats: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#dtor.QTextDocumentWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocumentWriter `
    ///
    pub fn Delete(self: QTextDocumentWriter) void {
        qtc.QTextDocumentWriter_Delete(@ptrCast(self.ptr));
    }
};
