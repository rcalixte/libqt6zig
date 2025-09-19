const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qundocommand.html
pub const qundocommand = struct {
    /// New constructs a new QUndoCommand object.
    ///
    ///
    pub fn New() QtC.QUndoCommand {
        return qtc.QUndoCommand_new();
    }

    /// New2 constructs a new QUndoCommand object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) QtC.QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QUndoCommand_new2(text_str);
    }

    /// New3 constructs a new QUndoCommand object.
    ///
    /// ``` parent: QtC.QUndoCommand ```
    pub fn New3(parent: ?*anyopaque) QtC.QUndoCommand {
        return qtc.QUndoCommand_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QUndoCommand object.
    ///
    /// ``` text: []const u8, parent: QtC.QUndoCommand ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QUndoCommand_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QUndoCommand_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QUndoCommand, callback: *const fn () callconv(.c) void ```
    pub fn OnUndo(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnUndo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn QBaseUndo(self: ?*anyopaque) void {
        qtc.QUndoCommand_QBaseUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QUndoCommand_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QUndoCommand, callback: *const fn () callconv(.c) void ```
    pub fn OnRedo(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnRedo(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn QBaseRedo(self: ?*anyopaque) void {
        qtc.QUndoCommand_QBaseRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#text)
    ///
    /// ``` self: QtC.QUndoCommand, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoCommand_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#actionText)
    ///
    /// ``` self: QtC.QUndoCommand, allocator: std.mem.Allocator ```
    pub fn ActionText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoCommand_ActionText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.ActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setText)
    ///
    /// ``` self: QtC.QUndoCommand, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QUndoCommand_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn IsObsolete(self: ?*anyopaque) bool {
        return qtc.QUndoCommand_IsObsolete(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
    ///
    /// ``` self: QtC.QUndoCommand, obsolete: bool ```
    pub fn SetObsolete(self: ?*anyopaque, obsolete: bool) void {
        qtc.QUndoCommand_SetObsolete(@ptrCast(self), obsolete);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.QUndoCommand_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QUndoCommand, callback: *const fn () callconv(.c) i32 ```
    pub fn OnId(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoCommand_OnId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn QBaseId(self: ?*anyopaque) i32 {
        return qtc.QUndoCommand_QBaseId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// ``` self: QtC.QUndoCommand, other: QtC.QUndoCommand ```
    pub fn MergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QUndoCommand_MergeWith(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QUndoCommand, callback: *const fn (self: QtC.QUndoCommand, other: QtC.QUndoCommand) callconv(.c) bool ```
    pub fn OnMergeWith(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QUndoCommand_OnMergeWith(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QUndoCommand, other: QtC.QUndoCommand ```
    pub fn QBaseMergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QUndoCommand_QBaseMergeWith(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#childCount)
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QUndoCommand_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#child)
    ///
    /// ``` self: QtC.QUndoCommand, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QUndoCommand {
        return qtc.QUndoCommand_Child(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#dtor.QUndoCommand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUndoCommand ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoCommand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qundostack.html
pub const qundostack = struct {
    /// New constructs a new QUndoStack object.
    ///
    ///
    pub fn New() QtC.QUndoStack {
        return qtc.QUndoStack_new();
    }

    /// New2 constructs a new QUndoStack object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QUndoStack {
        return qtc.QUndoStack_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QUndoStack_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QUndoStack, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoStack_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QUndoStack_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoStack_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QUndoStack_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QUndoStack_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#clear)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QUndoStack_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#push)
    ///
    /// ``` self: QtC.QUndoStack, cmd: QtC.QUndoCommand ```
    pub fn Push(self: ?*anyopaque, cmd: ?*anyopaque) void {
        qtc.QUndoStack_Push(@ptrCast(self), @ptrCast(cmd));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndo)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn CanUndo(self: ?*anyopaque) bool {
        return qtc.QUndoStack_CanUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedo)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn CanRedo(self: ?*anyopaque) bool {
        return qtc.QUndoStack_CanRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoText)
    ///
    /// ``` self: QtC.QUndoStack, allocator: std.mem.Allocator ```
    pub fn UndoText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_UndoText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.UndoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoText)
    ///
    /// ``` self: QtC.QUndoStack, allocator: std.mem.Allocator ```
    pub fn RedoText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_RedoText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.RedoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#count)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#index)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Index(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#text)
    ///
    /// ``` self: QtC.QUndoStack, idx: i32, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, idx: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUndoStack_Text(@ptrCast(self), @intCast(idx));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ``` self: QtC.QUndoStack, parent: QtC.QObject ```
    pub fn CreateUndoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoStack_CreateUndoAction(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ``` self: QtC.QUndoStack, parent: QtC.QObject ```
    pub fn CreateRedoAction(self: ?*anyopaque, parent: ?*anyopaque) QtC.QAction {
        return qtc.QUndoStack_CreateRedoAction(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isActive)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return qtc.QUndoStack_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isClean)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn IsClean(self: ?*anyopaque) bool {
        return qtc.QUndoStack_IsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn CleanIndex(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_CleanIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
    ///
    /// ``` self: QtC.QUndoStack, text: []const u8 ```
    pub fn BeginMacro(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QUndoStack_BeginMacro(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#endMacro)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn EndMacro(self: ?*anyopaque) void {
        qtc.QUndoStack_EndMacro(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
    ///
    /// ``` self: QtC.QUndoStack, limit: i32 ```
    pub fn SetUndoLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QUndoStack_SetUndoLimit(@ptrCast(self), @intCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn UndoLimit(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_UndoLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#command)
    ///
    /// ``` self: QtC.QUndoStack, index: i32 ```
    pub fn Command(self: ?*anyopaque, index: i32) QtC.QUndoCommand {
        return qtc.QUndoStack_Command(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setClean)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn SetClean(self: ?*anyopaque) void {
        qtc.QUndoStack_SetClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#resetClean)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn ResetClean(self: ?*anyopaque) void {
        qtc.QUndoStack_ResetClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setIndex)
    ///
    /// ``` self: QtC.QUndoStack, idx: i32 ```
    pub fn SetIndex(self: ?*anyopaque, idx: i32) void {
        qtc.QUndoStack_SetIndex(@ptrCast(self), @intCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undo)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Undo(self: ?*anyopaque) void {
        qtc.QUndoStack_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redo)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Redo(self: ?*anyopaque) void {
        qtc.QUndoStack_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn SetActive(self: ?*anyopaque) void {
        qtc.QUndoStack_SetActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ``` self: QtC.QUndoStack, idx: i32 ```
    pub fn IndexChanged(self: ?*anyopaque, idx: i32) void {
        qtc.QUndoStack_IndexChanged(@ptrCast(self), @intCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, idx: i32) callconv(.c) void ```
    pub fn OnIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QUndoStack_Connect_IndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ``` self: QtC.QUndoStack, clean: bool ```
    pub fn CleanChanged(self: ?*anyopaque, clean: bool) void {
        qtc.QUndoStack_CleanChanged(@ptrCast(self), clean);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, clean: bool) callconv(.c) void ```
    pub fn OnCleanChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CleanChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ``` self: QtC.QUndoStack, canUndo: bool ```
    pub fn CanUndoChanged(self: ?*anyopaque, canUndo: bool) void {
        qtc.QUndoStack_CanUndoChanged(@ptrCast(self), canUndo);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, canUndo: bool) callconv(.c) void ```
    pub fn OnCanUndoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanUndoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ``` self: QtC.QUndoStack, canRedo: bool ```
    pub fn CanRedoChanged(self: ?*anyopaque, canRedo: bool) void {
        qtc.QUndoStack_CanRedoChanged(@ptrCast(self), canRedo);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, canRedo: bool) callconv(.c) void ```
    pub fn OnCanRedoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanRedoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ``` self: QtC.QUndoStack, undoText: []const u8 ```
    pub fn UndoTextChanged(self: ?*anyopaque, undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
            .len = undoText.len,
            .data = undoText.ptr,
        };
        qtc.QUndoStack_UndoTextChanged(@ptrCast(self), undoText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, undoText: [*:0]const u8) callconv(.c) void ```
    pub fn OnUndoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_UndoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ``` self: QtC.QUndoStack, redoText: []const u8 ```
    pub fn RedoTextChanged(self: ?*anyopaque, redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
            .len = redoText.len,
            .data = redoText.ptr,
        };
        qtc.QUndoStack_RedoTextChanged(@ptrCast(self), redoText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, redoText: [*:0]const u8) callconv(.c) void ```
    pub fn OnRedoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_RedoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QUndoStack_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QUndoStack_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ``` self: QtC.QUndoStack, parent: QtC.QObject, prefix: []const u8 ```
    pub fn CreateUndoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QUndoStack_CreateUndoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ``` self: QtC.QUndoStack, parent: QtC.QObject, prefix: []const u8 ```
    pub fn CreateRedoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) QtC.QAction {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QUndoStack_CreateRedoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ``` self: QtC.QUndoStack, active: bool ```
    pub fn SetActive1(self: ?*anyopaque, active: bool) void {
        qtc.QUndoStack_SetActive1(@ptrCast(self), active);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QUndoStack, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QUndoStack, name: []const u8 ```
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
    /// ``` self: QtC.QUndoStack ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QUndoStack, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QUndoStack, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QUndoStack, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QUndoStack, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QUndoStack, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QUndoStack, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qundostack.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QUndoStack, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QUndoStack, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QUndoStack, obj: QtC.QObject ```
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
    /// ``` self: QtC.QUndoStack, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QUndoStack ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QUndoStack, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QUndoStack, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QUndoStack, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qundostack.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qundostack.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QUndoStack, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QUndoStack, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QUndoStack, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QUndoStack, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QUndoStack, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QUndoStack_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QUndoStack_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QUndoStack_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QUndoStack_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QUndoStack_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QUndoStack_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoStack_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoStack_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QUndoStack_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoStack_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QUndoStack_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QUndoStack_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoStack_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QUndoStack_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QUndoStack_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QUndoStack_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QUndoStack_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QUndoStack_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QUndoStack_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QUndoStack_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoStack_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUndoStack_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QUndoStack_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QUndoStack_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QUndoStack_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QUndoStack, callback: *const fn (self: QtC.QUndoStack, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#dtor.QUndoStack)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUndoStack ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUndoStack_Delete(@ptrCast(self));
    }
};
