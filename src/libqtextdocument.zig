const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractTextDocumentLayout = @import("libqt6").QAbstractTextDocumentLayout;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChar = @import("libqt6").QChar;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPagedPaintDevice = @import("libqt6").QPagedPaintDevice;
const QPainter = @import("libqt6").QPainter;
const QRectF = @import("libqt6").QRectF;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QSizeF = @import("libqt6").QSizeF;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextObject = @import("libqt6").QTextObject;
const QTextOption = @import("libqt6").QTextOption;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qtextdocument_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html)
pub const QAbstractUndoItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractUndoItem,

    pub const _is_QAbstractUndoItem = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn Undo(self: QAbstractUndoItem) void {
        qtc.QAbstractUndoItem_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn Redo(self: QAbstractUndoItem) void {
        qtc.QAbstractUndoItem_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    /// ` param1: QAbstractUndoItem `
    ///
    pub fn OperatorAssign(self: QAbstractUndoItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractUndoItem;
        qtc.QAbstractUndoItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn Delete(self: QAbstractUndoItem) void {
        qtc.QAbstractUndoItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)
pub const QTextDocument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextDocument,

    pub const _is_QTextDocument = {};
    pub const _is_QObject = {};

    /// New constructs a new QTextDocument object.
    ///
    pub fn New() QTextDocument {
        return .{ .ptr = qtc.QTextDocument_new() };
    }

    /// New2 constructs a new QTextDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QTextDocument {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_new2(text_str) };
    }

    /// New3 constructs a new QTextDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QTextDocument {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QTextDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(text: []const u8, parent: anytype) QTextDocument {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_new4(text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn MetaObject(self: QTextDocument) QMetaObject {
        return .{ .ptr = qtc.QTextDocument_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTextDocument, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextDocument_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SuperMetaObject(self: QTextDocument) QMetaObject {
        return .{ .ptr = qtc.QTextDocument_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextDocument, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextDocument_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextDocument_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTextDocument, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextDocument_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextDocument, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextDocument_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTextDocument, callback: *const fn (QTextDocument, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextDocument_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTextDocument, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextDocument_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Clone(self: QTextDocument) QTextDocument {
        return .{ .ptr = qtc.QTextDocument_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsEmpty(self: QTextDocument) bool {
        return qtc.QTextDocument_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Clear(self: QTextDocument) void {
        qtc.QTextDocument_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QTextDocument, callback: *const fn () callconv(.c) void) void {
        qtc.QTextDocument_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SuperClear(self: QTextDocument) void {
        qtc.QTextDocument_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUndoRedoEnabled(self: QTextDocument, enable: bool) void {
        qtc.QTextDocument_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsUndoRedoEnabled(self: QTextDocument) bool {
        return qtc.QTextDocument_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsUndoAvailable(self: QTextDocument) bool {
        return qtc.QTextDocument_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsRedoAvailable(self: QTextDocument) bool {
        return qtc.QTextDocument_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn AvailableUndoSteps(self: QTextDocument) i32 {
        return qtc.QTextDocument_AvailableUndoSteps(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn AvailableRedoSteps(self: QTextDocument) i32 {
        return qtc.QTextDocument_AvailableRedoSteps(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Revision(self: QTextDocument) i32 {
        return qtc.QTextDocument_Revision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` layout: QAbstractTextDocumentLayout `
    ///
    pub fn SetDocumentLayout(self: QTextDocument, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QAbstractTextDocumentLayout;
        qtc.QTextDocument_SetDocumentLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DocumentLayout(self: QTextDocument) QAbstractTextDocumentLayout {
        return .{ .ptr = qtc.QTextDocument_DocumentLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` info: qtextdocument_enums.MetaInformation `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn SetMetaInformation(self: QTextDocument, info: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.QTextDocument_SetMetaInformation(@ptrCast(self.ptr), @bitCast(info), param2_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` info: qtextdocument_enums.MetaInformation `
    ///
    pub fn MetaInformation(self: QTextDocument, allocator: std.mem.Allocator, info: i32) []const u8 {
        var _str = qtc.QTextDocument_MetaInformation(@ptrCast(self.ptr), @bitCast(info));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.MetaInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHtml(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` html: []const u8 `
    ///
    pub fn SetHtml(self: QTextDocument, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextDocument_SetHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMarkdown(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn SetMarkdown(self: QTextDocument, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRawText(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToRawText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPlainText(self: QTextDocument, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextDocument_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn CharacterAt(self: QTextDocument, pos: i32) QChar {
        return .{ .ptr = qtc.QTextDocument_CharacterAt(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    pub fn Find(self: QTextDocument, subString: []const u8) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find(@ptrCast(self.ptr), subString_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn Find2(self: QTextDocument, subString: []const u8, cursor: anytype) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find2(@ptrCast(self.ptr), subString_str, @ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    pub fn Find3(self: QTextDocument, expr: anytype) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find3(@ptrCast(self.ptr), @ptrCast(expr.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn Find4(self: QTextDocument, expr: anytype, cursor: anytype) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find4(@ptrCast(self.ptr), @ptrCast(expr.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn FrameAt(self: QTextDocument, pos: i32) QTextFrame {
        return .{ .ptr = qtc.QTextDocument_FrameAt(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn RootFrame(self: QTextDocument) QTextFrame {
        return .{ .ptr = qtc.QTextDocument_RootFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` objectIndex: i32 `
    ///
    pub fn Object(self: QTextDocument, objectIndex: i32) QTextObject {
        return .{ .ptr = qtc.QTextDocument_Object(@ptrCast(self.ptr), @bitCast(objectIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: QTextFormat `
    ///
    pub fn ObjectForFormat(self: QTextDocument, param1: anytype) QTextObject {
        comptime _ = @TypeOf(param1)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_ObjectForFormat(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn FindBlock(self: QTextDocument, pos: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlock(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` blockNumber: i32 `
    ///
    pub fn FindBlockByNumber(self: QTextDocument, blockNumber: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlockByNumber(@ptrCast(self.ptr), @bitCast(blockNumber)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` blockNumber: i32 `
    ///
    pub fn FindBlockByLineNumber(self: QTextDocument, blockNumber: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlockByLineNumber(@ptrCast(self.ptr), @bitCast(blockNumber)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Begin(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn End(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn FirstBlock(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FirstBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn LastBlock(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_LastBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetPageSize(self: QTextDocument, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QTextDocument_SetPageSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn PageSize(self: QTextDocument) QSizeF {
        return .{ .ptr = qtc.QTextDocument_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` font: QFont `
    ///
    pub fn SetDefaultFont(self: QTextDocument, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextDocument_SetDefaultFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DefaultFont(self: QTextDocument) QFont {
        return .{ .ptr = qtc.QTextDocument_DefaultFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSuperScriptBaseline(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SuperScriptBaseline(self: QTextDocument) f64 {
        return qtc.QTextDocument_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetSubScriptBaseline(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SubScriptBaseline(self: QTextDocument) f64 {
        return qtc.QTextDocument_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn SetBaselineOffset(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn BaselineOffset(self: QTextDocument) f64 {
        return qtc.QTextDocument_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn PageCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_PageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsModified(self: QTextDocument) bool {
        return qtc.QTextDocument_IsModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn Print(self: QTextDocument, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QTextDocument_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#resource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn Resource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_Resource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    /// ` resource: QVariant `
    ///
    pub fn AddResource(self: QTextDocument, typeVal: i32, name: anytype, resource: anytype) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        comptime _ = @TypeOf(resource)._is_QVariant;
        qtc.QTextDocument_AddResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr), @ptrCast(resource.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setResourceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` provider: *const fn (funcparam1: QUrl) callconv(.c) QVariant `
    ///
    pub fn SetResourceProvider(self: QTextDocument, provider: *const fn (QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_SetResourceProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(provider)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultResourceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` provider: *const fn (funcparam1: QUrl) callconv(.c) QVariant `
    ///
    pub fn SetDefaultResourceProvider(provider: *const fn (QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_SetDefaultResourceProvider(@bitCast(@intFromPtr(provider)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllFormats(self: QTextDocument, allocator: std.mem.Allocator) []QTextFormat {
        const _arr: qtc.libqt_list = qtc.QTextDocument_AllFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFormat, _arr.len) catch @panic("qtextdocument.AllFormats: Memory allocation failed");
        const _data: [*]QtC.QTextFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    pub fn MarkContentsDirty(self: QTextDocument, from: i32, length: i32) void {
        qtc.QTextDocument_MarkContentsDirty(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` b: bool `
    ///
    pub fn SetUseDesignMetrics(self: QTextDocument, b: bool) void {
        qtc.QTextDocument_SetUseDesignMetrics(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn UseDesignMetrics(self: QTextDocument) bool {
        return qtc.QTextDocument_UseDesignMetrics(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` b: bool `
    ///
    pub fn SetLayoutEnabled(self: QTextDocument, b: bool) void {
        qtc.QTextDocument_SetLayoutEnabled(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsLayoutEnabled(self: QTextDocument) bool {
        return qtc.QTextDocument_IsLayoutEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` painter: QPainter `
    ///
    pub fn DrawContents(self: QTextDocument, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTextDocument_DrawContents(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` width: f64 `
    ///
    pub fn SetTextWidth(self: QTextDocument, width: f64) void {
        qtc.QTextDocument_SetTextWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn TextWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_TextWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IdealWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_IdealWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IndentWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_IndentWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` width: f64 `
    ///
    pub fn SetIndentWidth(self: QTextDocument, width: f64) void {
        qtc.QTextDocument_SetIndentWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DocumentMargin(self: QTextDocument) f64 {
        return qtc.QTextDocument_DocumentMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` margin: f64 `
    ///
    pub fn SetDocumentMargin(self: QTextDocument, margin: f64) void {
        qtc.QTextDocument_SetDocumentMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn AdjustSize(self: QTextDocument) void {
        qtc.QTextDocument_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Size(self: QTextDocument) QSizeF {
        return .{ .ptr = qtc.QTextDocument_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn BlockCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_BlockCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn LineCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_LineCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn CharacterCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_CharacterCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` sheet: []const u8 `
    ///
    pub fn SetDefaultStyleSheet(self: QTextDocument, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QTextDocument_SetDefaultStyleSheet(@ptrCast(self.ptr), sheet_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultStyleSheet(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_DefaultStyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.DefaultStyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn Undo(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_Undo(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn Redo(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_Redo(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn ClearUndoRedoStacks(self: QTextDocument) void {
        qtc.QTextDocument_ClearUndoRedoStacks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn MaximumBlockCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximumBlockCount(self: QTextDocument, maximum: i32) void {
        qtc.QTextDocument_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DefaultTextOption(self: QTextDocument) QTextOption {
        return .{ .ptr = qtc.QTextDocument_DefaultTextOption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` option: QTextOption `
    ///
    pub fn SetDefaultTextOption(self: QTextDocument, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QTextOption;
        qtc.QTextDocument_SetDefaultTextOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn BaseUrl(self: QTextDocument) QUrl {
        return .{ .ptr = qtc.QTextDocument_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetBaseUrl(self: QTextDocument, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QTextDocument_SetBaseUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorMoveStyle `
    ///
    pub fn DefaultCursorMoveStyle(self: QTextDocument) i32 {
        return qtc.QTextDocument_DefaultCursorMoveStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn SetDefaultCursorMoveStyle(self: QTextDocument, style: i32) void {
        qtc.QTextDocument_SetDefaultCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` from: i32 `
    ///
    /// ` charsRemoved: i32 `
    ///
    /// ` charsAdded: i32 `
    ///
    pub fn ContentsChange(self: QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QTextDocument_ContentsChange(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32) callconv(.c) void `
    ///
    pub fn OnContentsChange(self: QTextDocument, callback: *const fn (QTextDocument, i32, i32, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn ContentsChanged(self: QTextDocument) void {
        qtc.QTextDocument_ContentsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn OnContentsChanged(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: bool `
    ///
    pub fn UndoAvailable(self: QTextDocument, param1: bool) void {
        qtc.QTextDocument_UndoAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: bool `
    ///
    pub fn RedoAvailable(self: QTextDocument, param1: bool) void {
        qtc.QTextDocument_RedoAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: bool) callconv(.c) void `
    ///
    pub fn OnRedoAvailable(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn UndoCommandAdded(self: QTextDocument) void {
        qtc.QTextDocument_UndoCommandAdded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn OnUndoCommandAdded(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoCommandAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` m: bool `
    ///
    pub fn ModificationChanged(self: QTextDocument, m: bool) void {
        qtc.QTextDocument_ModificationChanged(@ptrCast(self.ptr), m);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, m: bool) callconv(.c) void `
    ///
    pub fn OnModificationChanged(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn CursorPositionChanged(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_CursorPositionChanged(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: QTextDocument, callback: *const fn (QTextDocument, QTextCursor) callconv(.c) void) void {
        qtc.QTextDocument_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn BlockCountChanged(self: QTextDocument, newBlockCount: i32) void {
        qtc.QTextDocument_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn OnBlockCountChanged(self: QTextDocument, callback: *const fn (QTextDocument, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` url: QUrl `
    ///
    pub fn BaseUrlChanged(self: QTextDocument, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QTextDocument_BaseUrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, url: QUrl) callconv(.c) void `
    ///
    pub fn OnBaseUrlChanged(self: QTextDocument, callback: *const fn (QTextDocument, QUrl) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BaseUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DocumentLayoutChanged(self: QTextDocument) void {
        qtc.QTextDocument_DocumentLayoutChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn OnDocumentLayoutChanged(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_DocumentLayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Undo2(self: QTextDocument) void {
        qtc.QTextDocument_Undo2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Redo2(self: QTextDocument) void {
        qtc.QTextDocument_Redo2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: QAbstractUndoItem `
    ///
    pub fn AppendUndoItem(self: QTextDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractUndoItem;
        qtc.QTextDocument_AppendUndoItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SetModified(self: QTextDocument) void {
        qtc.QTextDocument_SetModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` f: QTextFormat `
    ///
    pub fn CreateObject(self: QTextDocument, f: anytype) QTextObject {
        comptime _ = @TypeOf(f)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_CreateObject(@ptrCast(self.ptr), @ptrCast(f.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, f: QTextFormat) callconv(.c) QTextObject `
    ///
    pub fn OnCreateObject(self: QTextDocument, callback: *const fn (QTextDocument, QTextFormat) callconv(.c) QTextObject) void {
        qtc.QTextDocument_OnCreateObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateObject` instead
    ///
    pub const QBaseCreateObject = SuperCreateObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` f: QTextFormat `
    ///
    pub fn SuperCreateObject(self: QTextDocument, f: anytype) QTextObject {
        comptime _ = @TypeOf(f)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_SuperCreateObject(@ptrCast(self.ptr), @ptrCast(f.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn LoadResource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    pub fn OnLoadResource(self: QTextDocument, callback: *const fn (QTextDocument, i32, QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadResource` instead
    ///
    pub const QBaseLoadResource = SuperLoadResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn SuperLoadResource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` parent: QObject `
    ///
    pub fn Clone1(self: QTextDocument, parent: anytype) QTextDocument {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_Clone1(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn ToMarkdown1(self: QTextDocument, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextDocument_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` markdown: []const u8 `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn SetMarkdown2(self: QTextDocument, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown2(@ptrCast(self.ptr), markdown_str, @bitCast(features));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` from: i32 `
    ///
    pub fn Find22(self: QTextDocument, subString: []const u8, from: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find22(@ptrCast(self.ptr), subString_str, @bitCast(from)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` from: i32 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find32(self: QTextDocument, subString: []const u8, from: i32, options: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find32(@ptrCast(self.ptr), subString_str, @bitCast(from), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find33(self: QTextDocument, subString: []const u8, cursor: anytype, options: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find33(@ptrCast(self.ptr), subString_str, @ptrCast(cursor.ptr), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    /// ` from: i32 `
    ///
    pub fn Find23(self: QTextDocument, expr: anytype, from: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find23(@ptrCast(self.ptr), @ptrCast(expr.ptr), @bitCast(from)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    /// ` from: i32 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find34(self: QTextDocument, expr: anytype, from: i32, options: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find34(@ptrCast(self.ptr), @ptrCast(expr.ptr), @bitCast(from), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    /// ` cursor: QTextCursor `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find35(self: QTextDocument, expr: anytype, cursor: anytype, options: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find35(@ptrCast(self.ptr), @ptrCast(expr.ptr), @ptrCast(cursor.ptr), @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    pub fn DrawContents2(self: QTextDocument, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QTextDocument_DrawContents2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` historyToClear: qtextdocument_enums.Stacks `
    ///
    pub fn ClearUndoRedoStacks1(self: QTextDocument, historyToClear: i32) void {
        qtc.QTextDocument_ClearUndoRedoStacks1(@ptrCast(self.ptr), @bitCast(historyToClear));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` m: bool `
    ///
    pub fn SetModified1(self: QTextDocument, m: bool) void {
        qtc.QTextDocument_SetModified1(@ptrCast(self.ptr), m);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextdocument.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextDocument, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsWidgetType(self: QTextDocument) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsWindowType(self: QTextDocument) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn IsQuickItemType(self: QTextDocument) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SignalsBlocked(self: QTextDocument) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextDocument, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Thread(self: QTextDocument) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextDocument, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextDocument, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextDocument, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextDocument, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextDocument, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextDocument, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtextdocument.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextDocument, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextDocument, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextDocument, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextDocument, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Disconnect3(self: QTextDocument) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextDocument, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DumpObjectTree(self: QTextDocument) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DumpObjectInfo(self: QTextDocument) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextDocument, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextDocument, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextDocument, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextdocument.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextdocument.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn BindingStorage(self: QTextDocument) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn BindingStorage2(self: QTextDocument) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Destroyed(self: QTextDocument) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Parent(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextDocument, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn DeleteLater(self: QTextDocument) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextDocument, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextDocument, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextDocument, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextDocument, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextDocument, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextDocument, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextDocument, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextDocument, callback: *const fn (QTextDocument, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextDocument, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextDocument_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTextDocument, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextDocument_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTextDocument, callback: *const fn (QTextDocument, QEvent) callconv(.c) bool) void {
        qtc.QTextDocument_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextDocument, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextDocument_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTextDocument, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextDocument_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTextDocument, callback: *const fn (QTextDocument, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextDocument_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextDocument_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextDocument_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTextDocument, callback: *const fn (QTextDocument, QTimerEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextDocument_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextDocument_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTextDocument, callback: *const fn (QTextDocument, QChildEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextDocument_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTextDocument, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextDocument_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTextDocument, callback: *const fn (QTextDocument, QEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) void) void {
        qtc.QTextDocument_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) void) void {
        qtc.QTextDocument_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Sender(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QTextDocument_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SuperSender(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QTextDocument_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTextDocument, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextDocument_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SenderSignalIndex(self: QTextDocument) i32 {
        return qtc.QTextDocument_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn SuperSenderSignalIndex(self: QTextDocument) i32 {
        return qtc.QTextDocument_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTextDocument, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextDocument_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTextDocument, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTextDocument, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextDocument_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTextDocument, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextDocument_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTextDocument, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextDocument_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument`
    ///
    /// ` callback: *const fn (self: QTextDocument, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextDocument_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocument `
    ///
    pub fn Delete(self: QTextDocument) void {
        qtc.QTextDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)
pub const enums = struct {
    pub const MetaInformation = enum(i32) {
        pub const DocumentTitle: i32 = 0;
        pub const DocumentUrl: i32 = 1;
        pub const CssMedia: i32 = 2;
        pub const FrontMatter: i32 = 3;
    };

    pub const MarkdownFeature = enum(i32) {
        pub const MarkdownNoHTML: i32 = 96;
        pub const MarkdownDialectCommonMark: i32 = 0;
        pub const MarkdownDialectGitHub: i32 = 1068812;
    };

    pub const FindFlag = enum(i32) {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
        pub const FindWholeWords: i32 = 4;
    };

    pub const ResourceType = enum(i32) {
        pub const UnknownResource: i32 = 0;
        pub const HtmlResource: i32 = 1;
        pub const ImageResource: i32 = 2;
        pub const StyleSheetResource: i32 = 3;
        pub const MarkdownResource: i32 = 4;
        pub const UserResource: i32 = 100;
    };

    pub const Stacks = enum(i32) {
        pub const UndoStack: i32 = 1;
        pub const RedoStack: i32 = 2;
        pub const UndoAndRedoStacks: i32 = 3;
    };
};
