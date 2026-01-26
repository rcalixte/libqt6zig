const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kprocess_enums = enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qprocess_enums = @import("../libqprocess.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprocess.html)
pub const kprocess = struct {
    /// New constructs a new KProcess object.
    ///
    pub fn New() QtC.KProcess {
        return qtc.KProcess_new();
    }

    /// New2 constructs a new KProcess object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.KProcess {
        return qtc.KProcess_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KProcess_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KProcess_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KProcess_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KProcess_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KProcess_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KProcess_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KProcess_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: kprocess_enums.OutputChannelMode `
    ///
    pub fn SetOutputChannelMode(self: ?*anyopaque, mode: i32) void {
        qtc.KProcess_SetOutputChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#outputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` kprocess_enums.OutputChannelMode `
    ///
    pub fn OutputChannelMode(self: ?*anyopaque) i32 {
        return qtc.KProcess_OutputChannelMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setNextOpenMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetNextOpenMode(self: ?*anyopaque, mode: i32) void {
        qtc.KProcess_SetNextOpenMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetEnv(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KProcess_SetEnv(@ptrCast(self), name_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#unsetEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnsetEnv(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KProcess_UnsetEnv(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ClearEnvironment(self: ?*anyopaque) void {
        qtc.KProcess_ClearEnvironment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` exe: []const u8 `
    ///
    pub fn SetProgram(self: ?*anyopaque, exe: []const u8) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        qtc.KProcess_SetProgram(@ptrCast(self), exe_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` argv: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetProgram2(self: ?*anyopaque, argv: [][]const u8, allocator: std.mem.Allocator) void {
        var argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.SetProgram2: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i| {
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        qtc.KProcess_SetProgram2(@ptrCast(self), argv_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` arg: []const u8 `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, arg: []const u8) QtC.KProcess {
        const arg_str = qtc.libqt_string{
            .len = arg.len,
            .data = arg.ptr,
        };
        return qtc.KProcess_OperatorShiftLeft(@ptrCast(self), arg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` args: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorShiftLeft2(self: ?*anyopaque, args: [][]const u8, allocator: std.mem.Allocator) QtC.KProcess {
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.OperatorShiftLeft2: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_OperatorShiftLeft2(@ptrCast(self), args_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#clearProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ClearProgram(self: ?*anyopaque) void {
        qtc.KProcess_ClearProgram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setShellCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn SetShellCommand(self: ?*anyopaque, cmd: []const u8) void {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        qtc.KProcess_SetShellCommand(@ptrCast(self), cmd_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#program)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Program(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KProcess_Program(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KProcess `
    ///
    pub fn Start(self: ?*anyopaque) void {
        qtc.KProcess_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Execute(self: ?*anyopaque) i32 {
        return qtc.KProcess_Execute(@ptrCast(self));
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
    /// ` argv: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Execute3(argv: [][]const u8, allocator: std.mem.Allocator) i32 {
        var argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.Execute3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i| {
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` self: QtC.KProcess `
    ///
    pub fn StartDetached(self: ?*anyopaque) i32 {
        return qtc.KProcess_StartDetached(@ptrCast(self));
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
    /// ` argv: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StartDetached3(argv: [][]const u8, allocator: std.mem.Allocator) i32 {
        var argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.StartDetached3: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i| {
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprocess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetEnv3(self: ?*anyopaque, name: []const u8, value: []const u8, overwrite: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KProcess_SetEnv3(@ptrCast(self), name_str, value_str, overwrite);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetProgram22(self: ?*anyopaque, exe: []const u8, args: [][]const u8, allocator: std.mem.Allocator) void {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.SetProgram22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.KProcess_SetProgram22(@ptrCast(self), exe_str, args_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn Execute1(self: ?*anyopaque, msecs: i32) i32 {
        return qtc.KProcess_Execute1(@ptrCast(self), @intCast(msecs));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Execute22(exe: []const u8, args: [][]const u8, allocator: std.mem.Allocator) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.Execute22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` exe: []const u8 `
    ///
    /// ` args: [][]const u8 `
    ///
    /// ` msecs: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Execute32(exe: []const u8, args: [][]const u8, msecs: i32, allocator: std.mem.Allocator) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.Execute32: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        return qtc.KProcess_Execute32(exe_str, args_list, @intCast(msecs));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` argv: [][]const u8 `
    ///
    /// ` msecs: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Execute23(argv: [][]const u8, msecs: i32, allocator: std.mem.Allocator) i32 {
        var argv_arr = allocator.alloc(qtc.libqt_string, argv.len) catch @panic("kprocess.Execute23: Memory allocation failed");
        defer allocator.free(argv_arr);
        for (argv, 0..argv.len) |item, i| {
            argv_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const argv_list = qtc.libqt_list{
            .len = argv.len,
            .data = argv_arr.ptr,
        };
        return qtc.KProcess_Execute23(argv_list, @intCast(msecs));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` exe: []const u8 `
    ///
    /// ` args: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StartDetached22(exe: []const u8, args: [][]const u8, allocator: std.mem.Allocator) i32 {
        const exe_str = qtc.libqt_string{
            .len = exe.len,
            .data = exe.ptr,
        };
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("kprocess.StartDetached22: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` self: QtC.KProcess `
    ///
    pub fn Start2(self: ?*anyopaque) void {
        qtc.QProcess_Start2(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` command: []const u8 `
    ///
    pub fn StartCommand(self: ?*anyopaque, command: []const u8) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self), command_str);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Arguments(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KProcess `
    ///
    /// ` arguments: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetArguments(self: ?*anyopaque, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        var arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.SetArguments: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_SetArguments(@ptrCast(self), arguments_list);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannelMode `
    ///
    pub fn ProcessChannelMode(self: ?*anyopaque) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: qprocess_enums.ProcessChannelMode `
    ///
    pub fn SetProcessChannelMode(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.InputChannelMode `
    ///
    pub fn InputChannelMode(self: ?*anyopaque) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: qprocess_enums.InputChannelMode `
    ///
    pub fn SetInputChannelMode(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannel `
    ///
    pub fn ReadChannel(self: ?*anyopaque) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn SetReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn CloseReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn CloseWriteChannel(self: ?*anyopaque) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardInputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self), fileName_str);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardOutputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self), fileName_str);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardErrorFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self), fileName_str);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` destination: QtC.QProcess `
    ///
    pub fn SetStandardOutputProcess(self: ?*anyopaque, destination: ?*anyopaque) void {
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self), @ptrCast(destination));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    pub fn FailChildProcessModifier(self: ?*anyopaque, description: [:0]const u8) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self), description_Cstring);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn UnixProcessParameters(self: ?*anyopaque) QtC.QProcess__UnixProcessParameters {
        return qtc.QProcess_UnixProcessParameters(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` params: QtC.QProcess__UnixProcessParameters `
    ///
    pub fn SetUnixProcessParameters(self: ?*anyopaque, params: ?*anyopaque) void {
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self), @ptrCast(params));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` flagsOnly: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn SetUnixProcessParameters2(self: ?*anyopaque, flagsOnly: u32) void {
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self), @intCast(flagsOnly));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_WorkingDirectory(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self), dir_str);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` environment: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetEnvironment(self: ?*anyopaque, environment: [][]const u8, allocator: std.mem.Allocator) void {
        var environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("kprocess.SetEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, i| {
            environment_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const environment_list = qtc.libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QProcess_SetEnvironment(@ptrCast(self), environment_list);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Environment(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Environment(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KProcess `
    ///
    /// ` environment: QtC.QProcessEnvironment `
    ///
    pub fn SetProcessEnvironment(self: ?*anyopaque, environment: ?*anyopaque) void {
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self), @ptrCast(environment));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ProcessEnvironment(self: ?*anyopaque) QtC.QProcessEnvironment {
        return qtc.QProcess_ProcessEnvironment(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QProcess_Error(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QProcess_State(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ProcessId(self: ?*anyopaque) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn WaitForStarted(self: ?*anyopaque) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn WaitForFinished(self: ?*anyopaque) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllStandardOutput(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllStandardError(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    pub fn ExitCode(self: ?*anyopaque) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ExitStatus `
    ///
    pub fn ExitStatus(self: ?*anyopaque) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemEnvironment(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_SystemEnvironment();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KProcess `
    ///
    pub fn Terminate(self: ?*anyopaque) void {
        qtc.QProcess_Terminate(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Kill(self: ?*anyopaque) void {
        qtc.QProcess_Kill(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn Finished(self: ?*anyopaque, exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self), @intCast(exitCode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, exitCode: i32) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` errorVal: qprocess_enums.ProcessError `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, errorVal: qprocess_enums.ProcessError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Start22(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.Start22: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start22(@ptrCast(self), program_str, arguments_list);
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: [][]const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Start3(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, mode: i32, allocator: std.mem.Allocator) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.Start3: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start3(@ptrCast(self), program_str, arguments_list, @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Start1(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` command: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn StartCommand2(self: ?*anyopaque, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self), command_str, @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` pid: *i64 `
    ///
    pub fn StartDetached1(self: ?*anyopaque, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self), @ptrCast(pid));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetStandardOutputFile2(self: ?*anyopaque, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetStandardErrorFile2(self: ?*anyopaque, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    /// ` errorVal: i32 `
    ///
    pub fn FailChildProcessModifier2(self: ?*anyopaque, description: [:0]const u8, errorVal: i32) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self), description_Cstring, @intCast(errorVal));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForStarted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForFinished1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: [][]const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    /// ` pid: *i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StartDetached4(program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, pid: *i64, allocator: std.mem.Allocator) bool {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("kprocess.StartDetached4: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
    /// ` self: QtC.KProcess `
    ///
    /// ` exitCode: i32 `
    ///
    /// ` exitStatus: qprocess_enums.ExitStatus `
    ///
    pub fn Finished2(self: ?*anyopaque, exitCode: i32, exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self), @intCast(exitCode), @intCast(exitStatus));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus) callconv(.c) void `
    ///
    pub fn OnFinished2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @intCast(maxlen));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: ?*anyopaque, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @intCast(maxlen));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: ?*anyopaque, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: ?*anyopaque, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: ?*anyopaque, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kprocess.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KProcess `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.KProcess_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.KProcess_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KProcess_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KProcess_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KProcess_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KProcess_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KProcess_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KProcess_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.KProcess_BytesToWrite(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.KProcess_QBaseBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.KProcess_IsSequential(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.KProcess_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.KProcess_Close(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.KProcess_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KProcess_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn QBaseReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, data: [*:0]u8, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn QBaseWriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KProcess_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.KProcess_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.KProcess_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.KProcess_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.KProcess_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.KProcess_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` pos: i64 `
    ///
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.KProcess_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.KProcess_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.KProcess_AtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.KProcess_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.KProcess_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.KProcess_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.KProcess_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.KProcess_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.KProcess_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.KProcess_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.KProcess_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KProcess_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn QBaseReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KProcess_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, data: [*:0]u8, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, i64) callconv(.c) i64) void {
        qtc.KProcess_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.KProcess_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.KProcess_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.KProcess_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KProcess_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KProcess_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KProcess_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KProcess_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KProcess_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KProcess_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KProcess_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KProcess_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KProcess_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KProcess_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KProcess_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KProcess_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KProcess_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KProcess_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KProcess_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KProcess_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn SetProcessState(self: ?*anyopaque, state: i32) void {
        qtc.KProcess_SetProcessState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn QBaseSetProcessState(self: ?*anyopaque, state: i32) void {
        qtc.KProcess_QBaseSetProcessState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn OnSetProcessState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetProcessState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.KProcess_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.KProcess_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KProcess_OnSetOpenMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KProcess_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KProcess_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KProcess_OnSetErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KProcess_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KProcess_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KProcess_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KProcess_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KProcess_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KProcess_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KProcess_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KProcess_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KProcess_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KProcess_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess`
    ///
    /// ` callback: *const fn (self: QtC.KProcess, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KProcess_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnReadyReadStandardOutput(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QProcess
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess) callconv(.c) void `
    ///
    pub fn OnReadyReadStandardError(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KProcess `
    ///
    /// ` callback: *const fn (self: QtC.KProcess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kprocess.html#dtor.KProcess)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KProcess `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProcess_Delete(@ptrCast(self));
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
