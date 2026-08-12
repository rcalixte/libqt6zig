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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUndoGroup object in C++ memory
    ///
    pub fn new() QUndoGroup {
        return .{ .ptr = qtc.QUndoGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUndoGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QUndoGroup {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn metaObject(self: QUndoGroup) QMetaObject {
        return .{ .ptr = qtc.QUndoGroup_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QUndoGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QUndoGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    pub fn superMetaObject(self: QUndoGroup) QMetaObject {
        return .{ .ptr = qtc.QUndoGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QUndoGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QUndoGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QUndoGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUndoGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QUndoGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QUndoGroup, callback: *const fn (QUndoGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QUndoGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QUndoGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUndoGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStack` instead
    ///
    pub const AddStack = addStack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#addStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn addStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_AddStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### DEPRECATED: Use `removeStack` instead
    ///
    pub const RemoveStack = removeStack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#removeStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn removeStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_RemoveStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### DEPRECATED: Use `stacks` instead
    ///
    pub const Stacks = stacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#stacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn stacks(self: QUndoGroup, allocator: std.mem.Allocator) []QUndoStack {
        const _arr: qtc.libqt_list = qtc.QUndoGroup_Stacks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUndoStack, _arr.len) catch @panic("QUndoGroup.stacks: Memory allocation failed");
        const _data_val: [*]QtC.QUndoStack = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `activeStack` instead
    ///
    pub const ActiveStack = activeStack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn activeStack(self: QUndoGroup) QUndoStack {
        return .{ .ptr = qtc.QUndoGroup_ActiveStack(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createUndoAction` instead
    ///
    pub const CreateUndoAction = createUndoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createUndoAction(self: QUndoGroup, _parent: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_CreateUndoAction(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createRedoAction` instead
    ///
    pub const CreateRedoAction = createRedoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createRedoAction(self: QUndoGroup, _parent: anytype) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QUndoGroup_CreateRedoAction(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `canUndo` instead
    ///
    pub const CanUndo = canUndo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn canUndo(self: QUndoGroup) bool {
        return qtc.QUndoGroup_CanUndo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canRedo` instead
    ///
    pub const CanRedo = canRedo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn canRedo(self: QUndoGroup) bool {
        return qtc.QUndoGroup_CanRedo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undoText` instead
    ///
    pub const UndoText = undoText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn undoText(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoGroup_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.undoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `redoText` instead
    ///
    pub const RedoText = redoText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn redoText(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUndoGroup_RedoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.redoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isClean` instead
    ///
    pub const IsClean = isClean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#isClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn isClean(self: QUndoGroup) bool {
        return qtc.QUndoGroup_IsClean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn undo(self: QUndoGroup) void {
        qtc.QUndoGroup_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn redo(self: QUndoGroup) void {
        qtc.QUndoGroup_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActiveStack` instead
    ///
    pub const SetActiveStack = setActiveStack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#setActiveStack)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn setActiveStack(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_SetActiveStack(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### DEPRECATED: Use `activeStackChanged` instead
    ///
    pub const ActiveStackChanged = activeStackChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` stack: QUndoStack `
    ///
    pub fn activeStackChanged(self: QUndoGroup, stack: anytype) void {
        comptime _ = @TypeOf(stack)._is_QUndoStack;
        qtc.QUndoGroup_ActiveStackChanged(@ptrCast(self.ptr), @ptrCast(stack.ptr));
    }

    /// ### DEPRECATED: Use `onActiveStackChanged` instead
    ///
    pub const OnActiveStackChanged = onActiveStackChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, stack: QUndoStack) callconv(.c) void `
    ///
    pub fn onActiveStackChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, QUndoStack) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_ActiveStackChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexChanged` instead
    ///
    pub const IndexChanged = indexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` idx: i32 `
    ///
    pub fn indexChanged(self: QUndoGroup, idx: i32) void {
        qtc.QUndoGroup_IndexChanged(@ptrCast(self.ptr), @bitCast(idx));
    }

    /// ### DEPRECATED: Use `onIndexChanged` instead
    ///
    pub const OnIndexChanged = onIndexChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, idx: i32) callconv(.c) void `
    ///
    pub fn onIndexChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, i32) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_IndexChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cleanChanged` instead
    ///
    pub const CleanChanged = cleanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` clean: bool `
    ///
    pub fn cleanChanged(self: QUndoGroup, clean: bool) void {
        qtc.QUndoGroup_CleanChanged(@ptrCast(self.ptr), clean);
    }

    /// ### DEPRECATED: Use `onCleanChanged` instead
    ///
    pub const OnCleanChanged = onCleanChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, clean: bool) callconv(.c) void `
    ///
    pub fn onCleanChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CleanChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canUndoChanged` instead
    ///
    pub const CanUndoChanged = canUndoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _canUndo: bool `
    ///
    pub fn canUndoChanged(self: QUndoGroup, _canUndo: bool) void {
        qtc.QUndoGroup_CanUndoChanged(@ptrCast(self.ptr), _canUndo);
    }

    /// ### DEPRECATED: Use `onCanUndoChanged` instead
    ///
    pub const OnCanUndoChanged = onCanUndoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, canUndo: bool) callconv(.c) void `
    ///
    pub fn onCanUndoChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanUndoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canRedoChanged` instead
    ///
    pub const CanRedoChanged = canRedoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _canRedo: bool `
    ///
    pub fn canRedoChanged(self: QUndoGroup, _canRedo: bool) void {
        qtc.QUndoGroup_CanRedoChanged(@ptrCast(self.ptr), _canRedo);
    }

    /// ### DEPRECATED: Use `onCanRedoChanged` instead
    ///
    pub const OnCanRedoChanged = onCanRedoChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, canRedo: bool) callconv(.c) void `
    ///
    pub fn onCanRedoChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, bool) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_CanRedoChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoTextChanged` instead
    ///
    pub const UndoTextChanged = undoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _undoText: []const u8 `
    ///
    pub fn undoTextChanged(self: QUndoGroup, _undoText: []const u8) void {
        const undoText_str = qtc.libqt_string{
            .len = _undoText.len,
            .data = _undoText.ptr,
        };
        qtc.QUndoGroup_UndoTextChanged(@ptrCast(self.ptr), undoText_str);
    }

    /// ### DEPRECATED: Use `onUndoTextChanged` instead
    ///
    pub const OnUndoTextChanged = onUndoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, undoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUndoTextChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoTextChanged` instead
    ///
    pub const RedoTextChanged = redoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _redoText: []const u8 `
    ///
    pub fn redoTextChanged(self: QUndoGroup, _redoText: []const u8) void {
        const redoText_str = qtc.libqt_string{
            .len = _redoText.len,
            .data = _redoText.ptr,
        };
        qtc.QUndoGroup_RedoTextChanged(@ptrCast(self.ptr), redoText_str);
    }

    /// ### DEPRECATED: Use `onRedoTextChanged` instead
    ///
    pub const OnRedoTextChanged = onRedoTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, redoText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRedoTextChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QUndoGroup_Connect_RedoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createUndoAction2` instead
    ///
    pub const CreateUndoAction2 = createUndoAction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn createUndoAction2(self: QUndoGroup, _parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoGroup_CreateUndoAction2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), prefix_str) };
    }

    /// ### DEPRECATED: Use `createRedoAction2` instead
    ///
    pub const CreateRedoAction2 = createRedoAction2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUndoGroup `
    ///
    /// ` _parent: QObject `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn createRedoAction2(self: QUndoGroup, _parent: anytype, prefix: []const u8) QAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return .{ .ptr = qtc.QUndoGroup_CreateRedoAction2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), prefix_str) };
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
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QUndoGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUndoGroup.objectName: Memory allocation failed");
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
    /// ` self: QUndoGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QUndoGroup, name: []const u8) void {
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
    /// ` self: QUndoGroup `
    ///
    pub fn isWidgetType(self: QUndoGroup) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn isWindowType(self: QUndoGroup) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn isQuickItemType(self: QUndoGroup) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn signalsBlocked(self: QUndoGroup) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QUndoGroup, b: bool) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn thread(self: QUndoGroup) QThread {
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
    /// ` self: QUndoGroup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QUndoGroup, _thread: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QUndoGroup, interval: i32) i32 {
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
    /// ` self: QUndoGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QUndoGroup, time: i64) i32 {
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
    /// ` self: QUndoGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QUndoGroup, id: i32) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QUndoGroup, id: i32) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QUndoGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QUndoGroup.children: Memory allocation failed");
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
    /// ` self: QUndoGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QUndoGroup, _parent: anytype) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QUndoGroup, filterObj: anytype) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QUndoGroup, obj: anytype) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QUndoGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QUndoGroup `
    ///
    pub fn disconnect3(self: QUndoGroup) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QUndoGroup, receiver: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn dumpObjectTree(self: QUndoGroup) void {
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
    /// ` self: QUndoGroup `
    ///
    pub fn dumpObjectInfo(self: QUndoGroup) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QUndoGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QUndoGroup, name: [:0]const u8) QVariant {
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
    /// ` self: QUndoGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QUndoGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QUndoGroup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUndoGroup.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QUndoGroup `
    ///
    pub fn bindingStorage(self: QUndoGroup) QBindingStorage {
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
    /// ` self: QUndoGroup `
    ///
    pub fn bindingStorage2(self: QUndoGroup) QBindingStorage {
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
    /// ` self: QUndoGroup `
    ///
    pub fn destroyed(self: QUndoGroup) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QUndoGroup, callback: *const fn (QUndoGroup) callconv(.c) void) void {
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
    /// ` self: QUndoGroup `
    ///
    pub fn parent(self: QUndoGroup) QObject {
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
    /// ` self: QUndoGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QUndoGroup, classname: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    pub fn deleteLater(self: QUndoGroup) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QUndoGroup, interval: i32, timerType: i32) i32 {
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
    /// ` self: QUndoGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QUndoGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QUndoGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QUndoGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QUndoGroup, signal: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QUndoGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QUndoGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QUndoGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUndoGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QUndoGroup, param1: anytype) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QUndoGroup, callback: *const fn (QUndoGroup, QObject) callconv(.c) void) void {
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QUndoGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoGroup_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QUndoGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QEvent) callconv(.c) bool) void {
        qtc.QUndoGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QUndoGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QUndoGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QUndoGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QUndoGroup, callback: *const fn (QUndoGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QUndoGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QUndoGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QUndoGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QUndoGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QUndoGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QChildEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QUndoGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QUndoGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QUndoGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QUndoGroup, callback: *const fn (QUndoGroup, QEvent) callconv(.c) void) void {
        qtc.QUndoGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QUndoGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUndoGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QUndoGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    pub fn sender(self: QUndoGroup) QObject {
        return .{ .ptr = qtc.QUndoGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoGroup `
    ///
    pub fn superSender(self: QUndoGroup) QObject {
        return .{ .ptr = qtc.QUndoGroup_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QUndoGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QUndoGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    pub fn senderSignalIndex(self: QUndoGroup) i32 {
        return qtc.QUndoGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoGroup `
    ///
    pub fn superSenderSignalIndex(self: QUndoGroup) i32 {
        return qtc.QUndoGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QUndoGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QUndoGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QUndoGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QUndoGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUndoGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUndoGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QUndoGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QUndoGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUndoGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUndoGroup`
    ///
    /// ` callback: *const fn (self: QUndoGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QUndoGroup, callback: *const fn (QUndoGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QUndoGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUndoGroup `
    ///
    /// ` callback: *const fn (self: QUndoGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QUndoGroup, callback: *const fn (QUndoGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qundogroup.html#dtor.QUndoGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUndoGroup `
    ///
    pub fn delete(self: QUndoGroup) void {
        qtc.QUndoGroup_Delete(@ptrCast(self.ptr));
    }
};
