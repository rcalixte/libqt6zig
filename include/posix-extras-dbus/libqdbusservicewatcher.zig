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

    /// New constructs a new QDBusServiceWatcher object.
    ///
    pub fn New() QDBusServiceWatcher {
        return .{ .ptr = qtc.QDBusServiceWatcher_new() };
    }

    /// New2 constructs a new QDBusServiceWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` connection: QDBusConnection `
    ///
    pub fn New2(service: []const u8, connection: anytype) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusServiceWatcher_new2(service_str, @ptrCast(connection.ptr)) };
    }

    /// New3 constructs a new QDBusServiceWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QDBusServiceWatcher {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDBusServiceWatcher_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QDBusServiceWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` connection: QDBusConnection `
    ///
    /// ` watchMode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    pub fn New4(service: []const u8, connection: anytype, watchMode: i32) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusServiceWatcher_new4(service_str, @ptrCast(connection.ptr), @bitCast(watchMode)) };
    }

    /// New5 constructs a new QDBusServiceWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` connection: QDBusConnection `
    ///
    /// ` watchMode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(service: []const u8, connection: anytype, watchMode: i32, parent: anytype) QDBusServiceWatcher {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDBusServiceWatcher_new5(service_str, @ptrCast(connection.ptr), @bitCast(watchMode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn MetaObject(self: QDBusServiceWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusServiceWatcher_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn SuperMetaObject(self: QDBusServiceWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDBusServiceWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusServiceWatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusServiceWatcher_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDBusServiceWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusServiceWatcher_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QDBusServiceWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusServiceWatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QDBusServiceWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusServiceWatcher_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusservicewatcher.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#watchedServices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WatchedServices(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QDBusServiceWatcher_WatchedServices(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qdbusservicewatcher.WatchedServices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbusservicewatcher.WatchedServices: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn SetWatchedServices(self: QDBusServiceWatcher, allocator: std.mem.Allocator, services: []const []const u8) void {
        const services_arr = allocator.alloc(qtc.libqt_string, services.len) catch @panic("qdbusservicewatcher.SetWatchedServices: Memory allocation failed");
        defer allocator.free(services_arr);
        for (services, 0..services.len) |item, i|
            services_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const services_list = qtc.libqt_list{
            .len = services.len,
            .data = services_arr.ptr,
        };
        qtc.QDBusServiceWatcher_SetWatchedServices(@ptrCast(self.ptr), services_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#addWatchedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` newService: []const u8 `
    ///
    pub fn AddWatchedService(self: QDBusServiceWatcher, newService: []const u8) void {
        const newService_str = qtc.libqt_string{
            .len = newService.len,
            .data = newService.ptr,
        };
        qtc.QDBusServiceWatcher_AddWatchedService(@ptrCast(self.ptr), newService_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#removeWatchedService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn RemoveWatchedService(self: QDBusServiceWatcher, service: []const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        return qtc.QDBusServiceWatcher_RemoveWatchedService(@ptrCast(self.ptr), service_str);
    }

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
    pub fn WatchMode(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_WatchMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setWatchMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` mode: flag of qdbusservicewatcher_enums.WatchModeFlag `
    ///
    pub fn SetWatchMode(self: QDBusServiceWatcher, mode: i32) void {
        qtc.QDBusServiceWatcher_SetWatchMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Connection(self: QDBusServiceWatcher) QDBusConnection {
        return .{ .ptr = qtc.QDBusServiceWatcher_Connection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` connection: QDBusConnection `
    ///
    pub fn SetConnection(self: QDBusServiceWatcher, connection: anytype) void {
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        qtc.QDBusServiceWatcher_SetConnection(@ptrCast(self.ptr), @ptrCast(connection.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn ServiceRegistered(self: QDBusServiceWatcher, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusServiceWatcher_ServiceRegistered(@ptrCast(self.ptr), service_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceRegistered(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceRegistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` service: []const u8 `
    ///
    pub fn ServiceUnregistered(self: QDBusServiceWatcher, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusServiceWatcher_ServiceUnregistered(@ptrCast(self.ptr), service_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceUnregistered(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceUnregistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ServiceOwnerChanged(self: QDBusServiceWatcher, service: []const u8, oldOwner: []const u8, newOwner: []const u8) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` callback: *const fn (self: QDBusServiceWatcher, service: [*:0]const u8, oldOwner: [*:0]const u8, newOwner: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceOwnerChanged(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_Connect_ServiceOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusservicewatcher.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusservicewatcher.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusservicewatcher.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QDBusServiceWatcher, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn IsWidgetType(self: QDBusServiceWatcher) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn IsWindowType(self: QDBusServiceWatcher) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn IsQuickItemType(self: QDBusServiceWatcher) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn SignalsBlocked(self: QDBusServiceWatcher) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QDBusServiceWatcher, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Thread(self: QDBusServiceWatcher) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDBusServiceWatcher, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QDBusServiceWatcher, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QDBusServiceWatcher, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QDBusServiceWatcher, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QDBusServiceWatcher, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QDBusServiceWatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdbusservicewatcher.Children: Memory allocation failed");
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDBusServiceWatcher, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QDBusServiceWatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QDBusServiceWatcher, obj: anytype) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDBusServiceWatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Disconnect3(self: QDBusServiceWatcher) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QDBusServiceWatcher, receiver: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn DumpObjectTree(self: QDBusServiceWatcher) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn DumpObjectInfo(self: QDBusServiceWatcher) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QDBusServiceWatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDBusServiceWatcher, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QDBusServiceWatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdbusservicewatcher.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbusservicewatcher.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn BindingStorage(self: QDBusServiceWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn BindingStorage2(self: QDBusServiceWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Destroyed(self: QDBusServiceWatcher) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Parent(self: QDBusServiceWatcher) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QDBusServiceWatcher, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn DeleteLater(self: QDBusServiceWatcher) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QDBusServiceWatcher, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QDBusServiceWatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDBusServiceWatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDBusServiceWatcher, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QDBusServiceWatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDBusServiceWatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDBusServiceWatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDBusServiceWatcher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QObject) callconv(.c) void) void {
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDBusServiceWatcher, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusServiceWatcher_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDBusServiceWatcher, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusServiceWatcher_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QEvent) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDBusServiceWatcher, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusServiceWatcher_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDBusServiceWatcher, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusServiceWatcher_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusServiceWatcher_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusServiceWatcher_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusServiceWatcher_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusServiceWatcher_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QChildEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusServiceWatcher_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDBusServiceWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusServiceWatcher_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QEvent) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDBusServiceWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusServiceWatcher_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusServiceWatcher_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QDBusServiceWatcher) QObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn SuperSender(self: QDBusServiceWatcher) QObject {
        return .{ .ptr = qtc.QDBusServiceWatcher_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusServiceWatcher_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn SuperSenderSignalIndex(self: QDBusServiceWatcher) i32 {
        return qtc.QDBusServiceWatcher_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QDBusServiceWatcher, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QDBusServiceWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusServiceWatcher_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDBusServiceWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusServiceWatcher_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusServiceWatcher_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QDBusServiceWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusServiceWatcher_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusServiceWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDBusServiceWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusServiceWatcher_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusServiceWatcher_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QDBusServiceWatcher, callback: *const fn (QDBusServiceWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#dtor.QDBusServiceWatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusServiceWatcher `
    ///
    pub fn Delete(self: QDBusServiceWatcher) void {
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
