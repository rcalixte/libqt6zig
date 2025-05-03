const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qundocommand.html
pub const qundocommand = struct {
    /// New constructs a new QUndoCommand object.
    ///
    ///
    pub fn New() ?*C.QUndoCommand {
        return C.QUndoCommand_new();
    }

    /// New2 constructs a new QUndoCommand object.
    ///
    /// ``` text: []const u8 ```
    pub fn New2(text: []const u8) ?*C.QUndoCommand {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QUndoCommand_new2(text_str);
    }

    /// New3 constructs a new QUndoCommand object.
    ///
    /// ``` parent: ?*C.QUndoCommand ```
    pub fn New3(parent: ?*anyopaque) ?*C.QUndoCommand {
        return C.QUndoCommand_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QUndoCommand object.
    ///
    /// ``` text: []const u8, parent: ?*C.QUndoCommand ```
    pub fn New4(text: []const u8, parent: ?*anyopaque) ?*C.QUndoCommand {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return C.QUndoCommand_new4(text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn Undo(self: ?*anyopaque) void {
        C.QUndoCommand_Undo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUndoCommand, slot: fn () callconv(.c) void ```
    pub fn OnUndo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QUndoCommand_OnUndo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn QBaseUndo(self: ?*anyopaque) void {
        C.QUndoCommand_QBaseUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn Redo(self: ?*anyopaque) void {
        C.QUndoCommand_Redo(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUndoCommand, slot: fn () callconv(.c) void ```
    pub fn OnRedo(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QUndoCommand_OnRedo(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn QBaseRedo(self: ?*anyopaque) void {
        C.QUndoCommand_QBaseRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#text)
    ///
    /// ``` self: ?*C.QUndoCommand, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUndoCommand_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#actionText)
    ///
    /// ``` self: ?*C.QUndoCommand, allocator: std.mem.Allocator ```
    pub fn ActionText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUndoCommand_ActionText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setText)
    ///
    /// ``` self: ?*C.QUndoCommand, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QUndoCommand_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn IsObsolete(self: ?*anyopaque) bool {
        return C.QUndoCommand_IsObsolete(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
    ///
    /// ``` self: ?*C.QUndoCommand, obsolete: bool ```
    pub fn SetObsolete(self: ?*anyopaque, obsolete: bool) void {
        C.QUndoCommand_SetObsolete(@ptrCast(self), obsolete);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn Id(self: ?*anyopaque) i32 {
        return C.QUndoCommand_Id(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUndoCommand, slot: fn () callconv(.c) i32 ```
    pub fn OnId(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QUndoCommand_OnId(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn QBaseId(self: ?*anyopaque) i32 {
        return C.QUndoCommand_QBaseId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// ``` self: ?*C.QUndoCommand, other: ?*C.QUndoCommand ```
    pub fn MergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QUndoCommand_MergeWith(@ptrCast(self), @ptrCast(other));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUndoCommand, slot: fn (?*C.QUndoCommand, ?*C.QUndoCommand) callconv(.c) bool ```
    pub fn OnMergeWith(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUndoCommand_OnMergeWith(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUndoCommand, other: ?*C.QUndoCommand ```
    pub fn QBaseMergeWith(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QUndoCommand_QBaseMergeWith(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#childCount)
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return C.QUndoCommand_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#child)
    ///
    /// ``` self: ?*C.QUndoCommand, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) ?*C.QUndoCommand {
        return C.QUndoCommand_Child(@ptrCast(self), @intCast(index));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QUndoCommand ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QUndoCommand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qundostack.html
pub const qundostack = struct {
    /// New constructs a new QUndoStack object.
    ///
    ///
    pub fn New() ?*C.QUndoStack {
        return C.QUndoStack_new();
    }

    /// New2 constructs a new QUndoStack object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QUndoStack {
        return C.QUndoStack_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QUndoStack_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QUndoStack, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QUndoStack_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QUndoStack_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QUndoStack_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QUndoStack_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QUndoStack_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#clear)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QUndoStack_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#push)
    ///
    /// ``` self: ?*C.QUndoStack, cmd: ?*C.QUndoCommand ```
    pub fn Push(self: ?*anyopaque, cmd: ?*anyopaque) void {
        C.QUndoStack_Push(@ptrCast(self), @ptrCast(cmd));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndo)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn CanUndo(self: ?*anyopaque) bool {
        return C.QUndoStack_CanUndo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedo)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn CanRedo(self: ?*anyopaque) bool {
        return C.QUndoStack_CanRedo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoText)
    ///
    /// ``` self: ?*C.QUndoStack, allocator: std.mem.Allocator ```
    pub fn UndoText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUndoStack_UndoText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoText)
    ///
    /// ``` self: ?*C.QUndoStack, allocator: std.mem.Allocator ```
    pub fn RedoText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUndoStack_RedoText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#count)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QUndoStack_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#index)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Index(self: ?*anyopaque) i32 {
        return C.QUndoStack_Index(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#text)
    ///
    /// ``` self: ?*C.QUndoStack, idx: i32, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, idx: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUndoStack_Text(@ptrCast(self), @intCast(idx));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ``` self: ?*C.QUndoStack, parent: ?*C.QObject ```
    pub fn CreateUndoAction(self: ?*anyopaque, parent: ?*anyopaque) ?*C.QAction {
        return C.QUndoStack_CreateUndoAction(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ``` self: ?*C.QUndoStack, parent: ?*C.QObject ```
    pub fn CreateRedoAction(self: ?*anyopaque, parent: ?*anyopaque) ?*C.QAction {
        return C.QUndoStack_CreateRedoAction(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isActive)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn IsActive(self: ?*anyopaque) bool {
        return C.QUndoStack_IsActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isClean)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn IsClean(self: ?*anyopaque) bool {
        return C.QUndoStack_IsClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn CleanIndex(self: ?*anyopaque) i32 {
        return C.QUndoStack_CleanIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
    ///
    /// ``` self: ?*C.QUndoStack, text: []const u8 ```
    pub fn BeginMacro(self: ?*anyopaque, text: []const u8) void {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        C.QUndoStack_BeginMacro(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#endMacro)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn EndMacro(self: ?*anyopaque) void {
        C.QUndoStack_EndMacro(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
    ///
    /// ``` self: ?*C.QUndoStack, limit: i32 ```
    pub fn SetUndoLimit(self: ?*anyopaque, limit: i32) void {
        C.QUndoStack_SetUndoLimit(@ptrCast(self), @intCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn UndoLimit(self: ?*anyopaque) i32 {
        return C.QUndoStack_UndoLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#command)
    ///
    /// ``` self: ?*C.QUndoStack, index: i32 ```
    pub fn Command(self: ?*anyopaque, index: i32) ?*C.QUndoCommand {
        return C.QUndoStack_Command(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setClean)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn SetClean(self: ?*anyopaque) void {
        C.QUndoStack_SetClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#resetClean)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn ResetClean(self: ?*anyopaque) void {
        C.QUndoStack_ResetClean(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setIndex)
    ///
    /// ``` self: ?*C.QUndoStack, idx: i32 ```
    pub fn SetIndex(self: ?*anyopaque, idx: i32) void {
        C.QUndoStack_SetIndex(@ptrCast(self), @intCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undo)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Undo(self: ?*anyopaque) void {
        C.QUndoStack_Undo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redo)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Redo(self: ?*anyopaque) void {
        C.QUndoStack_Redo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn SetActive(self: ?*anyopaque) void {
        C.QUndoStack_SetActive(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ``` self: ?*C.QUndoStack, idx: i32 ```
    pub fn IndexChanged(self: ?*anyopaque, idx: i32) void {
        C.QUndoStack_IndexChanged(@ptrCast(self), @intCast(idx));
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, i32) callconv(.c) void ```
    pub fn OnIndexChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QUndoStack_Connect_IndexChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ``` self: ?*C.QUndoStack, clean: bool ```
    pub fn CleanChanged(self: ?*anyopaque, clean: bool) void {
        C.QUndoStack_CleanChanged(@ptrCast(self), clean);
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, bool) callconv(.c) void ```
    pub fn OnCleanChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QUndoStack_Connect_CleanChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ``` self: ?*C.QUndoStack, canUndo: bool ```
    pub fn CanUndoChanged(self: ?*anyopaque, canUndo: bool) void {
        C.QUndoStack_CanUndoChanged(@ptrCast(self), canUndo);
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, bool) callconv(.c) void ```
    pub fn OnCanUndoChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QUndoStack_Connect_CanUndoChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ``` self: ?*C.QUndoStack, canRedo: bool ```
    pub fn CanRedoChanged(self: ?*anyopaque, canRedo: bool) void {
        C.QUndoStack_CanRedoChanged(@ptrCast(self), canRedo);
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, bool) callconv(.c) void ```
    pub fn OnCanRedoChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QUndoStack_Connect_CanRedoChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ``` self: ?*C.QUndoStack, undoText: []const u8 ```
    pub fn UndoTextChanged(self: ?*anyopaque, undoText: []const u8) void {
        const undoText_str = C.struct_libqt_string{
            .len = undoText.len,
            .data = @constCast(undoText.ptr),
        };
        C.QUndoStack_UndoTextChanged(@ptrCast(self), undoText_str);
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, []const u8) callconv(.c) void ```
    pub fn OnUndoTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QUndoStack_Connect_UndoTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ``` self: ?*C.QUndoStack, redoText: []const u8 ```
    pub fn RedoTextChanged(self: ?*anyopaque, redoText: []const u8) void {
        const redoText_str = C.struct_libqt_string{
            .len = redoText.len,
            .data = @constCast(redoText.ptr),
        };
        C.QUndoStack_RedoTextChanged(@ptrCast(self), redoText_str);
    }

    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, []const u8) callconv(.c) void ```
    pub fn OnRedoTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QUndoStack_Connect_RedoTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QUndoStack_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QUndoStack_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ``` self: ?*C.QUndoStack, parent: ?*C.QObject, prefix: []const u8 ```
    pub fn CreateUndoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) ?*C.QAction {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QUndoStack_CreateUndoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ``` self: ?*C.QUndoStack, parent: ?*C.QObject, prefix: []const u8 ```
    pub fn CreateRedoAction2(self: ?*anyopaque, parent: ?*anyopaque, prefix: []const u8) ?*C.QAction {
        const prefix_str = C.struct_libqt_string{
            .len = prefix.len,
            .data = @constCast(prefix.ptr),
        };
        return C.QUndoStack_CreateRedoAction2(@ptrCast(self), @ptrCast(parent), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ``` self: ?*C.QUndoStack, active: bool ```
    pub fn SetActive1(self: ?*anyopaque, active: bool) void {
        C.QUndoStack_SetActive1(@ptrCast(self), active);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QUndoStack, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QUndoStack, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QUndoStack, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QUndoStack, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QUndoStack, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QUndoStack, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QUndoStack, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QUndoStack, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QUndoStack, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QUndoStack, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QUndoStack, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QUndoStack, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QUndoStack, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QUndoStack, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QUndoStack, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QUndoStack, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QUndoStack, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QUndoStack, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUndoStack_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUndoStack_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUndoStack_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUndoStack_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUndoStack_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUndoStack_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUndoStack_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUndoStack_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUndoStack_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUndoStack_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUndoStack_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUndoStack_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUndoStack_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUndoStack_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUndoStack_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUndoStack_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QUndoStack_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QUndoStack_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QUndoStack_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QUndoStack_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QUndoStack_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QUndoStack_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QUndoStack_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QUndoStack_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QUndoStack_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QUndoStack_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QUndoStack_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUndoStack, slot: fn (?*C.QUndoStack, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUndoStack_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QUndoStack ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QUndoStack_Delete(@ptrCast(self));
    }
};
