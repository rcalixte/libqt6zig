const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextdocumentfragment.html
pub const qtextdocumentfragment = struct {
    /// New constructs a new QTextDocumentFragment object.
    ///
    ///
    pub fn New() QtC.QTextDocumentFragment {
        return qtc.QTextDocumentFragment_new();
    }

    /// New2 constructs a new QTextDocumentFragment object.
    ///
    /// ``` document: QtC.QTextDocument ```
    pub fn New2(document: ?*anyopaque) QtC.QTextDocumentFragment {
        return qtc.QTextDocumentFragment_new2(@ptrCast(document));
    }

    /// New3 constructs a new QTextDocumentFragment object.
    ///
    /// ``` range: QtC.QTextCursor ```
    pub fn New3(range: ?*anyopaque) QtC.QTextDocumentFragment {
        return qtc.QTextDocumentFragment_new3(@ptrCast(range));
    }

    /// New4 constructs a new QTextDocumentFragment object.
    ///
    /// ``` rhs: QtC.QTextDocumentFragment ```
    pub fn New4(rhs: ?*anyopaque) QtC.QTextDocumentFragment {
        return qtc.QTextDocumentFragment_new4(@ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator=)
    ///
    /// ``` self: QtC.QTextDocumentFragment, rhs: QtC.QTextDocumentFragment ```
    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QTextDocumentFragment_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
    ///
    /// ``` self: QtC.QTextDocumentFragment ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QTextDocumentFragment_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
    ///
    /// ``` self: QtC.QTextDocumentFragment, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentFragment_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
    ///
    /// ``` self: QtC.QTextDocumentFragment, allocator: std.mem.Allocator ```
    pub fn ToRawText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentFragment_ToRawText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
    ///
    /// ``` self: QtC.QTextDocumentFragment, allocator: std.mem.Allocator ```
    pub fn ToHtml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentFragment_ToHtml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
    ///
    /// ``` self: QtC.QTextDocumentFragment, allocator: std.mem.Allocator ```
    pub fn ToMarkdown(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentFragment_ToMarkdown(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
    ///
    /// ``` plainText: []const u8 ```
    pub fn FromPlainText(plainText: []const u8) QtC.QTextDocumentFragment {
        const plainText_str = qtc.struct_libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        return qtc.QTextDocumentFragment_FromPlainText(plainText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ``` html: []const u8 ```
    pub fn FromHtml(html: []const u8) QtC.QTextDocumentFragment {
        const html_str = qtc.struct_libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        return qtc.QTextDocumentFragment_FromHtml(html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ``` markdown: []const u8 ```
    pub fn FromMarkdown(markdown: []const u8) QtC.QTextDocumentFragment {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return qtc.QTextDocumentFragment_FromMarkdown(markdown_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
    ///
    /// ``` self: QtC.QTextDocumentFragment, features: i32, allocator: std.mem.Allocator ```
    pub fn ToMarkdown1(self: ?*anyopaque, features: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextDocumentFragment_ToMarkdown1(@ptrCast(self), @intCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ``` html: []const u8, resourceProvider: QtC.QTextDocument ```
    pub fn FromHtml2(html: []const u8, resourceProvider: ?*anyopaque) QtC.QTextDocumentFragment {
        const html_str = qtc.struct_libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        return qtc.QTextDocumentFragment_FromHtml2(html_str, @ptrCast(resourceProvider));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ``` markdown: []const u8, features: i32 ```
    pub fn FromMarkdown2(markdown: []const u8, features: i64) QtC.QTextDocumentFragment {
        const markdown_str = qtc.struct_libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return qtc.QTextDocumentFragment_FromMarkdown2(markdown_str, @intCast(features));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTextDocumentFragment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextDocumentFragment_Delete(@ptrCast(self));
    }
};
