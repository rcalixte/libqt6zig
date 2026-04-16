const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothDeviceInfo = @import("libqt6").QBluetoothDeviceInfo;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qbluetoothdevicediscoveryagent_enums = enums;
const qbluetoothdeviceinfo_enums = @import("libqbluetoothdeviceinfo.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html)
pub const QBluetoothDeviceDiscoveryAgent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothDeviceDiscoveryAgent,

    pub const _is_QBluetoothDeviceDiscoveryAgent = {};
    pub const _is_QObject = {};

    /// New constructs a new QBluetoothDeviceDiscoveryAgent object.
    ///
    pub fn New() QBluetoothDeviceDiscoveryAgent {
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_new() };
    }

    /// New2 constructs a new QBluetoothDeviceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    pub fn New2(deviceAdapter: anytype) QBluetoothDeviceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_new2(@ptrCast(deviceAdapter.ptr)) };
    }

    /// New3 constructs a new QBluetoothDeviceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QBluetoothDeviceDiscoveryAgent {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QBluetoothDeviceDiscoveryAgent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` deviceAdapter: QBluetoothAddress `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(deviceAdapter: anytype, parent: anytype) QBluetoothDeviceDiscoveryAgent {
        comptime _ = @TypeOf(deviceAdapter)._is_QBluetoothAddress;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_new4(@ptrCast(deviceAdapter.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn MetaObject(self: QBluetoothDeviceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn SuperMetaObject(self: QBluetoothDeviceDiscoveryAgent) QMetaObject {
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBluetoothDeviceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothDeviceDiscoveryAgent_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBluetoothDeviceDiscoveryAgent, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QBluetoothDeviceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QBluetoothDeviceDiscoveryAgent, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdevicediscoveryagent.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn IsActive(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QBluetoothDeviceDiscoveryAgent_IsActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothdevicediscoveryagent_enums.Error `
    ///
    pub fn Error(self: QBluetoothDeviceDiscoveryAgent) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QBluetoothDeviceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothDeviceDiscoveryAgent_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdevicediscoveryagent.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#discoveredDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DiscoveredDevices(self: QBluetoothDeviceDiscoveryAgent, allocator: std.mem.Allocator) []QBluetoothDeviceInfo {
        const _arr: qtc.libqt_list = qtc.QBluetoothDeviceDiscoveryAgent_DiscoveredDevices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBluetoothDeviceInfo, _arr.len) catch @panic("qbluetoothdevicediscoveryagent.DiscoveredDevices: Memory allocation failed");
        const _data: [*]QtC.QBluetoothDeviceInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#setLowEnergyDiscoveryTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` msTimeout: i32 `
    ///
    pub fn SetLowEnergyDiscoveryTimeout(self: QBluetoothDeviceDiscoveryAgent, msTimeout: i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_SetLowEnergyDiscoveryTimeout(@ptrCast(self.ptr), @bitCast(msTimeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#lowEnergyDiscoveryTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn LowEnergyDiscoveryTimeout(self: QBluetoothDeviceDiscoveryAgent) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_LowEnergyDiscoveryTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#supportedDiscoveryMethods)
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetoothdevicediscoveryagent_enums.DiscoveryMethod `
    ///
    pub fn SupportedDiscoveryMethods() i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_SupportedDiscoveryMethods();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Start(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` method: flag of qbluetoothdevicediscoveryagent_enums.DiscoveryMethod `
    ///
    pub fn Start2(self: QBluetoothDeviceDiscoveryAgent, method: i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Start2(@ptrCast(self.ptr), @bitCast(method));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Stop(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#deviceDiscovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` info: QBluetoothDeviceInfo `
    ///
    pub fn DeviceDiscovered(self: QBluetoothDeviceDiscoveryAgent, info: anytype) void {
        comptime _ = @TypeOf(info)._is_QBluetoothDeviceInfo;
        qtc.QBluetoothDeviceDiscoveryAgent_DeviceDiscovered(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#deviceDiscovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, info: QBluetoothDeviceInfo) callconv(.c) void `
    ///
    pub fn OnDeviceDiscovered(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QBluetoothDeviceInfo) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Connect_DeviceDiscovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#deviceUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` info: QBluetoothDeviceInfo `
    ///
    /// ` updatedFields: flag of qbluetoothdeviceinfo_enums.Field `
    ///
    pub fn DeviceUpdated(self: QBluetoothDeviceDiscoveryAgent, info: anytype, updatedFields: i32) void {
        comptime _ = @TypeOf(info)._is_QBluetoothDeviceInfo;
        qtc.QBluetoothDeviceDiscoveryAgent_DeviceUpdated(@ptrCast(self.ptr), @ptrCast(info.ptr), @bitCast(updatedFields));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#deviceUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, info: QBluetoothDeviceInfo, updatedFields: flag of qbluetoothdeviceinfo_enums.Field) callconv(.c) void `
    ///
    pub fn OnDeviceUpdated(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QBluetoothDeviceInfo, i32) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Connect_DeviceUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Finished(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn OnFinished(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` errorVal: qbluetoothdevicediscoveryagent_enums.Error `
    ///
    pub fn ErrorOccurred(self: QBluetoothDeviceDiscoveryAgent, errorVal: i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, errorVal: qbluetoothdevicediscoveryagent_enums.Error) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, i32) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Canceled(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Canceled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn OnCanceled(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdevicediscoveryagent.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdevicediscoveryagent.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QBluetoothDeviceDiscoveryAgent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothdevicediscoveryagent.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QBluetoothDeviceDiscoveryAgent, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn IsWidgetType(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn IsWindowType(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn IsQuickItemType(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn SignalsBlocked(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QBluetoothDeviceDiscoveryAgent, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Thread(self: QBluetoothDeviceDiscoveryAgent) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBluetoothDeviceDiscoveryAgent, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QBluetoothDeviceDiscoveryAgent, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QBluetoothDeviceDiscoveryAgent, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QBluetoothDeviceDiscoveryAgent, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QBluetoothDeviceDiscoveryAgent, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QBluetoothDeviceDiscoveryAgent, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qbluetoothdevicediscoveryagent.Children: Memory allocation failed");
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBluetoothDeviceDiscoveryAgent, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QBluetoothDeviceDiscoveryAgent, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QBluetoothDeviceDiscoveryAgent, obj: anytype) void {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBluetoothDeviceDiscoveryAgent, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Disconnect3(self: QBluetoothDeviceDiscoveryAgent) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QBluetoothDeviceDiscoveryAgent, receiver: anytype) bool {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn DumpObjectTree(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn DumpObjectInfo(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QBluetoothDeviceDiscoveryAgent, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBluetoothDeviceDiscoveryAgent, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QBluetoothDeviceDiscoveryAgent, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qbluetoothdevicediscoveryagent.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qbluetoothdevicediscoveryagent.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn BindingStorage(self: QBluetoothDeviceDiscoveryAgent) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn BindingStorage2(self: QBluetoothDeviceDiscoveryAgent) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Destroyed(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Parent(self: QBluetoothDeviceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QBluetoothDeviceDiscoveryAgent, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn DeleteLater(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QBluetoothDeviceDiscoveryAgent, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QBluetoothDeviceDiscoveryAgent, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBluetoothDeviceDiscoveryAgent, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBluetoothDeviceDiscoveryAgent, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QBluetoothDeviceDiscoveryAgent, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBluetoothDeviceDiscoveryAgent, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBluetoothDeviceDiscoveryAgent, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBluetoothDeviceDiscoveryAgent, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QObject) callconv(.c) void) void {
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBluetoothDeviceDiscoveryAgent, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothDeviceDiscoveryAgent_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBluetoothDeviceDiscoveryAgent, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothDeviceDiscoveryAgent_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBluetoothDeviceDiscoveryAgent, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBluetoothDeviceDiscoveryAgent, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothDeviceDiscoveryAgent_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QEvent) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothDeviceDiscoveryAgent_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothDeviceDiscoveryAgent_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothDeviceDiscoveryAgent_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Sender(self: QBluetoothDeviceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn SuperSender(self: QBluetoothDeviceDiscoveryAgent) QObject {
        return .{ .ptr = qtc.QBluetoothDeviceDiscoveryAgent_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn SenderSignalIndex(self: QBluetoothDeviceDiscoveryAgent) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn SuperSenderSignalIndex(self: QBluetoothDeviceDiscoveryAgent) i32 {
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QBluetoothDeviceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothDeviceDiscoveryAgent_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBluetoothDeviceDiscoveryAgent, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothDeviceDiscoveryAgent_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBluetoothDeviceDiscoveryAgent, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothDeviceDiscoveryAgent_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent`
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothDeviceDiscoveryAgent_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    /// ` callback: *const fn (self: QBluetoothDeviceDiscoveryAgent, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QBluetoothDeviceDiscoveryAgent, callback: *const fn (QBluetoothDeviceDiscoveryAgent, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#dtor.QBluetoothDeviceDiscoveryAgent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothDeviceDiscoveryAgent `
    ///
    pub fn Delete(self: QBluetoothDeviceDiscoveryAgent) void {
        qtc.QBluetoothDeviceDiscoveryAgent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdevicediscoveryagent.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const InputOutputError: i32 = 1;
        pub const PoweredOffError: i32 = 2;
        pub const InvalidBluetoothAdapterError: i32 = 3;
        pub const UnsupportedPlatformError: i32 = 4;
        pub const UnsupportedDiscoveryMethod: i32 = 5;
        pub const LocationServiceTurnedOffError: i32 = 6;
        pub const MissingPermissionsError: i32 = 7;
        pub const UnknownError: i32 = 100;
    };

    pub const DiscoveryMethod = enum(i32) {
        pub const NoMethod: i32 = 0;
        pub const ClassicMethod: i32 = 1;
        pub const LowEnergyMethod: i32 = 2;
    };
};
