const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const qtextdocument_enums = @import("libqtextdocument.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)
pub const QTextDocumentFragment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextDocumentFragment,

    pub const _is_QTextDocumentFragment = {};

    /// New constructs a new QTextDocumentFragment object.
    ///
    pub fn New() QTextDocumentFragment {
        return .{ .ptr = qtc.QTextDocumentFragment_new() };
    }

    /// New2 constructs a new QTextDocumentFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QTextDocument `
    ///
    pub fn New2(document: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return .{ .ptr = qtc.QTextDocumentFragment_new2(@ptrCast(document.ptr)) };
    }

    /// New3 constructs a new QTextDocumentFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QTextCursor `
    ///
    pub fn New3(range: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(range)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocumentFragment_new3(@ptrCast(range.ptr)) };
    }

    /// New4 constructs a new QTextDocumentFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QTextDocumentFragment `
    ///
    pub fn New4(rhs: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(rhs)._is_QTextDocumentFragment;
        return .{ .ptr = qtc.QTextDocumentFragment_new4(@ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` rhs: QTextDocumentFragment `
    ///
    pub fn OperatorAssign(self: QTextDocumentFragment, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextDocumentFragment;
        qtc.QTextDocumentFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    pub fn IsEmpty(self: QTextDocumentFragment) bool {
        return qtc.QTextDocumentFragment_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRawText(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToRawText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHtml(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMarkdown(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` plainText: []const u8 `
    ///
    pub fn FromPlainText(plainText: []const u8) QTextDocumentFragment {
        const plainText_str = qtc.libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromPlainText(plainText_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` html: []const u8 `
    ///
    pub fn FromHtml(html: []const u8) QTextDocumentFragment {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromHtml(html_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn FromMarkdown(markdown: []const u8) QTextDocumentFragment {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromMarkdown(markdown_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn ToMarkdown1(self: QTextDocumentFragment, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocumentfragment.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` html: []const u8 `
    ///
    /// ` resourceProvider: QTextDocument `
    ///
    pub fn FromHtml2(html: []const u8, resourceProvider: anytype) QTextDocumentFragment {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        comptime _ = @TypeOf(resourceProvider)._is_QTextDocument;
        return .{ .ptr = qtc.QTextDocumentFragment_FromHtml2(html_str, @ptrCast(resourceProvider.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` markdown: []const u8 `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn FromMarkdown2(markdown: []const u8, features: i32) QTextDocumentFragment {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromMarkdown2(markdown_str, @bitCast(features)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocumentFragment `
    ///
    pub fn Delete(self: QTextDocumentFragment) void {
        qtc.QTextDocumentFragment_Delete(@ptrCast(self.ptr));
    }
};
