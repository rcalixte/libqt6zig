const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDBusConnection = @import("libqt6").QDBusConnection;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qdbusservicewatcher_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)
pub const QDBusServiceWatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusServiceWatcher,

    pub const _is_QDBusServiceWatcher = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusServiceWatcher object in C++ memory
    ///
    pub fn new() QDBusServiceWatcher {
        return .{ .ptr = qtc.QDBusServiceWatcher_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusServiceWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` _connection: QDBusConnection `
    ///
    pub fn new2(service: []const u8, _connection: anytype) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusServiceWatcher_new2(service_str, @ptrCast(_connection.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusServiceWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QDBusServiceWatcher {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDBusServiceWatcher_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDBusServiceWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` _connection: QDBusConnection `
    ///
    /// ` _watchMode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    pub fn new4(service: []const u8, _connection: anytype, _watchMode: i32) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusServiceWatcher_new4(service_str, @ptrCast(_connection.ptr), @bitCast(_watchMode)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QDBusServiceWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` _connection: QDBusConnection `
    ///
    /// ` _watchMode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(service: []const u8, _connection: anytype, _watchMode: i32, _parent: anytype) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDBusServiceWatcher_new5(service_str, @ptrCast(_connection.ptr), @bitCast(_watchMode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn metaObject(self: QDBusServiceWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusServiceWatcher_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn superMetaObject(self: QDBusServiceWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDBusServiceWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusServiceWatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusServiceWatcher_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDBusServiceWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusServiceWatcher_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDBusServiceWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusServiceWatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDBusServiceWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusServiceWatcher_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusServiceWatcher.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `watchedServices` instead
    ///
    pub const WatchedServices = watchedServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#watchedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn watchedServices(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDBusServiceWatcher_WatchedServices(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QDBusServiceWatcher.watchedServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDBusServiceWatcher.watchedServices: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setWatchedServices` instead
    ///
    pub const SetWatchedServices = setWatchedServices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setWatchedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` services: []const []const u8 `
    ///
    pub fn setWatchedServices(self: QDBusServiceWatcher, allocator: std.mem.Allocator, services: []const []const u8) void {
        const services_arr = allocator.alloc(qtc.libqt_string, services.len) catch @panic("QDBusServiceWatcher.setWatchedServices: Memory allocation failed");
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
        qtc.QDBusServiceWatcher_SetWatchedServices(@ptrCast(self.ptr), services_list);
    }

    /// ### DEPRECATED: Use `addWatchedService` instead
    ///
    pub const AddWatchedService = addWatchedService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#addWatchedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` newService: []const u8 `
    ///
    pub fn addWatchedService(self: QDBusServiceWatcher, newService: []const u8) void {
        const newService_str = qtc.libqt_string{
            .len = newService.len,
            .data = newService.ptr,
        };
        qtc.QDBusServiceWatcher_AddWatchedService(@ptrCast(self.ptr), newService_str);
    }

    /// ### DEPRECATED: Use `removeWatchedService` instead
    ///
    pub const RemoveWatchedService = removeWatchedService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#removeWatchedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn removeWatchedService(self: QDBusServiceWatcher, service: []const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        return qtc.QDBusServiceWatcher_RemoveWatchedService(@ptrCast(self.ptr), service_str);
    }

    /// ### DEPRECATED: Use `watchMode` instead
    ///
    pub const WatchMode = watchMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#watchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    pub fn watchMode(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_WatchMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWatchMode` instead
    ///
    pub const SetWatchMode = setWatchMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setWatchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` mode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    pub fn setWatchMode(self: QDBusServiceWatcher, mode: i32) void {
        qtc.QDBusServiceWatcher_SetWatchMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `connection` instead
    ///
    pub const Connection = connection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn connection(self: QDBusServiceWatcher) QDBusConnection {
        return .{ .ptr = qtc.QDBusServiceWatcher_Connection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setConnection` instead
    ///
    pub const SetConnection = setConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _connection: QDBusConnection `
    ///
    pub fn setConnection(self: QDBusServiceWatcher, _connection: anytype) void {
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        qtc.QDBusServiceWatcher_SetConnection(@ptrCast(self.ptr), @ptrCast(_connection.ptr));
    }

    /// ### DEPRECATED: Use `serviceRegistered` instead
    ///
    pub const ServiceRegistered = serviceRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn serviceRegistered(self: QDBusServiceWatcher, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusServiceWatcher_ServiceRegistered(@ptrCast(self.ptr), service_str);
    }

    /// ### DEPRECATED: Use `onServiceRegistered` instead
    ///
    pub const OnServiceRegistered = onServiceRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceRegistered(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceRegistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serviceUnregistered` instead
    ///
    pub const ServiceUnregistered = serviceUnregistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn serviceUnregistered(self: QDBusServiceWatcher, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusServiceWatcher_ServiceUnregistered(@ptrCast(self.ptr), service_str);
    }

    /// ### DEPRECATED: Use `onServiceUnregistered` instead
    ///
    pub const OnServiceUnregistered = onServiceUnregistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceUnregistered(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceUnregistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serviceOwnerChanged` instead
    ///
    pub const ServiceOwnerChanged = serviceOwnerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceOwnerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    /// ` oldOwner: []const u8 `
    ///
    /// ` newOwner: []const u8 `
    ///
    pub fn serviceOwnerChanged(self: QDBusServiceWatcher, service: []const u8, oldOwner: []const u8, newOwner: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const oldOwner_str = qtc.libqt_string{
            .len = oldOwner.len,
            .data = oldOwner.ptr,
        };
        const newOwner_str = qtc.libqt_string{
            .len = newOwner.len,
            .data = newOwner.ptr,
        };
        qtc.QDBusServiceWatcher_ServiceOwnerChanged(@ptrCast(self.ptr), service_str, oldOwner_str, newOwner_str);
    }

    /// ### DEPRECATED: Use `onServiceOwnerChanged` instead
    ///
    pub const OnServiceOwnerChanged = onServiceOwnerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8, oldOwner: [*:0]const u8, newOwner: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceOwnerChanged(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusServiceWatcher.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusServiceWatcher.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusServiceWatcher.objectName: Memory allocation failed");
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDBusServiceWatcher, name: []const u8) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn isWidgetType(self: QDBusServiceWatcher) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn isWindowType(self: QDBusServiceWatcher) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn isQuickItemType(self: QDBusServiceWatcher) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn signalsBlocked(self: QDBusServiceWatcher) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDBusServiceWatcher, b: bool) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn thread(self: QDBusServiceWatcher) QThread {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDBusServiceWatcher, _thread: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDBusServiceWatcher, interval: i32) i32 {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDBusServiceWatcher, time: i64) i32 {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDBusServiceWatcher, id: i32) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDBusServiceWatcher, id: i32) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDBusServiceWatcher.children: Memory allocation failed");
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDBusServiceWatcher, _parent: anytype) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDBusServiceWatcher, filterObj: anytype) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDBusServiceWatcher, obj: anytype) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDBusServiceWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn disconnect3(self: QDBusServiceWatcher) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDBusServiceWatcher, receiver: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn dumpObjectTree(self: QDBusServiceWatcher) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn dumpObjectInfo(self: QDBusServiceWatcher) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDBusServiceWatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDBusServiceWatcher, name: [:0]const u8) QVariant {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDBusServiceWatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDBusServiceWatcher.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDBusServiceWatcher.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn bindingStorage(self: QDBusServiceWatcher) QBindingStorage {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn bindingStorage2(self: QDBusServiceWatcher) QBindingStorage {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn destroyed(self: QDBusServiceWatcher) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher) callconv(.c) void) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn parent(self: QDBusServiceWatcher) QObject {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDBusServiceWatcher, classname: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn deleteLater(self: QDBusServiceWatcher) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDBusServiceWatcher, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDBusServiceWatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDBusServiceWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDBusServiceWatcher, signal: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDBusServiceWatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDBusServiceWatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDBusServiceWatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDBusServiceWatcher, param1: anytype) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QObject) callconv(.c) void) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDBusServiceWatcher, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusServiceWatcher_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDBusServiceWatcher, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusServiceWatcher_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QEvent) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDBusServiceWatcher, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusServiceWatcher_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDBusServiceWatcher, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusServiceWatcher_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusServiceWatcher_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusServiceWatcher_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusServiceWatcher_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusServiceWatcher_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QChildEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusServiceWatcher_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDBusServiceWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusServiceWatcher_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn sender(self: QDBusServiceWatcher) QObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn superSender(self: QDBusServiceWatcher) QObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusServiceWatcher_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn senderSignalIndex(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn superSenderSignalIndex(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDBusServiceWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusServiceWatcher_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDBusServiceWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusServiceWatcher_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDBusServiceWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusServiceWatcher_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDBusServiceWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusServiceWatcher_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher`
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#dtor.QDBusServiceWatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn delete(self: QDBusServiceWatcher) void {
        qtc.QDBusServiceWatcher_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#public-types)
pub const enums = struct {
    pub const WatchModeFlag = enum(i32) {
        pub const WatchForRegistration: i32 = 1;
        pub const WatchForUnregistration: i32 = 2;
        pub const WatchForOwnerChange: i32 = 3;
    };
};
