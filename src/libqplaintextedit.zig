const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qplaintextedit_enums = enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qtextcursor_enums = @import("libqtextcursor.zig").enums;
const qtextoption_enums = @import("libqtextoption.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qplaintextedit.html
pub const qplaintextedit = struct {
    /// New constructs a new QPlainTextEdit object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QPlainTextEdit {
        return qtc.QPlainTextEdit_new(@ptrCast(parent));
    }

    /// New2 constructs a new QPlainTextEdit object.
    ///
    ///
    pub fn New2() QtC.QPlainTextEdit {
        return qtc.QPlainTextEdit_new2();
    }

    /// New3 constructs a new QPlainTextEdit object.
    ///
    /// ``` text: []const u8 ```
    pub fn New3(text: []const u8) QtC.QPlainTextEdit {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QPlainTextEdit_new3(text_str);
    }

    /// New4 constructs a new QPlainTextEdit object.
    ///
    /// ``` text: []const u8, parent: QtC.QWidget ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QPlainTextEdit {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QPlainTextEdit_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPlainTextEdit_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPlainTextEdit, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextEdit_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPlainTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPlainTextEdit_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
    ///
    /// ``` self: QtC.QPlainTextEdit, document: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#document)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QPlainTextEdit_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
    ///
    /// ``` self: QtC.QPlainTextEdit, placeholderText: []const u8 ```
    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.struct_libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit, cursor: QtC.QTextCursor ```
    pub fn SetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TextCursor(self: ?*anyopaque) QtC.QTextCursor {
        return qtc.QPlainTextEdit_TextCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
    ///
    /// ``` self: QtC.QPlainTextEdit, ro: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, ro: bool) void {
        qtc.QPlainTextEdit_SetReadOnly(@ptrCast(self), ro);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
    ///
    /// ``` self: QtC.QPlainTextEdit, flags: i32 ```
    pub fn SetTextInteractionFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TextInteractionFlags(self: ?*anyopaque) i64 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
    ///
    /// ``` self: QtC.QPlainTextEdit, modifier: QtC.QTextCharFormat ```
    pub fn MergeCurrentCharFormat(self: ?*anyopaque, modifier: ?*anyopaque) void {
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self), @ptrCast(modifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
    ///
    /// ``` self: QtC.QPlainTextEdit, format: QtC.QTextCharFormat ```
    pub fn SetCurrentCharFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CurrentCharFormat(self: ?*anyopaque) QtC.QTextCharFormat {
        return qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TabChangesFocus(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit, b: bool ```
    pub fn SetTabChangesFocus(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
    ///
    /// ``` self: QtC.QPlainTextEdit, title: []const u8 ```
    pub fn SetDocumentTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn DocumentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsUndoRedoEnabled(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, enable: bool ```
    pub fn SetUndoRedoEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
    ///
    /// ``` self: QtC.QPlainTextEdit, maximum: i32 ```
    pub fn SetMaximumBlockCount(self: ?*anyopaque, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MaximumBlockCount(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn LineWrapMode(self: ?*anyopaque) i64 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
    ///
    /// ``` self: QtC.QPlainTextEdit, mode: qplaintextedit_enums.LineWrapMode ```
    pub fn SetLineWrapMode(self: ?*anyopaque, mode: i64) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WordWrapMode(self: ?*anyopaque) i64 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
    ///
    /// ``` self: QtC.QPlainTextEdit, policy: qtextoption_enums.WrapMode ```
    pub fn SetWordWrapMode(self: ?*anyopaque, policy: i64) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
    ///
    /// ``` self: QtC.QPlainTextEdit, visible: bool ```
    pub fn SetBackgroundVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BackgroundVisible(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
    ///
    /// ``` self: QtC.QPlainTextEdit, enabled: bool ```
    pub fn SetCenterOnScroll(self: ?*anyopaque, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CenterOnScroll(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ``` self: QtC.QPlainTextEdit, exp: []const u8 ```
    pub fn Find(self: ?*anyopaque, exp: []const u8) bool {
        const exp_str = qtc.struct_libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find(@ptrCast(self), exp_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ``` self: QtC.QPlainTextEdit, exp: QtC.QRegularExpression ```
    pub fn FindWithExp(self: ?*anyopaque, exp: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_FindWithExp(@ptrCast(self), @ptrCast(exp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn ToPlainText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn EnsureCursorVisible(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn LoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QPlainTextEdit_LoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, typeVal: i32, name: QtC.QUrl) callconv(.c) QtC.QVariant ```
    pub fn OnLoadResource(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QPlainTextEdit_OnLoadResource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: i32, name: QtC.QUrl ```
    pub fn QBaseLoadResource(self: ?*anyopaque, typeVal: i32, name: ?*anyopaque) QtC.QVariant {
        return qtc.QPlainTextEdit_QBaseLoadResource(@ptrCast(self), @intCast(typeVal), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CreateStandardContextMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ``` self: QtC.QPlainTextEdit, position: QtC.QPoint ```
    pub fn CreateStandardContextMenuWithPosition(self: ?*anyopaque, position: ?*anyopaque) QtC.QMenu {
        return qtc.QPlainTextEdit_CreateStandardContextMenuWithPosition(@ptrCast(self), @ptrCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
    ///
    /// ``` self: QtC.QPlainTextEdit, pos: QtC.QPoint ```
    pub fn CursorForPosition(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextCursor {
        return qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ``` self: QtC.QPlainTextEdit, cursor: QtC.QTextCursor ```
    pub fn CursorRect(self: ?*anyopaque, cursor: ?*anyopaque) QtC.QRect {
        return qtc.QPlainTextEdit_CursorRect(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CursorRect2(self: ?*anyopaque) QtC.QRect {
        return qtc.QPlainTextEdit_CursorRect2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
    ///
    /// ``` self: QtC.QPlainTextEdit, pos: QtC.QPoint, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn OverwriteMode(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
    ///
    /// ``` self: QtC.QPlainTextEdit, overwrite: bool ```
    pub fn SetOverwriteMode(self: ?*anyopaque, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self), overwrite);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TabStopDistance(self: ?*anyopaque) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
    ///
    /// ``` self: QtC.QPlainTextEdit, distance: f64 ```
    pub fn SetTabStopDistance(self: ?*anyopaque, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self), @floatCast(distance));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CursorWidth(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, width: i32 ```
    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
    ///
    /// ``` self: QtC.QPlainTextEdit, selections: []QtC.QTextEdit__ExtraSelection ```
    pub fn SetExtraSelections(self: ?*anyopaque, selections: []QtC.QTextEdit__ExtraSelection) void {
        const selections_list = qtc.struct_libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self), selections_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn ExtraSelections(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTextEdit__ExtraSelection {
        const _arr: qtc.struct_libqt_list = qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTextEdit__ExtraSelection, _arr.len) catch @panic("qplaintextedit.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit, operation: qtextcursor_enums.MoveOperation ```
    pub fn MoveCursor(self: ?*anyopaque, operation: i64) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self), @intCast(operation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CanPaste(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#print)
    ///
    /// ``` self: QtC.QPlainTextEdit, printer: QtC.QPagedPaintDevice ```
    pub fn Print(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QPlainTextEdit_Print(@ptrCast(self), @ptrCast(printer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BlockCount(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ``` self: QtC.QPlainTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QPlainTextEdit_InputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QPlainTextEdit_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, property: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, property: i64) QtC.QVariant {
        return qtc.QPlainTextEdit_QBaseInputMethodQuery(@ptrCast(self), @intCast(property));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ``` self: QtC.QPlainTextEdit, query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: QtC.QVariant) QtC.QVariant {
        return qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
    ///
    /// ``` self: QtC.QPlainTextEdit, text: []const u8 ```
    pub fn SetPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_SetPlainText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Cut(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Copy(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Paste(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SelectAll(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
    ///
    /// ``` self: QtC.QPlainTextEdit, text: []const u8 ```
    pub fn InsertPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
    ///
    /// ``` self: QtC.QPlainTextEdit, text: []const u8 ```
    pub fn AppendPlainText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
    ///
    /// ``` self: QtC.QPlainTextEdit, html: []const u8 ```
    pub fn AppendHtml(self: ?*anyopaque, html: []const u8) void {
        const html_str = qtc.struct_libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QPlainTextEdit_AppendHtml(@ptrCast(self), html_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CenterCursor(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ZoomIn(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ZoomOut(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, b: bool ```
    pub fn UndoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, b: bool) callconv(.c) void ```
    pub fn OnUndoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, b: bool ```
    pub fn RedoAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, b: bool) callconv(.c) void ```
    pub fn OnRedoAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, b: bool ```
    pub fn CopyAvailable(self: ?*anyopaque, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, b: bool) callconv(.c) void ```
    pub fn OnCopyAvailable(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CursorPositionChanged(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit) callconv(.c) void ```
    pub fn OnCursorPositionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ``` self: QtC.QPlainTextEdit, rect: QtC.QRect, dy: i32 ```
    pub fn UpdateRequest(self: ?*anyopaque, rect: ?*anyopaque, dy: i32) void {
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self), @ptrCast(rect), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, rect: QtC.QRect, dy: i32) callconv(.c) void ```
    pub fn OnUpdateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, newBlockCount: i32 ```
    pub fn BlockCountChanged(self: ?*anyopaque, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self), @intCast(newBlockCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, newBlockCount: i32) callconv(.c) void ```
    pub fn OnBlockCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: bool ```
    pub fn ModificationChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: bool) callconv(.c) void ```
    pub fn OnModificationChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_TimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseTimerEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// ``` self: QtC.QPlainTextEdit, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPlainTextEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QPlainTextEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, e: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, e: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QPlainTextEdit_CreateMimeDataFromSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QMimeData ```
    pub fn OnCreateMimeDataFromSelection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMimeData) void {
        qtc.QPlainTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseCreateMimeDataFromSelection(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QPlainTextEdit_QBaseCreateMimeDataFromSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// ``` self: QtC.QPlainTextEdit, source: QtC.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, source: QtC.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, source: QtC.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// ``` self: QtC.QPlainTextEdit, source: QtC.QMimeData ```
    pub fn InsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QPlainTextEdit_InsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, source: QtC.QMimeData) callconv(.c) void ```
    pub fn OnInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, source: QtC.QMimeData ```
    pub fn QBaseInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// ``` self: QtC.QPlainTextEdit, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit, cursor: QtC.QTextCursor ```
    pub fn DoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_DoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, cursor: QtC.QTextCursor) callconv(.c) void ```
    pub fn OnDoSetTextCursor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDoSetTextCursor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, cursor: QtC.QTextCursor ```
    pub fn QBaseDoSetTextCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDoSetTextCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FirstVisibleBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QPlainTextEdit_FirstVisibleBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QTextBlock ```
    pub fn OnFirstVisibleBlock(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTextBlock) void {
        qtc.QPlainTextEdit_OnFirstVisibleBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseFirstVisibleBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.QPlainTextEdit_QBaseFirstVisibleBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ContentOffset(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPlainTextEdit_ContentOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QPointF ```
    pub fn OnContentOffset(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPointF) void {
        qtc.QPlainTextEdit_OnContentOffset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseContentOffset(self: ?*anyopaque) QtC.QPointF {
        return qtc.QPlainTextEdit_QBaseContentOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// ``` self: QtC.QPlainTextEdit, block: QtC.QTextBlock ```
    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, block: QtC.QTextBlock) callconv(.c) QtC.QRectF ```
    pub fn OnBlockBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, block: QtC.QTextBlock ```
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit, block: QtC.QTextBlock ```
    pub fn BlockBoundingGeometry(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_BlockBoundingGeometry(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, block: QtC.QTextBlock) callconv(.c) QtC.QRectF ```
    pub fn OnBlockBoundingGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, block: QtC.QTextBlock ```
    pub fn QBaseBlockBoundingGeometry(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextEdit_QBaseBlockBoundingGeometry(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn GetPaintContext(self: ?*anyopaque) QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QPlainTextEdit_GetPaintContext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn OnGetPaintContext(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QPlainTextEdit_OnGetPaintContext(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseGetPaintContext(self: ?*anyopaque) QtC.QAbstractTextDocumentLayout__PaintContext {
        return qtc.QPlainTextEdit_QBaseGetPaintContext(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// ``` self: QtC.QPlainTextEdit, range: f32 ```
    pub fn ZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QPlainTextEdit_ZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, range: f32) callconv(.c) void ```
    pub fn OnZoomInF(self: ?*anyopaque, slot: fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnZoomInF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextEdit, range: f32 ```
    pub fn QBaseZoomInF(self: ?*anyopaque, range: f32) void {
        qtc.QPlainTextEdit_QBaseZoomInF(@ptrCast(self), @floatCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPlainTextEdit_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPlainTextEdit_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ``` self: QtC.QPlainTextEdit, exp: []const u8, options: i32 ```
    pub fn Find2(self: ?*anyopaque, exp: []const u8, options: i64) bool {
        const exp_str = qtc.struct_libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find2(@ptrCast(self), exp_str, @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ``` self: QtC.QPlainTextEdit, exp: QtC.QRegularExpression, options: i32 ```
    pub fn Find22(self: ?*anyopaque, exp: ?*anyopaque, options: i64) bool {
        return qtc.QPlainTextEdit_Find22(@ptrCast(self), @ptrCast(exp), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit, operation: qtextcursor_enums.MoveOperation, mode: qtextcursor_enums.MoveMode ```
    pub fn MoveCursor2(self: ?*anyopaque, operation: i64, mode: i64) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self), @intCast(operation), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ``` self: QtC.QPlainTextEdit, range: i32 ```
    pub fn ZoomIn1(self: ?*anyopaque, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ``` self: QtC.QPlainTextEdit, range: i32 ```
    pub fn ZoomOut1(self: ?*anyopaque, range: i32) void {
        qtc.QPlainTextEdit_ZoomOut1(@ptrCast(self), @intCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QPlainTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QPlainTextEdit, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit, widget: QtC.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QPlainTextEdit, alignment: i32, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i64, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qplaintextedit.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QPlainTextEdit, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QPlainTextEdit, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QPlainTextEdit, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QPlainTextEdit, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QPlainTextEdit, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QPlainTextEdit, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QPlainTextEdit, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QPlainTextEdit, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QPlainTextEdit, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QPlainTextEdit, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QPlainTextEdit, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QPlainTextEdit, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QPlainTextEdit, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QPlainTextEdit, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QPlainTextEdit, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPoint ```
    pub fn MapToGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPoint ```
    pub fn MapFromGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPoint ```
    pub fn MapToParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPoint ```
    pub fn MapFromParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QPlainTextEdit, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QPlainTextEdit, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QPlainTextEdit, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QPlainTextEdit, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QPlainTextEdit, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QPlainTextEdit, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QPlainTextEdit, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QPlainTextEdit, mask: QtC.QRegion ```
    pub fn SetMaskWithMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMaskWithMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter ```
    pub fn RenderWithPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_RenderWithPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QPlainTextEdit, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QPlainTextEdit, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.struct_libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QPlainTextEdit, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.struct_libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QPlainTextEdit, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QPlainTextEdit, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.struct_libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QPlainTextEdit, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.struct_libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QPlainTextEdit, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.struct_libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QPlainTextEdit, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QPlainTextEdit, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.struct_libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QPlainTextEdit, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QPlainTextEdit, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.struct_libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QPlainTextEdit, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.struct_libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QPlainTextEdit, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QPlainTextEdit, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QPlainTextEdit, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QPlainTextEdit, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocusWithReason(self: ?*anyopaque, reason: i64) void {
        qtc.QWidget_SetFocusWithReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QPlainTextEdit, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QCursor ```
    pub fn GrabMouseWithQCursor(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouseWithQCursor(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QPlainTextEdit, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QPlainTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QRect ```
    pub fn UpdateWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_UpdateWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QRegion ```
    pub fn UpdateWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_UpdateWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QPlainTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QRect ```
    pub fn RepaintWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_RepaintWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QRegion ```
    pub fn RepaintWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_RepaintWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QPlainTextEdit, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QPlainTextEdit, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPoint ```
    pub fn MoveWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_MoveWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QPlainTextEdit, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QSize ```
    pub fn ResizeWithQSize(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_ResizeWithQSize(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit, geometry: QtC.QRect ```
    pub fn SetGeometryWithGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometryWithGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qplaintextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.struct_libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QPlainTextEdit, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QPlainTextEdit, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QPlainTextEdit, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QPlainTextEdit, margins: QtC.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QPlainTextEdit, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QPlainTextEdit, parent: QtC.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QPlainTextEdit, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QPlainTextEdit, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QPlainTextEdit, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QPlainTextEdit, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QPlainTextEdit, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.struct_libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qplaintextedit.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, text: []const u8 ```
    pub fn AddActionWithText(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddActionWithText(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction3(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QPlainTextEdit, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QPlainTextEdit, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QPlainTextEdit, p: QtC.QPoint ```
    pub fn ChildAtWithQPoint(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAtWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QPlainTextEdit, p: QtC.QPointF ```
    pub fn ChildAtWithQPointF(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAtWithQPointF(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QPlainTextEdit, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QPlainTextEdit, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QPlainTextEdit, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, title: []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QPlainTextEdit, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.struct_libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, iconText: []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QPlainTextEdit, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QWidget, slot: fn (self: QtC.QWidget, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QPlainTextEdit, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render2(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QPlainTextEdit, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QPlainTextEdit, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QPlainTextEdit, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPlainTextEdit, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPlainTextEdit, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPlainTextEdit, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPlainTextEdit, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPlainTextEdit, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qplaintextedit.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPlainTextEdit, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPlainTextEdit, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPlainTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPlainTextEdit, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPlainTextEdit, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPlainTextEdit, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplaintextedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplaintextedit.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPlainTextEdit, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPlainTextEdit, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPlainTextEdit, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QPlainTextEdit, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QPlainTextEdit_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QPlainTextEdit_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QPlainTextEdit_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QPlainTextEdit_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QPlainTextEdit_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPlainTextEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPlainTextEdit_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPlainTextEdit_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPlainTextEdit_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPlainTextEdit_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPlainTextEdit_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QPlainTextEdit_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QPlainTextEdit_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPlainTextEdit_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QPlainTextEdit_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPlainTextEdit_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPlainTextEdit_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QPlainTextEdit_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QPlainTextEdit_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPlainTextEdit_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QPlainTextEdit_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QPlainTextEdit_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextEdit_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextEdit_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QPlainTextEdit_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QPlainTextEdit_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.QPlainTextEdit_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlainTextEdit_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlainTextEdit_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QPlainTextEdit_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlainTextEdit_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlainTextEdit_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPlainTextEdit_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QPlainTextEdit_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QPlainTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QPlainTextEdit_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPlainTextEdit, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dtor.QPlainTextEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPlainTextEdit ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlainTextEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qplaintextdocumentlayout.html
pub const qplaintextdocumentlayout = struct {
    /// New constructs a new QPlainTextDocumentLayout object.
    ///
    /// ``` document: QtC.QTextDocument ```
    pub fn New(document: ?*anyopaque) QtC.QPlainTextDocumentLayout {
        return qtc.QPlainTextDocumentLayout_new(@ptrCast(document));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPlainTextDocumentLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPlainTextDocumentLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextDocumentLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPlainTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPlainTextDocumentLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QPainter, param2: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn Draw(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_Draw(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, param1: QtC.QPainter, param2: QtC.QAbstractTextDocumentLayout__PaintContext) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QPainter, param2: QtC.QAbstractTextDocumentLayout__PaintContext ```
    pub fn QBaseDraw(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseDraw(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QPointF, param2: qnamespace_enums.HitTestAccuracy ```
    pub fn HitTest(self: ?*anyopaque, param1: ?*anyopaque, param2: i64) i32 {
        return qtc.QPlainTextDocumentLayout_HitTest(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, param1: QtC.QPointF, param2: qnamespace_enums.HitTestAccuracy) callconv(.c) i32 ```
    pub fn OnHitTest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnHitTest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QPointF, param2: qnamespace_enums.HitTestAccuracy ```
    pub fn QBaseHitTest(self: ?*anyopaque, param1: ?*anyopaque, param2: i64) i32 {
        return qtc.QPlainTextDocumentLayout_QBaseHitTest(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn PageCount(self: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_PageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnPageCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnPageCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn QBasePageCount(self: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_QBasePageCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn DocumentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPlainTextDocumentLayout_DocumentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn () callconv(.c) QtC.QSizeF ```
    pub fn OnDocumentSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSizeF) void {
        qtc.QPlainTextDocumentLayout_OnDocumentSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn QBaseDocumentSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPlainTextDocumentLayout_QBaseDocumentSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QTextFrame ```
    pub fn FrameBoundingRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_FrameBoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, param1: QtC.QTextFrame) callconv(.c) QtC.QRectF ```
    pub fn OnFrameBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QTextFrame ```
    pub fn QBaseFrameBoundingRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_QBaseFrameBoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn BlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_BlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, block: QtC.QTextBlock) callconv(.c) QtC.QRectF ```
    pub fn OnBlockBoundingRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QPlainTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn QBaseBlockBoundingRect(self: ?*anyopaque, block: ?*anyopaque) QtC.QRectF {
        return qtc.QPlainTextDocumentLayout_QBaseBlockBoundingRect(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn EnsureBlockLayout(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_EnsureBlockLayout(@ptrCast(self), @ptrCast(block));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, width: i32 ```
    pub fn SetCursorWidth(self: ?*anyopaque, width: i32) void {
        qtc.QPlainTextDocumentLayout_SetCursorWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn CursorWidth(self: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_CursorWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn RequestUpdate(self: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_RequestUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32 ```
    pub fn DocumentChanged(self: ?*anyopaque, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_DocumentChanged(@ptrCast(self), @intCast(from), @intCast(param2), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) callconv(.c) void ```
    pub fn OnDocumentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDocumentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32 ```
    pub fn QBaseDocumentChanged(self: ?*anyopaque, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_QBaseDocumentChanged(@ptrCast(self), @intCast(from), @intCast(param2), @intCast(charsAdded));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPlainTextDocumentLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPlainTextDocumentLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: QtC.QPointF, allocator: std.mem.Allocator ```
    pub fn AnchorAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: QtC.QPointF, allocator: std.mem.Allocator ```
    pub fn ImageAt(self: ?*anyopaque, pos: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self), @ptrCast(pos));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.ImageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: QtC.QPointF ```
    pub fn FormatAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextFormat {
        return qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: QtC.QPointF ```
    pub fn BlockWithMarkerAt(self: ?*anyopaque, pos: ?*anyopaque) QtC.QTextBlock {
        return qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, device: QtC.QPaintDevice ```
    pub fn SetPaintDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self), @ptrCast(device));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn PaintDevice(self: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, objectType: i32, component: QtC.QObject ```
    pub fn RegisterHandler(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, objectType: i32 ```
    pub fn UnregisterHandler(self: ?*anyopaque, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self), @intCast(objectType));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, objectType: i32 ```
    pub fn HandlerForObject(self: ?*anyopaque, objectType: i32) QtC.QTextObjectInterface {
        return qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self), @intCast(objectType));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout) callconv(.c) void ```
    pub fn OnUpdate(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, block: QtC.QTextBlock ```
    pub fn UpdateBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self), @ptrCast(block));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, block: QtC.QTextBlock) callconv(.c) void ```
    pub fn OnUpdateBlock(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, newSize: QtC.QSizeF ```
    pub fn DocumentSizeChanged(self: ?*anyopaque, newSize: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self), @ptrCast(newSize));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, newSize: QtC.QSizeF) callconv(.c) void ```
    pub fn OnDocumentSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, newPages: i32 ```
    pub fn PageCountChanged(self: ?*anyopaque, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self), @intCast(newPages));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, newPages: i32) callconv(.c) void ```
    pub fn OnPageCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, objectType: i32, component: QtC.QObject ```
    pub fn UnregisterHandler2(self: ?*anyopaque, objectType: i32, component: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self), @intCast(objectType), @ptrCast(component));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QRectF ```
    pub fn Update1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ``` self: QtC.QAbstractTextDocumentLayout, slot: fn (self: QtC.QAbstractTextDocumentLayout, param1: QtC.QRectF) callconv(.c) void ```
    pub fn OnUpdate1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qplaintextdocumentlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPlainTextDocumentLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplaintextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplaintextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn ResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_ResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBaseResizeInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseResizeInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnResizeInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnResizeInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn PositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_PositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBasePositionInlineObject(self: ?*anyopaque, item: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBasePositionInlineObject(@ptrCast(self), @ptrCast(item), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, item: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnPositionInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnPositionInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn DrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_DrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat ```
    pub fn QBaseDrawInlineObject(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, object: QtC.QTextInlineObject, posInDocument: i32, format: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseDrawInlineObject(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(object), @intCast(posInDocument), @ptrCast(format));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, painter: QtC.QPainter, rect: QtC.QRectF, object: QtC.QTextInlineObject, posInDocument: i32, format: QtC.QTextFormat) callconv(.c) void ```
    pub fn OnDrawInlineObject(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, QtC.QTextInlineObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDrawInlineObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: i32 ```
    pub fn FormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_FormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormatIndex(self: ?*anyopaque, pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_QBaseFormatIndex(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, pos: i32) callconv(.c) i32 ```
    pub fn OnFormatIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnFormatIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QPlainTextDocumentLayout_Format(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.QPlainTextDocumentLayout_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, pos: i32) callconv(.c) QtC.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.QPlainTextDocumentLayout_OnFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlainTextDocumentLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPlainTextDocumentLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QPlainTextDocumentLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPlainTextDocumentLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QPlainTextDocumentLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#dtor.QPlainTextDocumentLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPlainTextDocumentLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qplaintextedit.html#types
pub const enums = struct {
    pub const LineWrapMode = enum {
        pub const NoWrap: i32 = 0;
        pub const WidgetWidth: i32 = 1;
    };
};
