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

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn undo(self: QAbstractUndoItem) void {
        qtc.QAbstractUndoItem_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn redo(self: QAbstractUndoItem) void {
        qtc.QAbstractUndoItem_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractUndoItem `
    ///
    /// ` param1: QAbstractUndoItem `
    ///
    pub fn operatorAssign(self: QAbstractUndoItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractUndoItem;
        qtc.QAbstractUndoItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractUndoItem `
    ///
    pub fn delete(self: QAbstractUndoItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextDocument object in C++ memory
    ///
    pub fn new() QTextDocument {
        return .{ .ptr = qtc.QTextDocument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn new2(text: []const u8) QTextDocument {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QTextDocument {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextDocument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(text: []const u8, _parent: anytype) QTextDocument {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_new4(text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn metaObject(self: QTextDocument) QMetaObject {
        return .{ .ptr = qtc.QTextDocument_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QTextDocument, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextDocument_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn superMetaObject(self: QTextDocument) QMetaObject {
        return .{ .ptr = qtc.QTextDocument_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextDocument, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextDocument_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextDocument_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTextDocument, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextDocument_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTextDocument, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextDocument_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTextDocument, callback: *const fn (QTextDocument, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextDocument_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QTextDocument, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextDocument_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn clone(self: QTextDocument) QTextDocument {
        return .{ .ptr = qtc.QTextDocument_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isEmpty(self: QTextDocument) bool {
        return qtc.QTextDocument_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn clear(self: QTextDocument) void {
        qtc.QTextDocument_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

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
    pub fn onClear(self: QTextDocument, callback: *const fn () callconv(.c) void) void {
        qtc.QTextDocument_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn superClear(self: QTextDocument) void {
        qtc.QTextDocument_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUndoRedoEnabled` instead
    ///
    pub const SetUndoRedoEnabled = setUndoRedoEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` enable: bool `
    ///
    pub fn setUndoRedoEnabled(self: QTextDocument, enable: bool) void {
        qtc.QTextDocument_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isUndoRedoEnabled` instead
    ///
    pub const IsUndoRedoEnabled = isUndoRedoEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isUndoRedoEnabled(self: QTextDocument) bool {
        return qtc.QTextDocument_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndoAvailable` instead
    ///
    pub const IsUndoAvailable = isUndoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isUndoAvailable(self: QTextDocument) bool {
        return qtc.QTextDocument_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRedoAvailable` instead
    ///
    pub const IsRedoAvailable = isRedoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isRedoAvailable(self: QTextDocument) bool {
        return qtc.QTextDocument_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableUndoSteps` instead
    ///
    pub const AvailableUndoSteps = availableUndoSteps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn availableUndoSteps(self: QTextDocument) i32 {
        return qtc.QTextDocument_AvailableUndoSteps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableRedoSteps` instead
    ///
    pub const AvailableRedoSteps = availableRedoSteps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn availableRedoSteps(self: QTextDocument) i32 {
        return qtc.QTextDocument_AvailableRedoSteps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn revision(self: QTextDocument) i32 {
        return qtc.QTextDocument_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentLayout` instead
    ///
    pub const SetDocumentLayout = setDocumentLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` layout: QAbstractTextDocumentLayout `
    ///
    pub fn setDocumentLayout(self: QTextDocument, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QAbstractTextDocumentLayout;
        qtc.QTextDocument_SetDocumentLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `documentLayout` instead
    ///
    pub const DocumentLayout = documentLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn documentLayout(self: QTextDocument) QAbstractTextDocumentLayout {
        return .{ .ptr = qtc.QTextDocument_DocumentLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaInformation` instead
    ///
    pub const SetMetaInformation = setMetaInformation;

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
    pub fn setMetaInformation(self: QTextDocument, info: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.QTextDocument_SetMetaInformation(@ptrCast(self.ptr), @bitCast(info), param2_str);
    }

    /// ### DEPRECATED: Use `metaInformation` instead
    ///
    pub const MetaInformation = metaInformation;

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
    pub fn metaInformation(self: QTextDocument, allocator: std.mem.Allocator, info: i32) []const u8 {
        var _str = qtc.QTextDocument_MetaInformation(@ptrCast(self.ptr), @bitCast(info));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.metaInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toHtml` instead
    ///
    pub const ToHtml = toHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toHtml(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.toHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHtml` instead
    ///
    pub const SetHtml = setHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` html: []const u8 `
    ///
    pub fn setHtml(self: QTextDocument, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QTextDocument_SetHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### DEPRECATED: Use `toMarkdown` instead
    ///
    pub const ToMarkdown = toMarkdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMarkdown(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.toMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMarkdown` instead
    ///
    pub const SetMarkdown = setMarkdown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn setMarkdown(self: QTextDocument, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// ### DEPRECATED: Use `toRawText` instead
    ///
    pub const ToRawText = toRawText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRawText(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToRawText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.toRawText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPlainText(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.toPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPlainText` instead
    ///
    pub const SetPlainText = setPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setPlainText(self: QTextDocument, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextDocument_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `characterAt` instead
    ///
    pub const CharacterAt = characterAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn characterAt(self: QTextDocument, pos: i32) QChar {
        return .{ .ptr = qtc.QTextDocument_CharacterAt(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` subString: []const u8 `
    ///
    pub fn find(self: QTextDocument, subString: []const u8) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find(@ptrCast(self.ptr), subString_str) };
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

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
    pub fn find2(self: QTextDocument, subString: []const u8, cursor: anytype) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find2(@ptrCast(self.ptr), subString_str, @ptrCast(cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `find3` instead
    ///
    pub const Find3 = find3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` expr: QRegularExpression `
    ///
    pub fn find3(self: QTextDocument, expr: anytype) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find3(@ptrCast(self.ptr), @ptrCast(expr.ptr)) };
    }

    /// ### DEPRECATED: Use `find4` instead
    ///
    pub const Find4 = find4;

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
    pub fn find4(self: QTextDocument, expr: anytype, cursor: anytype) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find4(@ptrCast(self.ptr), @ptrCast(expr.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `frameAt` instead
    ///
    pub const FrameAt = frameAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn frameAt(self: QTextDocument, pos: i32) QTextFrame {
        return .{ .ptr = qtc.QTextDocument_FrameAt(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `rootFrame` instead
    ///
    pub const RootFrame = rootFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn rootFrame(self: QTextDocument) QTextFrame {
        return .{ .ptr = qtc.QTextDocument_RootFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` objectIndex: i32 `
    ///
    pub fn object(self: QTextDocument, objectIndex: i32) QTextObject {
        return .{ .ptr = qtc.QTextDocument_Object(@ptrCast(self.ptr), @bitCast(objectIndex)) };
    }

    /// ### DEPRECATED: Use `objectForFormat` instead
    ///
    pub const ObjectForFormat = objectForFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: QTextFormat `
    ///
    pub fn objectForFormat(self: QTextDocument, param1: anytype) QTextObject {
        comptime _ = @TypeOf(param1)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_ObjectForFormat(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `findBlock` instead
    ///
    pub const FindBlock = findBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` pos: i32 `
    ///
    pub fn findBlock(self: QTextDocument, pos: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlock(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `findBlockByNumber` instead
    ///
    pub const FindBlockByNumber = findBlockByNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` blockNumber: i32 `
    ///
    pub fn findBlockByNumber(self: QTextDocument, blockNumber: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlockByNumber(@ptrCast(self.ptr), @bitCast(blockNumber)) };
    }

    /// ### DEPRECATED: Use `findBlockByLineNumber` instead
    ///
    pub const FindBlockByLineNumber = findBlockByLineNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` blockNumber: i32 `
    ///
    pub fn findBlockByLineNumber(self: QTextDocument, blockNumber: i32) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FindBlockByLineNumber(@ptrCast(self.ptr), @bitCast(blockNumber)) };
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn begin(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn end(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstBlock` instead
    ///
    pub const FirstBlock = firstBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn firstBlock(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_FirstBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastBlock` instead
    ///
    pub const LastBlock = lastBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn lastBlock(self: QTextDocument) QTextBlock {
        return .{ .ptr = qtc.QTextDocument_LastBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPageSize` instead
    ///
    pub const SetPageSize = setPageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setPageSize(self: QTextDocument, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QTextDocument_SetPageSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `pageSize` instead
    ///
    pub const PageSize = pageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn pageSize(self: QTextDocument) QSizeF {
        return .{ .ptr = qtc.QTextDocument_PageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDefaultFont` instead
    ///
    pub const SetDefaultFont = setDefaultFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` font: QFont `
    ///
    pub fn setDefaultFont(self: QTextDocument, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTextDocument_SetDefaultFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `defaultFont` instead
    ///
    pub const DefaultFont = defaultFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn defaultFont(self: QTextDocument) QFont {
        return .{ .ptr = qtc.QTextDocument_DefaultFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSuperScriptBaseline` instead
    ///
    pub const SetSuperScriptBaseline = setSuperScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSuperScriptBaseline(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `superScriptBaseline` instead
    ///
    pub const SuperScriptBaseline = superScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn superScriptBaseline(self: QTextDocument) f64 {
        return qtc.QTextDocument_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubScriptBaseline` instead
    ///
    pub const SetSubScriptBaseline = setSubScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSubScriptBaseline(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `subScriptBaseline` instead
    ///
    pub const SubScriptBaseline = subScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn subScriptBaseline(self: QTextDocument) f64 {
        return qtc.QTextDocument_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setBaselineOffset(self: QTextDocument, baseline: f64) void {
        qtc.QTextDocument_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn baselineOffset(self: QTextDocument) f64 {
        return qtc.QTextDocument_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pageCount` instead
    ///
    pub const PageCount = pageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn pageCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_PageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isModified(self: QTextDocument) bool {
        return qtc.QTextDocument_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn print(self: QTextDocument, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QTextDocument_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### DEPRECATED: Use `resource` instead
    ///
    pub const Resource = resource;

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
    pub fn resource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_Resource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `addResource` instead
    ///
    pub const AddResource = addResource;

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
    /// ` _resource: QVariant `
    ///
    pub fn addResource(self: QTextDocument, typeVal: i32, name: anytype, _resource: anytype) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        comptime _ = @TypeOf(_resource)._is_QVariant;
        qtc.QTextDocument_AddResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr), @ptrCast(_resource.ptr));
    }

    /// ### DEPRECATED: Use `setResourceProvider` instead
    ///
    pub const SetResourceProvider = setResourceProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setResourceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` provider: *const fn (funcparam1: QUrl) callconv(.c) QVariant `
    ///
    pub fn setResourceProvider(self: QTextDocument, provider: *const fn (QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_SetResourceProvider(@ptrCast(self.ptr), @bitCast(@intFromPtr(provider)));
    }

    /// ### DEPRECATED: Use `setDefaultResourceProvider` instead
    ///
    pub const SetDefaultResourceProvider = setDefaultResourceProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultResourceProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` provider: *const fn (funcparam1: QUrl) callconv(.c) QVariant `
    ///
    pub fn setDefaultResourceProvider(provider: *const fn (QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_SetDefaultResourceProvider(@bitCast(@intFromPtr(provider)));
    }

    /// ### DEPRECATED: Use `allFormats` instead
    ///
    pub const AllFormats = allFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allFormats(self: QTextDocument, allocator: std.mem.Allocator) []QTextFormat {
        const _arr: qtc.libqt_list = qtc.QTextDocument_AllFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFormat, _arr.len) catch @panic("QTextDocument.allFormats: Memory allocation failed");
        const _data_val: [*]QtC.QTextFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `markContentsDirty` instead
    ///
    pub const MarkContentsDirty = markContentsDirty;

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
    pub fn markContentsDirty(self: QTextDocument, from: i32, length: i32) void {
        qtc.QTextDocument_MarkContentsDirty(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
    }

    /// ### DEPRECATED: Use `setUseDesignMetrics` instead
    ///
    pub const SetUseDesignMetrics = setUseDesignMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` b: bool `
    ///
    pub fn setUseDesignMetrics(self: QTextDocument, b: bool) void {
        qtc.QTextDocument_SetUseDesignMetrics(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `useDesignMetrics` instead
    ///
    pub const UseDesignMetrics = useDesignMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn useDesignMetrics(self: QTextDocument) bool {
        return qtc.QTextDocument_UseDesignMetrics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutEnabled` instead
    ///
    pub const SetLayoutEnabled = setLayoutEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` b: bool `
    ///
    pub fn setLayoutEnabled(self: QTextDocument, b: bool) void {
        qtc.QTextDocument_SetLayoutEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `isLayoutEnabled` instead
    ///
    pub const IsLayoutEnabled = isLayoutEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isLayoutEnabled(self: QTextDocument) bool {
        return qtc.QTextDocument_IsLayoutEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `drawContents` instead
    ///
    pub const DrawContents = drawContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawContents(self: QTextDocument, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTextDocument_DrawContents(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `setTextWidth` instead
    ///
    pub const SetTextWidth = setTextWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` width: f64 `
    ///
    pub fn setTextWidth(self: QTextDocument, width: f64) void {
        qtc.QTextDocument_SetTextWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `textWidth` instead
    ///
    pub const TextWidth = textWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn textWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_TextWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `idealWidth` instead
    ///
    pub const IdealWidth = idealWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn idealWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_IdealWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indentWidth` instead
    ///
    pub const IndentWidth = indentWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn indentWidth(self: QTextDocument) f64 {
        return qtc.QTextDocument_IndentWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIndentWidth` instead
    ///
    pub const SetIndentWidth = setIndentWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` width: f64 `
    ///
    pub fn setIndentWidth(self: QTextDocument, width: f64) void {
        qtc.QTextDocument_SetIndentWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `documentMargin` instead
    ///
    pub const DocumentMargin = documentMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn documentMargin(self: QTextDocument) f64 {
        return qtc.QTextDocument_DocumentMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDocumentMargin` instead
    ///
    pub const SetDocumentMargin = setDocumentMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` margin: f64 `
    ///
    pub fn setDocumentMargin(self: QTextDocument, margin: f64) void {
        qtc.QTextDocument_SetDocumentMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn adjustSize(self: QTextDocument) void {
        qtc.QTextDocument_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn size(self: QTextDocument) QSizeF {
        return .{ .ptr = qtc.QTextDocument_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `blockCount` instead
    ///
    pub const BlockCount = blockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn blockCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_BlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineCount` instead
    ///
    pub const LineCount = lineCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn lineCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_LineCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `characterCount` instead
    ///
    pub const CharacterCount = characterCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn characterCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_CharacterCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultStyleSheet` instead
    ///
    pub const SetDefaultStyleSheet = setDefaultStyleSheet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` sheet: []const u8 `
    ///
    pub fn setDefaultStyleSheet(self: QTextDocument, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QTextDocument_SetDefaultStyleSheet(@ptrCast(self.ptr), sheet_str);
    }

    /// ### DEPRECATED: Use `defaultStyleSheet` instead
    ///
    pub const DefaultStyleSheet = defaultStyleSheet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultStyleSheet(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextDocument_DefaultStyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.defaultStyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn undo(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_Undo(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn redo(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_Redo(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `clearUndoRedoStacks` instead
    ///
    pub const ClearUndoRedoStacks = clearUndoRedoStacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn clearUndoRedoStacks(self: QTextDocument) void {
        qtc.QTextDocument_ClearUndoRedoStacks(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumBlockCount` instead
    ///
    pub const MaximumBlockCount = maximumBlockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn maximumBlockCount(self: QTextDocument) i32 {
        return qtc.QTextDocument_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumBlockCount` instead
    ///
    pub const SetMaximumBlockCount = setMaximumBlockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` maximum: i32 `
    ///
    pub fn setMaximumBlockCount(self: QTextDocument, maximum: i32) void {
        qtc.QTextDocument_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `defaultTextOption` instead
    ///
    pub const DefaultTextOption = defaultTextOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn defaultTextOption(self: QTextDocument) QTextOption {
        return .{ .ptr = qtc.QTextDocument_DefaultTextOption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDefaultTextOption` instead
    ///
    pub const SetDefaultTextOption = setDefaultTextOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` option: QTextOption `
    ///
    pub fn setDefaultTextOption(self: QTextDocument, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QTextOption;
        qtc.QTextDocument_SetDefaultTextOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `baseUrl` instead
    ///
    pub const BaseUrl = baseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn baseUrl(self: QTextDocument) QUrl {
        return .{ .ptr = qtc.QTextDocument_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseUrl` instead
    ///
    pub const SetBaseUrl = setBaseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` url: QUrl `
    ///
    pub fn setBaseUrl(self: QTextDocument, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QTextDocument_SetBaseUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `defaultCursorMoveStyle` instead
    ///
    pub const DefaultCursorMoveStyle = defaultCursorMoveStyle;

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
    pub fn defaultCursorMoveStyle(self: QTextDocument) i32 {
        return qtc.QTextDocument_DefaultCursorMoveStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultCursorMoveStyle` instead
    ///
    pub const SetDefaultCursorMoveStyle = setDefaultCursorMoveStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn setDefaultCursorMoveStyle(self: QTextDocument, style: i32) void {
        qtc.QTextDocument_SetDefaultCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `contentsChange` instead
    ///
    pub const ContentsChange = contentsChange;

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
    pub fn contentsChange(self: QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32) void {
        qtc.QTextDocument_ContentsChange(@ptrCast(self.ptr), @bitCast(from), @bitCast(charsRemoved), @bitCast(charsAdded));
    }

    /// ### DEPRECATED: Use `onContentsChange` instead
    ///
    pub const OnContentsChange = onContentsChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, from: i32, charsRemoved: i32, charsAdded: i32) callconv(.c) void `
    ///
    pub fn onContentsChange(self: QTextDocument, callback: *const fn (QTextDocument, i32, i32, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentsChanged` instead
    ///
    pub const ContentsChanged = contentsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn contentsChanged(self: QTextDocument) void {
        qtc.QTextDocument_ContentsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onContentsChanged` instead
    ///
    pub const OnContentsChanged = onContentsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn onContentsChanged(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ContentsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoAvailable` instead
    ///
    pub const UndoAvailable = undoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: bool `
    ///
    pub fn undoAvailable(self: QTextDocument, param1: bool) void {
        qtc.QTextDocument_UndoAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onUndoAvailable` instead
    ///
    pub const OnUndoAvailable = onUndoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: bool) callconv(.c) void `
    ///
    pub fn onUndoAvailable(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoAvailable` instead
    ///
    pub const RedoAvailable = redoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: bool `
    ///
    pub fn redoAvailable(self: QTextDocument, param1: bool) void {
        qtc.QTextDocument_RedoAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onRedoAvailable` instead
    ///
    pub const OnRedoAvailable = onRedoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, param1: bool) callconv(.c) void `
    ///
    pub fn onRedoAvailable(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoCommandAdded` instead
    ///
    pub const UndoCommandAdded = undoCommandAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn undoCommandAdded(self: QTextDocument) void {
        qtc.QTextDocument_UndoCommandAdded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUndoCommandAdded` instead
    ///
    pub const OnUndoCommandAdded = onUndoCommandAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn onUndoCommandAdded(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_UndoCommandAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modificationChanged` instead
    ///
    pub const ModificationChanged = modificationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` m: bool `
    ///
    pub fn modificationChanged(self: QTextDocument, m: bool) void {
        qtc.QTextDocument_ModificationChanged(@ptrCast(self.ptr), m);
    }

    /// ### DEPRECATED: Use `onModificationChanged` instead
    ///
    pub const OnModificationChanged = onModificationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, m: bool) callconv(.c) void `
    ///
    pub fn onModificationChanged(self: QTextDocument, callback: *const fn (QTextDocument, bool) callconv(.c) void) void {
        qtc.QTextDocument_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn cursorPositionChanged(self: QTextDocument, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextDocument_CursorPositionChanged(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: QTextDocument, callback: *const fn (QTextDocument, QTextCursor) callconv(.c) void) void {
        qtc.QTextDocument_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockCountChanged` instead
    ///
    pub const BlockCountChanged = blockCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn blockCountChanged(self: QTextDocument, newBlockCount: i32) void {
        qtc.QTextDocument_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// ### DEPRECATED: Use `onBlockCountChanged` instead
    ///
    pub const OnBlockCountChanged = onBlockCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn onBlockCountChanged(self: QTextDocument, callback: *const fn (QTextDocument, i32) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `baseUrlChanged` instead
    ///
    pub const BaseUrlChanged = baseUrlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` url: QUrl `
    ///
    pub fn baseUrlChanged(self: QTextDocument, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QTextDocument_BaseUrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onBaseUrlChanged` instead
    ///
    pub const OnBaseUrlChanged = onBaseUrlChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument, url: QUrl) callconv(.c) void `
    ///
    pub fn onBaseUrlChanged(self: QTextDocument, callback: *const fn (QTextDocument, QUrl) callconv(.c) void) void {
        qtc.QTextDocument_Connect_BaseUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentLayoutChanged` instead
    ///
    pub const DocumentLayoutChanged = documentLayoutChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn documentLayoutChanged(self: QTextDocument) void {
        qtc.QTextDocument_DocumentLayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentLayoutChanged` instead
    ///
    pub const OnDocumentLayoutChanged = onDocumentLayoutChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextDocument `
    ///
    /// ` callback: *const fn (self: QTextDocument) callconv(.c) void `
    ///
    pub fn onDocumentLayoutChanged(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QTextDocument_Connect_DocumentLayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undo2` instead
    ///
    pub const Undo2 = undo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn undo2(self: QTextDocument) void {
        qtc.QTextDocument_Undo2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo2` instead
    ///
    pub const Redo2 = redo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn redo2(self: QTextDocument) void {
        qtc.QTextDocument_Redo2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `appendUndoItem` instead
    ///
    pub const AppendUndoItem = appendUndoItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` param1: QAbstractUndoItem `
    ///
    pub fn appendUndoItem(self: QTextDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractUndoItem;
        qtc.QTextDocument_AppendUndoItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn setModified(self: QTextDocument) void {
        qtc.QTextDocument_SetModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createObject` instead
    ///
    pub const CreateObject = createObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` f: QTextFormat `
    ///
    pub fn createObject(self: QTextDocument, f: anytype) QTextObject {
        comptime _ = @TypeOf(f)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_CreateObject(@ptrCast(self.ptr), @ptrCast(f.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateObject` instead
    ///
    pub const OnCreateObject = onCreateObject;

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
    pub fn onCreateObject(self: QTextDocument, callback: *const fn (QTextDocument, QTextFormat) callconv(.c) QTextObject) void {
        qtc.QTextDocument_OnCreateObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateObject` instead
    ///
    pub const SuperCreateObject = superCreateObject;

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
    pub fn superCreateObject(self: QTextDocument, f: anytype) QTextObject {
        comptime _ = @TypeOf(f)._is_QTextFormat;
        return .{ .ptr = qtc.QTextDocument_SuperCreateObject(@ptrCast(self.ptr), @ptrCast(f.ptr)) };
    }

    /// ### DEPRECATED: Use `loadResource` instead
    ///
    pub const LoadResource = loadResource;

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
    pub fn loadResource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `onLoadResource` instead
    ///
    pub const OnLoadResource = onLoadResource;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLoadResource(self: QTextDocument, callback: *const fn (QTextDocument, i32, QUrl) callconv(.c) QVariant) void {
        qtc.QTextDocument_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadResource` instead
    ///
    pub const SuperLoadResource = superLoadResource;

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
    pub fn superLoadResource(self: QTextDocument, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QTextDocument_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.tr2: Memory allocation failed");
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clone1` instead
    ///
    pub const Clone1 = clone1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _parent: QObject `
    ///
    pub fn clone1(self: QTextDocument, _parent: anytype) QTextDocument {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTextDocument_Clone1(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `toMarkdown1` instead
    ///
    pub const ToMarkdown1 = toMarkdown1;

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
    pub fn toMarkdown1(self: QTextDocument, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextDocument_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.toMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMarkdown2` instead
    ///
    pub const SetMarkdown2 = setMarkdown2;

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
    pub fn setMarkdown2(self: QTextDocument, markdown: []const u8, features: i32) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextDocument_SetMarkdown2(@ptrCast(self.ptr), markdown_str, @bitCast(features));
    }

    /// ### DEPRECATED: Use `find22` instead
    ///
    pub const Find22 = find22;

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
    pub fn find22(self: QTextDocument, subString: []const u8, from: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find22(@ptrCast(self.ptr), subString_str, @bitCast(from)) };
    }

    /// ### DEPRECATED: Use `find32` instead
    ///
    pub const Find32 = find32;

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
    pub fn find32(self: QTextDocument, subString: []const u8, from: i32, options: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        return .{ .ptr = qtc.QTextDocument_Find32(@ptrCast(self.ptr), subString_str, @bitCast(from), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `find33` instead
    ///
    pub const Find33 = find33;

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
    pub fn find33(self: QTextDocument, subString: []const u8, cursor: anytype, options: i32) QTextCursor {
        const subString_str = qtc.libqt_string{
            .len = subString.len,
            .data = subString.ptr,
        };
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find33(@ptrCast(self.ptr), subString_str, @ptrCast(cursor.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `find23` instead
    ///
    pub const Find23 = find23;

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
    pub fn find23(self: QTextDocument, expr: anytype, from: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find23(@ptrCast(self.ptr), @ptrCast(expr.ptr), @bitCast(from)) };
    }

    /// ### DEPRECATED: Use `find34` instead
    ///
    pub const Find34 = find34;

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
    pub fn find34(self: QTextDocument, expr: anytype, from: i32, options: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        return .{ .ptr = qtc.QTextDocument_Find34(@ptrCast(self.ptr), @ptrCast(expr.ptr), @bitCast(from), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `find35` instead
    ///
    pub const Find35 = find35;

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
    pub fn find35(self: QTextDocument, expr: anytype, cursor: anytype, options: i32) QTextCursor {
        comptime _ = @TypeOf(expr)._is_QRegularExpression;
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextDocument_Find35(@ptrCast(self.ptr), @ptrCast(expr.ptr), @ptrCast(cursor.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `drawContents2` instead
    ///
    pub const DrawContents2 = drawContents2;

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
    pub fn drawContents2(self: QTextDocument, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QTextDocument_DrawContents2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `clearUndoRedoStacks1` instead
    ///
    pub const ClearUndoRedoStacks1 = clearUndoRedoStacks1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` historyToClear: qtextdocument_enums.Stacks `
    ///
    pub fn clearUndoRedoStacks1(self: QTextDocument, historyToClear: i32) void {
        qtc.QTextDocument_ClearUndoRedoStacks1(@ptrCast(self.ptr), @bitCast(historyToClear));
    }

    /// ### DEPRECATED: Use `setModified1` instead
    ///
    pub const SetModified1 = setModified1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` m: bool `
    ///
    pub fn setModified1(self: QTextDocument, m: bool) void {
        qtc.QTextDocument_SetModified1(@ptrCast(self.ptr), m);
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QTextDocument, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextDocument.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QTextDocument, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isWidgetType(self: QTextDocument) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isWindowType(self: QTextDocument) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn isQuickItemType(self: QTextDocument) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn signalsBlocked(self: QTextDocument) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QTextDocument, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn thread(self: QTextDocument) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextDocument, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QTextDocument, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QTextDocument, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QTextDocument, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QTextDocument, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QTextDocument, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextDocument.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextDocument, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QTextDocument, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QTextDocument, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextDocument, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn disconnect3(self: QTextDocument) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QTextDocument, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn dumpObjectTree(self: QTextDocument) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn dumpObjectInfo(self: QTextDocument) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QTextDocument, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QTextDocument, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QTextDocument, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextDocument.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextDocument.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn bindingStorage(self: QTextDocument) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn bindingStorage2(self: QTextDocument) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn destroyed(self: QTextDocument) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QTextDocument, callback: *const fn (QTextDocument) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn parent(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QTextDocument, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    pub fn deleteLater(self: QTextDocument) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QTextDocument, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QTextDocument, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextDocument `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextDocument, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QTextDocument, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QTextDocument, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QTextDocument, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QTextDocument, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QTextDocument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QTextDocument, callback: *const fn (QTextDocument, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextDocument, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextDocument_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTextDocument, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextDocument_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QTextDocument, callback: *const fn (QTextDocument, QEvent) callconv(.c) bool) void {
        qtc.QTextDocument_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextDocument, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextDocument_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTextDocument, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextDocument_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QTextDocument, callback: *const fn (QTextDocument, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextDocument_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextDocument_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextDocument_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QTextDocument, callback: *const fn (QTextDocument, QTimerEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextDocument_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextDocument_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QTextDocument, callback: *const fn (QTextDocument, QChildEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextDocument_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTextDocument, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextDocument_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QTextDocument, callback: *const fn (QTextDocument, QEvent) callconv(.c) void) void {
        qtc.QTextDocument_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) void) void {
        qtc.QTextDocument_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QTextDocument, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextDocument_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) void) void {
        qtc.QTextDocument_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QTextDocument_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QTextDocument) QObject {
        return .{ .ptr = qtc.QTextDocument_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QTextDocument, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextDocument_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QTextDocument) i32 {
        return qtc.QTextDocument_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QTextDocument) i32 {
        return qtc.QTextDocument_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QTextDocument, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextDocument_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QTextDocument, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QTextDocument, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextDocument_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextDocument_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QTextDocument, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextDocument_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QTextDocument, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextDocument_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QTextDocument, callback: *const fn (QTextDocument, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextDocument_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QTextDocument, callback: *const fn (QTextDocument, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextDocument `
    ///
    pub fn delete(self: QTextDocument) void {
        qtc.QTextDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)
pub const enums = struct {
    pub const MetaInformation = enum {
        pub const DocumentTitle: i32 = 0;
        pub const DocumentUrl: i32 = 1;
        pub const CssMedia: i32 = 2;
        pub const FrontMatter: i32 = 3;
    };

    pub const MarkdownFeature = enum {
        pub const MarkdownNoHTML: i32 = 96;
        pub const MarkdownDialectCommonMark: i32 = 0;
        pub const MarkdownDialectGitHub: i32 = 1068812;
    };

    pub const FindFlag = enum {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
        pub const FindWholeWords: i32 = 4;
    };

    pub const ResourceType = enum {
        pub const UnknownResource: i32 = 0;
        pub const HtmlResource: i32 = 1;
        pub const ImageResource: i32 = 2;
        pub const StyleSheetResource: i32 = 3;
        pub const MarkdownResource: i32 = 4;
        pub const UserResource: i32 = 100;
    };

    pub const Stacks = enum {
        pub const UndoStack: i32 = 1;
        pub const RedoStack: i32 = 2;
        pub const UndoAndRedoStacks: i32 = 3;
    };
};
