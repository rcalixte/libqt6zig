const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qprocess_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qprocessenvironment.html
pub const qprocessenvironment = struct {
    /// New constructs a new QProcessEnvironment object.
    ///
    ///
    pub fn New() ?*C.QProcessEnvironment {
        return C.QProcessEnvironment_new();
    }

    /// New2 constructs a new QProcessEnvironment object.
    ///
    /// ``` param1: qprocess_enums.Initialization ```
    pub fn New2(param1: i64) ?*C.QProcessEnvironment {
        return C.QProcessEnvironment_new2(@intCast(param1));
    }

    /// New3 constructs a new QProcessEnvironment object.
    ///
    /// ``` other: ?*C.QProcessEnvironment ```
    pub fn New3(other: ?*anyopaque) ?*C.QProcessEnvironment {
        return C.QProcessEnvironment_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator=)
    ///
    /// ``` self: ?*C.QProcessEnvironment, other: ?*C.QProcessEnvironment ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QProcessEnvironment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
    ///
    /// ``` self: ?*C.QProcessEnvironment, other: ?*C.QProcessEnvironment ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QProcessEnvironment_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator==)
    ///
    /// ``` self: ?*C.QProcessEnvironment, other: ?*C.QProcessEnvironment ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QProcessEnvironment_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#operator!=)
    ///
    /// ``` self: ?*C.QProcessEnvironment, other: ?*C.QProcessEnvironment ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QProcessEnvironment_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
    ///
    /// ``` self: ?*C.QProcessEnvironment ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QProcessEnvironment_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
    ///
    /// ``` self: ?*C.QProcessEnvironment ```
    pub fn InheritsFromParent(self: ?*anyopaque) bool {
        return C.QProcessEnvironment_InheritsFromParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
    ///
    /// ``` self: ?*C.QProcessEnvironment ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QProcessEnvironment_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
    ///
    /// ``` self: ?*C.QProcessEnvironment, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        return C.QProcessEnvironment_Contains(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ``` self: ?*C.QProcessEnvironment, name: []const u8, value: []const u8 ```
    pub fn Insert(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const value_str = C.struct_libqt_string{
            .len = value.len,
            .data = @constCast(value.ptr),
        };
        C.QProcessEnvironment_Insert(@ptrCast(self), name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
    ///
    /// ``` self: ?*C.QProcessEnvironment, name: []const u8 ```
    pub fn Remove(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QProcessEnvironment_Remove(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ``` self: ?*C.QProcessEnvironment, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const _str = C.QProcessEnvironment_Value(@ptrCast(self), name_str);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
    ///
    /// ``` self: ?*C.QProcessEnvironment, allocator: std.mem.Allocator ```
    pub fn ToStringList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QProcessEnvironment_ToStringList(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
    ///
    /// ``` self: ?*C.QProcessEnvironment, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QProcessEnvironment_Keys(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ``` self: ?*C.QProcessEnvironment, e: ?*C.QProcessEnvironment ```
    pub fn InsertWithQProcessEnvironment(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QProcessEnvironment_InsertWithQProcessEnvironment(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
    ///
    ///
    pub fn SystemEnvironment() ?*C.QProcessEnvironment {
        return C.QProcessEnvironment_SystemEnvironment();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ``` self: ?*C.QProcessEnvironment, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Value2(self: ?*anyopaque, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const defaultValue_str = C.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };
        const _str = C.QProcessEnvironment_Value2(@ptrCast(self), name_str, defaultValue_str);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QProcessEnvironment ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QProcessEnvironment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess.html
pub const qprocess = struct {
    /// New constructs a new QProcess object.
    ///
    ///
    pub fn New() ?*C.QProcess {
        return C.QProcess_new();
    }

    /// New2 constructs a new QProcess object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QProcess {
        return C.QProcess_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QProcess_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QProcess, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QProcess_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QProcess_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QProcess_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QProcess_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QProcess_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: ?*C.QProcess, program: []const u8 ```
    pub fn Start(self: ?*anyopaque, program: []const u8) void {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        C.QProcess_Start(@ptrCast(self), program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Start2(self: ?*anyopaque) void {
        C.QProcess_Start2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ``` self: ?*C.QProcess, command: []const u8 ```
    pub fn StartCommand(self: ?*anyopaque, command: []const u8) void {
        const command_str = C.struct_libqt_string{
            .len = command.len,
            .data = @constCast(command.ptr),
        };
        C.QProcess_StartCommand(@ptrCast(self), command_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn StartDetached(self: ?*anyopaque) bool {
        return C.QProcess_StartDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// ``` self: ?*C.QProcess, mode: i32 ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return C.QProcess_Open(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QProcess_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, mode: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return C.QProcess_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#program)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn Program(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QProcess_Program(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProgram)
    ///
    /// ``` self: ?*C.QProcess, program: []const u8 ```
    pub fn SetProgram(self: ?*anyopaque, program: []const u8) void {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        C.QProcess_SetProgram(@ptrCast(self), program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QProcess_Arguments(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setArguments)
    ///
    /// ``` self: ?*C.QProcess, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetArguments(self: ?*anyopaque, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        C.QProcess_SetArguments(@ptrCast(self), arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ProcessChannelMode(self: ?*anyopaque) i64 {
        return C.QProcess_ProcessChannelMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ``` self: ?*C.QProcess, mode: qprocess_enums.ProcessChannelMode ```
    pub fn SetProcessChannelMode(self: ?*anyopaque, mode: i64) void {
        C.QProcess_SetProcessChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn InputChannelMode(self: ?*anyopaque) i64 {
        return C.QProcess_InputChannelMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ``` self: ?*C.QProcess, mode: qprocess_enums.InputChannelMode ```
    pub fn SetInputChannelMode(self: ?*anyopaque, mode: i64) void {
        C.QProcess_SetInputChannelMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readChannel)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ReadChannel(self: ?*anyopaque) i64 {
        return C.QProcess_ReadChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ``` self: ?*C.QProcess, channel: qprocess_enums.ProcessChannel ```
    pub fn SetReadChannel(self: ?*anyopaque, channel: i64) void {
        C.QProcess_SetReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ``` self: ?*C.QProcess, channel: qprocess_enums.ProcessChannel ```
    pub fn CloseReadChannel(self: ?*anyopaque, channel: i64) void {
        C.QProcess_CloseReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn CloseWriteChannel(self: ?*anyopaque) void {
        C.QProcess_CloseWriteChannel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ``` self: ?*C.QProcess, fileName: []const u8 ```
    pub fn SetStandardInputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QProcess_SetStandardInputFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ``` self: ?*C.QProcess, fileName: []const u8 ```
    pub fn SetStandardOutputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QProcess_SetStandardOutputFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ``` self: ?*C.QProcess, fileName: []const u8 ```
    pub fn SetStandardErrorFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QProcess_SetStandardErrorFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ``` self: ?*C.QProcess, destination: ?*C.QProcess ```
    pub fn SetStandardOutputProcess(self: ?*anyopaque, destination: ?*anyopaque) void {
        C.QProcess_SetStandardOutputProcess(@ptrCast(self), @ptrCast(destination));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QProcess_WorkingDirectory(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
    ///
    /// ``` self: ?*C.QProcess, dir: []const u8 ```
    pub fn SetWorkingDirectory(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = C.struct_libqt_string{
            .len = dir.len,
            .data = @constCast(dir.ptr),
        };
        C.QProcess_SetWorkingDirectory(@ptrCast(self), dir_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ``` self: ?*C.QProcess, environment: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetEnvironment(self: ?*anyopaque, environment: [][]const u8, allocator: std.mem.Allocator) void {
        var environment_arr = allocator.alloc(C.struct_libqt_string, environment.len) catch @panic("Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, _i| {
            environment_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const environment_list = C.struct_libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        C.QProcess_SetEnvironment(@ptrCast(self), environment_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn Environment(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QProcess_Environment(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ``` self: ?*C.QProcess, environment: ?*C.QProcessEnvironment ```
    pub fn SetProcessEnvironment(self: ?*anyopaque, environment: ?*anyopaque) void {
        C.QProcess_SetProcessEnvironment(@ptrCast(self), @ptrCast(environment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ProcessEnvironment(self: ?*anyopaque) ?*C.QProcessEnvironment {
        return C.QProcess_ProcessEnvironment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#error)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QProcess_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#state)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QProcess_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ProcessId(self: ?*anyopaque) i64 {
        return C.QProcess_ProcessId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn WaitForStarted(self: ?*anyopaque) bool {
        return C.QProcess_WaitForStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QProcess_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QProcess_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn WaitForFinished(self: ?*anyopaque) bool {
        return C.QProcess_WaitForFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAllStandardOutput(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QProcess_ReadAllStandardOutput(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAllStandardError(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QProcess_ReadAllStandardError(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ExitCode(self: ?*anyopaque) i32 {
        return C.QProcess_ExitCode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ExitStatus(self: ?*anyopaque) i64 {
        return C.QProcess_ExitStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return C.QProcess_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QProcess_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return C.QProcess_QBaseBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return C.QProcess_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QProcess_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return C.QProcess_QBaseIsSequential(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Close(self: ?*anyopaque) void {
        C.QProcess_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QProcess_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        C.QProcess_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ``` program: []const u8 ```
    pub fn Execute(program: []const u8) i32 {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        return C.QProcess_Execute(program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8 ```
    pub fn StartDetachedWithProgram(program: []const u8) bool {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        return C.QProcess_StartDetachedWithProgram(program_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#systemEnvironment)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SystemEnvironment(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QProcess_SystemEnvironment();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn NullDevice(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QProcess_NullDevice();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Terminate(self: ?*anyopaque) void {
        C.QProcess_Terminate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Kill(self: ?*anyopaque) void {
        C.QProcess_Kill(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: ?*C.QProcess, exitCode: i32 ```
    pub fn Finished(self: ?*anyopaque, exitCode: i32) void {
        C.QProcess_Finished(@ptrCast(self), @intCast(exitCode));
    }

    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QProcess_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ``` self: ?*C.QProcess, errorVal: qprocess_enums.ProcessError ```
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i64) void {
        C.QProcess_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, qprocess_enums.ProcessError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QProcess_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// ``` self: ?*C.QProcess, state: qprocess_enums.ProcessState ```
    pub fn SetProcessState(self: ?*anyopaque, state: i64) void {
        C.QProcess_SetProcessState(@ptrCast(self), @intCast(state));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, qprocess_enums.ProcessState) callconv(.c) void ```
    pub fn OnSetProcessState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QProcess_OnSetProcessState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, state: qprocess_enums.ProcessState ```
    pub fn QBaseSetProcessState(self: ?*anyopaque, state: i64) void {
        C.QProcess_QBaseSetProcessState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QProcess_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, []const u8, i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QProcess_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QProcess_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QProcess_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: ?*C.QProcess, program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Start22(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) void {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        C.QProcess_Start22(@ptrCast(self), program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: ?*C.QProcess, program: []const u8, arguments: [][]const u8, mode: i32, allocator: std.mem.Allocator ```
    pub fn Start3(self: ?*anyopaque, program: []const u8, arguments: [][]const u8, mode: i64, allocator: std.mem.Allocator) void {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        C.QProcess_Start3(@ptrCast(self), program_str, arguments_list, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ``` self: ?*C.QProcess, mode: i32 ```
    pub fn Start1(self: ?*anyopaque, mode: i64) void {
        C.QProcess_Start1(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ``` self: ?*C.QProcess, command: []const u8, mode: i32 ```
    pub fn StartCommand2(self: ?*anyopaque, command: []const u8, mode: i64) void {
        const command_str = C.struct_libqt_string{
            .len = command.len,
            .data = @constCast(command.ptr),
        };
        C.QProcess_StartCommand2(@ptrCast(self), command_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` self: ?*C.QProcess, pid: ?*i64 ```
    pub fn StartDetached1(self: ?*anyopaque, pid: ?*anyopaque) bool {
        return C.QProcess_StartDetached1(@ptrCast(self), @intCast(pid));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ``` self: ?*C.QProcess, fileName: []const u8, mode: i32 ```
    pub fn SetStandardOutputFile2(self: ?*anyopaque, fileName: []const u8, mode: i64) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QProcess_SetStandardOutputFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ``` self: ?*C.QProcess, fileName: []const u8, mode: i32 ```
    pub fn SetStandardErrorFile2(self: ?*anyopaque, fileName: []const u8, mode: i64) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QProcess_SetStandardErrorFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn WaitForStarted1(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_WaitForStarted1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ``` self: ?*C.QProcess, msecs: i32 ```
    pub fn WaitForFinished1(self: ?*anyopaque, msecs: i32) bool {
        return C.QProcess_WaitForFinished1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Execute2(program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) i32 {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return C.QProcess_Execute2(program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator ```
    pub fn StartDetached2(program: []const u8, arguments: [][]const u8, allocator: std.mem.Allocator) bool {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return C.QProcess_StartDetached2(program_str, arguments_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, allocator: std.mem.Allocator ```
    pub fn StartDetached3(program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, allocator: std.mem.Allocator) bool {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = C.struct_libqt_string{
            .len = workingDirectory.len,
            .data = @constCast(workingDirectory.ptr),
        };
        return C.QProcess_StartDetached3(program_str, arguments_list, workingDirectory_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ``` program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, pid: ?*i64, allocator: std.mem.Allocator ```
    pub fn StartDetached4(program: []const u8, arguments: [][]const u8, workingDirectory: []const u8, pid: ?*anyopaque, allocator: std.mem.Allocator) bool {
        const program_str = C.struct_libqt_string{
            .len = program.len,
            .data = @constCast(program.ptr),
        };
        var arguments_arr = allocator.alloc(C.struct_libqt_string, arguments.len) catch @panic("Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, _i| {
            arguments_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const arguments_list = C.struct_libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        const workingDirectory_str = C.struct_libqt_string{
            .len = workingDirectory.len,
            .data = @constCast(workingDirectory.ptr),
        };
        return C.QProcess_StartDetached4(program_str, arguments_list, workingDirectory_str, @intCast(pid));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ``` self: ?*C.QProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus ```
    pub fn Finished2(self: ?*anyopaque, exitCode: i32, exitStatus: i64) void {
        C.QProcess_Finished2(@ptrCast(self), @intCast(exitCode), @intCast(exitStatus));
    }

    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32, qprocess_enums.ExitStatus) callconv(.c) void ```
    pub fn OnFinished2(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        C.QProcess_Connect_Finished2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return C.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: ?*C.QProcess, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return C.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return C.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return C.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return C.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: ?*C.QProcess, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: ?*C.QProcess, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadAll(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadLine2(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        C.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        C.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        C.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return C.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8 ```
    pub fn WriteWithData(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_WriteWithData(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QProcess, data: []u8 ```
    pub fn Write2(self: ?*anyopaque, data: []u8) i64 {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        return C.QIODevice_Write2(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn PeekWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_PeekWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: ?*C.QProcess, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: ?*C.QProcess, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        C.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: ?*C.QProcess, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return C.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: ?*C.QProcess, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = @constCast(c.ptr);
        return C.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QIODevice_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        C.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: ?*C.QProcess, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: ?*C.QProcess, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        C.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: ?*C.QProcess, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        C.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i32, i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        C.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        C.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        C.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QProcess, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QProcess, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QProcess, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QProcess, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QProcess, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QProcess, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QProcess, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QProcess, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QProcess, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QProcess, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QProcess ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QProcess, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QProcess, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QProcess, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QProcess ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QProcess ```
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
    /// ``` self: ?*C.QProcess ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QProcess, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QProcess, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QProcess, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QProcess, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return C.QProcess_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return C.QProcess_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QProcess_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Size(self: ?*anyopaque) i64 {
        return C.QProcess_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return C.QProcess_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QProcess_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return C.QProcess_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return C.QProcess_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QProcess_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QProcess_AtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return C.QProcess_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QProcess_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Reset(self: ?*anyopaque) bool {
        return C.QProcess_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return C.QProcess_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QProcess_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return C.QProcess_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return C.QProcess_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QProcess_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return C.QProcess_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return C.QProcess_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QProcess_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QProcess_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QProcess_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QProcess_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QProcess_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        C.QProcess_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProcess_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProcess_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProcess_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProcess_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QProcess_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProcess_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProcess_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProcess_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QProcess_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProcess_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProcess_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProcess_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProcess_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProcess_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QProcess_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QProcess_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QProcess_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QProcess_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QProcess_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QProcess_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QProcess_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QProcess_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QProcess_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QProcess_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QProcess_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QProcess_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QProcess_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QProcess_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QProcess_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QProcess_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QProcess_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QProcess_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QProcess_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QProcess, slot: fn (?*C.QProcess, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QProcess_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QProcess ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QProcess_Delete(@ptrCast(self));
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
};
