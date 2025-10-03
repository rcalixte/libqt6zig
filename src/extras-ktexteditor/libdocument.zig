const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const document_enums = enums;
const movingcursor_enums = @import("libmovingcursor.zig").enums;
const movingrange_enums = @import("libmovingrange.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const theme_enums = @import("../extras-ksyntaxhighlighting/libtheme.zig").enums;
const set_constu8 = std.StringHashMapUnmanaged(void);
pub const map_i32_qtcktexteditormark = std.AutoHashMapUnmanaged(i32, QtC.KTextEditor__Mark);

/// https://api.kde.org/ktexteditor-mark.html
pub const ktexteditor__mark = struct {
    /// [Qt documentation](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ``` self: QtC.KTextEditor__Mark ```
    pub fn Line(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Mark_Line(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ``` self: QtC.KTextEditor__Mark, line: i32 ```
    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__Mark_SetLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ``` self: QtC.KTextEditor__Mark ```
    pub fn Type(self: ?*anyopaque) u32 {
        return qtc.KTextEditor__Mark_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ``` self: QtC.KTextEditor__Mark, type: u32 ```
    pub fn SetType(self: ?*anyopaque, _type: u32) void {
        qtc.KTextEditor__Mark_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__Mark ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Mark_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktexteditor-document.html
pub const ktexteditor__document = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__Document_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTextEditor__Document, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Document_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTextEditor__Document, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEditor__Document_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTextEditor__Document_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#createView)
    ///
    /// ``` self: QtC.KTextEditor__Document, parent: QtC.QWidget, mainWindow: QtC.KTextEditor__MainWindow ```
    pub fn CreateView(self: ?*anyopaque, parent: ?*anyopaque, mainWindow: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__Document_CreateView(@ptrCast(self), @ptrCast(parent), @ptrCast(mainWindow));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#views)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Views(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KTextEditor__View {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Views(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__View, _arr.len) catch @panic("ktexteditor::document.Views: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__View = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#viewCreated)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, view: QtC.KTextEditor__View ```
    pub fn ViewCreated(self: ?*anyopaque, document: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__Document_ViewCreated(@ptrCast(self), @ptrCast(document), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#viewCreated)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, view: QtC.KTextEditor__View) callconv(.c) void ```
    pub fn OnViewCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ViewCreated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentName)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn DocumentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_DocumentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.DocumentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#mimeType)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#checksum)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Checksum(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KTextEditor__Document_Checksum(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktexteditor::document.Checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn DocumentNameChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_DocumentNameChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnDocumentNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn DocumentUrlChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_DocumentUrlChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnDocumentUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentUrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn ModifiedChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_ModifiedChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnModifiedChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn ReadWriteChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_ReadWriteChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnReadWriteChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ReadWriteChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setEncoding)
    ///
    /// ``` self: QtC.KTextEditor__Document, encoding: []const u8 ```
    pub fn SetEncoding(self: ?*anyopaque, encoding: []const u8) bool {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return qtc.KTextEditor__Document_SetEncoding(@ptrCast(self), encoding_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#encoding)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Encoding(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_Encoding(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Encoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentReload)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DocumentReload(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_DocumentReload(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentSave)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DocumentSave(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_DocumentSave(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentSaveAs)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DocumentSaveAs(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_DocumentSaveAs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#openingError)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn OpeningError(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_OpeningError(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, saveAs: bool ```
    pub fn DocumentSavedOrUploaded(self: ?*anyopaque, document: ?*anyopaque, saveAs: bool) void {
        qtc.KTextEditor__Document_DocumentSavedOrUploaded(@ptrCast(self), @ptrCast(document), saveAs);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, saveAs: bool) callconv(.c) void ```
    pub fn OnDocumentSavedOrUploaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentSavedOrUploaded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn AboutToClose(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_AboutToClose(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn AboutToReload(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_AboutToReload(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnAboutToReload(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToReload(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn Reloaded(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_Reloaded(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnReloaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_Reloaded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn AboutToSave(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_AboutToSave(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnAboutToSave(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToSave(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isEditingTransactionRunning)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsEditingTransactionRunning(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_IsEditingTransactionRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#text)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#text)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, block: bool, allocator: std.mem.Allocator ```
    pub fn Text2(self: ?*anyopaque, range: QtC.KTextEditor__Range, block: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_Text2(@ptrCast(self), @ptrCast(range), block);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#characterAt)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor ```
    pub fn CharacterAt(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) QtC.QChar {
        return qtc.KTextEditor__Document_CharacterAt(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#wordAt)
    ///
    /// ``` self: QtC.KTextEditor__Document, cursor: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn WordAt(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_WordAt(@ptrCast(self), @ptrCast(cursor));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.WordAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#wordRangeAt)
    ///
    /// ``` self: QtC.KTextEditor__Document, cursor: QtC.KTextEditor__Cursor ```
    pub fn WordRangeAt(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Document_WordRangeAt(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isValidTextPosition)
    ///
    /// ``` self: QtC.KTextEditor__Document, cursor: QtC.KTextEditor__Cursor ```
    pub fn IsValidTextPosition(self: ?*anyopaque, cursor: QtC.KTextEditor__Cursor) bool {
        return qtc.KTextEditor__Document_IsValidTextPosition(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textLines)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, block: bool, allocator: std.mem.Allocator ```
    pub fn TextLines(self: ?*anyopaque, range: QtC.KTextEditor__Range, block: bool, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_TextLines(@ptrCast(self), @ptrCast(range), block);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::document.TextLines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.TextLines: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#line)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, allocator: std.mem.Allocator ```
    pub fn Line(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_Line(@ptrCast(self), @intCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Line: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lines)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Lines(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Document_Lines(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isLineModified)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn IsLineModified(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineModified(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isLineSaved)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn IsLineSaved(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineSaved(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isLineTouched)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn IsLineTouched(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineTouched(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentEnd)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DocumentEnd(self: ?*anyopaque) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Document_DocumentEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#documentRange)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DocumentRange(self: ?*anyopaque) QtC.KTextEditor__Range {
        return qtc.KTextEditor__Document_DocumentRange(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#totalCharacters)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn TotalCharacters(self: ?*anyopaque) i64 {
        return qtc.KTextEditor__Document_TotalCharacters(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isEmpty)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lineLength)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn LineLength(self: ?*anyopaque, line: i32) i32 {
        return qtc.KTextEditor__Document_LineLength(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#endOfLine)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn EndOfLine(self: ?*anyopaque, line: i32) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Document_EndOfLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ``` self: QtC.KTextEditor__Document, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ``` self: QtC.KTextEditor__Document, text: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetText2(self: ?*anyopaque, text: [][]const u8, allocator: std.mem.Allocator) bool {
        var text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor::document.SetText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i| {
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_SetText2(@ptrCast(self), text_list);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#clear)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Clear(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#insertText)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, text: []const u8, block: bool ```
    pub fn InsertText(self: ?*anyopaque, position: QtC.KTextEditor__Cursor, text: []const u8, block: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_InsertText(@ptrCast(self), @ptrCast(position), text_str, block);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#insertText)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, text: [][]const u8, block: bool, allocator: std.mem.Allocator ```
    pub fn InsertText2(self: ?*anyopaque, position: QtC.KTextEditor__Cursor, text: [][]const u8, block: bool, allocator: std.mem.Allocator) bool {
        var text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor::document.InsertText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i| {
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertText2(@ptrCast(self), @ptrCast(position), text_list, block);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#replaceText)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, text: []const u8, block: bool ```
    pub fn ReplaceText(self: ?*anyopaque, range: QtC.KTextEditor__Range, text: []const u8, block: bool) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText(@ptrCast(self), @ptrCast(range), text_str, block);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#replaceText)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, text: [][]const u8, block: bool, allocator: std.mem.Allocator ```
    pub fn ReplaceText2(self: ?*anyopaque, range: QtC.KTextEditor__Range, text: [][]const u8, block: bool, allocator: std.mem.Allocator) bool {
        var text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor::document.ReplaceText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i| {
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText2(@ptrCast(self), @ptrCast(range), text_list, block);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#removeText)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, block: bool ```
    pub fn RemoveText(self: ?*anyopaque, range: QtC.KTextEditor__Range, block: bool) bool {
        return qtc.KTextEditor__Document_RemoveText(@ptrCast(self), @ptrCast(range), block);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#insertLine)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, text: []const u8 ```
    pub fn InsertLine(self: ?*anyopaque, line: i32, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_InsertLine(@ptrCast(self), @intCast(line), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#insertLines)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, text: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertLines(self: ?*anyopaque, line: i32, text: [][]const u8, allocator: std.mem.Allocator) bool {
        var text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor::document.InsertLines: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i| {
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertLines(@ptrCast(self), @intCast(line), text_list);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#removeLine)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn RemoveLine(self: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__Document_RemoveLine(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#searchText)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, pattern: []const u8, allocator: std.mem.Allocator ```
    pub fn SearchText(self: ?*anyopaque, range: QtC.KTextEditor__Range, pattern: []const u8, allocator: std.mem.Allocator) []QtC.KTextEditor__Range {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText(@ptrCast(self), @ptrCast(range), pattern_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__Range, _arr.len) catch @panic("ktexteditor::document.SearchText: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#cursorToOffset)
    ///
    /// ``` self: QtC.KTextEditor__Document, c: QtC.KTextEditor__Cursor ```
    pub fn CursorToOffset(self: ?*anyopaque, c: QtC.KTextEditor__Cursor) i64 {
        return qtc.KTextEditor__Document_CursorToOffset(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#offsetToCursor)
    ///
    /// ``` self: QtC.KTextEditor__Document, offset: i64 ```
    pub fn OffsetToCursor(self: ?*anyopaque, offset: i64) QtC.KTextEditor__Cursor {
        return qtc.KTextEditor__Document_OffsetToCursor(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn EditingStarted(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_EditingStarted(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnEditingStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingStarted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn EditingFinished(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_EditingFinished(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnEditingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lineWrapped)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor ```
    pub fn LineWrapped(self: ?*anyopaque, document: ?*anyopaque, position: QtC.KTextEditor__Cursor) void {
        qtc.KTextEditor__Document_LineWrapped(@ptrCast(self), @ptrCast(document), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lineWrapped)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor) callconv(.c) void ```
    pub fn OnLineWrapped(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineWrapped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, line: i32 ```
    pub fn LineUnwrapped(self: ?*anyopaque, document: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__Document_LineUnwrapped(@ptrCast(self), @ptrCast(document), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, line: i32) callconv(.c) void ```
    pub fn OnLineUnwrapped(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineUnwrapped(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textInserted)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, text: []const u8 ```
    pub fn TextInserted(self: ?*anyopaque, document: ?*anyopaque, position: QtC.KTextEditor__Cursor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_TextInserted(@ptrCast(self), @ptrCast(document), @ptrCast(position), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textInserted)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Cursor, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textRemoved)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, text: []const u8 ```
    pub fn TextRemoved(self: ?*anyopaque, document: ?*anyopaque, range: QtC.KTextEditor__Range, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_TextRemoved(@ptrCast(self), @ptrCast(document), @ptrCast(range), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textRemoved)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Range, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn TextChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_TextChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#defaultStyleAt)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor ```
    ///
    /// Returns: ``` theme_enums.TextStyle ```
    pub fn DefaultStyleAt(self: ?*anyopaque, position: QtC.KTextEditor__Cursor) i32 {
        return qtc.KTextEditor__Document_DefaultStyleAt(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#mode)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Mode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_Mode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Mode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingMode)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn HighlightingMode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_HighlightingMode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.HighlightingMode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#embeddedHighlightingModes)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn EmbeddedHighlightingModes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_EmbeddedHighlightingModes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::document.EmbeddedHighlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.EmbeddedHighlightingModes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingModeAt)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator ```
    pub fn HighlightingModeAt(self: ?*anyopaque, position: QtC.KTextEditor__Cursor, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_HighlightingModeAt(@ptrCast(self), @ptrCast(position));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.HighlightingModeAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modes)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Modes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Modes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::document.Modes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.Modes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingModes)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn HighlightingModes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_HighlightingModes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::document.HighlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.HighlightingModes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setMode)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn SetMode(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetMode(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setHighlightingMode)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn SetHighlightingMode(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetHighlightingMode(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingModeSection)
    ///
    /// ``` self: QtC.KTextEditor__Document, index: i32, allocator: std.mem.Allocator ```
    pub fn HighlightingModeSection(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_HighlightingModeSection(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.HighlightingModeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modeSection)
    ///
    /// ``` self: QtC.KTextEditor__Document, index: i32, allocator: std.mem.Allocator ```
    pub fn ModeSection(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_ModeSection(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.ModeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn ModeChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_ModeChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn HighlightingModeChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_HighlightingModeChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnHighlightingModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_HighlightingModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#print)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Print(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_Print(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#printPreview)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn PrintPreview(self: ?*anyopaque) void {
        qtc.KTextEditor__Document_PrintPreview(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#postMessage)
    ///
    /// ``` self: QtC.KTextEditor__Document, message: QtC.KTextEditor__Message ```
    pub fn PostMessage(self: ?*anyopaque, message: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_PostMessage(@ptrCast(self), @ptrCast(message));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#readSessionConfig)
    ///
    /// ``` self: QtC.KTextEditor__Document, config: QtC.KConfigGroup, flags: set_constu8, allocator: std.mem.Allocator ```
    pub fn ReadSessionConfig(self: ?*anyopaque, config: ?*anyopaque, flags: set_constu8, allocator: std.mem.Allocator) void {
        var flags_arr = allocator.alloc(qtc.libqt_string, flags.count()) catch @panic("ktexteditor::document.ReadSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = item.*.len,
                .data = item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags.count(),
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__Document_ReadSessionConfig(@ptrCast(self), @ptrCast(config), flags_set);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#writeSessionConfig)
    ///
    /// ``` self: QtC.KTextEditor__Document, config: QtC.KConfigGroup, flags: set_constu8, allocator: std.mem.Allocator ```
    pub fn WriteSessionConfig(self: ?*anyopaque, config: ?*anyopaque, flags: set_constu8, allocator: std.mem.Allocator) void {
        var flags_arr = allocator.alloc(qtc.libqt_string, flags.count()) catch @panic("ktexteditor::document.WriteSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = item.*.len,
                .data = item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags.count(),
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__Document_WriteSessionConfig(@ptrCast(self), @ptrCast(config), flags_set);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#isDataRecoveryAvailable)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsDataRecoveryAvailable(self: ?*anyopaque) bool {
        return qtc.KTextEditor__Document_IsDataRecoveryAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#recoverData)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn RecoverData(self: ?*anyopaque) void {
        qtc.KTextEditor__Document_RecoverData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#discardDataRecovery)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DiscardDataRecovery(self: ?*anyopaque) void {
        qtc.KTextEditor__Document_DiscardDataRecovery(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn ConfigChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_ConfigChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnConfigChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ConfigChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#newMovingCursor)
    ///
    /// ``` self: QtC.KTextEditor__Document, position: QtC.KTextEditor__Cursor, insertBehavior: movingcursor_enums.InsertBehavior ```
    pub fn NewMovingCursor(self: ?*anyopaque, position: QtC.KTextEditor__Cursor, insertBehavior: i32) QtC.KTextEditor__MovingCursor {
        return qtc.KTextEditor__Document_NewMovingCursor(@ptrCast(self), @ptrCast(position), @intCast(insertBehavior));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#newMovingRange)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, insertBehaviors: flag of movingrange_enums.InsertBehavior, emptyBehavior: movingrange_enums.EmptyBehavior ```
    pub fn NewMovingRange(self: ?*anyopaque, range: QtC.KTextEditor__Range, insertBehaviors: i32, emptyBehavior: i32) QtC.KTextEditor__MovingRange {
        return qtc.KTextEditor__Document_NewMovingRange(@ptrCast(self), @ptrCast(range), @intCast(insertBehaviors), @intCast(emptyBehavior));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#revision)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Revision(self: ?*anyopaque) i64 {
        return qtc.KTextEditor__Document_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lastSavedRevision)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn LastSavedRevision(self: ?*anyopaque) i64 {
        return qtc.KTextEditor__Document_LastSavedRevision(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#lockRevision)
    ///
    /// ``` self: QtC.KTextEditor__Document, revision: i64 ```
    pub fn LockRevision(self: ?*anyopaque, revision: i64) void {
        qtc.KTextEditor__Document_LockRevision(@ptrCast(self), @intCast(revision));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#unlockRevision)
    ///
    /// ``` self: QtC.KTextEditor__Document, revision: i64 ```
    pub fn UnlockRevision(self: ?*anyopaque, revision: i64) void {
        qtc.KTextEditor__Document_UnlockRevision(@ptrCast(self), @intCast(revision));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#transformCursor)
    ///
    /// ``` self: QtC.KTextEditor__Document, cursor: QtC.KTextEditor__Cursor, insertBehavior: movingcursor_enums.InsertBehavior, fromRevision: i64, toRevision: i64 ```
    pub fn TransformCursor(self: ?*anyopaque, cursor: ?*anyopaque, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        qtc.KTextEditor__Document_TransformCursor(@ptrCast(self), @ptrCast(cursor), @intCast(insertBehavior), @intCast(fromRevision), @intCast(toRevision));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#transformCursor)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: *i32, column: *i32, insertBehavior: movingcursor_enums.InsertBehavior, fromRevision: i64, toRevision: i64 ```
    pub fn TransformCursor2(self: ?*anyopaque, line: *i32, column: *i32, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        qtc.KTextEditor__Document_TransformCursor2(@ptrCast(self), @ptrCast(line), @ptrCast(column), @intCast(insertBehavior), @intCast(fromRevision), @intCast(toRevision));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#transformRange)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, insertBehaviors: flag of movingrange_enums.InsertBehavior, emptyBehavior: movingrange_enums.EmptyBehavior, fromRevision: i64, toRevision: i64 ```
    pub fn TransformRange(self: ?*anyopaque, range: ?*anyopaque, insertBehaviors: i32, emptyBehavior: i32, fromRevision: i64, toRevision: i64) void {
        qtc.KTextEditor__Document_TransformRange(@ptrCast(self), @ptrCast(range), @intCast(insertBehaviors), @intCast(emptyBehavior), @intCast(fromRevision), @intCast(toRevision));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn AboutToDeleteMovingInterfaceContent(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_AboutToDeleteMovingInterfaceContent(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnAboutToDeleteMovingInterfaceContent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn AboutToInvalidateMovingInterfaceContent(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_AboutToInvalidateMovingInterfaceContent(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnAboutToInvalidateMovingInterfaceContent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#configKeys)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn ConfigKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_ConfigKeys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::document.ConfigKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.ConfigKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#configValue)
    ///
    /// ``` self: QtC.KTextEditor__Document, key: []const u8 ```
    pub fn ConfigValue(self: ?*anyopaque, key: []const u8) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KTextEditor__Document_ConfigValue(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setConfigValue)
    ///
    /// ``` self: QtC.KTextEditor__Document, key: []const u8, value: QtC.QVariant ```
    pub fn SetConfigValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.KTextEditor__Document_SetConfigValue(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setModifiedOnDisk)
    ///
    /// ``` self: QtC.KTextEditor__Document, reason: document_enums.ModifiedOnDiskReason ```
    pub fn SetModifiedOnDisk(self: ?*anyopaque, reason: i32) void {
        qtc.KTextEditor__Document_SetModifiedOnDisk(@ptrCast(self), @intCast(reason));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setModifiedOnDiskWarning)
    ///
    /// ``` self: QtC.KTextEditor__Document, on: bool ```
    pub fn SetModifiedOnDiskWarning(self: ?*anyopaque, on: bool) void {
        qtc.KTextEditor__Document_SetModifiedOnDiskWarning(@ptrCast(self), on);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, isModified: bool, reason: document_enums.ModifiedOnDiskReason ```
    pub fn ModifiedOnDisk(self: ?*anyopaque, document: ?*anyopaque, isModified: bool, reason: i32) void {
        qtc.KTextEditor__Document_ModifiedOnDisk(@ptrCast(self), @ptrCast(document), isModified, @intCast(reason));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, isModified: bool, reason: document_enums.ModifiedOnDiskReason) callconv(.c) void ```
    pub fn OnModifiedOnDisk(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedOnDisk(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#mark)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn Mark(self: ?*anyopaque, line: i32) u32 {
        return qtc.KTextEditor__Document_Mark(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setMark)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, markType: u32 ```
    pub fn SetMark(self: ?*anyopaque, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_SetMark(@ptrCast(self), @intCast(line), @intCast(markType));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#clearMark)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32 ```
    pub fn ClearMark(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__Document_ClearMark(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#addMark)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, markType: u32 ```
    pub fn AddMark(self: ?*anyopaque, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_AddMark(@ptrCast(self), @intCast(line), @intCast(markType));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#removeMark)
    ///
    /// ``` self: QtC.KTextEditor__Document, line: i32, markType: u32 ```
    pub fn RemoveMark(self: ?*anyopaque, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_RemoveMark(@ptrCast(self), @intCast(line), @intCast(markType));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#marks)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Marks(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcktexteditormark {
        const _map: qtc.libqt_map = qtc.KTextEditor__Document_Marks(@ptrCast(self));
        var _ret: map_i32_qtcktexteditormark = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*anyopaque = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("ktexteditor::document.Marks: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#clearMarks)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn ClearMarks(self: ?*anyopaque) void {
        qtc.KTextEditor__Document_ClearMarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#reservedMarkersCount)
    ///
    ///
    pub fn ReservedMarkersCount() i32 {
        return qtc.KTextEditor__Document_ReservedMarkersCount();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setMarkDescription)
    ///
    /// ``` self: QtC.KTextEditor__Document, mark: document_enums.MarkTypes, text: []const u8 ```
    pub fn SetMarkDescription(self: ?*anyopaque, mark: i64, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_SetMarkDescription(@ptrCast(self), @intCast(mark), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markDescription)
    ///
    /// ``` self: QtC.KTextEditor__Document, mark: document_enums.MarkTypes, allocator: std.mem.Allocator ```
    pub fn MarkDescription(self: ?*anyopaque, mark: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Document_MarkDescription(@ptrCast(self), @intCast(mark));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.MarkDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setEditableMarks)
    ///
    /// ``` self: QtC.KTextEditor__Document, markMask: u32 ```
    pub fn SetEditableMarks(self: ?*anyopaque, markMask: u32) void {
        qtc.KTextEditor__Document_SetEditableMarks(@ptrCast(self), @intCast(markMask));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#editableMarks)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn EditableMarks(self: ?*anyopaque) u32 {
        return qtc.KTextEditor__Document_EditableMarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setMarkIcon)
    ///
    /// ``` self: QtC.KTextEditor__Document, markType: document_enums.MarkTypes, icon: QtC.QIcon ```
    pub fn SetMarkIcon(self: ?*anyopaque, markType: i64, icon: ?*anyopaque) void {
        qtc.KTextEditor__Document_SetMarkIcon(@ptrCast(self), @intCast(markType), @ptrCast(icon));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markIcon)
    ///
    /// ``` self: QtC.KTextEditor__Document, markType: document_enums.MarkTypes ```
    pub fn MarkIcon(self: ?*anyopaque, markType: i64) QtC.QIcon {
        return qtc.KTextEditor__Document_MarkIcon(@ptrCast(self), @intCast(markType));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document ```
    pub fn MarksChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Document_MarksChanged(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnMarksChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarksChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, action: document_enums.MarkChangeAction ```
    pub fn MarkChanged(self: ?*anyopaque, document: ?*anyopaque, mark: QtC.KTextEditor__Mark, action: i32) void {
        qtc.KTextEditor__Document_MarkChanged(@ptrCast(self), @ptrCast(document), @ptrCast(mark), @intCast(action));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, action: document_enums.MarkChangeAction) callconv(.c) void ```
    pub fn OnMarkChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Mark, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, position: QtC.QPoint, handled: *bool ```
    pub fn MarkToolTipRequested(self: ?*anyopaque, document: ?*anyopaque, mark: QtC.KTextEditor__Mark, position: QtC.QPoint, handled: *bool) void {
        qtc.KTextEditor__Document_MarkToolTipRequested(@ptrCast(self), @ptrCast(document), @ptrCast(mark), @ptrCast(position), @ptrCast(handled));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, position: QtC.QPoint, handled: *bool) callconv(.c) void ```
    pub fn OnMarkToolTipRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Mark, QtC.QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkToolTipRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, pos: QtC.QPoint, handled: *bool ```
    pub fn MarkContextMenuRequested(self: ?*anyopaque, document: ?*anyopaque, mark: QtC.KTextEditor__Mark, pos: QtC.QPoint, handled: *bool) void {
        qtc.KTextEditor__Document_MarkContextMenuRequested(@ptrCast(self), @ptrCast(document), @ptrCast(mark), @ptrCast(pos), @ptrCast(handled));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, pos: QtC.QPoint, handled: *bool) callconv(.c) void ```
    pub fn OnMarkContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Mark, QtC.QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ``` self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, handled: *bool ```
    pub fn MarkClicked(self: ?*anyopaque, document: ?*anyopaque, mark: QtC.KTextEditor__Mark, handled: *bool) void {
        qtc.KTextEditor__Document_MarkClicked(@ptrCast(self), @ptrCast(document), @ptrCast(mark), @ptrCast(handled));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, document: QtC.KTextEditor__Document, mark: QtC.KTextEditor__Mark, handled: *bool) callconv(.c) void ```
    pub fn OnMarkClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.KTextEditor__Mark, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkClicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#setAnnotationModel)
    ///
    /// ``` self: QtC.KTextEditor__Document, model: QtC.KTextEditor__AnnotationModel ```
    pub fn SetAnnotationModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.KTextEditor__Document_SetAnnotationModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#annotationModel)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn AnnotationModel(self: ?*anyopaque) QtC.KTextEditor__AnnotationModel {
        return qtc.KTextEditor__Document_AnnotationModel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__Document_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__Document_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document.html#searchText)
    ///
    /// ``` self: QtC.KTextEditor__Document, range: QtC.KTextEditor__Range, pattern: []const u8, options: flag of document_enums.SearchOption, allocator: std.mem.Allocator ```
    pub fn SearchText3(self: ?*anyopaque, range: QtC.KTextEditor__Range, pattern: []const u8, options: i64, allocator: std.mem.Allocator) []QtC.KTextEditor__Range {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText3(@ptrCast(self), @ptrCast(range), pattern_str, @intCast(options));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__Range, _arr.len) catch @panic("ktexteditor::document.SearchText3: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsReadWrite(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_IsReadWrite(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// ``` self: QtC.KTextEditor__Document, readwrite: bool ```
    pub fn SetReadWrite(self: ?*anyopaque, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SetReadWrite(@ptrCast(self), readwrite);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#isModified)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_IsModified(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn QueryClose(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_QueryClose(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn CloseUrl(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_CloseUrl(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ``` self: QtC.KTextEditor__Document, promptToSave: bool ```
    pub fn CloseUrl2(self: ?*anyopaque, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_CloseUrl2(@ptrCast(self), promptToSave);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// ``` self: QtC.KTextEditor__Document, url: QtC.QUrl ```
    pub fn SaveAs(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_SaveAs(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ``` self: QtC.KTextEditor__Document, modified: bool ```
    pub fn SetModified(self: ?*anyopaque, modified: bool) void {
        qtc.KParts__ReadWritePart_SetModified(@ptrCast(self), modified);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ``` self: QtC.KTextEditor__Document, handled: *bool, abortClosing: *bool ```
    pub fn SigQueryClose(self: ?*anyopaque, handled: *bool, abortClosing: *bool) void {
        qtc.KParts__ReadWritePart_SigQueryClose(@ptrCast(self), @ptrCast(handled), @ptrCast(abortClosing));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, handled: *bool, abortClosing: *bool) callconv(.c) void ```
    pub fn OnSigQueryClose(self: ?*anyopaque, callback: *const fn (?*anyopaque, *bool, *bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_Connect_SigQueryClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn SetModified2(self: ?*anyopaque) void {
        qtc.KParts__ReadWritePart_SetModified2(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Save(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_Save(@ptrCast(self));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn WaitSaveComplete(self: ?*anyopaque) bool {
        return qtc.KParts__ReadWritePart_WaitSaveComplete(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ``` self: QtC.KTextEditor__Document, show: bool ```
    pub fn SetProgressInfoEnabled(self: ?*anyopaque, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self), show);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsProgressInfoEnabled(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ``` self: QtC.KTextEditor__Document, url: QtC.QUrl ```
    pub fn OpenUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KParts__ReadOnlyPart_Url(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn NavigationExtension(self: ?*anyopaque) QtC.KParts__NavigationExtension {
        return qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ``` self: QtC.KTextEditor__Document, arguments: QtC.KParts__OpenUrlArguments ```
    pub fn SetArguments(self: ?*anyopaque, arguments: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self), @ptrCast(arguments));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Arguments(self: ?*anyopaque) QtC.KParts__OpenUrlArguments {
        return qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ``` self: QtC.KTextEditor__Document, mimeType: []const u8, url: QtC.QUrl ```
    pub fn OpenStream(self: ?*anyopaque, mimeType: []const u8, url: ?*anyopaque) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self), mimeType_str, @ptrCast(url));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ``` self: QtC.KTextEditor__Document, data: []u8 ```
    pub fn WriteStream(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self), data_str);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn CloseStream(self: ?*anyopaque) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ``` self: QtC.KTextEditor__Document, job: QtC.KIO__Job ```
    pub fn Started(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, job: QtC.KIO__Job) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Completed(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnCompleted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn CompletedWithPendingAction(self: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnCompletedWithPendingAction(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ``` self: QtC.KTextEditor__Document, errMsg: []const u8 ```
    pub fn Canceled(self: ?*anyopaque, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self), errMsg_str);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, errMsg: [*:0]const u8) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, url: QtC.QUrl ```
    pub fn UrlChanged(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// [Qt documentation](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, url: QtC.QUrl) callconv(.c) void ```
    pub fn OnUrlChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#widget)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__Part_Widget(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// ``` self: QtC.KTextEditor__Document, manager: QtC.KParts__PartManager ```
    pub fn SetManager(self: ?*anyopaque, manager: ?*anyopaque) void {
        qtc.KParts__Part_SetManager(@ptrCast(self), @ptrCast(manager));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Manager(self: ?*anyopaque) QtC.KParts__PartManager {
        return qtc.KParts__Part_Manager(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ``` self: QtC.KTextEditor__Document, autoDeleteWidget: bool ```
    pub fn SetAutoDeleteWidget(self: ?*anyopaque, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self), autoDeleteWidget);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ``` self: QtC.KTextEditor__Document, autoDeletePart: bool ```
    pub fn SetAutoDeletePart(self: ?*anyopaque, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// ``` self: QtC.KTextEditor__Document, widget: QtC.QWidget, globalPos: QtC.QPoint ```
    pub fn HitTest(self: ?*anyopaque, widget: ?*anyopaque, globalPos: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__Part_HitTest(@ptrCast(self), @ptrCast(widget), @ptrCast(globalPos));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn MetaData(self: ?*anyopaque) QtC.KPluginMetaData {
        return qtc.KParts__Part_MetaData(@ptrCast(self));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ``` self: QtC.KTextEditor__Document, caption: []const u8 ```
    pub fn SetWindowCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetWindowCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ``` self: QtC.KTextEditor__Document, text: []const u8 ```
    pub fn SetStatusBarText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self), text_str);
    }

    /// Inherited from KParts::Part
    ///
    /// [Qt documentation](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetStatusBarText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KTextEditor__Document, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Document, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTextEditor__Document, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__Document, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__Document, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__Document, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__Document, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktexteditor::document.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KTextEditor__Document, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Document, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Document, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KTextEditor__Document, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor::document.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::document.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTextEditor__Document, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__Document, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__Document, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KTextEditor__Document, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Document, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ``` self: QtC.KTextEditor__Document, object: QtC.QObject ```
    pub fn SetPartObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn PartObject(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartBase_PartObject(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn Action(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXMLGUIClient_Action(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KTextEditor__Document, element: QtC.QDomElement ```
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KXMLGUIClient_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KXMLGUIClient_ActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_DomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ``` self: QtC.KTextEditor__Document, doc: QtC.QDomDocument ```
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ``` self: QtC.KTextEditor__Document, factory: QtC.KXMLGUIFactory ```
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ``` self: QtC.KTextEditor__Document, child: QtC.KXMLGUIClient ```
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ``` self: QtC.KTextEditor__Document, child: QtC.KXMLGUIClient ```
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ``` self: QtC.KTextEditor__Document, allocator: std.mem.Allocator ```
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("ktexteditor::document.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ``` self: QtC.KTextEditor__Document, builder: QtC.KXMLGUIBuilder ```
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8, actionList: []QtC.QAction ```
    pub fn PlugActionList(self: ?*anyopaque, name: []const u8, actionList: []?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self), name_str, actionList_list);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ``` self: QtC.KTextEditor__Document, name: []const u8 ```
    pub fn UnplugActionList(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ``` files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator ```
    pub fn FindMostRecentXMLFile(files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator) []const u8 {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("ktexteditor::document.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        const _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ``` self: QtC.KTextEditor__Document, state: []const u8, action: []const u8 ```
    pub fn AddStateActionEnabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ``` self: QtC.KTextEditor__Document, state: []const u8, action: []const u8 ```
    pub fn AddStateActionDisabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ``` self: QtC.KTextEditor__Document, state: []const u8 ```
    pub fn GetActionsToChangeForState(self: ?*anyopaque, state: []const u8) QtC.KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self), state_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ``` self: QtC.KTextEditor__Document, param1: QtC.QWidget ```
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ``` self: QtC.KTextEditor__Document, param1: QtC.QWidget ```
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8 ```
    pub fn ReplaceXMLFile(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self), xmlfile_str, localxmlfile_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ``` xml: []const u8, allocator: std.mem.Allocator ```
    pub fn FindVersionNumber(xml: []const u8, allocator: std.mem.Allocator) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        const _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::document.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8, merge: bool ```
    pub fn ReplaceXMLFile3(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self), xmlfile_str, localxmlfile_str, merge);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTextEditor__Document, callback: *const fn (self: QtC.KTextEditor__Document, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__Document ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Document_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktexteditor-document-editingtransaction.html
pub const ktexteditor__document__editingtransaction = struct {
    /// New constructs a new KTextEditor::Document::EditingTransaction object.
    ///
    /// ``` document: QtC.KTextEditor__Document ```
    pub fn New(document: ?*anyopaque) QtC.KTextEditor__Document__EditingTransaction {
        return qtc.KTextEditor__Document__EditingTransaction_new(@ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document-editingtransaction.html#start)
    ///
    /// ``` self: QtC.KTextEditor__Document__EditingTransaction ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KTextEditor__Document__EditingTransaction_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-document-editingtransaction.html#finish)
    ///
    /// ``` self: QtC.KTextEditor__Document__EditingTransaction ```
    pub fn Finish(self: ?*anyopaque) void {
        qtc.KTextEditor__Document__EditingTransaction_Finish(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__Document__EditingTransaction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__Document__EditingTransaction_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/document.html#types
pub const enums = struct {
    pub const SearchOption = enum {
        pub const Default: i32 = 0;
        pub const Regex: i32 = 2;
        pub const CaseInsensitive: i32 = 16;
        pub const Backwards: i32 = 32;
        pub const EscapeSequences: i32 = 1024;
        pub const WholeWords: i32 = 2048;
        pub const MaxSearchOption: i32 = -2147483648;
    };

    pub const ModifiedOnDiskReason = enum {
        pub const OnDiskUnmodified: i32 = 0;
        pub const OnDiskModified: i32 = 1;
        pub const OnDiskCreated: i32 = 2;
        pub const OnDiskDeleted: i32 = 3;
    };

    pub const MarkTypes = enum {
        pub const MarkType01: i32 = 1;
        pub const MarkType02: i32 = 2;
        pub const MarkType03: i32 = 4;
        pub const MarkType04: i32 = 8;
        pub const MarkType05: i32 = 16;
        pub const MarkType06: i32 = 32;
        pub const MarkType07: i32 = 64;
        pub const MarkType08: i32 = 128;
        pub const MarkType09: i32 = 256;
        pub const MarkType10: i32 = 512;
        pub const MarkType11: i32 = 1024;
        pub const MarkType12: i32 = 2048;
        pub const MarkType13: i32 = 4096;
        pub const MarkType14: i32 = 8192;
        pub const MarkType15: i32 = 16384;
        pub const MarkType16: i32 = 32768;
        pub const MarkType17: i32 = 65536;
        pub const MarkType18: i32 = 131072;
        pub const MarkType19: i32 = 262144;
        pub const MarkType20: i32 = 524288;
        pub const MarkType21: i32 = 1048576;
        pub const MarkType22: i32 = 2097152;
        pub const MarkType23: i32 = 4194304;
        pub const MarkType24: i32 = 8388608;
        pub const MarkType25: i32 = 16777216;
        pub const MarkType26: i32 = 33554432;
        pub const MarkType27: i32 = 67108864;
        pub const MarkType28: i32 = 134217728;
        pub const MarkType29: i32 = 268435456;
        pub const MarkType30: i32 = 536870912;
        pub const MarkType31: i32 = 1073741824;
        pub const MarkType32: i64 = 2147483648;
        pub const Bookmark: i32 = 1;
        pub const BreakpointActive: i32 = 2;
        pub const BreakpointReached: i32 = 4;
        pub const BreakpointDisabled: i32 = 8;
        pub const Execution: i32 = 16;
        pub const Warning: i32 = 32;
        pub const Error: i32 = 64;
        pub const SearchMatch: i64 = 2147483648;
    };

    pub const MarkChangeAction = enum {
        pub const MarkAdded: i32 = 0;
        pub const MarkRemoved: i32 = 1;
    };
};
