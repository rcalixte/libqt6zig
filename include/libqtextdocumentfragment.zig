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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextDocumentFragment object in C++ memory
    ///
    pub fn new() QTextDocumentFragment {
        return .{ .ptr = qtc.QTextDocumentFragment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextDocumentFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QTextDocument `
    ///
    pub fn new2(document: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return .{ .ptr = qtc.QTextDocumentFragment_new2(@ptrCast(document.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextDocumentFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QTextCursor `
    ///
    pub fn new3(range: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(range)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocumentFragment_new3(@ptrCast(range.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextDocumentFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QTextDocumentFragment `
    ///
    pub fn new4(rhs: anytype) QTextDocumentFragment {
        comptime _ = @TypeOf(rhs)._is_QTextDocumentFragment;
        return .{ .ptr = qtc.QTextDocumentFragment_new4(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` rhs: QTextDocumentFragment `
    ///
    pub fn operatorAssign(self: QTextDocumentFragment, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextDocumentFragment;
        qtc.QTextDocumentFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    pub fn isEmpty(self: QTextDocumentFragment) bool {
        return qtc.QTextDocumentFragment_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPlainText(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentFragment.toPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toRawText` instead
    ///
    pub const ToRawText = toRawText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRawText(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToRawText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentFragment.toRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toHtml` instead
    ///
    pub const ToHtml = toHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toHtml(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentFragment.toHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toMarkdown` instead
    ///
    pub const ToMarkdown = toMarkdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocumentFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMarkdown(self: QTextDocumentFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentFragment.toMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPlainText` instead
    ///
    pub const FromPlainText = fromPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` plainText: []const u8 `
    ///
    pub fn fromPlainText(plainText: []const u8) QTextDocumentFragment {
        const plainText_str = qtc.libqt_string{
            .len = plainText.len,
            .data = plainText.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromPlainText(plainText_str) };
    }

    /// ### DEPRECATED: Use `fromHtml` instead
    ///
    pub const FromHtml = fromHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` html: []const u8 `
    ///
    pub fn fromHtml(html: []const u8) QTextDocumentFragment {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromHtml(html_str) };
    }

    /// ### DEPRECATED: Use `fromMarkdown` instead
    ///
    pub const FromMarkdown = fromMarkdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn fromMarkdown(markdown: []const u8) QTextDocumentFragment {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromMarkdown(markdown_str) };
    }

    /// ### DEPRECATED: Use `toMarkdown1` instead
    ///
    pub const ToMarkdown1 = toMarkdown1;

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
    pub fn toMarkdown1(self: QTextDocumentFragment, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextDocumentFragment_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocumentFragment.toMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromHtml2` instead
    ///
    pub const FromHtml2 = fromHtml2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` html: []const u8 `
    ///
    /// ` resourceProvider: QTextDocument `
    ///
    pub fn fromHtml2(html: []const u8, resourceProvider: anytype) QTextDocumentFragment {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        comptime _ = @TypeOf(resourceProvider)._is_QTextDocument;
        return .{ .ptr = qtc.QTextDocumentFragment_FromHtml2(html_str, @ptrCast(resourceProvider.ptr)) };
    }

    /// ### DEPRECATED: Use `fromMarkdown2` instead
    ///
    pub const FromMarkdown2 = fromMarkdown2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` markdown: []const u8 `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn fromMarkdown2(markdown: []const u8, features: i32) QTextDocumentFragment {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        return .{ .ptr = qtc.QTextDocumentFragment_FromMarkdown2(markdown_str, @bitCast(features)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocumentFragment `
    ///
    pub fn delete(self: QTextDocumentFragment) void {
        qtc.QTextDocumentFragment_Delete(@ptrCast(self.ptr));
    }
};
