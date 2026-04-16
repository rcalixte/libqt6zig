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

    /// New constructs a new QBluetoothServiceDiscoveryAgent object.
    ///
    pub fn New() QBluetoothServiceDiscoveryAgent {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new() };
    }

    /// New2 constructs a new QBluetoothServiceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    pub fn New2(deviceAdapter: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new2(@ptrCast(deviceAdapter.ptr)) };
    }

    /// New3 constructs a new QBluetoothServiceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QBluetoothServiceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(deviceAdapter: anytype, parent: anytype) QBluetoothServiceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_new4(@ptrCast(deviceAdapter.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn MetaObject(self: QBluetoothServiceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn SuperMetaObject(self: QBluetoothServiceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBluetoothServiceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBluetoothServiceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QBluetoothServiceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QBluetoothServiceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothservicediscoveryagent.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn IsActive(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QBluetoothServiceDiscoveryAgent_IsActive(@ptrCast(self.ptr));
    }

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
    pub fn Error(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothServiceDiscoveryAgent_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothservicediscoveryagent.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#discoveredServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DiscoveredServices(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QBluetoothServiceInfo {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceDiscoveryAgent_DiscoveredServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothServiceInfo, _arr.len) catch @panic("qbluetoothservicediscoveryagent.DiscoveredServices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothServiceInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` uuids: []QBluetoothUuid `
    ///
    pub fn SetUuidFilter(self: QBluetoothServiceDiscoveryAgent, uuids: []QBluetoothUuid) void {
        const uuids_list = qtc.libqt_list{
            .len = uuids.len,
            .data = @ptrCast(uuids.ptr),
        };
        qtc.QBluetoothServiceDiscoveryAgent_SetUuidFilter(@ptrCast(self.ptr), uuids_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn SetUuidFilter2(self: QBluetoothServiceDiscoveryAgent, uuid: anytype) void {
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothServiceDiscoveryAgent_SetUuidFilter2(@ptrCast(self.ptr), @ptrCast(uuid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#uuidFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UuidFilter(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QBluetoothUuid {
        const _arr: qtc.libqt_list = qtc.QBluetoothServiceDiscoveryAgent_UuidFilter(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothUuid, _arr.len) catch @panic("qbluetoothservicediscoveryagent.UuidFilter: Memory allocation failed");
        const _data: [*]QtC.QBluetoothUuid = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setRemoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn SetRemoteAddress(self: QBluetoothServiceDiscoveryAgent, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        return qtc.QBluetoothServiceDiscoveryAgent_SetRemoteAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#remoteAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn RemoteAddress(self: QBluetoothServiceDiscoveryAgent) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_RemoteAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Start(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Stop(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Clear(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` info: QBluetoothServiceInfo `
    ///
    pub fn ServiceDiscovered(self: QBluetoothServiceDiscoveryAgent, info: anytype) void {
        comptime _ = @TypeOf(info)._is_QBluetoothServiceInfo;
        qtc.QBluetoothServiceDiscoveryAgent_ServiceDiscovered(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, info: QBluetoothServiceInfo) callconv(.c) void `
    ///
    pub fn OnServiceDiscovered(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QBluetoothServiceInfo) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_ServiceDiscovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Finished(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn OnFinished(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Canceled(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Canceled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn OnCanceled(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` errorVal: qbluetoothservicediscoveryagent_enums.Error `
    ///
    pub fn ErrorOccurred(self: QBluetoothServiceDiscoveryAgent, errorVal: i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothServiceDiscoveryAgent, errorVal: qbluetoothservicediscoveryagent_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, i32) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothservicediscoveryagent.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothservicediscoveryagent.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` mode: qbluetoothservicediscoveryagent_enums.DiscoveryMode `
    ///
    pub fn Start1(self: QBluetoothServiceDiscoveryAgent, mode: i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_Start1(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn ObjectName(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothservicediscoveryagent.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QBluetoothServiceDiscoveryAgent, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn IsWidgetType(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn IsWindowType(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn IsQuickItemType(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn SignalsBlocked(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QBluetoothServiceDiscoveryAgent, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Thread(self: QBluetoothServiceDiscoveryAgent) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBluetoothServiceDiscoveryAgent, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QBluetoothServiceDiscoveryAgent, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QBluetoothServiceDiscoveryAgent, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QBluetoothServiceDiscoveryAgent, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QBluetoothServiceDiscoveryAgent, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qbluetoothservicediscoveryagent.Children: Memory allocation failed");
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBluetoothServiceDiscoveryAgent, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QBluetoothServiceDiscoveryAgent, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QBluetoothServiceDiscoveryAgent, obj: anytype) void {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBluetoothServiceDiscoveryAgent, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Disconnect3(self: QBluetoothServiceDiscoveryAgent) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QBluetoothServiceDiscoveryAgent, receiver: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn DumpObjectTree(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn DumpObjectInfo(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QBluetoothServiceDiscoveryAgent, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBluetoothServiceDiscoveryAgent, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QBluetoothServiceDiscoveryAgent, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qbluetoothservicediscoveryagent.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qbluetoothservicediscoveryagent.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn BindingStorage(self: QBluetoothServiceDiscoveryAgent) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn BindingStorage2(self: QBluetoothServiceDiscoveryAgent) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Destroyed(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Parent(self: QBluetoothServiceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QBluetoothServiceDiscoveryAgent, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn DeleteLater(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QBluetoothServiceDiscoveryAgent, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QBluetoothServiceDiscoveryAgent, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBluetoothServiceDiscoveryAgent, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBluetoothServiceDiscoveryAgent, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBluetoothServiceDiscoveryAgent, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBluetoothServiceDiscoveryAgent, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBluetoothServiceDiscoveryAgent, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBluetoothServiceDiscoveryAgent, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothServiceDiscoveryAgent_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothServiceDiscoveryAgent_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothServiceDiscoveryAgent_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBluetoothServiceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothServiceDiscoveryAgent_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QEvent) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBluetoothServiceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QBluetoothServiceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn SuperSender(self: QBluetoothServiceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothServiceDiscoveryAgent_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn SuperSenderSignalIndex(self: QBluetoothServiceDiscoveryAgent) i32 {
        return qtc.QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QBluetoothServiceDiscoveryAgent, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBluetoothServiceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QBluetoothServiceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothServiceDiscoveryAgent_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBluetoothServiceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothServiceDiscoveryAgent_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QBluetoothServiceDiscoveryAgent, callback: *const fn (QBluetoothServiceDiscoveryAgent, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#dtor.QBluetoothServiceDiscoveryAgent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothServiceDiscoveryAgent `
    ///
    pub fn Delete(self: QBluetoothServiceDiscoveryAgent) void {
        qtc.QBluetoothServiceDiscoveryAgent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const InputOutputError: i32 = 1;
        pub const PoweredOffError: i32 = 2;
        pub const InvalidBluetoothAdapterError: i32 = 3;
        pub const MissingPermissionsError: i32 = 7;
        pub const UnknownError: i32 = 100;
    };

    pub const DiscoveryMode = enum(i32) {
        pub const MinimalDiscovery: i32 = 0;
        pub const FullDiscovery: i32 = 1;
    };
};
