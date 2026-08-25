const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothServiceInfo = @import("libqt6").QBluetoothServiceInfo;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qbluetoothservicediscoveryagent_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)
pub const QBluetoothServiceDiscoveryAgent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothServiceDiscoveryAgent,

    pub const _is_QBluetoothServiceDiscoveryAgent = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothServiceDiscoveryAgent object in C++ memory
    ///
    pub fn new() QBluetoothServiceDiscoveryAgent {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothServiceDiscoveryAgent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    pub fn new2(deviceAdapter: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new2(@ptrCast(deviceAdapter.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothServiceDiscoveryAgent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBluetoothServiceDiscoveryAgent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(deviceAdapter: anytype, _parent: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new4(@ptrCast(deviceAdapter.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn metaObject(self: QBluetoothServiceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn superMetaObject(self: QBluetoothServiceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBluetoothServiceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBluetoothServiceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBluetoothServiceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBluetoothServiceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceDiscoveryAgent.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn isActive(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QBluetoothServiceDiscoveryAgent_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothservicediscoveryagent_enums.Error `
    ///
    pub fn error0(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceDiscoveryAgent_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceDiscoveryAgent.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `discoveredServices` instead
    ///
    pub const DiscoveredServices = discoveredServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#discoveredServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn discoveredServices(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QBluetoothServiceInfo {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceDiscoveryAgent_DiscoveredServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothServiceInfo, _arr.len) catch @panic("QBluetoothServiceDiscoveryAgent.discoveredServices: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothServiceInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setUuidFilter` instead
    ///
    pub const SetUuidFilter = setUuidFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` uuids: []QBluetoothUuid `
    ///
    pub fn setUuidFilter(self: QBluetoothServiceDiscoveryAgent, uuids: []QBluetoothUuid) void {
        const uuids_list = qtc.libqt_list{
            .len = uuids.len,
            .data = @ptrCast(uuids.ptr),
        };
        qtc.QBluetoothServiceDiscoveryAgent_SetUuidFilter(@ptrCast(self.ptr), uuids_list);
    }

    /// ### DEPRECATED: Use `setUuidFilter2` instead
    ///
    pub const SetUuidFilter2 = setUuidFilter2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn setUuidFilter2(self: QBluetoothServiceDiscoveryAgent, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothServiceDiscoveryAgent_SetUuidFilter2(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### DEPRECATED: Use `uuidFilter` instead
    ///
    pub const UuidFilter = uuidFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#uuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uuidFilter(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceDiscoveryAgent_UuidFilter(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("QBluetoothServiceDiscoveryAgent.uuidFilter: Memory allocation failed");
        const _data_val: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setRemoteAddress` instead
    ///
    pub const SetRemoteAddress = setRemoteAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setRemoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn setRemoteAddress(self: QBluetoothServiceDiscoveryAgent, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        return qtc.QBluetoothServiceDiscoveryAgent_SetRemoteAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `remoteAddress` instead
    ///
    pub const RemoteAddress = remoteAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#remoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn remoteAddress(self: QBluetoothServiceDiscoveryAgent) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_RemoteAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn start(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn stop(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn clear(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serviceDiscovered` instead
    ///
    pub const ServiceDiscovered = serviceDiscovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` info: QBluetoothServiceInfo `
    ///
    pub fn serviceDiscovered(self: QBluetoothServiceDiscoveryAgent, info: anytype) void {
        comptime _ = @TypeOf(info)._is_QBluetoothServiceInfo;
        qtc.QBluetoothServiceDiscoveryAgent_ServiceDiscovered(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `onServiceDiscovered` instead
    ///
    pub const OnServiceDiscovered = onServiceDiscovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, info: QBluetoothServiceInfo) callconv(.c) void `
    ///
    pub fn onServiceDiscovered(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QBluetoothServiceInfo) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_ServiceDiscovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn finished(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn onFinished(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn canceled(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Canceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn onCanceled(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` errorVal: qbluetoothservicediscoveryagent_enums.Error `
    ///
    pub fn errorOccurred(self: QBluetoothServiceDiscoveryAgent, errorVal: i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, errorVal: qbluetoothservicediscoveryagent_enums.Error) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, i32) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceDiscoveryAgent.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceDiscoveryAgent.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `start1` instead
    ///
    pub const Start1 = start1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` mode: qbluetoothservicediscoveryagent_enums.DiscoveryMode `
    ///
    pub fn start1(self: QBluetoothServiceDiscoveryAgent, mode: i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_Start1(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothServiceDiscoveryAgent.objectName: Memory allocation failed");
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBluetoothServiceDiscoveryAgent, name: []const u8) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn isWidgetType(self: QBluetoothServiceDiscoveryAgent) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn isWindowType(self: QBluetoothServiceDiscoveryAgent) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn isQuickItemType(self: QBluetoothServiceDiscoveryAgent) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn signalsBlocked(self: QBluetoothServiceDiscoveryAgent) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBluetoothServiceDiscoveryAgent, b: bool) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn thread(self: QBluetoothServiceDiscoveryAgent) QThread {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBluetoothServiceDiscoveryAgent, _thread: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBluetoothServiceDiscoveryAgent, interval: i32) i32 {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBluetoothServiceDiscoveryAgent, time: i64) i32 {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBluetoothServiceDiscoveryAgent, id: i32) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBluetoothServiceDiscoveryAgent, id: i32) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBluetoothServiceDiscoveryAgent.children: Memory allocation failed");
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBluetoothServiceDiscoveryAgent, _parent: anytype) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBluetoothServiceDiscoveryAgent, filterObj: anytype) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBluetoothServiceDiscoveryAgent, obj: anytype) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBluetoothServiceDiscoveryAgent, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn disconnect3(self: QBluetoothServiceDiscoveryAgent) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBluetoothServiceDiscoveryAgent, receiver: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn dumpObjectTree(self: QBluetoothServiceDiscoveryAgent) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn dumpObjectInfo(self: QBluetoothServiceDiscoveryAgent) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBluetoothServiceDiscoveryAgent, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBluetoothServiceDiscoveryAgent, name: [:0]const u8) QVariant {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBluetoothServiceDiscoveryAgent.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBluetoothServiceDiscoveryAgent.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn bindingStorage(self: QBluetoothServiceDiscoveryAgent) QBindingStorage {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn bindingStorage2(self: QBluetoothServiceDiscoveryAgent) QBindingStorage {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn destroyed(self: QBluetoothServiceDiscoveryAgent) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn parent(self: QBluetoothServiceDiscoveryAgent) QObject {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBluetoothServiceDiscoveryAgent, classname: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn deleteLater(self: QBluetoothServiceDiscoveryAgent) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBluetoothServiceDiscoveryAgent, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBluetoothServiceDiscoveryAgent, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBluetoothServiceDiscoveryAgent, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBluetoothServiceDiscoveryAgent, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBluetoothServiceDiscoveryAgent, param1: anytype) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QObject) callconv(.c) void) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBluetoothServiceDiscoveryAgent, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBluetoothServiceDiscoveryAgent, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBluetoothServiceDiscoveryAgent, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBluetoothServiceDiscoveryAgent_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBluetoothServiceDiscoveryAgent_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBluetoothServiceDiscoveryAgent_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBluetoothServiceDiscoveryAgent, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn sender(self: QBluetoothServiceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn superSender(self: QBluetoothServiceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn senderSignalIndex(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn superSenderSignalIndex(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBluetoothServiceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothServiceDiscoveryAgent_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBluetoothServiceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#dtor.QBluetoothServiceDiscoveryAgent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn delete(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#public-types)
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const InputOutputError: i32 = 1;
        pub const PoweredOffError: i32 = 2;
        pub const InvalidBluetoothAdapterError: i32 = 3;
        pub const MissingPermissionsError: i32 = 7;
        pub const UnknownError: i32 = 100;
    };

    pub const DiscoveryMode = enum {
        pub const MinimalDiscovery: i32 = 0;
        pub const FullDiscovery: i32 = 1;
    };
};
