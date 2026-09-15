const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const qqmldebug_enums = enums;
const std = @import("std");
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)
pub const QQmlDebuggingEnabler = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlDebuggingEnabler,

    pub const _is_QQmlDebuggingEnabler = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlDebuggingEnabler object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQmlDebuggingEnabler `
    ///
    pub fn new(other: anytype) QQmlDebuggingEnabler {
        comptime _ = @TypeOf(other)._is_QQmlDebuggingEnabler;
        return .{ .ptr = qtc.QQmlDebuggingEnabler_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlDebuggingEnabler object and invalidate the source QQmlDebuggingEnabler object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQmlDebuggingEnabler `
    ///
    pub fn new2(other: anytype) QQmlDebuggingEnabler {
        comptime _ = @TypeOf(other)._is_QQmlDebuggingEnabler;
        return .{ .ptr = qtc.QQmlDebuggingEnabler_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQmlDebuggingEnabler object in C++ memory
    ///
    pub fn new3() QQmlDebuggingEnabler {
        return .{ .ptr = qtc.QQmlDebuggingEnabler_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQmlDebuggingEnabler object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` printWarning: bool `
    ///
    pub fn new4(printWarning: bool) QQmlDebuggingEnabler {
        return .{ .ptr = qtc.QQmlDebuggingEnabler_new4(printWarning) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlDebuggingEnabler `
    ///
    /// ` other: QQmlDebuggingEnabler `
    ///
    pub fn copyAssign(self: QQmlDebuggingEnabler, other: QQmlDebuggingEnabler) void {
        qtc.QQmlDebuggingEnabler_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlDebuggingEnabler `
    ///
    /// ` other: QQmlDebuggingEnabler `
    ///
    pub fn moveAssign(self: QQmlDebuggingEnabler, other: QQmlDebuggingEnabler) void {
        qtc.QQmlDebuggingEnabler_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `enableDebugging` instead
    ///
    pub const EnableDebugging = enableDebugging;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#enableDebugging)
    ///
    /// ## Parameter(s):
    ///
    /// ` printWarning: bool `
    ///
    pub fn enableDebugging(printWarning: bool) void {
        qtc.QQmlDebuggingEnabler_EnableDebugging(printWarning);
    }

    /// ### DEPRECATED: Use `debuggerServices` instead
    ///
    pub const DebuggerServices = debuggerServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#debuggerServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn debuggerServices(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlDebuggingEnabler_DebuggerServices();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlDebuggingEnabler.debuggerServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlDebuggingEnabler.debuggerServices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `inspectorServices` instead
    ///
    pub const InspectorServices = inspectorServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#inspectorServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inspectorServices(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlDebuggingEnabler_InspectorServices();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlDebuggingEnabler.inspectorServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlDebuggingEnabler.inspectorServices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `profilerServices` instead
    ///
    pub const ProfilerServices = profilerServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#profilerServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn profilerServices(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlDebuggingEnabler_ProfilerServices();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlDebuggingEnabler.profilerServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlDebuggingEnabler.profilerServices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `nativeDebuggerServices` instead
    ///
    pub const NativeDebuggerServices = nativeDebuggerServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#nativeDebuggerServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nativeDebuggerServices(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlDebuggingEnabler_NativeDebuggerServices();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlDebuggingEnabler.nativeDebuggerServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlDebuggingEnabler.nativeDebuggerServices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setServices` instead
    ///
    pub const SetServices = setServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#setServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` services: []const []const u8 `
    ///
    pub fn setServices(allocator: std.mem.Allocator, services: []const []const u8) void {
        const services_arr = allocator.alloc(qtc.libqt_string, services.len) catch @panic("QQmlDebuggingEnabler.setServices: Memory allocation failed");
        defer allocator.free(services_arr);
        for (services, 0..services.len) |str_item, i|
            services_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = services_arr.ptr,
        };
        qtc.QQmlDebuggingEnabler_SetServices(services_list);
    }

    /// ### DEPRECATED: Use `startTcpDebugServer` instead
    ///
    pub const StartTcpDebugServer = startTcpDebugServer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` port: i32 `
    ///
    pub fn startTcpDebugServer(port: i32) bool {
        return qtc.QQmlDebuggingEnabler_StartTcpDebugServer(@bitCast(port));
    }

    /// ### DEPRECATED: Use `connectToLocalDebugger` instead
    ///
    pub const ConnectToLocalDebugger = connectToLocalDebugger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#connectToLocalDebugger)
    ///
    /// ## Parameter(s):
    ///
    /// ` socketFileName: []const u8 `
    ///
    pub fn connectToLocalDebugger(socketFileName: []const u8) bool {
        const socketFileName_str = qtc.libqt_string{
            .len = socketFileName.len,
            .data = socketFileName.ptr,
        };
        return qtc.QQmlDebuggingEnabler_ConnectToLocalDebugger(socketFileName_str);
    }

    /// ### DEPRECATED: Use `startDebugConnector` instead
    ///
    pub const StartDebugConnector = startDebugConnector;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startDebugConnector)
    ///
    /// ## Parameter(s):
    ///
    /// ` pluginName: []const u8 `
    ///
    pub fn startDebugConnector(pluginName: []const u8) bool {
        const pluginName_str = qtc.libqt_string{
            .len = pluginName.len,
            .data = pluginName.ptr,
        };
        return qtc.QQmlDebuggingEnabler_StartDebugConnector(pluginName_str);
    }

    /// ### DEPRECATED: Use `startTcpDebugServer2` instead
    ///
    pub const StartTcpDebugServer2 = startTcpDebugServer2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` port: i32 `
    ///
    /// ` mode: qqmldebug_enums.StartMode `
    ///
    pub fn startTcpDebugServer2(port: i32, mode: i32) bool {
        return qtc.QQmlDebuggingEnabler_StartTcpDebugServer2(@bitCast(port), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startTcpDebugServer3` instead
    ///
    pub const StartTcpDebugServer3 = startTcpDebugServer3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startTcpDebugServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` port: i32 `
    ///
    /// ` mode: qqmldebug_enums.StartMode `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn startTcpDebugServer3(port: i32, mode: i32, hostName: []const u8) bool {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        return qtc.QQmlDebuggingEnabler_StartTcpDebugServer3(@bitCast(port), @bitCast(mode), hostName_str);
    }

    /// ### DEPRECATED: Use `connectToLocalDebugger2` instead
    ///
    pub const ConnectToLocalDebugger2 = connectToLocalDebugger2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#connectToLocalDebugger)
    ///
    /// ## Parameter(s):
    ///
    /// ` socketFileName: []const u8 `
    ///
    /// ` mode: qqmldebug_enums.StartMode `
    ///
    pub fn connectToLocalDebugger2(socketFileName: []const u8, mode: i32) bool {
        const socketFileName_str = qtc.libqt_string{
            .len = socketFileName.len,
            .data = socketFileName.ptr,
        };
        return qtc.QQmlDebuggingEnabler_ConnectToLocalDebugger2(socketFileName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `startDebugConnector2` instead
    ///
    pub const StartDebugConnector2 = startDebugConnector2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#startDebugConnector)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pluginName: []const u8 `
    ///
    /// ` configuration: Map_constu8_QVariant `
    ///
    pub fn startDebugConnector2(allocator: std.mem.Allocator, pluginName: []const u8, configuration: Map_constu8_QVariant) bool {
        const pluginName_str = qtc.libqt_string{
            .len = pluginName.len,
            .data = pluginName.ptr,
        };
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(qtc.libqt_string, configuration_count) catch @panic("QQmlDebuggingEnabler.startDebugConnector2: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("QQmlDebuggingEnabler.startDebugConnector2: Memory allocation failed");
        defer allocator.free(configuration_values);
        var configuration_i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (configuration_i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[configuration_i] = qtc.libqt_string{
                .len = configuration_key.len,
                .data = configuration_key.ptr,
            };
            configuration_values[configuration_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        return qtc.QQmlDebuggingEnabler_StartDebugConnector2(pluginName_str, configuration_map);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebuggingenabler.html#dtor.QQmlDebuggingEnabler)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlDebuggingEnabler `
    ///
    pub fn delete(self: QQmlDebuggingEnabler) void {
        qtc.QQmlDebuggingEnabler_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmldebug.html#public-types)
pub const enums = struct {
    pub const StartMode = enum {
        pub const DoNotWaitForClient: i32 = 0;
        pub const WaitForClient: i32 = 1;
    };
};
