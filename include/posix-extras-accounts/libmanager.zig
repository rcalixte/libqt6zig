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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    pub fn new() Accounts__Manager {
        return .{ .ptr = qtc.Accounts__Manager_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _serviceType: []const u8 `
    ///
    pub fn new2(_serviceType: []const u8) Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = _serviceType.len,
            .data = _serviceType.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_new2(serviceType_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _options: flag of manager_enums.Option `
    ///
    pub fn new3(_options: i32) Accounts__Manager {
        return .{ .ptr = qtc.Accounts__Manager_new3(@bitCast(_options)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) Accounts__Manager {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _serviceType: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(_serviceType: []const u8, _parent: anytype) Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = _serviceType.len,
            .data = _serviceType.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new5(serviceType_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new Accounts::Manager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _options: flag of manager_enums.Option `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(_options: i32, _parent: anytype) Accounts__Manager {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Manager_new6(@bitCast(_options), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn metaObject(self: Accounts__Manager) QMetaObject {
        return .{ .ptr = qtc.Accounts__Manager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Accounts__Manager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Accounts__Manager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn superMetaObject(self: Accounts__Manager) QMetaObject {
        return .{ .ptr = qtc.Accounts__Manager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Accounts__Manager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Manager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Accounts__Manager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Accounts__Manager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Manager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: Accounts__Manager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Manager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Accounts__Manager, callback: *const fn (Accounts__Manager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: Accounts__Manager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Manager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Manager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `account` instead
    ///
    pub const Account = account;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: *const u32 `
    ///
    pub fn account(self: Accounts__Manager, id: *const u32) Accounts__Account {
        return .{ .ptr = qtc.Accounts__Manager_Account(@ptrCast(self.ptr), @ptrCast(id)) };
    }

    /// ### DEPRECATED: Use `accountList` instead
    ///
    pub const AccountList = accountList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accountList(self: Accounts__Manager, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("Accounts__Manager.accountList: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accountListEnabled` instead
    ///
    pub const AccountListEnabled = accountListEnabled;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accountListEnabled(self: Accounts__Manager, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("Accounts__Manager.accountListEnabled: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createAccount` instead
    ///
    pub const CreateAccount = createAccount;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` providerName: []const u8 `
    ///
    pub fn createAccount(self: Accounts__Manager, providerName: []const u8) Accounts__Account {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_CreateAccount(@ptrCast(self.ptr), providerName_str) };
    }

    /// ### DEPRECATED: Use `service` instead
    ///
    pub const Service = service;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn service(self: Accounts__Manager, serviceName: []const u8) Accounts__Service {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Service(@ptrCast(self.ptr), serviceName_str) };
    }

    /// ### DEPRECATED: Use `serviceList` instead
    ///
    pub const ServiceList = serviceList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceList(self: Accounts__Manager, allocator: std.mem.Allocator) []Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("Accounts__Manager.serviceList: Memory allocation failed");
        const _data_val: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceList2` instead
    ///
    pub const ServiceList2 = serviceList2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _application: Accounts__Application `
    ///
    pub fn serviceList2(self: Accounts__Manager, allocator: std.mem.Allocator, _application: anytype) []Accounts__Service {
        comptime _ = @TypeOf(_application)._is_Accounts__Application;
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList2(@ptrCast(self.ptr), @ptrCast(_application.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("Accounts__Manager.serviceList2: Memory allocation failed");
        const _data_val: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `provider` instead
    ///
    pub const Provider = provider;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` providerName: []const u8 `
    ///
    pub fn provider(self: Accounts__Manager, providerName: []const u8) Accounts__Provider {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Provider(@ptrCast(self.ptr), providerName_str) };
    }

    /// ### DEPRECATED: Use `providerList` instead
    ///
    pub const ProviderList = providerList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerList(self: Accounts__Manager, allocator: std.mem.Allocator) []Accounts__Provider {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ProviderList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Provider, _arr.len) catch @panic("Accounts__Manager.providerList: Memory allocation failed");
        const _data_val: [*]QtC.Accounts__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceType` instead
    ///
    pub const ServiceType = serviceType;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn serviceType(self: Accounts__Manager, name: []const u8) Accounts__ServiceType {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_ServiceType(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `application` instead
    ///
    pub const Application = application;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` applicationName: []const u8 `
    ///
    pub fn application(self: Accounts__Manager, applicationName: []const u8) Accounts__Application {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        return .{ .ptr = qtc.Accounts__Manager_Application(@ptrCast(self.ptr), applicationName_str) };
    }

    /// ### DEPRECATED: Use `applicationList` instead
    ///
    pub const ApplicationList = applicationList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _service: Accounts__Service `
    ///
    pub fn applicationList(self: Accounts__Manager, allocator: std.mem.Allocator, _service: anytype) []Accounts__Application {
        comptime _ = @TypeOf(_service)._is_Accounts__Service;
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ApplicationList(@ptrCast(self.ptr), @ptrCast(_service.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Application, _arr.len) catch @panic("Accounts__Manager.applicationList: Memory allocation failed");
        const _data_val: [*]QtC.Accounts__Application = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceType2` instead
    ///
    pub const ServiceType2 = serviceType2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceType2(self: Accounts__Manager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Manager_ServiceType2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Manager.serviceType2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTimeout` instead
    ///
    pub const SetTimeout = setTimeout;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` _timeout: u32 `
    ///
    pub fn setTimeout(self: Accounts__Manager, _timeout: u32) void {
        qtc.Accounts__Manager_SetTimeout(@ptrCast(self.ptr), @bitCast(_timeout));
    }

    /// ### DEPRECATED: Use `timeout` instead
    ///
    pub const Timeout = timeout;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn timeout(self: Accounts__Manager) u32 {
        return qtc.Accounts__Manager_Timeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAbortOnTimeout` instead
    ///
    pub const SetAbortOnTimeout = setAbortOnTimeout;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` abort: bool `
    ///
    pub fn setAbortOnTimeout(self: Accounts__Manager, abort: bool) void {
        qtc.Accounts__Manager_SetAbortOnTimeout(@ptrCast(self.ptr), abort);
    }

    /// ### DEPRECATED: Use `abortOnTimeout` instead
    ///
    pub const AbortOnTimeout = abortOnTimeout;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn abortOnTimeout(self: Accounts__Manager) bool {
        return qtc.Accounts__Manager_AbortOnTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

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
    pub fn options(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_Options(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn lastError(self: Accounts__Manager) Accounts__Error {
        return .{ .ptr = qtc.Accounts__Manager_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accountCreated` instead
    ///
    pub const AccountCreated = accountCreated;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn accountCreated(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountCreated(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onAccountCreated` instead
    ///
    pub const OnAccountCreated = onAccountCreated;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn onAccountCreated(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accountRemoved` instead
    ///
    pub const AccountRemoved = accountRemoved;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn accountRemoved(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountRemoved(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onAccountRemoved` instead
    ///
    pub const OnAccountRemoved = onAccountRemoved;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn onAccountRemoved(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accountUpdated` instead
    ///
    pub const AccountUpdated = accountUpdated;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn accountUpdated(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_AccountUpdated(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onAccountUpdated` instead
    ///
    pub const OnAccountUpdated = onAccountUpdated;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn onAccountUpdated(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledEvent` instead
    ///
    pub const EnabledEvent = enabledEvent;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn enabledEvent(self: Accounts__Manager, id: u32) void {
        qtc.Accounts__Manager_EnabledEvent(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `onEnabledEvent` instead
    ///
    pub const OnEnabledEvent = onEnabledEvent;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, id: u32) callconv(.c) void `
    ///
    pub fn onEnabledEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_EnabledEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Manager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Manager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accountList1` instead
    ///
    pub const AccountList1 = accountList1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _serviceType: []const u8 `
    ///
    pub fn accountList1(self: Accounts__Manager, allocator: std.mem.Allocator, _serviceType: []const u8) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = _serviceType.len,
            .data = _serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("Accounts__Manager.accountList1: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accountListEnabled1` instead
    ///
    pub const AccountListEnabled1 = accountListEnabled1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _serviceType: []const u8 `
    ///
    pub fn accountListEnabled1(self: Accounts__Manager, allocator: std.mem.Allocator, _serviceType: []const u8) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = _serviceType.len,
            .data = _serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("Accounts__Manager.accountListEnabled1: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceList1` instead
    ///
    pub const ServiceList1 = serviceList1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _serviceType: []const u8 `
    ///
    pub fn serviceList1(self: Accounts__Manager, allocator: std.mem.Allocator, _serviceType: []const u8) []Accounts__Service {
        const serviceType_str = qtc.libqt_string{
            .len = _serviceType.len,
            .data = _serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("Accounts__Manager.serviceList1: Memory allocation failed");
        const _data_val: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
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
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Accounts__Manager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Manager.objectName: Memory allocation failed");
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
    /// ` self: Accounts__Manager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Accounts__Manager, name: []const u8) void {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn isWidgetType(self: Accounts__Manager) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn isWindowType(self: Accounts__Manager) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn isQuickItemType(self: Accounts__Manager) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn signalsBlocked(self: Accounts__Manager) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Accounts__Manager, b: bool) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn thread(self: Accounts__Manager) QThread {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Accounts__Manager, _thread: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Accounts__Manager, interval: i32) i32 {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Accounts__Manager, time: i64) i32 {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Accounts__Manager, id: i32) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Accounts__Manager, id: i32) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Accounts__Manager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Accounts__Manager.children: Memory allocation failed");
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Accounts__Manager, _parent: anytype) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Accounts__Manager, filterObj: anytype) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Accounts__Manager, obj: anytype) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Accounts__Manager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn disconnect3(self: Accounts__Manager) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Accounts__Manager, receiver: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn dumpObjectTree(self: Accounts__Manager) void {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn dumpObjectInfo(self: Accounts__Manager) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Accounts__Manager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Accounts__Manager, name: [:0]const u8) QVariant {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Accounts__Manager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Accounts__Manager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Accounts__Manager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Accounts__Manager `
    ///
    pub fn bindingStorage(self: Accounts__Manager) QBindingStorage {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn bindingStorage2(self: Accounts__Manager) QBindingStorage {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn destroyed(self: Accounts__Manager) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Accounts__Manager, callback: *const fn (Accounts__Manager) callconv(.c) void) void {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn parent(self: Accounts__Manager) QObject {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Accounts__Manager, classname: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    pub fn deleteLater(self: Accounts__Manager) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Accounts__Manager, interval: i32, timerType: i32) i32 {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Accounts__Manager, time: i64, timerType: i32) i32 {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Accounts__Manager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Accounts__Manager, signal: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Accounts__Manager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Accounts__Manager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Accounts__Manager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Accounts__Manager, param1: anytype) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QObject) callconv(.c) void) void {
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Accounts__Manager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Accounts__Manager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Accounts__Manager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Accounts__Manager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Accounts__Manager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Accounts__Manager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Accounts__Manager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Accounts__Manager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QObject, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Accounts__Manager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Accounts__Manager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QTimerEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Accounts__Manager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Accounts__Manager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QChildEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Accounts__Manager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Accounts__Manager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Accounts__Manager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QEvent) callconv(.c) void) void {
        qtc.Accounts__Manager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Manager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Accounts__Manager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Manager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Manager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn sender(self: Accounts__Manager) QObject {
        return .{ .ptr = qtc.Accounts__Manager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Manager `
    ///
    pub fn superSender(self: Accounts__Manager) QObject {
        return .{ .ptr = qtc.Accounts__Manager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Accounts__Manager, callback: *const fn () callconv(.c) QObject) void {
        qtc.Accounts__Manager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn senderSignalIndex(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    pub fn superSenderSignalIndex(self: Accounts__Manager) i32 {
        return qtc.Accounts__Manager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Accounts__Manager, callback: *const fn () callconv(.c) i32) void {
        qtc.Accounts__Manager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Accounts__Manager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Accounts__Manager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Accounts__Manager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Manager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Accounts__Manager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Manager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Manager`
    ///
    /// ` callback: *const fn (self: Accounts__Manager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Accounts__Manager, callback: *const fn (Accounts__Manager, QMetaMethod) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Manager `
    ///
    /// ` callback: *const fn (self: Accounts__Manager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Accounts__Manager, callback: *const fn (Accounts__Manager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Manager `
    ///
    pub fn delete(self: Accounts__Manager) void {
        qtc.Accounts__Manager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const DisableNotifications: i32 = 1;
    };
};
