const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qprocess_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qprocessenvironment.html
pub const qprocessenvironment = struct {
    /// New constructs a new QProcessEnvironment object.
    ///
    ///
    pub fn New() QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new();
    }

    /// New2 constructs a new QProcessEnvironment object.
    ///
    /// ``` param1: qprocess_enums.Initialization ```
    pub fn New2(param1: i64) QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new2(@intCast(param1));
    }

    /// New3 constructs a new QProcessEnvironment object.
    ///
    /// ``` other: QtC.QProcessEnvironment ```
    pub fn New3(other: ?*anyopaque) QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator-eq)
    ///
    /// ``` self: QtC.QProcessEnvironment, other: QtC.QProcessEnvironment ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcessEnvironment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
    ///
    /// ``` self: QtC.QProcessEnvironment, other: QtC.QProcessEnvironment ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcessEnvironment_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
    ///
    /// ``` self: QtC.QProcessEnvironment ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QProcessEnvironment_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
    ///
    /// ``` self: QtC.QProcessEnvironment ```
    pub fn InheritsFromParent(self: ?*anyopaque) bool {
        return qtc.QProcessEnvironment_InheritsFromParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
    ///
    /// ``` self: QtC.QProcessEnvironment ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QProcessEnvironment_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
    ///
    /// ``` self: QtC.QProcessEnvironment, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QProcessEnvironment_Contains(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ``` self: QtC.QProcessEnvironment, name: []const u8, value: []const u8 ```
    pub fn Insert(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QProcessEnvironment_Insert(@ptrCast(self), name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
    ///
    /// ``` self: QtC.QProcessEnvironment, name: []const u8 ```
    pub fn Remove(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QProcessEnvironment_Remove(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ``` self: QtC.QProcessEnvironment, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QProcessEnvironment_Value(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
    ///
    /// ``` self: QtC.QProcessEnvironment, allocator: std.mem.Allocator ```
    pub fn ToStringList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QProcessEnvironment_ToStringList(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocessenvironment.ToStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocessenvironment.ToStringList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
    ///
    /// ``` self: QtC.QProcessEnvironment, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QProcessEnvironment_Keys(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocessenvironment.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocessenvironment.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ``` self: QtC.QProcessEnvironment, e: QtC.QProcessEnvironment ```
    pub fn Insert2(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QProcessEnvironment_Insert2(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
    ///
    ///
    pub fn SystemEnvironment() QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_SystemEnvironment();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ``` self: QtC.QProcessEnvironment, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Value2(self: ?*anyopaque, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const _str = qtc.QProcessEnvironment_Value2(@ptrCast(self), name_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#dtor.QProcessEnvironment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QProcessEnvironment ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcessEnvironment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess.html
pub const qprocess = struct {
    /// New constructs a new QProcess object.
    ///
    ///
    pub fn New() QtC.QProcess {
        return qtc.QProcess_new();
    }

    /// New2 constructs a new QProcess object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QProcess {
        return qtc.QProcess_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QProcess_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QProcess, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProcess_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QProcess_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QProcess_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QProcess_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QProcess_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: QtC.QProcess, program: []const u8 ```
    pub fn Start(self: ?*anyopaque, program: []const u8) void {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QProcess_Start(@ptrCast(self), program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Start2(self: ?*anyopaque) void {
        qtc.QProcess_Start2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ``` self: QtC.QProcess, command: []const u8 ```
    pub fn StartCommand(self: ?*anyopaque, command: []const u8) void {
        const command_str = qtc.struct_libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self), command_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn StartDetached(self: ?*anyopaque) bool {
        return qtc.QProcess_StartDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// ``` self: QtC.QProcess, mode: i32 ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return qtc.QProcess_Open(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, mode: i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QProcess_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, mode: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return qtc.QProcess_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#program)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn Program(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_Program(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Program: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProgram)
    ///
    /// ``` self: QtC.QProcess, program: []const u8 ```
    pub fn SetProgram(self: ?*anyopaque, program: []const u8) void {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QProcess_SetProgram(@ptrCast(self), program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QProcess_Arguments(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocess.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocess.Arguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setArguments)
    ///
    /// ``` self: QtC.QProcess, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetArguments(self: ?*anyopaque, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.SetArguments: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_SetArguments(@ptrCast(self), arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ProcessChannelMode(self: ?*anyopaque) i64 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ``` self: QtC.QProcess, mode: qprocess_enums.ProcessChannelMode ```
    pub fn SetProcessChannelMode(self: ?*anyopaque, mode: i64) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn InputChannelMode(self: ?*anyopaque) i64 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ``` self: QtC.QProcess, mode: qprocess_enums.InputChannelMode ```
    pub fn SetInputChannelMode(self: ?*anyopaque, mode: i64) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readChannel)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ReadChannel(self: ?*anyopaque) i64 {
        return qtc.QProcess_ReadChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ``` self: QtC.QProcess, channel: qprocess_enums.ProcessChannel ```
    pub fn SetReadChannel(self: ?*anyopaque, channel: i64) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ``` self: QtC.QProcess, channel: qprocess_enums.ProcessChannel ```
    pub fn CloseReadChannel(self: ?*anyopaque, channel: i64) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn CloseWriteChannel(self: ?*anyopaque) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ``` self: QtC.QProcess, fileName: []const u8 ```
    pub fn SetStandardInputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ``` self: QtC.QProcess, fileName: []const u8 ```
    pub fn SetStandardOutputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ``` self: QtC.QProcess, fileName: []const u8 ```
    pub fn SetStandardErrorFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ``` self: QtC.QProcess, destination: QtC.QProcess ```
    pub fn SetStandardOutputProcess(self: ?*anyopaque, destination: ?*anyopaque) void {
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self), @ptrCast(destination));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ``` self: QtC.QProcess, description: []const u8 ```
    pub fn FailChildProcessModifier(self: ?*anyopaque, description: []const u8) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self), description_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn UnixProcessParameters(self: ?*anyopaque) QtC.QProcess__UnixProcessParameters {
        return qtc.QProcess_UnixProcessParameters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ``` self: QtC.QProcess, params: QtC.QProcess__UnixProcessParameters ```
    pub fn SetUnixProcessParameters(self: ?*anyopaque, params: ?*anyopaque) void {
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ``` self: QtC.QProcess, flagsOnly: u32 ```
    pub fn SetUnixProcessParameters2(self: ?*anyopaque, flagsOnly: i64) void {
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self), @intCast(flagsOnly));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_WorkingDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
    ///
    /// ``` self: QtC.QProcess, dir: []const u8 ```
    pub fn SetWorkingDirectory(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.struct_libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self), dir_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ``` self: QtC.QProcess, environment: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetEnvironment(self: ?*anyopaque, environment: [][]const u8, allocator: std.mem.Allocator) void {
        var environment_arr = allocator.alloc(qtc.struct_libqt_string, environment.len) catch @panic("qprocess.SetEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, i| {
            environment_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const environment_list = qtc.struct_libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QProcess_SetEnvironment(@ptrCast(self), environment_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn Environment(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QProcess_Environment(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocess.Environment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocess.Environment: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ``` self: QtC.QProcess, environment: QtC.QProcessEnvironment ```
    pub fn SetProcessEnvironment(self: ?*anyopaque, environment: ?*anyopaque) void {
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self), @ptrCast(environment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ProcessEnvironment(self: ?*anyopaque) QtC.QProcessEnvironment {
        return qtc.QProcess_ProcessEnvironment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#error)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QProcess_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#state)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QProcess_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ProcessId(self: ?*anyopaque) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn WaitForStarted(self: ?*anyopaque) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn WaitForFinished(self: ?*anyopaque) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAllStandardOutput(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardOutput: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAllStandardError(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardError: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ExitCode(self: ?*anyopaque) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ExitStatus(self: ?*anyopaque) i64 {
        return qtc.QProcess_ExitStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QProcess_BytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QProcess_QBaseBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QProcess_IsSequential(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QProcess_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.QProcess_QBaseIsSequential(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QProcess_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QProcess_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.QProcess_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ``` program: []const u8 ```
    pub fn Execute(program: []const u8) i32 {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return qtc.QProcess_Execute(program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8 ```
    pub fn StartDetached2(program: []const u8) bool {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return qtc.QProcess_StartDetached2(program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SystemEnvironment(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QProcess_SystemEnvironment();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocess.SystemEnvironment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocess.SystemEnvironment: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn NullDevice(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_NullDevice();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.NullDevice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Terminate(self: ?*anyopaque) void {
        qtc.QProcess_Terminate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Kill(self: ?*anyopaque) void {
        qtc.QProcess_Kill(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: QtC.QProcess, exitCode: i32 ```
    pub fn Finished(self: ?*anyopaque, exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self), @intCast(exitCode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, exitCode: i32) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ``` self: QtC.QProcess, errorVal: qprocess_enums.ProcessError ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, errorVal: qprocess_enums.ProcessError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// ``` self: QtC.QProcess, state: qprocess_enums.ProcessState ```
    pub fn SetProcessState(self: ?*anyopaque, state: i64) void {
        qtc.QProcess_SetProcessState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, state: qprocess_enums.ProcessState) callconv(.c) void ```
    pub fn OnSetProcessState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QProcess_OnSetProcessState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, state: qprocess_enums.ProcessState ```
    pub fn QBaseSetProcessState(self: ?*anyopaque, state: i64) void {
        qtc.QProcess_QBaseSetProcessState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, data: []const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, data: []const u8, lenVal: i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QProcess, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QProcess_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QProcess_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: QtC.QProcess, program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Start22(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.Start22: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start22(@ptrCast(self), program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: QtC.QProcess, program: []const u8, arguments: [][]const u8, mode: i32, allocator: std.mem.Allocator ```
    pub fn Start3(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, mode: i64, allocator: std.mem.Allocator) void {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.Start3: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QProcess_Start3(@ptrCast(self), program_str, arguments_list, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: QtC.QProcess, mode: i32 ```
    pub fn Start1(self: ?*anyopaque, mode: i64) void {
        qtc.QProcess_Start1(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ``` self: QtC.QProcess, command: []const u8, mode: i32 ```
    pub fn StartCommand2(self: ?*anyopaque, command: []const u8, mode: i64) void {
        const command_str = qtc.struct_libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self), command_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` self: QtC.QProcess, pid: *i64 ```
    pub fn StartDetached1(self: ?*anyopaque, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self), @ptrCast(pid));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ``` self: QtC.QProcess, fileName: []const u8, mode: i32 ```
    pub fn SetStandardOutputFile2(self: ?*anyopaque, fileName: []const u8, mode: i64) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ``` self: QtC.QProcess, fileName: []const u8, mode: i32 ```
    pub fn SetStandardErrorFile2(self: ?*anyopaque, fileName: []const u8, mode: i64) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ``` self: QtC.QProcess, description: []const u8, errorVal: i32 ```
    pub fn FailChildProcessModifier2(self: ?*anyopaque, description: []const u8, errorVal: i32) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self), description_Cstring, @intCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn WaitForStarted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ``` self: QtC.QProcess, msecs: i32 ```
    pub fn WaitForFinished1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Execute2(program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) i32 {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.Execute2: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return qtc.QProcess_Execute2(program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn StartDetached22(program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) bool {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.StartDetached22: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return qtc.QProcess_StartDetached22(program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, allocator: std.mem.Allocator ```
    pub fn StartDetached3(program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, allocator: std.mem.Allocator) bool {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.StartDetached3: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = qtc.struct_libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return qtc.QProcess_StartDetached3(program_str, arguments_list, workingDirectory_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, pid: *i64, allocator: std.mem.Allocator ```
    pub fn StartDetached4(program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, pid: *i64, allocator: std.mem.Allocator) bool {
        const program_str = qtc.struct_libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        var arguments_arr = allocator.alloc(qtc.struct_libqt_string, arguments.len) catch @panic("qprocess.StartDetached4: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = qtc.struct_libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return qtc.QProcess_StartDetached4(program_str, arguments_list, workingDirectory_str, @ptrCast(pid));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: QtC.QProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus ```
    pub fn Finished2(self: ?*anyopaque, exitCode: i32, exitStatus: i64) void {
        qtc.QProcess_Finished2(@ptrCast(self), @intCast(exitCode), @intCast(exitStatus));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus) callconv(.c) void ```
    pub fn OnFinished2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: QtC.QProcess, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: QtC.QProcess, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: QtC.QProcess, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QProcess, data: []const u8 ```
    pub fn Write2(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QProcess, data: []u8 ```
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: QtC.QProcess, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: QtC.QProcess, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: QtC.QProcess, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: QtC.QProcess, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QProcess, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, channel: i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QProcess, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, bytes: i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QProcess, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice, channel: i32, bytes: i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QIODevice, slot: fn (self: QtC.QIODevice) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QProcess, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QProcess, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QProcess, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QProcess, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QProcess, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QProcess, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qprocess.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QProcess, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QProcess, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QProcess, obj: QtC.QObject ```
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
    /// ``` self: QtC.QProcess, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QProcess ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QProcess, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QProcess, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QProcess, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qprocess.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocess.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QProcess, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QProcess ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QProcess, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QProcess, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QProcess, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QProcess, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QProcess_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.QProcess_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QProcess_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QProcess_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.QProcess_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QProcess_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QProcess_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QProcess_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, pos: i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QProcess_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QProcess_AtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.QProcess_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QProcess_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QProcess_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.QProcess_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QProcess_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QProcess_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QProcess_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QProcess_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.QProcess_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QProcess_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, data: []const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QProcess_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QProcess_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, maxSize: i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QProcess_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProcess_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProcess_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProcess_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProcess_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QProcess_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProcess_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QProcess_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProcess_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProcess_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProcess_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QProcess_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QProcess_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QProcess_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, openMode: i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QProcess_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QProcess_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.struct_libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QProcess_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, errorString: []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QProcess_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProcess_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QProcess_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QProcess_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProcess_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QProcess_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QProcess_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QProcess_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProcess_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QProcess_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProcess_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess, state: qprocess_enums.ProcessState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess) callconv(.c) void ```
    pub fn OnReadyReadStandardOutput(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QProcess) callconv(.c) void ```
    pub fn OnReadyReadStandardError(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QProcess, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#dtor.QProcess)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QProcess ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcess_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html
pub const qprocess__unixprocessparameters = struct {
    /// New constructs a new QProcess::UnixProcessParameters object.
    ///
    /// ``` other: QtC.QProcess__UnixProcessParameters ```
    pub fn New(other: ?*anyopaque) QtC.QProcess__UnixProcessParameters {
        return qtc.QProcess__UnixProcessParameters_new(@ptrCast(other));
    }

    /// New2 constructs a new QProcess::UnixProcessParameters object and invalidates the source QProcess::UnixProcessParameters object.
    ///
    /// ``` other: QtC.QProcess__UnixProcessParameters ```
    pub fn New2(other: ?*anyopaque) QtC.QProcess__UnixProcessParameters {
        return qtc.QProcess__UnixProcessParameters_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QProcess__UnixProcessParameters, other: QtC.QProcess__UnixProcessParameters ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcess__UnixProcessParameters_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QProcess__UnixProcessParameters, other: QtC.QProcess__UnixProcessParameters ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcess__UnixProcessParameters_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QProcess__UnixProcessParameters ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcess__UnixProcessParameters_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess.html#types
pub const enums = struct {
    pub const Initialization = enum {
        pub const InheritFromParent: i32 = 0;
    };

    pub const ProcessError = enum {
        pub const FailedToStart: i32 = 0;
        pub const Crashed: i32 = 1;
        pub const Timedout: i32 = 2;
        pub const ReadError: i32 = 3;
        pub const WriteError: i32 = 4;
        pub const UnknownError: i32 = 5;
    };

    pub const ProcessState = enum {
        pub const NotRunning: i32 = 0;
        pub const Starting: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const ProcessChannel = enum {
        pub const StandardOutput: i32 = 0;
        pub const StandardError: i32 = 1;
    };

    pub const ProcessChannelMode = enum {
        pub const SeparateChannels: i32 = 0;
        pub const MergedChannels: i32 = 1;
        pub const ForwardedChannels: i32 = 2;
        pub const ForwardedOutputChannel: i32 = 3;
        pub const ForwardedErrorChannel: i32 = 4;
    };

    pub const InputChannelMode = enum {
        pub const ManagedInputChannel: i32 = 0;
        pub const ForwardedInputChannel: i32 = 1;
    };

    pub const ExitStatus = enum {
        pub const NormalExit: i32 = 0;
        pub const CrashExit: i32 = 1;
    };

    pub const UnixProcessFlag = enum {
        pub const ResetSignalHandlers: u32 = 1;
        pub const IgnoreSigPipe: u32 = 2;
        pub const CloseFileDescriptors: u32 = 16;
        pub const UseVFork: u32 = 32;
        pub const CreateNewSession: u32 = 64;
        pub const DisconnectControllingTerminal: u32 = 128;
        pub const ResetIds: u32 = 256;
    };
};
