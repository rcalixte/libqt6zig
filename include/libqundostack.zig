const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html)
pub const QUndoCommand = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUndoCommand,

    pub const _is_QUndoCommand = {};

    /// New constructs a new QUndoCommand object.
    ///
    pub fn New() QUndoCommand {
        return .{ .ptr = qtc.QUndoCommand_new() };
    }

    /// New2 constructs a new QUndoCommand object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(text: []const u8) QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QUndoCommand_new2(text_str) };
    }

    /// New3 constructs a new QUndoCommand object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QUndoCommand `
    ///
    pub fn New3(parent: anytype) QUndoCommand {
        comptime _ = @TypeOf(parent)._is_QUndoCommand;
        return .{ .ptr = qtc.QUndoCommand_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QUndoCommand object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QUndoCommand `
    ///
    pub fn New4(text: []const u8, parent: anytype) QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QUndoCommand;
        return .{ .ptr = qtc.QUndoCommand_new4(text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn Undo(self: QUndoCommand) void {
        qtc.QUndoCommand_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUndo(self: QUndoCommand, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnUndo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUndo` instead
    ///
    pub const QBaseUndo = SuperUndo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn SuperUndo(self: QUndoCommand) void {
        qtc.QUndoCommand_SuperUndo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn Redo(self: QUndoCommand) void {
        qtc.QUndoCommand_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRedo(self: QUndoCommand, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnRedo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRedo` instead
    ///
    pub const QBaseRedo = SuperRedo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn SuperRedo(self: QUndoCommand) void {
        qtc.QUndoCommand_SuperRedo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QUndoCommand, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoCommand_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#actionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionText(self: QUndoCommand, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoCommand_ActionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundocommand.ActionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QUndoCommand, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QUndoCommand_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn IsObsolete(self: QUndoCommand) bool {
        return qtc.QUndoCommand_IsObsolete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` obsolete: bool `
    ///
    pub fn SetObsolete(self: QUndoCommand, obsolete: bool) void {
        qtc.QUndoCommand_SetObsolete(@ptrCast(self.ptr), obsolete);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn Id(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnId(self: QUndoCommand, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoCommand_OnId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperId` instead
    ///
    pub const QBaseId = SuperId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn SuperId(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_SuperId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` other: QUndoCommand `
    ///
    pub fn MergeWith(self: QUndoCommand, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUndoCommand;
        return qtc.QUndoCommand_MergeWith(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` callback: *const fn (self: QUndoCommand, other: QUndoCommand) callconv(.c) bool `
    ///
    pub fn OnMergeWith(self: QUndoCommand, callback: *const fn (QUndoCommand, QUndoCommand) callconv(.c) bool) void {
        qtc.QUndoCommand_OnMergeWith(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMergeWith` instead
    ///
    pub const QBaseMergeWith = SuperMergeWith;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` other: QUndoCommand `
    ///
    pub fn SuperMergeWith(self: QUndoCommand, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUndoCommand;
        return qtc.QUndoCommand_SuperMergeWith(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn ChildCount(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: QUndoCommand, index: i32) QUndoCommand {
        return .{ .ptr = qtc.QUndoCommand_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#dtor.QUndoCommand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn Delete(self: QUndoCommand) void {
        qtc.QUndoCommand_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html)
pub const QUndoStack = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUndoStack,

    pub const _is_QUndoStack = {};
    pub const _is_QObject = {};

    /// New constructs a new QUndoStack object.
    ///
    pub fn New() QUndoStack {
        return .{ .ptr = qtc.QUndoStack_new() };
    }

    /// New2 constructs a new QUndoStack object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QUndoStack {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn MetaObject(self: QUndoStack) QMetaObject {
        return .{ .ptr = qtc.QUndoStack_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QUndoStack, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QUndoStack_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    pub fn SuperMetaObject(self: QUndoStack) QMetaObject {
        return .{ .ptr = qtc.QUndoStack_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QUndoStack, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoStack_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QUndoStack_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QUndoStack, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoStack_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QUndoStack, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoStack_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QUndoStack, callback: *const fn (QUndoStack, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoStack_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QUndoStack, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoStack_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Clear(self: QUndoStack) void {
        qtc.QUndoStack_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#push)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` cmd: QUndoCommand `
    ///
    pub fn Push(self: QUndoStack, cmd: anytype) void {
        comptime _ = @TypeOf(cmd)._is_QUndoCommand;
        qtc.QUndoStack_Push(@ptrCast(self.ptr), @ptrCast(cmd.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn CanUndo(self: QUndoStack) bool {
        return qtc.QUndoStack_CanUndo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn CanRedo(self: QUndoStack) bool {
        return qtc.QUndoStack_CanRedo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UndoText(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoStack_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.UndoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RedoText(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoStack_RedoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.RedoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Count(self: QUndoStack) i32 {
        return qtc.QUndoStack_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Index(self: QUndoStack) i32 {
        return qtc.QUndoStack_Index(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` idx: i32 `
    ///
    pub fn Text(self: QUndoStack, allocator: std.mem.Allocator, idx: i32) []const u8 {
        var _str = qtc.QUndoStack_Text(@ptrCast(self.ptr), @bitCast(idx));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateUndoAction(self: QUndoStack, parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_CreateUndoAction(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateRedoAction(self: QUndoStack, parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_CreateRedoAction(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn IsActive(self: QUndoStack) bool {
        return qtc.QUndoStack_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#isClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn IsClean(self: QUndoStack) bool {
        return qtc.QUndoStack_IsClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn CleanIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_CleanIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BeginMacro(self: QUndoStack, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QUndoStack_BeginMacro(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#endMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn EndMacro(self: QUndoStack) void {
        qtc.QUndoStack_EndMacro(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetUndoLimit(self: QUndoStack, limit: i32) void {
        qtc.QUndoStack_SetUndoLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn UndoLimit(self: QUndoStack) i32 {
        return qtc.QUndoStack_UndoLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#command)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` index: i32 `
    ///
    pub fn Command(self: QUndoStack, index: i32) QUndoCommand {
        return .{ .ptr = qtc.QUndoStack_Command(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn SetClean(self: QUndoStack) void {
        qtc.QUndoStack_SetClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#resetClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn ResetClean(self: QUndoStack) void {
        qtc.QUndoStack_ResetClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` idx: i32 `
    ///
    pub fn SetIndex(self: QUndoStack, idx: i32) void {
        qtc.QUndoStack_SetIndex(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Undo(self: QUndoStack) void {
        qtc.QUndoStack_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Redo(self: QUndoStack) void {
        qtc.QUndoStack_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn SetActive(self: QUndoStack) void {
        qtc.QUndoStack_SetActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` idx: i32 `
    ///
    pub fn IndexChanged(self: QUndoStack, idx: i32) void {
        qtc.QUndoStack_IndexChanged(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, idx: i32) callconv(.c) void `
    ///
    pub fn OnIndexChanged(self: QUndoStack, callback: *const fn (QUndoStack, i32) callconv(.c) void) void {
        qtc.QUndoStack_Connect_IndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` clean: bool `
    ///
    pub fn CleanChanged(self: QUndoStack, clean: bool) void {
        qtc.QUndoStack_CleanChanged(@ptrCast(self.ptr), clean);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, clean: bool) callconv(.c) void `
    ///
    pub fn OnCleanChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CleanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` canUndo: bool `
    ///
    pub fn CanUndoChanged(self: QUndoStack, canUndo: bool) void {
        qtc.QUndoStack_CanUndoChanged(@ptrCast(self.ptr), canUndo);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, canUndo: bool) callconv(.c) void `
    ///
    pub fn OnCanUndoChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanUndoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` canRedo: bool `
    ///
    pub fn CanRedoChanged(self: QUndoStack, canRedo: bool) void {
        qtc.QUndoStack_CanRedoChanged(@ptrCast(self.ptr), canRedo);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, canRedo: bool) callconv(.c) void `
    ///
    pub fn OnCanRedoChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanRedoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` undoText: []const u8 `
    ///
    pub fn UndoTextChanged(self: QUndoStack, undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
            .len = undoText.len,
            .data = undoText.ptr,
        };
        qtc.QUndoStack_UndoTextChanged(@ptrCast(self.ptr), undoText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, undoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUndoTextChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` redoText: []const u8 `
    ///
    pub fn RedoTextChanged(self: QUndoStack, redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
            .len = redoText.len,
            .data = redoText.ptr,
        };
        qtc.QUndoStack_RedoTextChanged(@ptrCast(self.ptr), redoText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, redoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRedoTextChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_RedoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn CreateUndoAction2(self: QUndoStack, parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoStack_CreateUndoAction2(@ptrCast(self.ptr), @ptrCast(parent.ptr), prefix_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn CreateRedoAction2(self: QUndoStack, parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoStack_CreateRedoAction2(@ptrCast(self.ptr), @ptrCast(parent.ptr), prefix_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` active: bool `
    ///
    pub fn SetActive1(self: QUndoStack, active: bool) void {
        qtc.QUndoStack_SetActive1(@ptrCast(self.ptr), active);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundostack.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QUndoStack, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn IsWidgetType(self: QUndoStack) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn IsWindowType(self: QUndoStack) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn IsQuickItemType(self: QUndoStack) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn SignalsBlocked(self: QUndoStack) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QUndoStack, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Thread(self: QUndoStack) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QUndoStack, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QUndoStack, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QUndoStack, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QUndoStack, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QUndoStack, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QUndoStack, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qundostack.Children: Memory allocation failed");
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
    /// ` self: QUndoStack `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QUndoStack, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QUndoStack, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QUndoStack, obj: anytype) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QUndoStack, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QUndoStack `
    ///
    pub fn Disconnect3(self: QUndoStack) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QUndoStack, receiver: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn DumpObjectTree(self: QUndoStack) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn DumpObjectInfo(self: QUndoStack) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QUndoStack, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QUndoStack, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QUndoStack, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn BindingStorage(self: QUndoStack) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn BindingStorage2(self: QUndoStack) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Destroyed(self: QUndoStack) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QUndoStack, callback: *const fn (QUndoStack) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Parent(self: QUndoStack) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QUndoStack, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn DeleteLater(self: QUndoStack) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QUndoStack, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QUndoStack, time: i64, timerType: i32) i32 {
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
    /// ` self: QUndoStack `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QUndoStack, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QUndoStack, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QUndoStack, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QUndoStack, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QUndoStack, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QUndoStack, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QUndoStack, callback: *const fn (QUndoStack, QObject) callconv(.c) void) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QUndoStack, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoStack_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QUndoStack, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoStack_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QUndoStack, callback: *const fn (QUndoStack, QEvent) callconv(.c) bool) void {
        qtc.QUndoStack_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QUndoStack, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoStack_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QUndoStack, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoStack_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QUndoStack, callback: *const fn (QUndoStack, QObject, QEvent) callconv(.c) bool) void {
        qtc.QUndoStack_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUndoStack_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUndoStack_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QUndoStack, callback: *const fn (QUndoStack, QTimerEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUndoStack_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUndoStack_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QUndoStack, callback: *const fn (QUndoStack, QChildEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUndoStack_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QUndoStack, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUndoStack_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QUndoStack, callback: *const fn (QUndoStack, QEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoStack_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoStack_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Sender(self: QUndoStack) QObject {
        return .{ .ptr = qtc.QUndoStack_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoStack `
    ///
    pub fn SuperSender(self: QUndoStack) QObject {
        return .{ .ptr = qtc.QUndoStack_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QUndoStack, callback: *const fn () callconv(.c) QObject) void {
        qtc.QUndoStack_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn SenderSignalIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoStack `
    ///
    pub fn SuperSenderSignalIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QUndoStack, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoStack_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QUndoStack, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QUndoStack, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUndoStack_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QUndoStack, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoStack_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QUndoStack, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoStack_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) bool) void {
        qtc.QUndoStack_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#dtor.QUndoStack)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoStack `
    ///
    pub fn Delete(self: QUndoStack) void {
        qtc.QUndoStack_Delete(@ptrCast(self.ptr));
    }
};
