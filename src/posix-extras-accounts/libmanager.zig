const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Accounts__Account = @import("libqt6").Accounts__Account;
const Accounts__Application = @import("libqt6").Accounts__Application;
const Accounts__Error = @import("libqt6").Accounts__Error;
const Accounts__Provider = @import("libqt6").Accounts__Provider;
const Accounts__Service = @import("libqt6").Accounts__Service;
const Accounts__ServiceType = @import("libqt6").Accounts__ServiceType;
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
const manager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
pub const Accounts__Manager = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Manager,

    pub const _is_Accounts__Manager = {};
    pub const _is_QObject = {};

    /// New constructs a new Accounts::Manager object.
    ///
    pub fn New() Accounts__Manager {
        return .{ .ptr = qtc.Accounts__Manager_new() };
    }

    /// New2 constructs a new Accounts::Manager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn New2(serviceType: []const u8) Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_new2(serviceType_str) };
    }

    /// New3 constructs a new Accounts::Manager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` options: flag of manager_enums.Option `
    ///
    pub fn New3(options: i32) Accounts__Manager {
        return .{ .ptr = qtc.Accounts__Manager_new3(@bitCast(options)) };
    }

    /// New4 constructs a new Accounts::Manager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) Accounts__Manager {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new4(@ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new Accounts::Manager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serviceType: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(serviceType: []const u8, parent: anytype) Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new5(serviceType_str, @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new Accounts::Manager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` options: flag of manager_enums.Option `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(options: i32, parent: anytype) Accounts__Manager {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new6(@bitCast(options), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn MetaObject(self: Accounts__Manager) QMetaObject {
        return .{ .ptr = qtc.Accounts__Manager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Accounts__Manager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Accounts__Manager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn SuperMetaObject(self: Accounts__Manager) QMetaObject {
        return .{ .ptr = qtc.Accounts__Manager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Accounts__Manager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Manager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Accounts__Manager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Accounts__Manager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Manager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Accounts__Manager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Manager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Accounts__Manager, callback: *const fn (Accounts__Manager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Accounts__Manager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Manager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__manager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: *const u32 `
    ///
    pub fn Account(self: Accounts__Manager, id: *const u32) Accounts__Account {
        return .{ .ptr = qtc.Accounts__Manager_Account(@ptrCast(self.ptr), @ptrCast(id)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccountList(self: Accounts__Manager, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts__manager.AccountList: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccountListEnabled(self: Accounts__Manager, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts__manager.AccountListEnabled: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` providerName: []const u8 `
    ///
    pub fn CreateAccount(self: Accounts__Manager, providerName: []const u8) Accounts__Account {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_CreateAccount(@ptrCast(self.ptr), providerName_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn Service(self: Accounts__Manager, serviceName: []const u8) Accounts__Service {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Service(@ptrCast(self.ptr), serviceName_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceList(self: Accounts__Manager, allocator: std.mem.Allocator) []Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__manager.ServiceList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` application: Accounts__Application `
    ///
    pub fn ServiceList2(self: Accounts__Manager, allocator: std.mem.Allocator, application: anytype) []Accounts__Service {
        comptime _ = @TypeOf(application)._is_Accounts__Application;
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList2(@ptrCast(self.ptr), @ptrCast(application.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__manager.ServiceList2: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` providerName: []const u8 `
    ///
    pub fn Provider(self: Accounts__Manager, providerName: []const u8) Accounts__Provider {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Provider(@ptrCast(self.ptr), providerName_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderList(self: Accounts__Manager, allocator: std.mem.Allocator) []Accounts__Provider {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ProviderList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Provider, _arr.len) catch @panic("accounts__manager.ProviderList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ServiceType(self: Accounts__Manager, name: []const u8) Accounts__ServiceType {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_ServiceType(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` applicationName: []const u8 `
    ///
    pub fn Application(self: Accounts__Manager, applicationName: []const u8) Accounts__Application {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Application(@ptrCast(self.ptr), applicationName_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: Accounts__Service `
    ///
    pub fn ApplicationList(self: Accounts__Manager, allocator: std.mem.Allocator, service: anytype) []Accounts__Application {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ApplicationList(@ptrCast(self.ptr), @ptrCast(service.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Application, _arr.len) catch @panic("accounts__manager.ApplicationList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Application = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceType2(self: Accounts__Manager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Manager_ServiceType2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__manager.ServiceType2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` timeout: u32 `
    ///
    pub fn SetTimeout(self: Accounts__Manager, timeout: u32) void {
        qtc.Accounts__Manager_SetTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Timeout(self: Accounts__Manager) u32 {
        return qtc.Accounts__Manager_Timeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` abort: bool `
    ///
    pub fn SetAbortOnTimeout(self: Accounts__Manager, abort: bool) void {
        qtc.Accounts__Manager_SetAbortOnTimeout(@ptrCast(self.ptr), abort);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn AbortOnTimeout(self: Accounts__Manager) bool {
        return qtc.Accounts__Manager_AbortOnTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ## Returns:
    ///
    /// ` flag of manager_enums.Option `
    ///
    pub fn Options(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn LastError(self: Accounts__Manager) Accounts__Error {
        return .{ .ptr = qtc.Accounts__Manager_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn AccountCreated(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountCreated(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn OnAccountCreated(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn AccountRemoved(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountRemoved(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn OnAccountRemoved(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn AccountUpdated(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountUpdated(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn OnAccountUpdated(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn EnabledEvent(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_EnabledEvent(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn OnEnabledEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_EnabledEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__manager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__manager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn AccountList1(self: Accounts__Manager, allocator: std.mem.Allocator, serviceType: []const u8) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts__manager.AccountList1: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn AccountListEnabled1(self: Accounts__Manager, allocator: std.mem.Allocator, serviceType: []const u8) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts__manager.AccountListEnabled1: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn ServiceList1(self: Accounts__Manager, allocator: std.mem.Allocator, serviceType: []const u8) []Accounts__Service {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__manager.ServiceList1: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Accounts__Manager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__manager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Accounts__Manager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn IsWidgetType(self: Accounts__Manager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn IsWindowType(self: Accounts__Manager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn IsQuickItemType(self: Accounts__Manager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn SignalsBlocked(self: Accounts__Manager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Accounts__Manager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Thread(self: Accounts__Manager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Accounts__Manager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Accounts__Manager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Accounts__Manager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Accounts__Manager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Accounts__Manager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Accounts__Manager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("accounts__manager.Children: Memory allocation failed");
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
    /// ` self: Accounts__Manager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Accounts__Manager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Accounts__Manager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Accounts__Manager, obj: anytype) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Accounts__Manager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn Disconnect3(self: Accounts__Manager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Accounts__Manager, receiver: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn DumpObjectTree(self: Accounts__Manager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn DumpObjectInfo(self: Accounts__Manager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Accounts__Manager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Accounts__Manager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Accounts__Manager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("accounts__manager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__manager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Accounts__Manager `
    ///
    pub fn BindingStorage(self: Accounts__Manager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn BindingStorage2(self: Accounts__Manager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Destroyed(self: Accounts__Manager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Accounts__Manager, callback: *const fn (Accounts__Manager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Parent(self: Accounts__Manager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Accounts__Manager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn DeleteLater(self: Accounts__Manager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Accounts__Manager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Accounts__Manager, time: i64, timerType: i32) i32 {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Accounts__Manager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Accounts__Manager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Accounts__Manager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Accounts__Manager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Accounts__Manager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Accounts__Manager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QObject) callconv(.c) void) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Accounts__Manager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Manager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Accounts__Manager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Manager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Accounts__Manager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Manager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Accounts__Manager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Manager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QObject, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Manager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Manager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QTimerEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Manager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Manager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QChildEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Manager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Accounts__Manager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Manager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Manager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Manager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Sender(self: Accounts__Manager) QObject {
        return .{ .ptr = qtc.Accounts__Manager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Manager `
    ///
    pub fn SuperSender(self: Accounts__Manager) QObject {
        return .{ .ptr = qtc.Accounts__Manager_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Accounts__Manager, callback: *const fn () callconv(.c) QObject) void {
        qtc.Accounts__Manager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn SenderSignalIndex(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn SuperSenderSignalIndex(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Accounts__Manager, callback: *const fn () callconv(.c) i32) void {
        qtc.Accounts__Manager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Accounts__Manager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Accounts__Manager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Accounts__Manager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Manager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Accounts__Manager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Manager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn Delete(self: Accounts__Manager) void {
        qtc.Accounts__Manager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const DisableNotifications: i32 = 1;
    };
};
