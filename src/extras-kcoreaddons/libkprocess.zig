const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODeviceBase = @import("libqt6").QIODeviceBase;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QProcess = @import("libqt6").QProcess;
const QProcessEnvironment = @import("libqt6").QProcessEnvironment;
const QProcess__UnixProcessParameters = @import("libqt6").QProcess__UnixProcessParameters;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const builtin = @import("builtin");
const kprocess_enums = enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qprocess_enums = @import("../libqprocess.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprocess.html)
pub const KProcess = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprocess.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProcess,

    pub const _is_KProcess = {};
    pub const _is_QProcess = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KProcess object in C++ memory
    ///
    pub fn new() KProcess {
        return .{ .ptr = qtc.KProcess_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KProcess object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KProcess {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KProcess_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn metaObject(self: KProcess) QMetaObject {
        return .{ .ptr = qtc.KProcess_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KProcess, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KProcess_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    pub fn superMetaObject(self: KProcess) QMetaObject {
        return .{ .ptr = qtc.KProcess_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KProcess_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KProcess, callback: *const fn (KProcess, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KProcess_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOutputChannelMode` instead
    ///
    pub const SetOutputChannelMode = setOutputChannelMode;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setOutputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: kprocess_enums.OutputChannelMode `
    ///
    pub fn setOutputChannelMode(self: KProcess, mode: i32) void {
        qtc.KProcess_SetOutputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `outputChannelMode` instead
    ///
    pub const OutputChannelMode = outputChannelMode;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#outputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` kprocess_enums.OutputChannelMode `
    ///
    pub fn outputChannelMode(self: KProcess) i32 {
        return qtc.KProcess_OutputChannelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNextOpenMode` instead
    ///
    pub const SetNextOpenMode = setNextOpenMode;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setNextOpenMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setNextOpenMode(self: KProcess, mode: i32) void {
        qtc.KProcess_SetNextOpenMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setEnv` instead
    ///
    pub const SetEnv = setEnv;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setEnv(self: KProcess, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KProcess_SetEnv(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `unsetEnv` instead
    ///
    pub const UnsetEnv = unsetEnv;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#unsetEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unsetEnv(self: KProcess, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KProcess_UnsetEnv(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clearEnvironment` instead
    ///
    pub const ClearEnvironment = clearEnvironment;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn clearEnvironment(self: KProcess) void {
        qtc.KProcess_ClearEnvironment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgram` instead
    ///
    pub const SetProgram = setProgram;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` exe: []const u8 `
    ///
    pub fn setProgram(self: KProcess, exe: []const u8) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        qtc.KProcess_SetProgram(@ptrCast(self.ptr), exe_str);
    }

    /// ### DEPRECATED: Use `setProgram2` instead
    ///
    pub const SetProgram2 = setProgram2;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    pub fn setProgram2(self: KProcess, allocator: std.mem.Allocator, argv: []const []const u8) void {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("KProcess.setProgram2: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |str_item, i|
            argv_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        qtc.KProcess_SetProgram2(@ptrCast(self.ptr), argv_list);
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn operatorShiftLeft(self: KProcess, arg: []const u8) KProcess {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.KProcess_OperatorShiftLeft(@ptrCast(self.ptr), arg_str) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn operatorShiftLeft2(self: KProcess, allocator: std.mem.Allocator, args: []const []const u8) KProcess {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KProcess.operatorShiftLeft2: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return .{ .ptr = qtc.KProcess_OperatorShiftLeft2(@ptrCast(self.ptr), args_list) };
    }

    /// ### DEPRECATED: Use `clearProgram` instead
    ///
    pub const ClearProgram = clearProgram;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn clearProgram(self: KProcess) void {
        qtc.KProcess_ClearProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShellCommand` instead
    ///
    pub const SetShellCommand = setShellCommand;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setShellCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn setShellCommand(self: KProcess, cmd: []const u8) void {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        qtc.KProcess_SetShellCommand(@ptrCast(self.ptr), cmd_str);
    }

    /// ### DEPRECATED: Use `program` instead
    ///
    pub const Program = program;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#program)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn program(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KProcess_Program(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProcess.program: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.program: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn start(self: KProcess) void {
        qtc.KProcess_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `execute` instead
    ///
    pub const Execute = execute;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn execute(self: KProcess) i32 {
        return qtc.KProcess_Execute(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `execute2` instead
    ///
    pub const Execute2 = execute2;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    pub fn execute2(exe: []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        return qtc.KProcess_Execute2(exe_str);
    }

    /// ### DEPRECATED: Use `execute3` instead
    ///
    pub const Execute3 = execute3;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    pub fn execute3(allocator: std.mem.Allocator, argv: []const []const u8) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("KProcess.execute3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |str_item, i|
            argv_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_Execute3(argv_list);
    }

    /// ### DEPRECATED: Use `startDetached` instead
    ///
    pub const StartDetached = startDetached;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn startDetached(self: KProcess) i32 {
        return qtc.KProcess_StartDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startDetached2` instead
    ///
    pub const StartDetached2 = startDetached2;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    pub fn startDetached2(exe: []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        return qtc.KProcess_StartDetached2(exe_str);
    }

    /// ### DEPRECATED: Use `startDetached3` instead
    ///
    pub const StartDetached3 = startDetached3;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    pub fn startDetached3(allocator: std.mem.Allocator, argv: []const []const u8) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("KProcess.startDetached3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |str_item, i|
            argv_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_StartDetached3(argv_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEnv3` instead
    ///
    pub const SetEnv3 = setEnv3;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setEnv3(self: KProcess, name: []const u8, value: []const u8, overwrite: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KProcess_SetEnv3(@ptrCast(self.ptr), name_str, value_str, overwrite);
    }

    /// ### DEPRECATED: Use `setProgram22` instead
    ///
    pub const SetProgram22 = setProgram22;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn setProgram22(self: KProcess, allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KProcess.setProgram22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.KProcess_SetProgram22(@ptrCast(self.ptr), exe_str, args_list);
    }

    /// ### DEPRECATED: Use `execute1` instead
    ///
    pub const Execute1 = execute1;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn execute1(self: KProcess, msecs: i32) i32 {
        return qtc.KProcess_Execute1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `execute22` instead
    ///
    pub const Execute22 = execute22;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn execute22(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KProcess.execute22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_Execute22(exe_str, args_list);
    }

    /// ### DEPRECATED: Use `execute32` instead
    ///
    pub const Execute32 = execute32;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: []const []const u8 `
    ///
    /// ` msecs: i32 `
    ///
    pub fn execute32(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8, msecs: i32) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KProcess.execute32: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_Execute32(exe_str, args_list, @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `execute23` instead
    ///
    pub const Execute23 = execute23;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    /// ` msecs: i32 `
    ///
    pub fn execute23(allocator: std.mem.Allocator, argv: []const []const u8, msecs: i32) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("KProcess.execute23: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |str_item, i|
            argv_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_Execute23(argv_list, @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `startDetached22` instead
    ///
    pub const StartDetached22 = startDetached22;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn startDetached22(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("KProcess.startDetached22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_StartDetached22(exe_str, args_list);
    }

    /// ### DEPRECATED: Use `start2` instead
    ///
    pub const Start2 = start2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn start2(self: KProcess) void {
        qtc.QProcess_Start2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startCommand` instead
    ///
    pub const StartCommand = startCommand;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` command: []const u8 `
    ///
    pub fn startCommand(self: KProcess, command: []const u8) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self.ptr), command_str);
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn arguments(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Arguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProcess.arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.arguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setArguments` instead
    ///
    pub const SetArguments = setArguments;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    pub fn setArguments(self: KProcess, allocator: std.mem.Allocator, _arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("KProcess.setArguments: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (_arguments, 0.._arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_SetArguments(@ptrCast(self.ptr), arguments_list);
    }

    /// ### DEPRECATED: Use `processChannelMode` instead
    ///
    pub const ProcessChannelMode = processChannelMode;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannelMode `
    ///
    pub fn processChannelMode(self: KProcess) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProcessChannelMode` instead
    ///
    pub const SetProcessChannelMode = setProcessChannelMode;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: qprocess_enums.ProcessChannelMode `
    ///
    pub fn setProcessChannelMode(self: KProcess, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `inputChannelMode` instead
    ///
    pub const InputChannelMode = inputChannelMode;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.InputChannelMode `
    ///
    pub fn inputChannelMode(self: KProcess) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputChannelMode` instead
    ///
    pub const SetInputChannelMode = setInputChannelMode;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: qprocess_enums.InputChannelMode `
    ///
    pub fn setInputChannelMode(self: KProcess, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `readChannel` instead
    ///
    pub const ReadChannel = readChannel;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannel `
    ///
    pub fn readChannel(self: KProcess) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadChannel` instead
    ///
    pub const SetReadChannel = setReadChannel;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn setReadChannel(self: KProcess, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `closeReadChannel` instead
    ///
    pub const CloseReadChannel = closeReadChannel;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn closeReadChannel(self: KProcess, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `closeWriteChannel` instead
    ///
    pub const CloseWriteChannel = closeWriteChannel;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn closeWriteChannel(self: KProcess) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStandardInputFile` instead
    ///
    pub const SetStandardInputFile = setStandardInputFile;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardInputFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardOutputFile` instead
    ///
    pub const SetStandardOutputFile = setStandardOutputFile;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardOutputFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardErrorFile` instead
    ///
    pub const SetStandardErrorFile = setStandardErrorFile;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardErrorFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardOutputProcess` instead
    ///
    pub const SetStandardOutputProcess = setStandardOutputProcess;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` destination: QProcess `
    ///
    pub fn setStandardOutputProcess(self: KProcess, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QProcess;
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

    /// ### DEPRECATED: Use `setChildProcessModifier` instead
    ///
    pub const SetChildProcessModifier = setChildProcessModifier;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` modifier: *const fn () callconv(.c) void `
    ///
    pub fn setChildProcessModifier(self: KProcess, modifier: *const fn () callconv(.c) void) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        qtc.QProcess_SetChildProcessModifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(modifier)));
    }

    /// ### DEPRECATED: Use `failChildProcessModifier` instead
    ///
    pub const FailChildProcessModifier = failChildProcessModifier;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    pub fn failChildProcessModifier(self: KProcess, description: [:0]const u8) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self.ptr), description_Cstring);
    }

    /// ### DEPRECATED: Use `unixProcessParameters` instead
    ///
    pub const UnixProcessParameters = unixProcessParameters;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn unixProcessParameters(self: KProcess) QProcess__UnixProcessParameters {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        return .{ .ptr = qtc.QProcess_UnixProcessParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUnixProcessParameters` instead
    ///
    pub const SetUnixProcessParameters = setUnixProcessParameters;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` params: QProcess__UnixProcessParameters `
    ///
    pub fn setUnixProcessParameters(self: KProcess, params: anytype) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        comptime _ = @TypeOf(params)._is_QProcess__UnixProcessParameters;
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### DEPRECATED: Use `setUnixProcessParameters2` instead
    ///
    pub const SetUnixProcessParameters2 = setUnixProcessParameters2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` flagsOnly: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn setUnixProcessParameters2(self: KProcess, flagsOnly: u32) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self.ptr), @bitCast(flagsOnly));
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn setWorkingDirectory(self: KProcess, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `setEnvironment` instead
    ///
    pub const SetEnvironment = setEnvironment;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _environment: []const []const u8 `
    ///
    pub fn setEnvironment(self: KProcess, allocator: std.mem.Allocator, _environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, _environment.len) catch @panic("KProcess.setEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (_environment, 0.._environment.len) |str_item, i|
            environment_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const environment_list = qtc.libqt_list{
            .len = _environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QProcess_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### DEPRECATED: Use `environment` instead
    ///
    pub const Environment = environment;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn environment(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Environment(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProcess.environment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.environment: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setProcessEnvironment` instead
    ///
    pub const SetProcessEnvironment = setProcessEnvironment;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _environment: QProcessEnvironment `
    ///
    pub fn setProcessEnvironment(self: KProcess, _environment: anytype) void {
        comptime _ = @TypeOf(_environment)._is_QProcessEnvironment;
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self.ptr), @ptrCast(_environment.ptr));
    }

    /// ### DEPRECATED: Use `processEnvironment` instead
    ///
    pub const ProcessEnvironment = processEnvironment;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn processEnvironment(self: KProcess) QProcessEnvironment {
        return .{ .ptr = qtc.QProcess_ProcessEnvironment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessError `
    ///
    pub fn error0(self: KProcess) i32 {
        return qtc.QProcess_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessState `
    ///
    pub fn state(self: KProcess) i32 {
        return qtc.QProcess_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `processId` instead
    ///
    pub const ProcessId = processId;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn processId(self: KProcess) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForStarted` instead
    ///
    pub const WaitForStarted = waitForStarted;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn waitForStarted(self: KProcess) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn waitForFinished(self: KProcess) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readAllStandardOutput` instead
    ///
    pub const ReadAllStandardOutput = readAllStandardOutput;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllStandardOutput(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.readAllStandardOutput: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAllStandardError` instead
    ///
    pub const ReadAllStandardError = readAllStandardError;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllStandardError(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.readAllStandardError: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exitCode` instead
    ///
    pub const ExitCode = exitCode;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn exitCode(self: KProcess) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exitStatus` instead
    ///
    pub const ExitStatus = exitStatus;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ExitStatus `
    ///
    pub fn exitStatus(self: KProcess) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `systemEnvironment` instead
    ///
    pub const SystemEnvironment = systemEnvironment;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemEnvironment(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_SystemEnvironment();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProcess.systemEnvironment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.systemEnvironment: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `nullDevice` instead
    ///
    pub const NullDevice = nullDevice;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nullDevice(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_NullDevice();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.nullDevice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `splitCommand` instead
    ///
    pub const SplitCommand = splitCommand;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#splitCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` command: []const u8 `
    ///
    pub fn splitCommand(allocator: std.mem.Allocator, command: []const u8) []const []const u8 {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QProcess_SplitCommand(command_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProcess.splitCommand: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.splitCommand: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `terminate` instead
    ///
    pub const Terminate = terminate;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn terminate(self: KProcess) void {
        qtc.QProcess_Terminate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn kill(self: KProcess) void {
        qtc.QProcess_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _exitCode: i32 `
    ///
    pub fn finished(self: KProcess, _exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self.ptr), @bitCast(_exitCode));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, exitCode: i32) callconv(.c) void `
    ///
    pub fn onFinished(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` errorVal: qprocess_enums.ProcessError `
    ///
    pub fn errorOccurred(self: KProcess, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, errorVal: qprocess_enums.ProcessError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start22` instead
    ///
    pub const Start22 = start22;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    pub fn start22(self: KProcess, allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("KProcess.start22: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (_arguments, 0.._arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start22(@ptrCast(self.ptr), program_str, arguments_list);
    }

    /// ### DEPRECATED: Use `start3` instead
    ///
    pub const Start3 = start3;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn start3(self: KProcess, allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8, mode: i32) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("KProcess.start3: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (_arguments, 0.._arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start3(@ptrCast(self.ptr), program_str, arguments_list, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `start1` instead
    ///
    pub const Start1 = start1;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn start1(self: KProcess, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startCommand2` instead
    ///
    pub const StartCommand2 = startCommand2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` command: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn startCommand2(self: KProcess, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self.ptr), command_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startDetached1` instead
    ///
    pub const StartDetached1 = startDetached1;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` pid: *i64 `
    ///
    pub fn startDetached1(self: KProcess, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self.ptr), @ptrCast(pid));
    }

    /// ### DEPRECATED: Use `setStandardOutputFile2` instead
    ///
    pub const SetStandardOutputFile2 = setStandardOutputFile2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setStandardOutputFile2(self: KProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setStandardErrorFile2` instead
    ///
    pub const SetStandardErrorFile2 = setStandardErrorFile2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setStandardErrorFile2(self: KProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `failChildProcessModifier2` instead
    ///
    pub const FailChildProcessModifier2 = failChildProcessModifier2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    /// ` errorVal: i32 `
    ///
    pub fn failChildProcessModifier2(self: KProcess, description: [:0]const u8, errorVal: i32) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self.ptr), description_Cstring, @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `waitForStarted1` instead
    ///
    pub const WaitForStarted1 = waitForStarted1;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForStarted1(self: KProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForFinished1` instead
    ///
    pub const WaitForFinished1 = waitForFinished1;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForFinished1(self: KProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `startDetached4` instead
    ///
    pub const StartDetached4 = startDetached4;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    /// ` _workingDirectory: []const u8 `
    ///
    /// ` pid: *i64 `
    ///
    pub fn startDetached4(allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8, _workingDirectory: []const u8, pid: *i64) bool {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("KProcess.startDetached4: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (_arguments, 0.._arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = _workingDirectory.len,
            .data = _workingDirectory.ptr,
        };
        return qtc.QProcess_StartDetached4(program_str, arguments_list, workingDirectory_str, @ptrCast(pid));
    }

    /// ### DEPRECATED: Use `finished2` instead
    ///
    pub const Finished2 = finished2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _exitCode: i32 `
    ///
    /// ` _exitStatus: qprocess_enums.ExitStatus `
    ///
    pub fn finished2(self: KProcess, _exitCode: i32, _exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self.ptr), @bitCast(_exitCode), @bitCast(_exitStatus));
    }

    /// ### DEPRECATED: Use `onFinished2` instead
    ///
    pub const OnFinished2 = onFinished2;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus) callconv(.c) void `
    ///
    pub fn onFinished2(self: KProcess, callback: *const fn (KProcess, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// Upcasts to a QIODeviceBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn asQIODeviceBase(self: KProcess) QIODeviceBase {
        return .{ .ptr = qtc.QIODevice_AsQIODeviceBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openMode` instead
    ///
    pub const OpenMode = openMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openMode(self: KProcess) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextModeEnabled` instead
    ///
    pub const SetTextModeEnabled = setTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTextModeEnabled(self: KProcess, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isTextModeEnabled` instead
    ///
    pub const IsTextModeEnabled = isTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isTextModeEnabled(self: KProcess) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isOpen(self: KProcess) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isReadable(self: KProcess) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isWritable(self: KProcess) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readChannelCount` instead
    ///
    pub const ReadChannelCount = readChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn readChannelCount(self: KProcess) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeChannelCount` instead
    ///
    pub const WriteChannelCount = writeChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn writeChannelCount(self: KProcess) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentReadChannel` instead
    ///
    pub const CurrentReadChannel = currentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn currentReadChannel(self: KProcess) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentReadChannel` instead
    ///
    pub const SetCurrentReadChannel = setCurrentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentReadChannel(self: KProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `currentWriteChannel` instead
    ///
    pub const CurrentWriteChannel = currentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn currentWriteChannel(self: KProcess) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentWriteChannel` instead
    ///
    pub const SetCurrentWriteChannel = setCurrentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentWriteChannel(self: KProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read2(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.readAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `readLine2` instead
    ///
    pub const ReadLine2 = readLine2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine2(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.readLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn startTransaction(self: KProcess) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn commitTransaction(self: KProcess) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn rollbackTransaction(self: KProcess) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransactionStarted` instead
    ///
    pub const IsTransactionStarted = isTransactionStarted;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isTransactionStarted(self: KProcess) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn write(self: KProcess, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn write2(self: KProcess, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: []u8 `
    ///
    pub fn write3(self: KProcess, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `peek` instead
    ///
    pub const Peek = peek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `peek2` instead
    ///
    pub const Peek2 = peek2;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek2(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `skip` instead
    ///
    pub const Skip = skip;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skip(self: KProcess, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `ungetChar` instead
    ///
    pub const UngetChar = ungetChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn ungetChar(self: KProcess, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `putChar` instead
    ///
    pub const PutChar = putChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn putChar(self: KProcess, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `getChar` instead
    ///
    pub const GetChar = getChar;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn getChar(self: KProcess, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readyRead` instead
    ///
    pub const ReadyRead = readyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn readyRead(self: KProcess) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyRead` instead
    ///
    pub const OnReadyRead = onReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onReadyRead(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelReadyRead` instead
    ///
    pub const ChannelReadyRead = channelReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn channelReadyRead(self: KProcess, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `onChannelReadyRead` instead
    ///
    pub const OnChannelReadyRead = onChannelReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, channel: i32) callconv(.c) void `
    ///
    pub fn onChannelReadyRead(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: KProcess, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelBytesWritten` instead
    ///
    pub const ChannelBytesWritten = channelBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn channelBytesWritten(self: KProcess, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onChannelBytesWritten` instead
    ///
    pub const OnChannelBytesWritten = onChannelBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn onChannelBytesWritten(self: KProcess, callback: *const fn (KProcess, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn aboutToClose(self: KProcess) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn readChannelFinished(self: KProcess) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine1(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KProcess.readLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
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
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProcess.objectName: Memory allocation failed");
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
    /// ` self: KProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KProcess, name: []const u8) void {
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
    /// ` self: KProcess `
    ///
    pub fn isWidgetType(self: KProcess) bool {
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
    /// ` self: KProcess `
    ///
    pub fn isWindowType(self: KProcess) bool {
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
    /// ` self: KProcess `
    ///
    pub fn isQuickItemType(self: KProcess) bool {
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
    /// ` self: KProcess `
    ///
    pub fn signalsBlocked(self: KProcess) bool {
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
    /// ` self: KProcess `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KProcess, b: bool) bool {
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
    /// ` self: KProcess `
    ///
    pub fn thread(self: KProcess) QThread {
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
    /// ` self: KProcess `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KProcess, _thread: anytype) bool {
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
    /// ` self: KProcess `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KProcess, interval: i32) i32 {
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
    /// ` self: KProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KProcess, time: i64) i32 {
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
    /// ` self: KProcess `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KProcess, id: i32) void {
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
    /// ` self: KProcess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KProcess, id: i32) void {
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
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KProcess, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KProcess.children: Memory allocation failed");
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
    /// ` self: KProcess `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KProcess, _parent: anytype) void {
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
    /// ` self: KProcess `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KProcess, filterObj: anytype) void {
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
    /// ` self: KProcess `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KProcess, obj: anytype) void {
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
    /// ` self: KProcess `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KProcess, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KProcess `
    ///
    pub fn disconnect3(self: KProcess) bool {
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
    /// ` self: KProcess `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KProcess, receiver: anytype) bool {
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
    /// ` self: KProcess `
    ///
    pub fn dumpObjectTree(self: KProcess) void {
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
    /// ` self: KProcess `
    ///
    pub fn dumpObjectInfo(self: KProcess) void {
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
    /// ` self: KProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KProcess, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KProcess, name: [:0]const u8) QVariant {
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
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KProcess, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KProcess.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProcess.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KProcess `
    ///
    pub fn bindingStorage(self: KProcess) QBindingStorage {
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
    /// ` self: KProcess `
    ///
    pub fn bindingStorage2(self: KProcess) QBindingStorage {
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
    /// ` self: KProcess `
    ///
    pub fn destroyed(self: KProcess) void {
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
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
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
    /// ` self: KProcess `
    ///
    pub fn parent(self: KProcess) QObject {
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
    /// ` self: KProcess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KProcess, classname: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    pub fn deleteLater(self: KProcess) void {
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
    /// ` self: KProcess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KProcess, interval: i32, timerType: i32) i32 {
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
    /// ` self: KProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KProcess, time: i64, timerType: i32) i32 {
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
    /// ` self: KProcess `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KProcess, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KProcess, signal: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KProcess, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KProcess, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KProcess, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KProcess, param1: anytype) void {
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
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KProcess, callback: *const fn (KProcess, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KProcess, mode: i32) bool {
        return qtc.KProcess_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: KProcess, mode: i32) bool {
        return qtc.KProcess_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForReadyRead(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForReadyRead(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForReadyRead(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForBytesWritten(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForBytesWritten(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForBytesWritten(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn bytesToWrite(self: KProcess) i64 {
        return qtc.KProcess_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superBytesToWrite(self: KProcess) i64 {
        return qtc.KProcess_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesToWrite(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn isSequential(self: KProcess) bool {
        return qtc.KProcess_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superIsSequential(self: KProcess) bool {
        return qtc.KProcess_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSequential(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn close(self: KProcess) void {
        qtc.KProcess_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superClose(self: KProcess) void {
        qtc.KProcess_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClose(self: KProcess, callback: *const fn () callconv(.c) void) void {
        qtc.KProcess_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn superReadData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn onReadData(self: KProcess, callback: *const fn (KProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeData(self: KProcess, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn superWriteData(self: KProcess, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, data: [*:0]const u8, len: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: KProcess, callback: *const fn (KProcess, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KProcess_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn pos(self: KProcess) i64 {
        return qtc.KProcess_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPos` instead
    ///
    pub const SuperPos = superPos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superPos(self: KProcess) i64 {
        return qtc.KProcess_SuperPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPos` instead
    ///
    pub const OnPos = onPos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onPos(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn size(self: KProcess) i64 {
        return qtc.KProcess_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superSize(self: KProcess) i64 {
        return qtc.KProcess_SuperSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onSize(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: KProcess, _pos: i64) bool {
        return qtc.KProcess_Seek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _pos: i64 `
    ///
    pub fn superSeek(self: KProcess, _pos: i64) bool {
        return qtc.KProcess_SuperSeek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, pos: i64) callconv(.c) bool `
    ///
    pub fn onSeek(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) bool) void {
        qtc.KProcess_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn atEnd(self: KProcess) bool {
        return qtc.KProcess_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAtEnd` instead
    ///
    pub const SuperAtEnd = superAtEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superAtEnd(self: KProcess) bool {
        return qtc.KProcess_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAtEnd` instead
    ///
    pub const OnAtEnd = onAtEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onAtEnd(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn reset(self: KProcess) bool {
        return qtc.KProcess_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superReset(self: KProcess) bool {
        return qtc.KProcess_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReset(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn bytesAvailable(self: KProcess) i64 {
        return qtc.KProcess_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superBytesAvailable(self: KProcess) i64 {
        return qtc.KProcess_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesAvailable(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn canReadLine(self: KProcess) bool {
        return qtc.KProcess_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn superCanReadLine(self: KProcess) bool {
        return qtc.KProcess_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCanReadLine(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLineData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn superReadLineData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn onReadLineData(self: KProcess, callback: *const fn (KProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skipData(self: KProcess, maxSize: i64) i64 {
        return qtc.KProcess_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn superSkipData(self: KProcess, maxSize: i64) i64 {
        return qtc.KProcess_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn onSkipData(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) i64) void {
        qtc.KProcess_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KProcess, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KProcess_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KProcess, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KProcess_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KProcess, callback: *const fn (KProcess, QEvent) callconv(.c) bool) void {
        qtc.KProcess_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KProcess, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KProcess_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KProcess, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KProcess_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KProcess, callback: *const fn (KProcess, QObject, QEvent) callconv(.c) bool) void {
        qtc.KProcess_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KProcess_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KProcess_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KProcess, callback: *const fn (KProcess, QTimerEvent) callconv(.c) void) void {
        qtc.KProcess_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KProcess_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KProcess_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KProcess, callback: *const fn (KProcess, QChildEvent) callconv(.c) void) void {
        qtc.KProcess_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KProcess_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KProcess_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KProcess, callback: *const fn (KProcess, QEvent) callconv(.c) void) void {
        qtc.KProcess_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) void) void {
        qtc.KProcess_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) void) void {
        qtc.KProcess_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProcessState` instead
    ///
    pub const SetProcessState = setProcessState;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _state: qprocess_enums.ProcessState `
    ///
    pub fn setProcessState(self: KProcess, _state: i32) void {
        qtc.KProcess_SetProcessState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `superSetProcessState` instead
    ///
    pub const SuperSetProcessState = superSetProcessState;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _state: qprocess_enums.ProcessState `
    ///
    pub fn superSetProcessState(self: KProcess, _state: i32) void {
        qtc.KProcess_SuperSetProcessState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetProcessState` instead
    ///
    pub const OnSetProcessState = onSetProcessState;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn onSetProcessState(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetProcessState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpenMode` instead
    ///
    pub const SetOpenMode = setOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: KProcess, _openMode: i32) void {
        qtc.KProcess_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `superSetOpenMode` instead
    ///
    pub const SuperSetOpenMode = superSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: KProcess, _openMode: i32) void {
        qtc.KProcess_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onSetOpenMode` instead
    ///
    pub const OnSetOpenMode = onSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn onSetOpenMode(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: KProcess, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.KProcess_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `superSetErrorString` instead
    ///
    pub const SuperSetErrorString = superSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: KProcess, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.KProcess_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetErrorString` instead
    ///
    pub const OnSetErrorString = onSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.KProcess_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    pub fn sender(self: KProcess) QObject {
        return .{ .ptr = qtc.KProcess_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KProcess `
    ///
    pub fn superSender(self: KProcess) QObject {
        return .{ .ptr = qtc.KProcess_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KProcess, callback: *const fn () callconv(.c) QObject) void {
        qtc.KProcess_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    pub fn senderSignalIndex(self: KProcess) i32 {
        return qtc.KProcess_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KProcess `
    ///
    pub fn superSenderSignalIndex(self: KProcess) i32 {
        return qtc.KProcess_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KProcess, callback: *const fn () callconv(.c) i32) void {
        qtc.KProcess_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) i32) void {
        qtc.KProcess_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KProcess_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KProcess_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess`
    ///
    /// ` callback: *const fn (self: KProcess, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) bool) void {
        qtc.KProcess_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onStarted(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onReadyReadStandardOutput` instead
    ///
    pub const OnReadyReadStandardOutput = onReadyReadStandardOutput;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onReadyReadStandardOutput(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onReadyReadStandardError` instead
    ///
    pub const OnReadyReadStandardError = onReadyReadStandardError;

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess) callconv(.c) void `
    ///
    pub fn onReadyReadStandardError(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#dtor.KProcess)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KProcess `
    ///
    pub fn delete(self: KProcess) void {
        qtc.KProcess_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprocess.html#public-types)
pub const enums = struct {
    pub const OutputChannelMode = enum {
        pub const SeparateChannels: i32 = 0;
        pub const MergedChannels: i32 = 1;
        pub const ForwardedChannels: i32 = 2;
        pub const OnlyStdoutChannel: i32 = 4;
        pub const OnlyStderrChannel: i32 = 3;
    };
};
