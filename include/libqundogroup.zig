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
const QUndoStack = @import("libqt6").QUndoStack;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html)
pub const QUndoGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUndoGroup,

    pub const _is_QUndoGroup = {};
    pub const _is_QObject = {};

    /// New constructs a new QUndoGroup object.
    ///
    pub fn New() QUndoGroup {
        return .{ .ptr = qtc.QUndoGroup_new() };
    }

    /// New2 constructs a new QUndoGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QUndoGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn MetaObject(self: QUndoGroup) QMetaObject {
        return .{ .ptr = qtc.QUndoGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QUndoGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QUndoGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    pub fn SuperMetaObject(self: QUndoGroup) QMetaObject {
        return .{ .ptr = qtc.QUndoGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QUndoGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QUndoGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QUndoGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QUndoGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QUndoGroup, callback: *const fn (QUndoGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QUndoGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#addStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn AddStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_AddStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#removeStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn RemoveStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_RemoveStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#stacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Stacks(self: QUndoGroup, allocator: std.mem.Allocator) []QUndoStack {
        const _arr: qtc.libqt_list = qtc.QUndoGroup_Stacks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUndoStack, _arr.len) catch @panic("qundogroup.Stacks: Memory allocation failed");
        const _data: [*]QtC.QUndoStack = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn ActiveStack(self: QUndoGroup) QUndoStack {
        return .{ .ptr = qtc.QUndoGroup_ActiveStack(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateUndoAction(self: QUndoGroup, parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_CreateUndoAction(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateRedoAction(self: QUndoGroup, parent: anytype) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_CreateRedoAction(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn CanUndo(self: QUndoGroup) bool {
        return qtc.QUndoGroup_CanUndo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn CanRedo(self: QUndoGroup) bool {
        return qtc.QUndoGroup_CanRedo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UndoText(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoGroup_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.UndoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RedoText(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoGroup_RedoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.RedoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#isClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn IsClean(self: QUndoGroup) bool {
        return qtc.QUndoGroup_IsClean(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Undo(self: QUndoGroup) void {
        qtc.QUndoGroup_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Redo(self: QUndoGroup) void {
        qtc.QUndoGroup_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#setActiveStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn SetActiveStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_SetActiveStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn ActiveStackChanged(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_ActiveStackChanged(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, stack: QUndoStack) callconv(.c) void `
    ///
    pub fn OnActiveStackChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, QUndoStack) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_ActiveStackChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` idx: i32 `
    ///
    pub fn IndexChanged(self: QUndoGroup, idx: i32) void {
        qtc.QUndoGroup_IndexChanged(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, idx: i32) callconv(.c) void `
    ///
    pub fn OnIndexChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, i32) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_IndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` clean: bool `
    ///
    pub fn CleanChanged(self: QUndoGroup, clean: bool) void {
        qtc.QUndoGroup_CleanChanged(@ptrCast(self.ptr), clean);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, clean: bool) callconv(.c) void `
    ///
    pub fn OnCleanChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CleanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` canUndo: bool `
    ///
    pub fn CanUndoChanged(self: QUndoGroup, canUndo: bool) void {
        qtc.QUndoGroup_CanUndoChanged(@ptrCast(self.ptr), canUndo);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, canUndo: bool) callconv(.c) void `
    ///
    pub fn OnCanUndoChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanUndoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` canRedo: bool `
    ///
    pub fn CanRedoChanged(self: QUndoGroup, canRedo: bool) void {
        qtc.QUndoGroup_CanRedoChanged(@ptrCast(self.ptr), canRedo);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, canRedo: bool) callconv(.c) void `
    ///
    pub fn OnCanRedoChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanRedoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` undoText: []const u8 `
    ///
    pub fn UndoTextChanged(self: QUndoGroup, undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
            .len = undoText.len,
            .data = undoText.ptr,
        };
        qtc.QUndoGroup_UndoTextChanged(@ptrCast(self.ptr), undoText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, undoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUndoTextChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` redoText: []const u8 `
    ///
    pub fn RedoTextChanged(self: QUndoGroup, redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
            .len = redoText.len,
            .data = redoText.ptr,
        };
        qtc.QUndoGroup_RedoTextChanged(@ptrCast(self.ptr), redoText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, redoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRedoTextChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_RedoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn CreateUndoAction2(self: QUndoGroup, parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoGroup_CreateUndoAction2(@ptrCast(self.ptr), @ptrCast(parent.ptr), prefix_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn CreateRedoAction2(self: QUndoGroup, parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoGroup_CreateRedoAction2(@ptrCast(self.ptr), @ptrCast(parent.ptr), prefix_str) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qundogroup.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QUndoGroup, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn IsWidgetType(self: QUndoGroup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn IsWindowType(self: QUndoGroup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn IsQuickItemType(self: QUndoGroup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn SignalsBlocked(self: QUndoGroup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QUndoGroup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Thread(self: QUndoGroup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QUndoGroup, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QUndoGroup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QUndoGroup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QUndoGroup, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QUndoGroup, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QUndoGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qundogroup.Children: Memory allocation failed");
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
    /// ` self: QUndoGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QUndoGroup, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QUndoGroup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QUndoGroup, obj: anytype) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QUndoGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QUndoGroup `
    ///
    pub fn Disconnect3(self: QUndoGroup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QUndoGroup, receiver: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn DumpObjectTree(self: QUndoGroup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn DumpObjectInfo(self: QUndoGroup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QUndoGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QUndoGroup, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QUndoGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qundogroup.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qundogroup.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QUndoGroup `
    ///
    pub fn BindingStorage(self: QUndoGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn BindingStorage2(self: QUndoGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Destroyed(self: QUndoGroup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QUndoGroup, callback: *const fn (QUndoGroup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Parent(self: QUndoGroup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QUndoGroup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn DeleteLater(self: QUndoGroup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QUndoGroup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QUndoGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QUndoGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QUndoGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QUndoGroup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QUndoGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QUndoGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QUndoGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QUndoGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QUndoGroup, callback: *const fn (QUndoGroup, QObject) callconv(.c) void) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QUndoGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoGroup_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QUndoGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QEvent) callconv(.c) bool) void {
        qtc.QUndoGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QUndoGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QUndoGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUndoGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QUndoGroup, callback: *const fn (QUndoGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QUndoGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUndoGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUndoGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUndoGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUndoGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QChildEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUndoGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QUndoGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUndoGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Sender(self: QUndoGroup) QObject {
        return .{ .ptr = qtc.QUndoGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoGroup `
    ///
    pub fn SuperSender(self: QUndoGroup) QObject {
        return .{ .ptr = qtc.QUndoGroup_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QUndoGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QUndoGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn SenderSignalIndex(self: QUndoGroup) i32 {
        return qtc.QUndoGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoGroup `
    ///
    pub fn SuperSenderSignalIndex(self: QUndoGroup) i32 {
        return qtc.QUndoGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QUndoGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QUndoGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QUndoGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUndoGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QUndoGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QUndoGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QUndoGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#dtor.QUndoGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn Delete(self: QUndoGroup) void {
        qtc.QUndoGroup_Delete(@ptrCast(self.ptr));
    }
};
