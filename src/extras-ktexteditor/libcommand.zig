const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletion = @import("libqt6").KCompletion;
const KTextEditor__Range = @import("libqt6").KTextEditor__Range;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html)
pub const KTextEditor__Command = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Command,

    pub const _is_KTextEditor__Command = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Command object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _cmds: []const []const u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, _cmds: []const []const u8) KTextEditor__Command {
        const cmds_arr = allocator.alloc(qtc.libqt_string, _cmds.len) catch @panic("KTextEditor__Command.new: Memory allocation failed");
        defer allocator.free(cmds_arr);
        for (_cmds, 0.._cmds.len) |str_item, i|
            cmds_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const cmds_list = qtc.libqt_list{
            .len = _cmds.len,
            .data = cmds_arr.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Command_new(cmds_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::Command object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _cmds: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(allocator: std.mem.Allocator, _cmds: []const []const u8, _parent: anytype) KTextEditor__Command {
        const cmds_arr = allocator.alloc(qtc.libqt_string, _cmds.len) catch @panic("KTextEditor__Command.new2: Memory allocation failed");
        defer allocator.free(cmds_arr);
        for (_cmds, 0.._cmds.len) |str_item, i|
            cmds_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const cmds_list = qtc.libqt_list{
            .len = _cmds.len,
            .data = cmds_arr.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KTextEditor__Command_new2(cmds_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    pub fn metaObject(self: KTextEditor__Command) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Command_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KTextEditor__Command, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__Command_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn superMetaObject(self: KTextEditor__Command) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Command_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__Command, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Command_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__Command_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KTextEditor__Command, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Command_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KTextEditor__Command, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Command_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__Command_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KTextEditor__Command, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Command_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Command.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cmds` instead
    ///
    pub const Cmds = cmds;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#cmds)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cmds(self: KTextEditor__Command, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Command_Cmds(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Command.cmds: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Command.cmds: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsRange` instead
    ///
    pub const SupportsRange = supportsRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn supportsRange(self: KTextEditor__Command, cmd: []const u8) bool {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        return qtc.KTextEditor__Command_SupportsRange(@ptrCast(self.ptr), cmd_str);
    }

    /// ### DEPRECATED: Use `onSupportsRange` instead
    ///
    pub const OnSupportsRange = onSupportsRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, cmd: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onSupportsRange(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnSupportsRange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportsRange` instead
    ///
    pub const SuperSupportsRange = superSupportsRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#supportsRange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn superSupportsRange(self: KTextEditor__Command, cmd: []const u8) bool {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        return qtc.KTextEditor__Command_SuperSupportsRange(@ptrCast(self.ptr), cmd_str);
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmd: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn exec(self: KTextEditor__Command, view: anytype, cmd: []const u8, msg: []const u8, range: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Command_Exec(@ptrCast(self.ptr), @ptrCast(view.ptr), cmd_str, msg_str, @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `onExec` instead
    ///
    pub const OnExec = onExec;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, view: KTextEditor__View, cmd: [*:0]const u8, msg: [*:0]const u8, range: KTextEditor__Range) callconv(.c) bool `
    ///
    pub fn onExec(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, KTextEditor__View, [*:0]const u8, [*:0]const u8, KTextEditor__Range) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnExec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExec` instead
    ///
    pub const SuperExec = superExec;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#exec)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmd: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` range: KTextEditor__Range `
    ///
    pub fn superExec(self: KTextEditor__Command, view: anytype, cmd: []const u8, msg: []const u8, range: anytype) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Command_SuperExec(@ptrCast(self.ptr), @ptrCast(view.ptr), cmd_str, msg_str, @ptrCast(range.ptr));
    }

    /// ### DEPRECATED: Use `help` instead
    ///
    pub const Help = help;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmd: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn help(self: KTextEditor__Command, view: anytype, cmd: []const u8, msg: []const u8) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.KTextEditor__Command_Help(@ptrCast(self.ptr), @ptrCast(view.ptr), cmd_str, msg_str);
    }

    /// ### DEPRECATED: Use `onHelp` instead
    ///
    pub const OnHelp = onHelp;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, view: KTextEditor__View, cmd: [*:0]const u8, msg: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onHelp(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, KTextEditor__View, [*:0]const u8, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnHelp(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHelp` instead
    ///
    pub const SuperHelp = superHelp;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#help)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmd: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn superHelp(self: KTextEditor__Command, view: anytype, cmd: []const u8, msg: []const u8) bool {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        return qtc.KTextEditor__Command_SuperHelp(@ptrCast(self.ptr), @ptrCast(view.ptr), cmd_str, msg_str);
    }

    /// ### DEPRECATED: Use `completionObject` instead
    ///
    pub const CompletionObject = completionObject;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmdname: []const u8 `
    ///
    pub fn completionObject(self: KTextEditor__Command, view: anytype, cmdname: []const u8) KCompletion {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmdname_str = qtc.libqt_string{
            .len = cmdname.len,
            .data = cmdname.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Command_CompletionObject(@ptrCast(self.ptr), @ptrCast(view.ptr), cmdname_str) };
    }

    /// ### DEPRECATED: Use `onCompletionObject` instead
    ///
    pub const OnCompletionObject = onCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, view: KTextEditor__View, cmdname: [*:0]const u8) callconv(.c) KCompletion `
    ///
    pub fn onCompletionObject(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, KTextEditor__View, [*:0]const u8) callconv(.c) KCompletion) void {
        qtc.KTextEditor__Command_OnCompletionObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompletionObject` instead
    ///
    pub const SuperCompletionObject = superCompletionObject;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#completionObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` cmdname: []const u8 `
    ///
    pub fn superCompletionObject(self: KTextEditor__Command, view: anytype, cmdname: []const u8) KCompletion {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const cmdname_str = qtc.libqt_string{
            .len = cmdname.len,
            .data = cmdname.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Command_SuperCompletionObject(@ptrCast(self.ptr), @ptrCast(view.ptr), cmdname_str) };
    }

    /// ### DEPRECATED: Use `wantsToProcessText` instead
    ///
    pub const WantsToProcessText = wantsToProcessText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` cmdname: []const u8 `
    ///
    pub fn wantsToProcessText(self: KTextEditor__Command, cmdname: []const u8) bool {
        const cmdname_str = qtc.libqt_string{
            .len = cmdname.len,
            .data = cmdname.ptr,
        };
        return qtc.KTextEditor__Command_WantsToProcessText(@ptrCast(self.ptr), cmdname_str);
    }

    /// ### DEPRECATED: Use `onWantsToProcessText` instead
    ///
    pub const OnWantsToProcessText = onWantsToProcessText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, cmdname: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onWantsToProcessText(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnWantsToProcessText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWantsToProcessText` instead
    ///
    pub const SuperWantsToProcessText = superWantsToProcessText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#wantsToProcessText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` cmdname: []const u8 `
    ///
    pub fn superWantsToProcessText(self: KTextEditor__Command, cmdname: []const u8) bool {
        const cmdname_str = qtc.libqt_string{
            .len = cmdname.len,
            .data = cmdname.ptr,
        };
        return qtc.KTextEditor__Command_SuperWantsToProcessText(@ptrCast(self.ptr), cmdname_str);
    }

    /// ### DEPRECATED: Use `processText` instead
    ///
    pub const ProcessText = processText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn processText(self: KTextEditor__Command, view: anytype, text: []const u8) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Command_ProcessText(@ptrCast(self.ptr), @ptrCast(view.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onProcessText` instead
    ///
    pub const OnProcessText = onProcessText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, view: KTextEditor__View, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onProcessText(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, KTextEditor__View, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnProcessText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProcessText` instead
    ///
    pub const SuperProcessText = superProcessText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-command.html#processText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Command `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superProcessText(self: KTextEditor__Command, view: anytype, text: []const u8) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Command_SuperProcessText(@ptrCast(self.ptr), @ptrCast(view.ptr), text_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Command.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Command.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTextEditor__Command, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Command.objectName: Memory allocation failed");
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTextEditor__Command, name: []const u8) void {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn isWidgetType(self: KTextEditor__Command) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn isWindowType(self: KTextEditor__Command) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn isQuickItemType(self: KTextEditor__Command) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn signalsBlocked(self: KTextEditor__Command) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTextEditor__Command, b: bool) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn thread(self: KTextEditor__Command) QThread {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__Command, _thread: anytype) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTextEditor__Command, interval: i32) i32 {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTextEditor__Command, time: i64) i32 {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTextEditor__Command, id: i32) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTextEditor__Command, id: i32) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTextEditor__Command, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__Command.children: Memory allocation failed");
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTextEditor__Command, _parent: anytype) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTextEditor__Command, filterObj: anytype) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTextEditor__Command, obj: anytype) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__Command, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn disconnect3(self: KTextEditor__Command) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTextEditor__Command, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn dumpObjectTree(self: KTextEditor__Command) void {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__Command) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTextEditor__Command, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTextEditor__Command, name: [:0]const u8) QVariant {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTextEditor__Command, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__Command.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Command.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn bindingStorage(self: KTextEditor__Command) QBindingStorage {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn bindingStorage2(self: KTextEditor__Command) QBindingStorage {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn destroyed(self: KTextEditor__Command) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn parent(self: KTextEditor__Command) QObject {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTextEditor__Command, classname: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn deleteLater(self: KTextEditor__Command) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTextEditor__Command, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTextEditor__Command, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__Command, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTextEditor__Command, signal: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTextEditor__Command, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTextEditor__Command, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTextEditor__Command, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTextEditor__Command, param1: anytype) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QObject) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTextEditor__Command, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Command_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KTextEditor__Command, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Command_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__Command, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Command_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KTextEditor__Command, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Command_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTextEditor__Command_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTextEditor__Command_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTextEditor__Command_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTextEditor__Command_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTextEditor__Command_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KTextEditor__Command, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTextEditor__Command_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KTextEditor__Command, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Command_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KTextEditor__Command, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Command_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KTextEditor__Command, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Command_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KTextEditor__Command, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Command_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Command_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn sender(self: KTextEditor__Command) QObject {
        return .{ .ptr = qtc.KTextEditor__Command_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn superSender(self: KTextEditor__Command) QObject {
        return .{ .ptr = qtc.KTextEditor__Command_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KTextEditor__Command, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__Command_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn senderSignalIndex(self: KTextEditor__Command) i32 {
        return qtc.KTextEditor__Command_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    pub fn superSenderSignalIndex(self: KTextEditor__Command) i32 {
        return qtc.KTextEditor__Command_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KTextEditor__Command, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__Command_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KTextEditor__Command, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Command_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KTextEditor__Command, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Command_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__Command_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KTextEditor__Command, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Command_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KTextEditor__Command, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Command_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Command`
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__Command_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Command `
    ///
    /// ` callback: *const fn (self: KTextEditor__Command, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTextEditor__Command, callback: *const fn (KTextEditor__Command, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Command `
    ///
    pub fn delete(self: KTextEditor__Command) void {
        qtc.KTextEditor__Command_Delete(@ptrCast(self.ptr));
    }
};
