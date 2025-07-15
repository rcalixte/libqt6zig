const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextdocumentwriter.html
pub const qtextdocumentwriter = struct {
    /// New constructs a new QTextDocumentWriter object.
    ///
    ///
    pub fn New() QtC.QTextDocumentWriter {
        return qtc.QTextDocumentWriter_new();
    }

    /// New2 constructs a new QTextDocumentWriter object.
    ///
    /// ``` device: QtC.QIODevice, format: []u8 ```
    pub fn New2(device: ?*anyopaque, format: []u8) QtC.QTextDocumentWriter {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QTextDocumentWriter_new2(@ptrCast(device), format_str);
    }

    /// New3 constructs a new QTextDocumentWriter object.
    ///
    /// ``` fileName: []const u8 ```
    pub fn New3(fileName: []const u8) QtC.QTextDocumentWriter {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QTextDocumentWriter_new3(fileName_str);
    }

    /// New4 constructs a new QTextDocumentWriter object.
    ///
    /// ``` fileName: []const u8, format: []u8 ```
    pub fn New4(fileName: []const u8, format: []u8) QtC.QTextDocumentWriter {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };

        return qtc.QTextDocumentWriter_new4(fileName_str, format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
    ///
    /// ``` self: QtC.QTextDocumentWriter, format: []u8 ```
    pub fn SetFormat(self: ?*anyopaque, format: []u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QTextDocumentWriter_SetFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
    ///
    /// ``` self: QtC.QTextDocumentWriter, allocator: std.mem.Allocator ```
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QTextDocumentWriter_Format(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtextdocumentwriter.Format: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
    ///
    /// ``` self: QtC.QTextDocumentWriter, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QTextDocumentWriter_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
    ///
    /// ``` self: QtC.QTextDocumentWriter ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QTextDocumentWriter_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
    ///
    /// ``` self: QtC.QTextDocumentWriter, fileName: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QTextDocumentWriter_SetFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
    ///
    /// ``` self: QtC.QTextDocumentWriter, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentWriter_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentwriter.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ``` self: QtC.QTextDocumentWriter, document: QtC.QTextDocument ```
    pub fn Write(self: ?*anyopaque, document: ?*anyopaque) bool {
        return qtc.QTextDocumentWriter_Write(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
    ///
    /// ``` self: QtC.QTextDocumentWriter, fragment: QtC.QTextDocumentFragment ```
    pub fn Write2(self: ?*anyopaque, fragment: ?*anyopaque) bool {
        return qtc.QTextDocumentWriter_Write2(@ptrCast(self), @ptrCast(fragment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SupportedDocumentFormats(allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QTextDocumentWriter_SupportedDocumentFormats();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#dtor.QTextDocumentWriter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextDocumentWriter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextDocumentWriter_Delete(@ptrCast(self));
    }
};
