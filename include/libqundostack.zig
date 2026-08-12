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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUndoCommand object in C++ memory
    ///
    pub fn new() QUndoCommand {
        return .{ .ptr = qtc.QUndoCommand_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUndoCommand object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QUndoCommand_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QUndoCommand object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QUndoCommand `
    ///
    pub fn new3(parent: anytype) QUndoCommand {
        comptime _ = @TypeOf(parent)._is_QUndoCommand;
        return .{ .ptr = qtc.QUndoCommand_new3(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QUndoCommand object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` parent: QUndoCommand `
    ///
    pub fn new4(_text: []const u8, parent: anytype) QUndoCommand {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QUndoCommand;
        return .{ .ptr = qtc.QUndoCommand_new4(text_str, @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn undo(self: QUndoCommand) void {
        qtc.QUndoCommand_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUndo` instead
    ///
    pub const OnUndo = onUndo;

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
    pub fn onUndo(self: QUndoCommand, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnUndo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUndo` instead
    ///
    pub const SuperUndo = superUndo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#undo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn superUndo(self: QUndoCommand) void {
        qtc.QUndoCommand_SuperUndo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn redo(self: QUndoCommand) void {
        qtc.QUndoCommand_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRedo` instead
    ///
    pub const OnRedo = onRedo;

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
    pub fn onRedo(self: QUndoCommand, callback: *const fn () callconv(.c) void) void {
        qtc.QUndoCommand_OnRedo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRedo` instead
    ///
    pub const SuperRedo = superRedo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#redo)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn superRedo(self: QUndoCommand) void {
        qtc.QUndoCommand_SuperRedo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QUndoCommand, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoCommand_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoCommand.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actionText` instead
    ///
    pub const ActionText = actionText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#actionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionText(self: QUndoCommand, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoCommand_ActionText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoCommand.actionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QUndoCommand, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QUndoCommand_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `isObsolete` instead
    ///
    pub const IsObsolete = isObsolete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn isObsolete(self: QUndoCommand) bool {
        return qtc.QUndoCommand_IsObsolete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObsolete` instead
    ///
    pub const SetObsolete = setObsolete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` obsolete: bool `
    ///
    pub fn setObsolete(self: QUndoCommand, obsolete: bool) void {
        qtc.QUndoCommand_SetObsolete(@ptrCast(self.ptr), obsolete);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn id(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onId` instead
    ///
    pub const OnId = onId;

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
    pub fn onId(self: QUndoCommand, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoCommand_OnId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superId` instead
    ///
    pub const SuperId = superId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#id)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn superId(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_SuperId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mergeWith` instead
    ///
    pub const MergeWith = mergeWith;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` other: QUndoCommand `
    ///
    pub fn mergeWith(self: QUndoCommand, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUndoCommand;
        return qtc.QUndoCommand_MergeWith(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onMergeWith` instead
    ///
    pub const OnMergeWith = onMergeWith;

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
    pub fn onMergeWith(self: QUndoCommand, callback: *const fn (QUndoCommand, QUndoCommand) callconv(.c) bool) void {
        qtc.QUndoCommand_OnMergeWith(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMergeWith` instead
    ///
    pub const SuperMergeWith = superMergeWith;

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
    pub fn superMergeWith(self: QUndoCommand, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUndoCommand;
        return qtc.QUndoCommand_SuperMergeWith(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn childCount(self: QUndoCommand) i32 {
        return qtc.QUndoCommand_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoCommand `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QUndoCommand, index: i32) QUndoCommand {
        return .{ .ptr = qtc.QUndoCommand_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundocommand.html#dtor.QUndoCommand)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoCommand `
    ///
    pub fn delete(self: QUndoCommand) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUndoStack object in C++ memory
    ///
    pub fn new() QUndoStack {
        return .{ .ptr = qtc.QUndoStack_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUndoStack object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QUndoStack {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn metaObject(self: QUndoStack) QMetaObject {
        return .{ .ptr = qtc.QUndoStack_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QUndoStack, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QUndoStack_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    pub fn superMetaObject(self: QUndoStack) QMetaObject {
        return .{ .ptr = qtc.QUndoStack_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QUndoStack, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoStack_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QUndoStack_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QUndoStack, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoStack_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QUndoStack, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoStack_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QUndoStack, callback: *const fn (QUndoStack, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoStack_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QUndoStack, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoStack_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn clear(self: QUndoStack) void {
        qtc.QUndoStack_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `push` instead
    ///
    pub const Push = push;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#push)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` cmd: QUndoCommand `
    ///
    pub fn push(self: QUndoStack, cmd: anytype) void {
        comptime _ = @TypeOf(cmd)._is_QUndoCommand;
        qtc.QUndoStack_Push(@ptrCast(self.ptr), @ptrCast(cmd.ptr));
    }

    /// ### DEPRECATED: Use `canUndo` instead
    ///
    pub const CanUndo = canUndo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn canUndo(self: QUndoStack) bool {
        return qtc.QUndoStack_CanUndo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canRedo` instead
    ///
    pub const CanRedo = canRedo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn canRedo(self: QUndoStack) bool {
        return qtc.QUndoStack_CanRedo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undoText` instead
    ///
    pub const UndoText = undoText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn undoText(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoStack_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.undoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `redoText` instead
    ///
    pub const RedoText = redoText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn redoText(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoStack_RedoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.redoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn count(self: QUndoStack) i32 {
        return qtc.QUndoStack_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn index(self: QUndoStack) i32 {
        return qtc.QUndoStack_Index(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: QUndoStack, allocator: std.mem.Allocator, idx: i32) []const u8 {
        var _str = qtc.QUndoStack_Text(@ptrCast(self.ptr), @bitCast(idx));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createUndoAction` instead
    ///
    pub const CreateUndoAction = createUndoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createUndoAction(self: QUndoStack, _parent: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_CreateUndoAction(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createRedoAction` instead
    ///
    pub const CreateRedoAction = createRedoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createRedoAction(self: QUndoStack, _parent: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoStack_CreateRedoAction(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn isActive(self: QUndoStack) bool {
        return qtc.QUndoStack_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isClean` instead
    ///
    pub const IsClean = isClean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#isClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn isClean(self: QUndoStack) bool {
        return qtc.QUndoStack_IsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cleanIndex` instead
    ///
    pub const CleanIndex = cleanIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn cleanIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_CleanIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginMacro` instead
    ///
    pub const BeginMacro = beginMacro;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn beginMacro(self: QUndoStack, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QUndoStack_BeginMacro(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `endMacro` instead
    ///
    pub const EndMacro = endMacro;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#endMacro)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn endMacro(self: QUndoStack) void {
        qtc.QUndoStack_EndMacro(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUndoLimit` instead
    ///
    pub const SetUndoLimit = setUndoLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` limit: i32 `
    ///
    pub fn setUndoLimit(self: QUndoStack, limit: i32) void {
        qtc.QUndoStack_SetUndoLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### DEPRECATED: Use `undoLimit` instead
    ///
    pub const UndoLimit = undoLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn undoLimit(self: QUndoStack) i32 {
        return qtc.QUndoStack_UndoLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `command` instead
    ///
    pub const Command = command;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#command)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _index: i32 `
    ///
    pub fn command(self: QUndoStack, _index: i32) QUndoCommand {
        return .{ .ptr = qtc.QUndoStack_Command(@ptrCast(self.ptr), @bitCast(_index)) };
    }

    /// ### DEPRECATED: Use `setClean` instead
    ///
    pub const SetClean = setClean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn setClean(self: QUndoStack) void {
        qtc.QUndoStack_SetClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetClean` instead
    ///
    pub const ResetClean = resetClean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#resetClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn resetClean(self: QUndoStack) void {
        qtc.QUndoStack_ResetClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIndex` instead
    ///
    pub const SetIndex = setIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` idx: i32 `
    ///
    pub fn setIndex(self: QUndoStack, idx: i32) void {
        qtc.QUndoStack_SetIndex(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn undo(self: QUndoStack) void {
        qtc.QUndoStack_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn redo(self: QUndoStack) void {
        qtc.QUndoStack_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    pub fn setActive(self: QUndoStack) void {
        qtc.QUndoStack_SetActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexChanged` instead
    ///
    pub const IndexChanged = indexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` idx: i32 `
    ///
    pub fn indexChanged(self: QUndoStack, idx: i32) void {
        qtc.QUndoStack_IndexChanged(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### DEPRECATED: Use `onIndexChanged` instead
    ///
    pub const OnIndexChanged = onIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, idx: i32) callconv(.c) void `
    ///
    pub fn onIndexChanged(self: QUndoStack, callback: *const fn (QUndoStack, i32) callconv(.c) void) void {
        qtc.QUndoStack_Connect_IndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cleanChanged` instead
    ///
    pub const CleanChanged = cleanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` clean: bool `
    ///
    pub fn cleanChanged(self: QUndoStack, clean: bool) void {
        qtc.QUndoStack_CleanChanged(@ptrCast(self.ptr), clean);
    }

    /// ### DEPRECATED: Use `onCleanChanged` instead
    ///
    pub const OnCleanChanged = onCleanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, clean: bool) callconv(.c) void `
    ///
    pub fn onCleanChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CleanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canUndoChanged` instead
    ///
    pub const CanUndoChanged = canUndoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _canUndo: bool `
    ///
    pub fn canUndoChanged(self: QUndoStack, _canUndo: bool) void {
        qtc.QUndoStack_CanUndoChanged(@ptrCast(self.ptr), _canUndo);
    }

    /// ### DEPRECATED: Use `onCanUndoChanged` instead
    ///
    pub const OnCanUndoChanged = onCanUndoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, canUndo: bool) callconv(.c) void `
    ///
    pub fn onCanUndoChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanUndoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canRedoChanged` instead
    ///
    pub const CanRedoChanged = canRedoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _canRedo: bool `
    ///
    pub fn canRedoChanged(self: QUndoStack, _canRedo: bool) void {
        qtc.QUndoStack_CanRedoChanged(@ptrCast(self.ptr), _canRedo);
    }

    /// ### DEPRECATED: Use `onCanRedoChanged` instead
    ///
    pub const OnCanRedoChanged = onCanRedoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, canRedo: bool) callconv(.c) void `
    ///
    pub fn onCanRedoChanged(self: QUndoStack, callback: *const fn (QUndoStack, bool) callconv(.c) void) void {
        qtc.QUndoStack_Connect_CanRedoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoTextChanged` instead
    ///
    pub const UndoTextChanged = undoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _undoText: []const u8 `
    ///
    pub fn undoTextChanged(self: QUndoStack, _undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
            .len = _undoText.len,
            .data = _undoText.ptr,
        };
        qtc.QUndoStack_UndoTextChanged(@ptrCast(self.ptr), undoText_str);
    }

    /// ### DEPRECATED: Use `onUndoTextChanged` instead
    ///
    pub const OnUndoTextChanged = onUndoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, undoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUndoTextChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoTextChanged` instead
    ///
    pub const RedoTextChanged = redoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _redoText: []const u8 `
    ///
    pub fn redoTextChanged(self: QUndoStack, _redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
            .len = _redoText.len,
            .data = _redoText.ptr,
        };
        qtc.QUndoStack_RedoTextChanged(@ptrCast(self.ptr), redoText_str);
    }

    /// ### DEPRECATED: Use `onRedoTextChanged` instead
    ///
    pub const OnRedoTextChanged = onRedoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, redoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRedoTextChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoStack_Connect_RedoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createUndoAction2` instead
    ///
    pub const CreateUndoAction2 = createUndoAction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn createUndoAction2(self: QUndoStack, _parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoStack_CreateUndoAction2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), prefix_str) };
    }

    /// ### DEPRECATED: Use `createRedoAction2` instead
    ///
    pub const CreateRedoAction2 = createRedoAction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` _parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn createRedoAction2(self: QUndoStack, _parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoStack_CreateRedoAction2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), prefix_str) };
    }

    /// ### DEPRECATED: Use `setActive1` instead
    ///
    pub const SetActive1 = setActive1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoStack `
    ///
    /// ` active: bool `
    ///
    pub fn setActive1(self: QUndoStack, active: bool) void {
        qtc.QUndoStack_SetActive1(@ptrCast(self.ptr), active);
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
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QUndoStack, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoStack.objectName: Memory allocation failed");
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
    /// ` self: QUndoStack `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QUndoStack, name: []const u8) void {
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
    /// ` self: QUndoStack `
    ///
    pub fn isWidgetType(self: QUndoStack) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn isWindowType(self: QUndoStack) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn isQuickItemType(self: QUndoStack) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn signalsBlocked(self: QUndoStack) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QUndoStack, b: bool) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn thread(self: QUndoStack) QThread {
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
    /// ` self: QUndoStack `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QUndoStack, _thread: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QUndoStack, interval: i32) i32 {
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
    /// ` self: QUndoStack `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QUndoStack, time: i64) i32 {
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
    /// ` self: QUndoStack `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: QUndoStack, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QUndoStack `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QUndoStack, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QUndoStack, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QUndoStack.children: Memory allocation failed");
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
    /// ` self: QUndoStack `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QUndoStack, _parent: anytype) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QUndoStack, filterObj: anytype) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QUndoStack, obj: anytype) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QUndoStack, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QUndoStack `
    ///
    pub fn disconnect3(self: QUndoStack) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QUndoStack, receiver: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn dumpObjectTree(self: QUndoStack) void {
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
    /// ` self: QUndoStack `
    ///
    pub fn dumpObjectInfo(self: QUndoStack) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QUndoStack, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QUndoStack, name: [:0]const u8) QVariant {
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
    /// ` self: QUndoStack `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QUndoStack, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QUndoStack.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUndoStack.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QUndoStack `
    ///
    pub fn bindingStorage(self: QUndoStack) QBindingStorage {
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
    /// ` self: QUndoStack `
    ///
    pub fn bindingStorage2(self: QUndoStack) QBindingStorage {
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
    /// ` self: QUndoStack `
    ///
    pub fn destroyed(self: QUndoStack) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QUndoStack, callback: *const fn (QUndoStack) callconv(.c) void) void {
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
    /// ` self: QUndoStack `
    ///
    pub fn parent(self: QUndoStack) QObject {
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
    /// ` self: QUndoStack `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QUndoStack, classname: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    pub fn deleteLater(self: QUndoStack) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QUndoStack, interval: i32, timerType: i32) i32 {
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
    /// ` self: QUndoStack `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QUndoStack, time: i64, timerType: i32) i32 {
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
    /// ` self: QUndoStack `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QUndoStack, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QUndoStack, signal: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QUndoStack, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QUndoStack, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QUndoStack, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoStack `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QUndoStack, param1: anytype) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QUndoStack, callback: *const fn (QUndoStack, QObject) callconv(.c) void) void {
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QUndoStack, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoStack_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QUndoStack, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoStack_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QUndoStack, callback: *const fn (QUndoStack, QEvent) callconv(.c) bool) void {
        qtc.QUndoStack_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QUndoStack, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoStack_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QUndoStack, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoStack_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QUndoStack, callback: *const fn (QUndoStack, QObject, QEvent) callconv(.c) bool) void {
        qtc.QUndoStack_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QUndoStack_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QUndoStack_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QUndoStack, callback: *const fn (QUndoStack, QTimerEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QUndoStack_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QUndoStack_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QUndoStack, callback: *const fn (QUndoStack, QChildEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QUndoStack_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QUndoStack, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QUndoStack_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QUndoStack, callback: *const fn (QUndoStack, QEvent) callconv(.c) void) void {
        qtc.QUndoStack_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoStack_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QUndoStack, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoStack_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoStack_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    pub fn sender(self: QUndoStack) QObject {
        return .{ .ptr = qtc.QUndoStack_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoStack `
    ///
    pub fn superSender(self: QUndoStack) QObject {
        return .{ .ptr = qtc.QUndoStack_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QUndoStack, callback: *const fn () callconv(.c) QObject) void {
        qtc.QUndoStack_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    pub fn senderSignalIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoStack `
    ///
    pub fn superSenderSignalIndex(self: QUndoStack) i32 {
        return qtc.QUndoStack_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QUndoStack, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoStack_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QUndoStack, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QUndoStack, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoStack_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUndoStack_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QUndoStack, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoStack_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QUndoStack, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoStack_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoStack`
    ///
    /// ` callback: *const fn (self: QUndoStack, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QUndoStack, callback: *const fn (QUndoStack, QMetaMethod) callconv(.c) bool) void {
        qtc.QUndoStack_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoStack `
    ///
    /// ` callback: *const fn (self: QUndoStack, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QUndoStack, callback: *const fn (QUndoStack, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundostack.html#dtor.QUndoStack)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoStack `
    ///
    pub fn delete(self: QUndoStack) void {
        qtc.QUndoStack_Delete(@ptrCast(self.ptr));
    }
};
