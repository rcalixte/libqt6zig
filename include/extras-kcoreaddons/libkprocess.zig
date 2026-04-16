const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
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

    /// New constructs a new KProcess object.
    ///
    pub fn New() KProcess {
        return .{ .ptr = qtc.KProcess_new() };
    }

    /// New2 constructs a new KProcess object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KProcess {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KProcess_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn MetaObject(self: KProcess) QMetaObject {
        return .{ .ptr = qtc.KProcess_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KProcess, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KProcess_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KProcess `
    ///
    pub fn SuperMetaObject(self: KProcess) QMetaObject {
        return .{ .ptr = qtc.KProcess_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KProcess_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KProcess `
    ///
    /// ` callback: *const fn (self: KProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KProcess, callback: *const fn (KProcess, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KProcess_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setOutputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: kprocess_enums.OutputChannelMode `
    ///
    pub fn SetOutputChannelMode(self: KProcess, mode: i32) void {
        qtc.KProcess_SetOutputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OutputChannelMode(self: KProcess) i32 {
        return qtc.KProcess_OutputChannelMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setNextOpenMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetNextOpenMode(self: KProcess, mode: i32) void {
        qtc.KProcess_SetNextOpenMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn SetEnv(self: KProcess, name: []const u8, value: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#unsetEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnsetEnv(self: KProcess, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KProcess_UnsetEnv(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ClearEnvironment(self: KProcess) void {
        qtc.KProcess_ClearEnvironment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` exe: []const u8 `
    ///
    pub fn SetProgram(self: KProcess, exe: []const u8) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        qtc.KProcess_SetProgram(@ptrCast(self.ptr), exe_str);
    }

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
    pub fn SetProgram2(self: KProcess, allocator: std.mem.Allocator, argv: []const []const u8) void {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.SetProgram2: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i|
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        qtc.KProcess_SetProgram2(@ptrCast(self.ptr), argv_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn OperatorShiftLeft(self: KProcess, arg: []const u8) KProcess {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return .{ .ptr = qtc.KProcess_OperatorShiftLeft(@ptrCast(self.ptr), arg_str) };
    }

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
    pub fn OperatorShiftLeft2(self: KProcess, allocator: std.mem.Allocator, args: []const []const u8) KProcess {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.OperatorShiftLeft2: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return .{ .ptr = qtc.KProcess_OperatorShiftLeft2(@ptrCast(self.ptr), args_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ClearProgram(self: KProcess) void {
        qtc.KProcess_ClearProgram(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setShellCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn SetShellCommand(self: KProcess, cmd: []const u8) void {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        qtc.KProcess_SetShellCommand(@ptrCast(self.ptr), cmd_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#program)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Program(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KProcess_Program(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprocess.Program: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprocess.Program: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Start(self: KProcess) void {
        qtc.KProcess_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Execute(self: KProcess) i32 {
        return qtc.KProcess_Execute(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    pub fn Execute2(exe: []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        return qtc.KProcess_Execute2(exe_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    pub fn Execute3(allocator: std.mem.Allocator, argv: []const []const u8) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.Execute3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i|
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_Execute3(argv_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn StartDetached(self: KProcess) i32 {
        return qtc.KProcess_StartDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    pub fn StartDetached2(exe: []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        return qtc.KProcess_StartDetached2(exe_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argv: []const []const u8 `
    ///
    pub fn StartDetached3(allocator: std.mem.Allocator, argv: []const []const u8) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.StartDetached3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i|
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_StartDetached3(argv_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetEnv3(self: KProcess, name: []const u8, value: []const u8, overwrite: bool) void {
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
    pub fn SetProgram22(self: KProcess, allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.SetProgram22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.KProcess_SetProgram22(@ptrCast(self.ptr), exe_str, args_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn Execute1(self: KProcess, msecs: i32) i32 {
        return qtc.KProcess_Execute1(@ptrCast(self.ptr), @bitCast(msecs));
    }

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
    pub fn Execute22(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.Execute22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_Execute22(exe_str, args_list);
    }

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
    pub fn Execute32(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8, msecs: i32) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.Execute32: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_Execute32(exe_str, args_list, @bitCast(msecs));
    }

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
    pub fn Execute23(allocator: std.mem.Allocator, argv: []const []const u8, msecs: i32) i32 {
        const argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.Execute23: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i|
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_Execute23(argv_list, @bitCast(msecs));
    }

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
    pub fn StartDetached22(allocator: std.mem.Allocator, exe: []const u8, args: []const []const u8) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.StartDetached22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_StartDetached22(exe_str, args_list);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Start2(self: KProcess) void {
        qtc.QProcess_Start2(@ptrCast(self.ptr));
    }

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
    pub fn StartCommand(self: KProcess, command: []const u8) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self.ptr), command_str);
    }

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
    pub fn Arguments(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Arguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprocess.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprocess.Arguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    /// ` arguments: []const []const u8 `
    ///
    pub fn SetArguments(self: KProcess, allocator: std.mem.Allocator, arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.SetArguments: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_SetArguments(@ptrCast(self.ptr), arguments_list);
    }

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
    pub fn ProcessChannelMode(self: KProcess) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self.ptr));
    }

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
    pub fn SetProcessChannelMode(self: KProcess, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn InputChannelMode(self: KProcess) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self.ptr));
    }

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
    pub fn SetInputChannelMode(self: KProcess, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn ReadChannel(self: KProcess) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self.ptr));
    }

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
    pub fn SetReadChannel(self: KProcess, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

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
    pub fn CloseReadChannel(self: KProcess, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn CloseWriteChannel(self: KProcess) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self.ptr));
    }

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
    pub fn SetStandardInputFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self.ptr), fileName_str);
    }

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
    pub fn SetStandardOutputFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self.ptr), fileName_str);
    }

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
    pub fn SetStandardErrorFile(self: KProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self.ptr), fileName_str);
    }

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
    pub fn SetStandardOutputProcess(self: KProcess, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QProcess;
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

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
    pub fn SetChildProcessModifier(self: KProcess, modifier: *const fn () callconv(.c) void) void {
        qtc.QProcess_SetChildProcessModifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(modifier)));
    }

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
    pub fn FailChildProcessModifier(self: KProcess, description: [:0]const u8) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self.ptr), description_Cstring);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn UnixProcessParameters(self: KProcess) QProcess__UnixProcessParameters {
        return .{ .ptr = qtc.QProcess_UnixProcessParameters(@ptrCast(self.ptr)) };
    }

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
    pub fn SetUnixProcessParameters(self: KProcess, params: anytype) void {
        comptime _ = @TypeOf(params)._is_QProcess__UnixProcessParameters;
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

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
    pub fn SetUnixProcessParameters2(self: KProcess, flagsOnly: u32) void {
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self.ptr), @bitCast(flagsOnly));
    }

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
    pub fn WorkingDirectory(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWorkingDirectory(self: KProcess, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

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
    /// ` environment: []const []const u8 `
    ///
    pub fn SetEnvironment(self: KProcess, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("kprocess.SetEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, i|
            environment_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const environment_list = qtc.libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QProcess_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

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
    pub fn Environment(self: KProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Environment(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprocess.Environment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprocess.Environment: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` environment: QProcessEnvironment `
    ///
    pub fn SetProcessEnvironment(self: KProcess, environment: anytype) void {
        comptime _ = @TypeOf(environment)._is_QProcessEnvironment;
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self.ptr), @ptrCast(environment.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ProcessEnvironment(self: KProcess) QProcessEnvironment {
        return .{ .ptr = qtc.QProcess_ProcessEnvironment(@ptrCast(self.ptr)) };
    }

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
    pub fn Error(self: KProcess) i32 {
        return qtc.QProcess_Error(@ptrCast(self.ptr));
    }

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
    pub fn State(self: KProcess) i32 {
        return qtc.QProcess_State(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ProcessId(self: KProcess) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn WaitForStarted(self: KProcess) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn WaitForFinished(self: KProcess) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self.ptr));
    }

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
    pub fn ReadAllStandardOutput(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.ReadAllStandardOutput: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ReadAllStandardError(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.ReadAllStandardError: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ExitCode(self: KProcess) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self.ptr));
    }

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
    pub fn ExitStatus(self: KProcess) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemEnvironment(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_SystemEnvironment();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprocess.SystemEnvironment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprocess.SystemEnvironment: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NullDevice(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_NullDevice();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.NullDevice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Terminate(self: KProcess) void {
        qtc.QProcess_Terminate(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Kill(self: KProcess) void {
        qtc.QProcess_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn Finished(self: KProcess, exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self.ptr), @bitCast(exitCode));
    }

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
    pub fn OnFinished(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ErrorOccurred(self: KProcess, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

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
    pub fn OnErrorOccurred(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn Start22(self: KProcess, allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.Start22: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start22(@ptrCast(self.ptr), program_str, arguments_list);
    }

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
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Start3(self: KProcess, allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8, mode: i32) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.Start3: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start3(@ptrCast(self.ptr), program_str, arguments_list, @bitCast(mode));
    }

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
    pub fn Start1(self: KProcess, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn StartCommand2(self: KProcess, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self.ptr), command_str, @bitCast(mode));
    }

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
    pub fn StartDetached1(self: KProcess, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self.ptr), @ptrCast(pid));
    }

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
    pub fn SetStandardOutputFile2(self: KProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

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
    pub fn SetStandardErrorFile2(self: KProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

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
    pub fn FailChildProcessModifier2(self: KProcess, description: [:0]const u8, errorVal: i32) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self.ptr), description_Cstring, @bitCast(errorVal));
    }

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
    pub fn WaitForStarted1(self: KProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

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
    pub fn WaitForFinished1(self: KProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    /// ` pid: *i64 `
    ///
    pub fn StartDetached4(allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8, workingDirectory: []const u8, pid: *i64) bool {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.StartDetached4: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return qtc.QProcess_StartDetached4(program_str, arguments_list, workingDirectory_str, @ptrCast(pid));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` exitCode: i32 `
    ///
    /// ` exitStatus: qprocess_enums.ExitStatus `
    ///
    pub fn Finished2(self: KProcess, exitCode: i32, exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self.ptr), @bitCast(exitCode), @bitCast(exitStatus));
    }

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
    pub fn OnFinished2(self: KProcess, callback: *const fn (KProcess, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OpenMode(self: KProcess) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

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
    pub fn SetTextModeEnabled(self: KProcess, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsTextModeEnabled(self: KProcess) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsOpen(self: KProcess) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsReadable(self: KProcess) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsWritable(self: KProcess) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ReadChannelCount(self: KProcess) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn WriteChannelCount(self: KProcess) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn CurrentReadChannel(self: KProcess) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

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
    pub fn SetCurrentReadChannel(self: KProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn CurrentWriteChannel(self: KProcess) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

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
    pub fn SetCurrentWriteChannel(self: KProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

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
    pub fn Read(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

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
    pub fn Read2(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ReadAll(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ReadLine(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

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
    pub fn ReadLine2(self: KProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn StartTransaction(self: KProcess) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn CommitTransaction(self: KProcess) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn RollbackTransaction(self: KProcess) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsTransactionStarted(self: KProcess) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

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
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: KProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

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
    pub fn Write2(self: KProcess, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

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
    pub fn Write3(self: KProcess, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

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
    pub fn Peek(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

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
    pub fn Peek2(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn Skip(self: KProcess, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

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
    pub fn UngetChar(self: KProcess, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

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
    pub fn PutChar(self: KProcess, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

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
    pub fn GetChar(self: KProcess, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

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
    pub fn ErrorString(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ReadyRead(self: KProcess) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

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
    pub fn OnReadyRead(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChannelReadyRead(self: KProcess, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

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
    pub fn OnChannelReadyRead(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BytesWritten(self: KProcess, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

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
    pub fn OnBytesWritten(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChannelBytesWritten(self: KProcess, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

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
    pub fn OnChannelBytesWritten(self: KProcess, callback: *const fn (KProcess, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn AboutToClose(self: KProcess) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

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
    pub fn OnAboutToClose(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn ReadChannelFinished(self: KProcess) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

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
    pub fn OnReadChannelFinished(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReadLine1(self: KProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kprocess.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: KProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KProcess, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsWidgetType(self: KProcess) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsWindowType(self: KProcess) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn IsQuickItemType(self: KProcess) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn SignalsBlocked(self: KProcess) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KProcess, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Thread(self: KProcess) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KProcess, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KProcess, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KProcess, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KProcess, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KProcess, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KProcess, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kprocess.Children: Memory allocation failed");
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
    /// ` self: KProcess `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KProcess, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KProcess, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KProcess, obj: anytype) void {
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
    /// ` self: KProcess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KProcess, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KProcess `
    ///
    pub fn Disconnect3(self: KProcess) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KProcess, receiver: anytype) bool {
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
    /// ` self: KProcess `
    ///
    pub fn DumpObjectTree(self: KProcess) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn DumpObjectInfo(self: KProcess) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KProcess, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KProcess, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KProcess, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kprocess.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprocess.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KProcess `
    ///
    pub fn BindingStorage(self: KProcess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn BindingStorage2(self: KProcess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Destroyed(self: KProcess) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn Parent(self: KProcess) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KProcess, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProcess `
    ///
    pub fn DeleteLater(self: KProcess) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KProcess, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KProcess, time: i64, timerType: i32) i32 {
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
    /// ` self: KProcess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KProcess, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KProcess, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KProcess, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KProcess, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KProcess, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KProcess `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KProcess, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KProcess, callback: *const fn (KProcess, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Open(self: KProcess, mode: i32) bool {
        return qtc.KProcess_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

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
    pub fn SuperOpen(self: KProcess, mode: i32) bool {
        return qtc.KProcess_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnOpen(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WaitForReadyRead(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

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
    pub fn SuperWaitForReadyRead(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

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
    pub fn OnWaitForReadyRead(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WaitForBytesWritten(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

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
    pub fn SuperWaitForBytesWritten(self: KProcess, msecs: i32) bool {
        return qtc.KProcess_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

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
    pub fn OnWaitForBytesWritten(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BytesToWrite(self: KProcess) i64 {
        return qtc.KProcess_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

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
    pub fn SuperBytesToWrite(self: KProcess) i64 {
        return qtc.KProcess_SuperBytesToWrite(@ptrCast(self.ptr));
    }

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
    pub fn OnBytesToWrite(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSequential(self: KProcess) bool {
        return qtc.KProcess_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

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
    pub fn SuperIsSequential(self: KProcess) bool {
        return qtc.KProcess_SuperIsSequential(@ptrCast(self.ptr));
    }

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
    pub fn OnIsSequential(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Close(self: KProcess) void {
        qtc.KProcess_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

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
    pub fn SuperClose(self: KProcess) void {
        qtc.KProcess_SuperClose(@ptrCast(self.ptr));
    }

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
    pub fn OnClose(self: KProcess, callback: *const fn () callconv(.c) void) void {
        qtc.KProcess_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReadData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

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
    pub fn SuperReadData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

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
    pub fn OnReadData(self: KProcess, callback: *const fn (KProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: KProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

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
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: KProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

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
    /// ` callback: *const fn (self: KProcess, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: KProcess, callback: *const fn (KProcess, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KProcess_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Pos(self: KProcess) i64 {
        return qtc.KProcess_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPos` instead
    ///
    pub const QBasePos = SuperPos;

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
    pub fn SuperPos(self: KProcess) i64 {
        return qtc.KProcess_SuperPos(@ptrCast(self.ptr));
    }

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
    pub fn OnPos(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Size(self: KProcess) i64 {
        return qtc.KProcess_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

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
    pub fn SuperSize(self: KProcess) i64 {
        return qtc.KProcess_SuperSize(@ptrCast(self.ptr));
    }

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
    pub fn OnSize(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` pos: i64 `
    ///
    pub fn Seek(self: KProcess, pos: i64) bool {
        return qtc.KProcess_Seek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

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
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: KProcess, pos: i64) bool {
        return qtc.KProcess_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

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
    pub fn OnSeek(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) bool) void {
        qtc.KProcess_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AtEnd(self: KProcess) bool {
        return qtc.KProcess_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAtEnd` instead
    ///
    pub const QBaseAtEnd = SuperAtEnd;

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
    pub fn SuperAtEnd(self: KProcess) bool {
        return qtc.KProcess_SuperAtEnd(@ptrCast(self.ptr));
    }

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
    pub fn OnAtEnd(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Reset(self: KProcess) bool {
        return qtc.KProcess_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

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
    pub fn SuperReset(self: KProcess) bool {
        return qtc.KProcess_SuperReset(@ptrCast(self.ptr));
    }

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
    pub fn OnReset(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BytesAvailable(self: KProcess) i64 {
        return qtc.KProcess_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

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
    pub fn SuperBytesAvailable(self: KProcess) i64 {
        return qtc.KProcess_SuperBytesAvailable(@ptrCast(self.ptr));
    }

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
    pub fn OnBytesAvailable(self: KProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CanReadLine(self: KProcess) bool {
        return qtc.KProcess_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

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
    pub fn SuperCanReadLine(self: KProcess) bool {
        return qtc.KProcess_SuperCanReadLine(@ptrCast(self.ptr));
    }

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
    pub fn OnCanReadLine(self: KProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReadLineData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

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
    pub fn SuperReadLineData(self: KProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

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
    pub fn OnReadLineData(self: KProcess, callback: *const fn (KProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SkipData(self: KProcess, maxSize: i64) i64 {
        return qtc.KProcess_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

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
    pub fn SuperSkipData(self: KProcess, maxSize: i64) i64 {
        return qtc.KProcess_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

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
    pub fn OnSkipData(self: KProcess, callback: *const fn (KProcess, i64) callconv(.c) i64) void {
        qtc.KProcess_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KProcess, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KProcess_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KProcess, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KProcess_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KProcess, callback: *const fn (KProcess, QEvent) callconv(.c) bool) void {
        qtc.KProcess_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KProcess, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KProcess_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KProcess, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KProcess_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KProcess, callback: *const fn (KProcess, QObject, QEvent) callconv(.c) bool) void {
        qtc.KProcess_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KProcess_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KProcess_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KProcess, callback: *const fn (KProcess, QTimerEvent) callconv(.c) void) void {
        qtc.KProcess_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KProcess_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KProcess_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KProcess, callback: *const fn (KProcess, QChildEvent) callconv(.c) void) void {
        qtc.KProcess_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KProcess_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KProcess_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KProcess, callback: *const fn (KProcess, QEvent) callconv(.c) void) void {
        qtc.KProcess_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) void) void {
        qtc.KProcess_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KProcess_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) void) void {
        qtc.KProcess_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn SetProcessState(self: KProcess, state: i32) void {
        qtc.KProcess_SetProcessState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetProcessState` instead
    ///
    pub const QBaseSetProcessState = SuperSetProcessState;

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
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn SuperSetProcessState(self: KProcess, state: i32) void {
        qtc.KProcess_SuperSetProcessState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn OnSetProcessState(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetProcessState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: KProcess, openMode: i32) void {
        qtc.KProcess_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// ### DEPRECATED: Use `SuperSetOpenMode` instead
    ///
    pub const QBaseSetOpenMode = SuperSetOpenMode;

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
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: KProcess, openMode: i32) void {
        qtc.KProcess_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

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
    pub fn OnSetOpenMode(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: KProcess, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KProcess_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorString` instead
    ///
    pub const QBaseSetErrorString = SuperSetErrorString;

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
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: KProcess, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KProcess_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

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
    pub fn OnSetErrorString(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.KProcess_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KProcess) QObject {
        return .{ .ptr = qtc.KProcess_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KProcess `
    ///
    pub fn SuperSender(self: KProcess) QObject {
        return .{ .ptr = qtc.KProcess_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KProcess, callback: *const fn () callconv(.c) QObject) void {
        qtc.KProcess_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KProcess) i32 {
        return qtc.KProcess_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KProcess `
    ///
    pub fn SuperSenderSignalIndex(self: KProcess) i32 {
        return qtc.KProcess_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KProcess, callback: *const fn () callconv(.c) i32) void {
        qtc.KProcess_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) i32) void {
        qtc.KProcess_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KProcess_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KProcess_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KProcess, callback: *const fn (KProcess, QMetaMethod) callconv(.c) bool) void {
        qtc.KProcess_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnStarted(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnStateChanged(self: KProcess, callback: *const fn (KProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnReadyReadStandardOutput(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnReadyReadStandardError(self: KProcess, callback: *const fn (KProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KProcess, callback: *const fn (KProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#dtor.KProcess)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KProcess `
    ///
    pub fn Delete(self: KProcess) void {
        qtc.KProcess_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprocess.html#public-types)
pub const enums = struct {
    pub const OutputChannelMode = enum(i32) {
        pub const SeparateChannels: i32 = 0;
        pub const MergedChannels: i32 = 1;
        pub const ForwardedChannels: i32 = 2;
        pub const OnlyStdoutChannel: i32 = 4;
        pub const OnlyStderrChannel: i32 = 3;
    };
};
