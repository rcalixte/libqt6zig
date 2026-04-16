const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qprocess_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html)
pub const QProcessEnvironment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QProcessEnvironment,

    pub const _is_QProcessEnvironment = {};

    /// New constructs a new QProcessEnvironment object.
    ///
    pub fn New() QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_new() };
    }

    /// New2 constructs a new QProcessEnvironment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qprocess_enums.Initialization `
    ///
    pub fn New2(param1: i32) QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_new2(@bitCast(param1)) };
    }

    /// New3 constructs a new QProcessEnvironment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn New3(other: anytype) QProcessEnvironment {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        return .{ .ptr = qtc.QProcessEnvironment_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn OperatorAssign(self: QProcessEnvironment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn Swap(self: QProcessEnvironment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn IsEmpty(self: QProcessEnvironment) bool {
        return qtc.QProcessEnvironment_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn InheritsFromParent(self: QProcessEnvironment) bool {
        return qtc.QProcessEnvironment_InheritsFromParent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn Clear(self: QProcessEnvironment) void {
        qtc.QProcessEnvironment_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: QProcessEnvironment, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QProcessEnvironment_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn Insert(self: QProcessEnvironment, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QProcessEnvironment_Insert(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Remove(self: QProcessEnvironment, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QProcessEnvironment_Remove(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value(self: QProcessEnvironment, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QProcessEnvironment_Value(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToStringList(self: QProcessEnvironment, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcessEnvironment_ToStringList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: QProcessEnvironment, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcessEnvironment_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` e: QProcessEnvironment `
    ///
    pub fn Insert2(self: QProcessEnvironment, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_Insert2(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
    ///
    pub fn SystemEnvironment() QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_SystemEnvironment() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn Value2(self: QProcessEnvironment, allocator: std.mem.Allocator, name: []const u8, defaultValue: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QProcessEnvironment_Value2(@ptrCast(self.ptr), name_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#dtor.QProcessEnvironment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn Delete(self: QProcessEnvironment) void {
        qtc.QProcessEnvironment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html)
pub const QProcess = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QProcess,

    pub const _is_QProcess = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QProcess object.
    ///
    pub fn New() QProcess {
        return .{ .ptr = qtc.QProcess_new() };
    }

    /// New2 constructs a new QProcess object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QProcess {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QProcess_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn MetaObject(self: QProcess) QMetaObject {
        return .{ .ptr = qtc.QProcess_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QProcess, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QProcess_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn SuperMetaObject(self: QProcess) QMetaObject {
        return .{ .ptr = qtc.QProcess_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProcess_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QProcess_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProcess_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProcess_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QProcess, callback: *const fn (QProcess, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QProcess_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProcess_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` program: []const u8 `
    ///
    pub fn Start(self: QProcess, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QProcess_Start(@ptrCast(self.ptr), program_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Start2(self: QProcess) void {
        qtc.QProcess_Start2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` command: []const u8 `
    ///
    pub fn StartCommand(self: QProcess, command: []const u8) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self.ptr), command_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn StartDetached(self: QProcess) bool {
        return qtc.QProcess_StartDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QProcess, mode: i32) bool {
        return qtc.QProcess_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QProcess, mode: i32) bool {
        return qtc.QProcess_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#program)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Program(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_Program(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Program: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` program: []const u8 `
    ///
    pub fn SetProgram(self: QProcess, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QProcess_SetProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: QProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Arguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn SetArguments(self: QProcess, allocator: std.mem.Allocator, arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.SetArguments: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannelMode `
    ///
    pub fn ProcessChannelMode(self: QProcess) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: qprocess_enums.ProcessChannelMode `
    ///
    pub fn SetProcessChannelMode(self: QProcess, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#inputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.InputChannelMode `
    ///
    pub fn InputChannelMode(self: QProcess) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: qprocess_enums.InputChannelMode `
    ///
    pub fn SetInputChannelMode(self: QProcess, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessChannel `
    ///
    pub fn ReadChannel(self: QProcess) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn SetReadChannel(self: QProcess, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn CloseReadChannel(self: QProcess, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn CloseWriteChannel(self: QProcess) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardInputFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardOutputFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetStandardErrorFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` destination: QProcess `
    ///
    pub fn SetStandardOutputProcess(self: QProcess, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QProcess;
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` modifier: *const fn () callconv(.c) void `
    ///
    pub fn SetChildProcessModifier(self: QProcess, modifier: *const fn () callconv(.c) void) void {
        qtc.QProcess_SetChildProcessModifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(modifier)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    pub fn FailChildProcessModifier(self: QProcess, description: [:0]const u8) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self.ptr), description_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn UnixProcessParameters(self: QProcess) QProcess__UnixProcessParameters {
        return .{ .ptr = qtc.QProcess_UnixProcessParameters(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` params: QProcess__UnixProcessParameters `
    ///
    pub fn SetUnixProcessParameters(self: QProcess, params: anytype) void {
        comptime _ = @TypeOf(params)._is_QProcess__UnixProcessParameters;
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` flagsOnly: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn SetUnixProcessParameters2(self: QProcess, flagsOnly: u32) void {
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self.ptr), @bitCast(flagsOnly));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: QProcess, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` environment: []const []const u8 `
    ///
    pub fn SetEnvironment(self: QProcess, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("qprocess.SetEnvironment: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Environment(self: QProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Environment(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` environment: QProcessEnvironment `
    ///
    pub fn SetProcessEnvironment(self: QProcess, environment: anytype) void {
        comptime _ = @TypeOf(environment)._is_QProcessEnvironment;
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self.ptr), @ptrCast(environment.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ProcessEnvironment(self: QProcess) QProcessEnvironment {
        return .{ .ptr = qtc.QProcess_ProcessEnvironment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessError `
    ///
    pub fn Error(self: QProcess) i32 {
        return qtc.QProcess_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ProcessState `
    ///
    pub fn State(self: QProcess) i32 {
        return qtc.QProcess_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ProcessId(self: QProcess) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn WaitForStarted(self: QProcess) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn WaitForFinished(self: QProcess) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllStandardOutput(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardOutput: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllStandardError(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardError: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ExitCode(self: QProcess) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` qprocess_enums.ExitStatus `
    ///
    pub fn ExitStatus(self: QProcess) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn BytesToWrite(self: QProcess) i64 {
        return qtc.QProcess_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn SuperBytesToWrite(self: QProcess) i64 {
        return qtc.QProcess_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsSequential(self: QProcess) bool {
        return qtc.QProcess_IsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn SuperIsSequential(self: QProcess) bool {
        return qtc.QProcess_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Close(self: QProcess) void {
        qtc.QProcess_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QProcess, callback: *const fn () callconv(.c) void) void {
        qtc.QProcess_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn SuperClose(self: QProcess) void {
        qtc.QProcess_SuperClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` program: []const u8 `
    ///
    pub fn Execute(program: []const u8) i32 {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return qtc.QProcess_Execute(program_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` program: []const u8 `
    ///
    pub fn StartDetached2(program: []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return qtc.QProcess_StartDetached2(program_str);
    }

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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qprocess.SystemEnvironment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qprocess.SystemEnvironment: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NullDevice(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_NullDevice();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.NullDevice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Terminate(self: QProcess) void {
        qtc.QProcess_Terminate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Kill(self: QProcess) void {
        qtc.QProcess_Kill(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn Finished(self: QProcess, exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self.ptr), @bitCast(exitCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, exitCode: i32) callconv(.c) void `
    ///
    pub fn OnFinished(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` errorVal: qprocess_enums.ProcessError `
    ///
    pub fn ErrorOccurred(self: QProcess, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, errorVal: qprocess_enums.ProcessError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn SetProcessState(self: QProcess, state: i32) void {
        qtc.QProcess_SetProcessState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn OnSetProcessState(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_OnSetProcessState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProcessState` instead
    ///
    pub const QBaseSetProcessState = SuperSetProcessState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` state: qprocess_enums.ProcessState `
    ///
    pub fn SuperSetProcessState(self: QProcess, state: i32) void {
        qtc.QProcess_SuperSetProcessState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QProcess, callback: *const fn (QProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QProcess, callback: *const fn (QProcess, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn Start22(self: QProcess, allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.Start22: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Start3(self: QProcess, allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8, mode: i32) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.Start3: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Start1(self: QProcess, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` command: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn StartCommand2(self: QProcess, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self.ptr), command_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` pid: *i64 `
    ///
    pub fn StartDetached1(self: QProcess, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self.ptr), @ptrCast(pid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetStandardOutputFile2(self: QProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetStandardErrorFile2(self: QProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    /// ` errorVal: i32 `
    ///
    pub fn FailChildProcessModifier2(self: QProcess, description: [:0]const u8, errorVal: i32) void {
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self.ptr), description_Cstring, @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForStarted1(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForFinished1(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn Execute2(allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8) i32 {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.Execute2: Memory allocation failed");
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
        return qtc.QProcess_Execute2(program_str, arguments_list);
    }

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
    pub fn StartDetached22(allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.StartDetached22: Memory allocation failed");
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
        return qtc.QProcess_StartDetached22(program_str, arguments_list);
    }

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
    pub fn StartDetached3(allocator: std.mem.Allocator, program: []const u8, arguments: []const []const u8, workingDirectory: []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.StartDetached3: Memory allocation failed");
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
        return qtc.QProcess_StartDetached3(program_str, arguments_list, workingDirectory_str);
    }

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
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qprocess.StartDetached4: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` exitCode: i32 `
    ///
    /// ` exitStatus: qprocess_enums.ExitStatus `
    ///
    pub fn Finished2(self: QProcess, exitCode: i32, exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self.ptr), @bitCast(exitCode), @bitCast(exitStatus));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus) callconv(.c) void `
    ///
    pub fn OnFinished2(self: QProcess, callback: *const fn (QProcess, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QProcess) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QProcess, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsTextModeEnabled(self: QProcess) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsOpen(self: QProcess) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsReadable(self: QProcess) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsWritable(self: QProcess) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ReadChannelCount(self: QProcess) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn WriteChannelCount(self: QProcess) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn CurrentReadChannel(self: QProcess) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn CurrentWriteChannel(self: QProcess) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QProcess, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn StartTransaction(self: QProcess) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn CommitTransaction(self: QProcess) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn RollbackTransaction(self: QProcess) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsTransactionStarted(self: QProcess) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QProcess, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QProcess, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QProcess, data: []u8) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QProcess, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QProcess, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QProcess, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QProcess, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ReadyRead(self: QProcess) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QProcess, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QProcess, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QProcess, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QProcess, callback: *const fn (QProcess, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn AboutToClose(self: QProcess) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn ReadChannelFinished(self: QProcess) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QProcess, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsWidgetType(self: QProcess) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsWindowType(self: QProcess) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn IsQuickItemType(self: QProcess) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn SignalsBlocked(self: QProcess) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QProcess, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Thread(self: QProcess) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QProcess, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QProcess, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QProcess, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QProcess, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QProcess, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QProcess, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qprocess.Children: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QProcess, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QProcess, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QProcess, obj: anytype) void {
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
    /// ` self: QProcess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QProcess, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QProcess `
    ///
    pub fn Disconnect3(self: QProcess) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QProcess, receiver: anytype) bool {
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
    /// ` self: QProcess `
    ///
    pub fn DumpObjectTree(self: QProcess) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn DumpObjectInfo(self: QProcess) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QProcess, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QProcess, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QProcess, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn BindingStorage(self: QProcess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn BindingStorage2(self: QProcess) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Destroyed(self: QProcess) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Parent(self: QProcess) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QProcess, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn DeleteLater(self: QProcess) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QProcess, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QProcess, time: i64, timerType: i32) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QProcess, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QProcess, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QProcess, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QProcess, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QProcess, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QProcess, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QProcess, callback: *const fn (QProcess, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Pos(self: QProcess) i64 {
        return qtc.QProcess_Pos(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperPos(self: QProcess) i64 {
        return qtc.QProcess_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Size(self: QProcess) i64 {
        return qtc.QProcess_Size(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperSize(self: QProcess) i64 {
        return qtc.QProcess_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QProcess, pos: i64) bool {
        return qtc.QProcess_Seek(@ptrCast(self.ptr), @bitCast(pos));
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
    /// ` self: QProcess `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QProcess, pos: i64) bool {
        return qtc.QProcess_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) bool) void {
        qtc.QProcess_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn AtEnd(self: QProcess) bool {
        return qtc.QProcess_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperAtEnd(self: QProcess) bool {
        return qtc.QProcess_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Reset(self: QProcess) bool {
        return qtc.QProcess_Reset(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperReset(self: QProcess) bool {
        return qtc.QProcess_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn BytesAvailable(self: QProcess) i64 {
        return qtc.QProcess_BytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperBytesAvailable(self: QProcess) i64 {
        return qtc.QProcess_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn CanReadLine(self: QProcess) bool {
        return qtc.QProcess_CanReadLine(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperCanReadLine(self: QProcess) bool {
        return qtc.QProcess_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QProcess, callback: *const fn (QProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QProcess, maxSize: i64) i64 {
        return qtc.QProcess_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QProcess, maxSize: i64) i64 {
        return qtc.QProcess_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) i64) void {
        qtc.QProcess_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QProcess, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProcess_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QProcess, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProcess_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QProcess, callback: *const fn (QProcess, QEvent) callconv(.c) bool) void {
        qtc.QProcess_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QProcess, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProcess_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QProcess, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QProcess_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QProcess, callback: *const fn (QProcess, QObject, QEvent) callconv(.c) bool) void {
        qtc.QProcess_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QProcess_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QProcess_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QProcess, callback: *const fn (QProcess, QTimerEvent) callconv(.c) void) void {
        qtc.QProcess_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QProcess_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QProcess_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QProcess, callback: *const fn (QProcess, QChildEvent) callconv(.c) void) void {
        qtc.QProcess_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QProcess_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QProcess, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QProcess_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QProcess, callback: *const fn (QProcess, QEvent) callconv(.c) void) void {
        qtc.QProcess_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) void) void {
        qtc.QProcess_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) void) void {
        qtc.QProcess_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QProcess, openMode: i32) void {
        qtc.QProcess_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: QProcess `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QProcess, openMode: i32) void {
        qtc.QProcess_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QProcess, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QProcess_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QProcess `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QProcess, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QProcess_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QProcess_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn Sender(self: QProcess) QObject {
        return .{ .ptr = qtc.QProcess_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QProcess `
    ///
    pub fn SuperSender(self: QProcess) QObject {
        return .{ .ptr = qtc.QProcess_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QProcess, callback: *const fn () callconv(.c) QObject) void {
        qtc.QProcess_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn SenderSignalIndex(self: QProcess) i32 {
        return qtc.QProcess_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn SuperSenderSignalIndex(self: QProcess) i32 {
        return qtc.QProcess_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QProcess, callback: *const fn () callconv(.c) i32) void {
        qtc.QProcess_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProcess_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProcess_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProcess_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) bool) void {
        qtc.QProcess_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnStarted(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#stateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, state: qprocess_enums.ProcessState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardOutput)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnReadyReadStandardOutput(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readyReadStandardError)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn OnReadyReadStandardError(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#dtor.QProcess)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcess `
    ///
    pub fn Delete(self: QProcess) void {
        qtc.QProcess_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html)
pub const QProcess__UnixProcessParameters = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QProcess__UnixProcessParameters,

    pub const _is_QProcess__UnixProcessParameters = {};

    /// New constructs a new QProcess::UnixProcessParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn New(other: anytype) QProcess__UnixProcessParameters {
        comptime _ = @TypeOf(other)._is_QProcess__UnixProcessParameters;
        return .{ .ptr = qtc.QProcess__UnixProcessParameters_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QProcess::UnixProcessParameters object and invalidates the source QProcess::UnixProcessParameters object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn New2(other: anytype) QProcess__UnixProcessParameters {
        comptime _ = @TypeOf(other)._is_QProcess__UnixProcessParameters;
        return .{ .ptr = qtc.QProcess__UnixProcessParameters_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn CopyAssign(self: QProcess__UnixProcessParameters, other: QProcess__UnixProcessParameters) void {
        qtc.QProcess__UnixProcessParameters_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn MoveAssign(self: QProcess__UnixProcessParameters, other: QProcess__UnixProcessParameters) void {
        qtc.QProcess__UnixProcessParameters_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ## Returns:
    ///
    /// ` flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn Flags(self: QProcess__UnixProcessParameters) u32 {
        return qtc.QProcess__UnixProcessParameters_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` flags: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn SetFlags(self: QProcess__UnixProcessParameters, flags: u32) void {
        qtc.QProcess__UnixProcessParameters_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    pub fn LowestFileDescriptorToClose(self: QProcess__UnixProcessParameters) i32 {
        return qtc.QProcess__UnixProcessParameters_LowestFileDescriptorToClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` lowestFileDescriptorToClose: i32 `
    ///
    pub fn SetLowestFileDescriptorToClose(self: QProcess__UnixProcessParameters, lowestFileDescriptorToClose: i32) void {
        qtc.QProcess__UnixProcessParameters_SetLowestFileDescriptorToClose(@ptrCast(self.ptr), @bitCast(lowestFileDescriptorToClose));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    pub fn Delete(self: QProcess__UnixProcessParameters) void {
        qtc.QProcess__UnixProcessParameters_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#public-types)
pub const enums = struct {
    pub const Initialization = enum(i32) {
        pub const InheritFromParent: i32 = 0;
    };

    pub const ProcessError = enum(i32) {
        pub const FailedToStart: i32 = 0;
        pub const Crashed: i32 = 1;
        pub const Timedout: i32 = 2;
        pub const ReadError: i32 = 3;
        pub const WriteError: i32 = 4;
        pub const UnknownError: i32 = 5;
    };

    pub const ProcessState = enum(i32) {
        pub const NotRunning: i32 = 0;
        pub const Starting: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const ProcessChannel = enum(i32) {
        pub const StandardOutput: i32 = 0;
        pub const StandardError: i32 = 1;
    };

    pub const ProcessChannelMode = enum(i32) {
        pub const SeparateChannels: i32 = 0;
        pub const MergedChannels: i32 = 1;
        pub const ForwardedChannels: i32 = 2;
        pub const ForwardedOutputChannel: i32 = 3;
        pub const ForwardedErrorChannel: i32 = 4;
    };

    pub const InputChannelMode = enum(i32) {
        pub const ManagedInputChannel: i32 = 0;
        pub const ForwardedInputChannel: i32 = 1;
    };

    pub const ExitStatus = enum(i32) {
        pub const NormalExit: i32 = 0;
        pub const CrashExit: i32 = 1;
    };

    pub const UnixProcessFlag = enum(u32) {
        pub const ResetSignalHandlers: u32 = 1;
        pub const IgnoreSigPipe: u32 = 2;
        pub const CloseFileDescriptors: u32 = 16;
        pub const UseVFork: u32 = 32;
        pub const CreateNewSession: u32 = 64;
        pub const DisconnectControllingTerminal: u32 = 128;
        pub const ResetIds: u32 = 256;
    };
};
