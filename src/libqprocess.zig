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
const builtin = @import("builtin");
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QProcessEnvironment object in C++ memory
    ///
    pub fn new() QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QProcessEnvironment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qprocess_enums.Initialization `
    ///
    pub fn new2(param1: i32) QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QProcessEnvironment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn new3(other: anytype) QProcessEnvironment {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        return .{ .ptr = qtc.QProcessEnvironment_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn operatorAssign(self: QProcessEnvironment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` other: QProcessEnvironment `
    ///
    pub fn swap(self: QProcessEnvironment, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn isEmpty(self: QProcessEnvironment) bool {
        return qtc.QProcessEnvironment_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inheritsFromParent` instead
    ///
    pub const InheritsFromParent = inheritsFromParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#inheritsFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn inheritsFromParent(self: QProcessEnvironment) bool {
        return qtc.QProcessEnvironment_InheritsFromParent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn clear(self: QProcessEnvironment) void {
        qtc.QProcessEnvironment_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn contains(self: QProcessEnvironment, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QProcessEnvironment_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn insert(self: QProcessEnvironment, name: []const u8, _value: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QProcessEnvironment_Insert(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` name: []const u8 `
    ///
    pub fn remove(self: QProcessEnvironment, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QProcessEnvironment_Remove(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

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
    pub fn value(self: QProcessEnvironment, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QProcessEnvironment_Value(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcessEnvironment.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toStringList` instead
    ///
    pub const ToStringList = toStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toStringList(self: QProcessEnvironment, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcessEnvironment_ToStringList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcessEnvironment.toStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcessEnvironment.toStringList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: QProcessEnvironment, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcessEnvironment_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcessEnvironment.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcessEnvironment.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcessEnvironment `
    ///
    /// ` e: QProcessEnvironment `
    ///
    pub fn insert2(self: QProcessEnvironment, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QProcessEnvironment;
        qtc.QProcessEnvironment_Insert2(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `systemEnvironment` instead
    ///
    pub const SystemEnvironment = systemEnvironment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#systemEnvironment)
    ///
    pub fn systemEnvironment() QProcessEnvironment {
        return .{ .ptr = qtc.QProcessEnvironment_SystemEnvironment() };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

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
    pub fn value2(self: QProcessEnvironment, allocator: std.mem.Allocator, name: []const u8, defaultValue: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcessEnvironment.value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocessenvironment.html#dtor.QProcessEnvironment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcessEnvironment `
    ///
    pub fn delete(self: QProcessEnvironment) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QProcess object in C++ memory
    ///
    pub fn new() QProcess {
        return .{ .ptr = qtc.QProcess_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QProcess object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QProcess {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QProcess_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn metaObject(self: QProcess) QMetaObject {
        return .{ .ptr = qtc.QProcess_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QProcess, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QProcess_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn superMetaObject(self: QProcess) QMetaObject {
        return .{ .ptr = qtc.QProcess_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProcess_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QProcess_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QProcess, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QProcess_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProcess_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QProcess, callback: *const fn (QProcess, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QProcess_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QProcess, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QProcess_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _program: []const u8 `
    ///
    pub fn start(self: QProcess, _program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        qtc.QProcess_Start(@ptrCast(self.ptr), program_str);
    }

    /// ### DEPRECATED: Use `start2` instead
    ///
    pub const Start2 = start2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn start2(self: QProcess) void {
        qtc.QProcess_Start2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startCommand` instead
    ///
    pub const StartCommand = startCommand;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` command: []const u8 `
    ///
    pub fn startCommand(self: QProcess, command: []const u8) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand(@ptrCast(self.ptr), command_str);
    }

    /// ### DEPRECATED: Use `startDetached` instead
    ///
    pub const StartDetached = startDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn startDetached(self: QProcess) bool {
        return qtc.QProcess_StartDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: QProcess, mode: i32) bool {
        return qtc.QProcess_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

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
    pub fn onOpen(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

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
    pub fn superOpen(self: QProcess, mode: i32) bool {
        return qtc.QProcess_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `program` instead
    ///
    pub const Program = program;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#program)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn program(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_Program(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.program: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProgram` instead
    ///
    pub const SetProgram = setProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _program: []const u8 `
    ///
    pub fn setProgram(self: QProcess, _program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        qtc.QProcess_SetProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn arguments(self: QProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Arguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcess.arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcess.arguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setArguments` instead
    ///
    pub const SetArguments = setArguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    pub fn setArguments(self: QProcess, allocator: std.mem.Allocator, _arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.setArguments: Memory allocation failed");
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
    pub fn processChannelMode(self: QProcess) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProcessChannelMode` instead
    ///
    pub const SetProcessChannelMode = setProcessChannelMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: qprocess_enums.ProcessChannelMode `
    ///
    pub fn setProcessChannelMode(self: QProcess, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `inputChannelMode` instead
    ///
    pub const InputChannelMode = inputChannelMode;

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
    pub fn inputChannelMode(self: QProcess) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputChannelMode` instead
    ///
    pub const SetInputChannelMode = setInputChannelMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setInputChannelMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: qprocess_enums.InputChannelMode `
    ///
    pub fn setInputChannelMode(self: QProcess, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `readChannel` instead
    ///
    pub const ReadChannel = readChannel;

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
    pub fn readChannel(self: QProcess) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadChannel` instead
    ///
    pub const SetReadChannel = setReadChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn setReadChannel(self: QProcess, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `closeReadChannel` instead
    ///
    pub const CloseReadChannel = closeReadChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` channel: qprocess_enums.ProcessChannel `
    ///
    pub fn closeReadChannel(self: QProcess, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `closeWriteChannel` instead
    ///
    pub const CloseWriteChannel = closeWriteChannel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#closeWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn closeWriteChannel(self: QProcess) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStandardInputFile` instead
    ///
    pub const SetStandardInputFile = setStandardInputFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardInputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardInputFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardInputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardOutputFile` instead
    ///
    pub const SetStandardOutputFile = setStandardOutputFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardOutputFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardErrorFile` instead
    ///
    pub const SetStandardErrorFile = setStandardErrorFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardErrorFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setStandardErrorFile(self: QProcess, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `setStandardOutputProcess` instead
    ///
    pub const SetStandardOutputProcess = setStandardOutputProcess;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setStandardOutputProcess)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` destination: QProcess `
    ///
    pub fn setStandardOutputProcess(self: QProcess, destination: anytype) void {
        comptime _ = @TypeOf(destination)._is_QProcess;
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self.ptr), @ptrCast(destination.ptr));
    }

    /// ### DEPRECATED: Use `setChildProcessModifier` instead
    ///
    pub const SetChildProcessModifier = setChildProcessModifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` modifier: *const fn () callconv(.c) void `
    ///
    pub fn setChildProcessModifier(self: QProcess, modifier: *const fn () callconv(.c) void) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        qtc.QProcess_SetChildProcessModifier(@ptrCast(self.ptr), @bitCast(@intFromPtr(modifier)));
    }

    /// ### DEPRECATED: Use `failChildProcessModifier` instead
    ///
    pub const FailChildProcessModifier = failChildProcessModifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#failChildProcessModifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` description: [:0]const u8 `
    ///
    pub fn failChildProcessModifier(self: QProcess, description: [:0]const u8) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier(@ptrCast(self.ptr), description_Cstring);
    }

    /// ### DEPRECATED: Use `unixProcessParameters` instead
    ///
    pub const UnixProcessParameters = unixProcessParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#unixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn unixProcessParameters(self: QProcess) QProcess__UnixProcessParameters {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        return .{ .ptr = qtc.QProcess_UnixProcessParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUnixProcessParameters` instead
    ///
    pub const SetUnixProcessParameters = setUnixProcessParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` params: QProcess__UnixProcessParameters `
    ///
    pub fn setUnixProcessParameters(self: QProcess, params: anytype) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        comptime _ = @TypeOf(params)._is_QProcess__UnixProcessParameters;
        qtc.QProcess_SetUnixProcessParameters(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### DEPRECATED: Use `setUnixProcessParameters2` instead
    ///
    pub const SetUnixProcessParameters2 = setUnixProcessParameters2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setUnixProcessParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` flagsOnly: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn setUnixProcessParameters2(self: QProcess, flagsOnly: u32) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        qtc.QProcess_SetUnixProcessParameters2(@ptrCast(self.ptr), @bitCast(flagsOnly));
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn setWorkingDirectory(self: QProcess, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QProcess_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `setEnvironment` instead
    ///
    pub const SetEnvironment = setEnvironment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _environment: []const []const u8 `
    ///
    pub fn setEnvironment(self: QProcess, allocator: std.mem.Allocator, _environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, _environment.len) catch @panic("QProcess.setEnvironment: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#environment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn environment(self: QProcess, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QProcess_Environment(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcess.environment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcess.environment: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setProcessEnvironment` instead
    ///
    pub const SetProcessEnvironment = setProcessEnvironment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _environment: QProcessEnvironment `
    ///
    pub fn setProcessEnvironment(self: QProcess, _environment: anytype) void {
        comptime _ = @TypeOf(_environment)._is_QProcessEnvironment;
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self.ptr), @ptrCast(_environment.ptr));
    }

    /// ### DEPRECATED: Use `processEnvironment` instead
    ///
    pub const ProcessEnvironment = processEnvironment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn processEnvironment(self: QProcess) QProcessEnvironment {
        return .{ .ptr = qtc.QProcess_ProcessEnvironment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QProcess) i32 {
        return qtc.QProcess_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QProcess) i32 {
        return qtc.QProcess_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `processId` instead
    ///
    pub const ProcessId = processId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#processId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn processId(self: QProcess) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForStarted` instead
    ///
    pub const WaitForStarted = waitForStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn waitForStarted(self: QProcess) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForReadyRead(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

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
    pub fn onWaitForReadyRead(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

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
    pub fn superWaitForReadyRead(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForBytesWritten(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

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
    pub fn onWaitForBytesWritten(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

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
    pub fn superWaitForBytesWritten(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn waitForFinished(self: QProcess) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readAllStandardOutput` instead
    ///
    pub const ReadAllStandardOutput = readAllStandardOutput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardOutput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllStandardOutput(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.readAllStandardOutput: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAllStandardError` instead
    ///
    pub const ReadAllStandardError = readAllStandardError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#readAllStandardError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllStandardError(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.readAllStandardError: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exitCode` instead
    ///
    pub const ExitCode = exitCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#exitCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn exitCode(self: QProcess) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exitStatus` instead
    ///
    pub const ExitStatus = exitStatus;

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
    pub fn exitStatus(self: QProcess) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn bytesToWrite(self: QProcess) i64 {
        return qtc.QProcess_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

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
    pub fn onBytesToWrite(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn superBytesToWrite(self: QProcess) i64 {
        return qtc.QProcess_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn isSequential(self: QProcess) bool {
        return qtc.QProcess_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

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
    pub fn onIsSequential(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn superIsSequential(self: QProcess) bool {
        return qtc.QProcess_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn close(self: QProcess) void {
        qtc.QProcess_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    pub fn onClose(self: QProcess, callback: *const fn () callconv(.c) void) void {
        qtc.QProcess_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn superClose(self: QProcess) void {
        qtc.QProcess_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `execute` instead
    ///
    pub const Execute = execute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` _program: []const u8 `
    ///
    pub fn execute(_program: []const u8) i32 {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        return qtc.QProcess_Execute(program_str);
    }

    /// ### DEPRECATED: Use `startDetached2` instead
    ///
    pub const StartDetached2 = startDetached2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` _program: []const u8 `
    ///
    pub fn startDetached2(_program: []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        return qtc.QProcess_StartDetached2(program_str);
    }

    /// ### DEPRECATED: Use `systemEnvironment` instead
    ///
    pub const SystemEnvironment = systemEnvironment;

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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcess.systemEnvironment: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcess.systemEnvironment: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `nullDevice` instead
    ///
    pub const NullDevice = nullDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#nullDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nullDevice(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QProcess_NullDevice();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.nullDevice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `splitCommand` instead
    ///
    pub const SplitCommand = splitCommand;

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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QProcess.splitCommand: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcess.splitCommand: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `terminate` instead
    ///
    pub const Terminate = terminate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#terminate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn terminate(self: QProcess) void {
        qtc.QProcess_Terminate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    pub fn kill(self: QProcess) void {
        qtc.QProcess_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _exitCode: i32 `
    ///
    pub fn finished(self: QProcess, _exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self.ptr), @bitCast(_exitCode));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, exitCode: i32) callconv(.c) void `
    ///
    pub fn onFinished(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` errorVal: qprocess_enums.ProcessError `
    ///
    pub fn errorOccurred(self: QProcess, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, errorVal: qprocess_enums.ProcessError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProcessState` instead
    ///
    pub const SetProcessState = setProcessState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _state: qprocess_enums.ProcessState `
    ///
    pub fn setProcessState(self: QProcess, _state: i32) void {
        qtc.QProcess_SetProcessState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetProcessState` instead
    ///
    pub const OnSetProcessState = onSetProcessState;

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
    pub fn onSetProcessState(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_OnSetProcessState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProcessState` instead
    ///
    pub const SuperSetProcessState = superSetProcessState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#setProcessState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _state: qprocess_enums.ProcessState `
    ///
    pub fn superSetProcessState(self: QProcess, _state: i32) void {
        qtc.QProcess_SuperSetProcessState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

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
    pub fn readData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

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
    pub fn onReadData(self: QProcess, callback: *const fn (QProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

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
    pub fn superReadData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeData(self: QProcess, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, data: [*:0]const u8, len: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: QProcess, callback: *const fn (QProcess, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

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
    /// ` len: i64 `
    ///
    pub fn superWriteData(self: QProcess, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `start22` instead
    ///
    pub const Start22 = start22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    pub fn start22(self: QProcess, allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.start22: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn start3(self: QProcess, allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8, mode: i32) void {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.start3: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn start1(self: QProcess, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startCommand2` instead
    ///
    pub const StartCommand2 = startCommand2;

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
    pub fn startCommand2(self: QProcess, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        qtc.QProcess_StartCommand2(@ptrCast(self.ptr), command_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startDetached1` instead
    ///
    pub const StartDetached1 = startDetached1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#startDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` pid: *i64 `
    ///
    pub fn startDetached1(self: QProcess, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self.ptr), @ptrCast(pid));
    }

    /// ### DEPRECATED: Use `setStandardOutputFile2` instead
    ///
    pub const SetStandardOutputFile2 = setStandardOutputFile2;

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
    pub fn setStandardOutputFile2(self: QProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardOutputFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setStandardErrorFile2` instead
    ///
    pub const SetStandardErrorFile2 = setStandardErrorFile2;

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
    pub fn setStandardErrorFile2(self: QProcess, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QProcess_SetStandardErrorFile2(@ptrCast(self.ptr), fileName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `failChildProcessModifier2` instead
    ///
    pub const FailChildProcessModifier2 = failChildProcessModifier2;

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
    pub fn failChildProcessModifier2(self: QProcess, description: [:0]const u8, errorVal: i32) void {
        if (builtin.target.os.tag == .windows) @compileError("Unsupported operating system");
        const description_Cstring = description.ptr;
        qtc.QProcess_FailChildProcessModifier2(@ptrCast(self.ptr), description_Cstring, @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `waitForStarted1` instead
    ///
    pub const WaitForStarted1 = waitForStarted1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForStarted1(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForFinished1` instead
    ///
    pub const WaitForFinished1 = waitForFinished1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForFinished1(self: QProcess, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `execute2` instead
    ///
    pub const Execute2 = execute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#execute)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _program: []const u8 `
    ///
    /// ` _arguments: []const []const u8 `
    ///
    pub fn execute2(allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8) i32 {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.execute2: Memory allocation failed");
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
        return qtc.QProcess_Execute2(program_str, arguments_list);
    }

    /// ### DEPRECATED: Use `startDetached22` instead
    ///
    pub const StartDetached22 = startDetached22;

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
    pub fn startDetached22(allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.startDetached22: Memory allocation failed");
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
        return qtc.QProcess_StartDetached22(program_str, arguments_list);
    }

    /// ### DEPRECATED: Use `startDetached3` instead
    ///
    pub const StartDetached3 = startDetached3;

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
    pub fn startDetached3(allocator: std.mem.Allocator, _program: []const u8, _arguments: []const []const u8, _workingDirectory: []const u8) bool {
        const program_str = qtc.libqt_string{
            .len = _program.len,
            .data = _program.ptr,
        };
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.startDetached3: Memory allocation failed");
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
        return qtc.QProcess_StartDetached3(program_str, arguments_list, workingDirectory_str);
    }

    /// ### DEPRECATED: Use `startDetached4` instead
    ///
    pub const StartDetached4 = startDetached4;

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
        const arguments_arr = allocator.alloc(qtc.libqt_string, _arguments.len) catch @panic("QProcess.startDetached4: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess `
    ///
    /// ` _exitCode: i32 `
    ///
    /// ` _exitStatus: qprocess_enums.ExitStatus `
    ///
    pub fn finished2(self: QProcess, _exitCode: i32, _exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self.ptr), @bitCast(_exitCode), @bitCast(_exitStatus));
    }

    /// ### DEPRECATED: Use `onFinished2` instead
    ///
    pub const OnFinished2 = onFinished2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, exitCode: i32, exitStatus: qprocess_enums.ExitStatus) callconv(.c) void `
    ///
    pub fn onFinished2(self: QProcess, callback: *const fn (QProcess, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openMode(self: QProcess) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTextModeEnabled(self: QProcess, enabled: bool) void {
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
    /// ` self: QProcess `
    ///
    pub fn isTextModeEnabled(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn isOpen(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn isReadable(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn isWritable(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn readChannelCount(self: QProcess) i32 {
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
    /// ` self: QProcess `
    ///
    pub fn writeChannelCount(self: QProcess) i32 {
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
    /// ` self: QProcess `
    ///
    pub fn currentReadChannel(self: QProcess) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentReadChannel(self: QProcess, channel: i32) void {
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
    /// ` self: QProcess `
    ///
    pub fn currentWriteChannel(self: QProcess) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentWriteChannel(self: QProcess, channel: i32) void {
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read2(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.read2: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.readAll: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine2(self: QProcess, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.readLine2: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    pub fn startTransaction(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    pub fn commitTransaction(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    pub fn rollbackTransaction(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    pub fn isTransactionStarted(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn write(self: QProcess, data: [:0]const u8, len: i64) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn write2(self: QProcess, data: [:0]const u8) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` data: []u8 `
    ///
    pub fn write3(self: QProcess, data: []u8) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek2(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.peek2: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skip(self: QProcess, maxSize: i64) i64 {
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
    /// ` self: QProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn ungetChar(self: QProcess, c: u8) void {
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
    /// ` self: QProcess `
    ///
    /// ` c: u8 `
    ///
    pub fn putChar(self: QProcess, c: u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn getChar(self: QProcess, c: [:0]u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.errorString: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    pub fn readyRead(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn onReadyRead(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    pub fn channelReadyRead(self: QProcess, channel: i32) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, channel: i32) callconv(.c) void `
    ///
    pub fn onChannelReadyRead(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: QProcess, bytes: i64) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn channelBytesWritten(self: QProcess, channel: i32, bytes: i64) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn onChannelBytesWritten(self: QProcess, callback: *const fn (QProcess, i32, i64) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    pub fn aboutToClose(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    pub fn readChannelFinished(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine1(self: QProcess, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QProcess.readLine1: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QProcess, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QProcess.objectName: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QProcess, name: []const u8) void {
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
    /// ` self: QProcess `
    ///
    pub fn isWidgetType(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn isWindowType(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn isQuickItemType(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    pub fn signalsBlocked(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QProcess, b: bool) bool {
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
    /// ` self: QProcess `
    ///
    pub fn thread(self: QProcess) QThread {
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
    /// ` self: QProcess `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QProcess, _thread: anytype) bool {
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
    /// ` self: QProcess `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QProcess, interval: i32) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QProcess, time: i64) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QProcess, id: i32) void {
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
    /// ` self: QProcess `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QProcess, id: i32) void {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QProcess, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QProcess.children: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QProcess, _parent: anytype) void {
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
    /// ` self: QProcess `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QProcess, filterObj: anytype) void {
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
    /// ` self: QProcess `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QProcess, obj: anytype) void {
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
    /// ` self: QProcess `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QProcess, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QProcess `
    ///
    pub fn disconnect3(self: QProcess) bool {
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
    /// ` self: QProcess `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QProcess, receiver: anytype) bool {
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
    /// ` self: QProcess `
    ///
    pub fn dumpObjectTree(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    pub fn dumpObjectInfo(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QProcess, name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QProcess, name: [:0]const u8) QVariant {
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
    /// ` self: QProcess `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QProcess, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QProcess.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QProcess.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QProcess `
    ///
    pub fn bindingStorage(self: QProcess) QBindingStorage {
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
    /// ` self: QProcess `
    ///
    pub fn bindingStorage2(self: QProcess) QBindingStorage {
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
    /// ` self: QProcess `
    ///
    pub fn destroyed(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    pub fn parent(self: QProcess) QObject {
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
    /// ` self: QProcess `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QProcess, classname: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    pub fn deleteLater(self: QProcess) void {
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
    /// ` self: QProcess `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QProcess, interval: i32, timerType: i32) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QProcess, time: i64, timerType: i32) i32 {
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
    /// ` self: QProcess `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QProcess, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QProcess, signal: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QProcess, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QProcess, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QProcess, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QProcess `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QProcess, param1: anytype) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QProcess, callback: *const fn (QProcess, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn pos(self: QProcess) i64 {
        return qtc.QProcess_Pos(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superPos(self: QProcess) i64 {
        return qtc.QProcess_SuperPos(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onPos(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn size(self: QProcess) i64 {
        return qtc.QProcess_Size(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superSize(self: QProcess) i64 {
        return qtc.QProcess_SuperSize(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onSize(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QProcess, _pos: i64) bool {
        return qtc.QProcess_Seek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QProcess `
    ///
    /// ` _pos: i64 `
    ///
    pub fn superSeek(self: QProcess, _pos: i64) bool {
        return qtc.QProcess_SuperSeek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, pos: i64) callconv(.c) bool `
    ///
    pub fn onSeek(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) bool) void {
        qtc.QProcess_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn atEnd(self: QProcess) bool {
        return qtc.QProcess_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superAtEnd(self: QProcess) bool {
        return qtc.QProcess_SuperAtEnd(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onAtEnd(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn reset(self: QProcess) bool {
        return qtc.QProcess_Reset(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superReset(self: QProcess) bool {
        return qtc.QProcess_SuperReset(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReset(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn bytesAvailable(self: QProcess) i64 {
        return qtc.QProcess_BytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superBytesAvailable(self: QProcess) i64 {
        return qtc.QProcess_SuperBytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesAvailable(self: QProcess, callback: *const fn () callconv(.c) i64) void {
        qtc.QProcess_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn canReadLine(self: QProcess) bool {
        return qtc.QProcess_CanReadLine(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superCanReadLine(self: QProcess) bool {
        return qtc.QProcess_SuperCanReadLine(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCanReadLine(self: QProcess, callback: *const fn () callconv(.c) bool) void {
        qtc.QProcess_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLineData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QProcess `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn superReadLineData(self: QProcess, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QProcess_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn onReadLineData(self: QProcess, callback: *const fn (QProcess, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skipData(self: QProcess, maxSize: i64) i64 {
        return qtc.QProcess_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: QProcess `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn superSkipData(self: QProcess, maxSize: i64) i64 {
        return qtc.QProcess_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn onSkipData(self: QProcess, callback: *const fn (QProcess, i64) callconv(.c) i64) void {
        qtc.QProcess_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QProcess, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProcess_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QProcess, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProcess_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QProcess, callback: *const fn (QProcess, QEvent) callconv(.c) bool) void {
        qtc.QProcess_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QProcess, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProcess_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QProcess, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QProcess_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QProcess, callback: *const fn (QProcess, QObject, QEvent) callconv(.c) bool) void {
        qtc.QProcess_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QProcess_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QProcess_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QProcess, callback: *const fn (QProcess, QTimerEvent) callconv(.c) void) void {
        qtc.QProcess_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QProcess_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QProcess_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QProcess, callback: *const fn (QProcess, QChildEvent) callconv(.c) void) void {
        qtc.QProcess_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QProcess_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QProcess, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QProcess_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QProcess, callback: *const fn (QProcess, QEvent) callconv(.c) void) void {
        qtc.QProcess_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) void) void {
        qtc.QProcess_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QProcess, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QProcess_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) void) void {
        qtc.QProcess_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: QProcess, _openMode: i32) void {
        qtc.QProcess_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QProcess `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: QProcess, _openMode: i32) void {
        qtc.QProcess_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn onSetOpenMode(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QProcess, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QProcess_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QProcess `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: QProcess, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QProcess_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QProcess_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn sender(self: QProcess) QObject {
        return .{ .ptr = qtc.QProcess_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QProcess `
    ///
    pub fn superSender(self: QProcess) QObject {
        return .{ .ptr = qtc.QProcess_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QProcess, callback: *const fn () callconv(.c) QObject) void {
        qtc.QProcess_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    pub fn senderSignalIndex(self: QProcess) i32 {
        return qtc.QProcess_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QProcess `
    ///
    pub fn superSenderSignalIndex(self: QProcess) i32 {
        return qtc.QProcess_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QProcess, callback: *const fn () callconv(.c) i32) void {
        qtc.QProcess_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QProcess `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QProcess, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QProcess_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) i32) void {
        qtc.QProcess_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProcess_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QProcess, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QProcess_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QProcess`
    ///
    /// ` callback: *const fn (self: QProcess, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QProcess, callback: *const fn (QProcess, QMetaMethod) callconv(.c) bool) void {
        qtc.QProcess_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

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
    pub fn onStarted(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

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
    pub fn onStateChanged(self: QProcess, callback: *const fn (QProcess, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onReadyReadStandardOutput` instead
    ///
    pub const OnReadyReadStandardOutput = onReadyReadStandardOutput;

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
    pub fn onReadyReadStandardOutput(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
        qtc.QProcess_Connect_ReadyReadStandardOutput(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onReadyReadStandardError` instead
    ///
    pub const OnReadyReadStandardError = onReadyReadStandardError;

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
    pub fn onReadyReadStandardError(self: QProcess, callback: *const fn (QProcess) callconv(.c) void) void {
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
    /// ` self: QProcess `
    ///
    /// ` callback: *const fn (self: QProcess, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QProcess, callback: *const fn (QProcess, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess.html#dtor.QProcess)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcess `
    ///
    pub fn delete(self: QProcess) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QProcess::UnixProcessParameters object in C++ memory
    ///
    pub fn new() QProcess__UnixProcessParameters {
        return .{ .ptr = qtc.QProcess__UnixProcessParameters_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QProcess::UnixProcessParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn new2(other: anytype) QProcess__UnixProcessParameters {
        comptime _ = @TypeOf(other)._is_QProcess__UnixProcessParameters;
        return .{ .ptr = qtc.QProcess__UnixProcessParameters_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QProcess::UnixProcessParameters object and invalidate the source QProcess::UnixProcessParameters object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn new3(other: anytype) QProcess__UnixProcessParameters {
        comptime _ = @TypeOf(other)._is_QProcess__UnixProcessParameters;
        return .{ .ptr = qtc.QProcess__UnixProcessParameters_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn copyAssign(self: QProcess__UnixProcessParameters, other: QProcess__UnixProcessParameters) void {
        qtc.QProcess__UnixProcessParameters_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` other: QProcess__UnixProcessParameters `
    ///
    pub fn moveAssign(self: QProcess__UnixProcessParameters, other: QProcess__UnixProcessParameters) void {
        qtc.QProcess__UnixProcessParameters_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QProcess__UnixProcessParameters) u32 {
        return qtc.QProcess__UnixProcessParameters_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` _flags: flag of qprocess_enums.UnixProcessFlag `
    ///
    pub fn setFlags(self: QProcess__UnixProcessParameters, _flags: u32) void {
        qtc.QProcess__UnixProcessParameters_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `lowestFileDescriptorToClose` instead
    ///
    pub const LowestFileDescriptorToClose = lowestFileDescriptorToClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    pub fn lowestFileDescriptorToClose(self: QProcess__UnixProcessParameters) i32 {
        return qtc.QProcess__UnixProcessParameters_LowestFileDescriptorToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLowestFileDescriptorToClose` instead
    ///
    pub const SetLowestFileDescriptorToClose = setLowestFileDescriptorToClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprocess-unixprocessparameters.html#lowestFileDescriptorToClose-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    /// ` _lowestFileDescriptorToClose: i32 `
    ///
    pub fn setLowestFileDescriptorToClose(self: QProcess__UnixProcessParameters, _lowestFileDescriptorToClose: i32) void {
        qtc.QProcess__UnixProcessParameters_SetLowestFileDescriptorToClose(@ptrCast(self.ptr), @bitCast(_lowestFileDescriptorToClose));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QProcess__UnixProcessParameters `
    ///
    pub fn delete(self: QProcess__UnixProcessParameters) void {
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
