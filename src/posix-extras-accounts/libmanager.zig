const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const manager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html
pub const accounts__manager = struct {
    /// New constructs a new Accounts::Manager object.
    ///
    ///
    pub fn New() QtC.Accounts__Manager {
        return qtc.Accounts__Manager_new();
    }

    /// New2 constructs a new Accounts::Manager object.
    ///
    /// ``` serviceType: []const u8 ```
    pub fn New2(serviceType: []const u8) QtC.Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };

        return qtc.Accounts__Manager_new2(serviceType_str);
    }

    /// New3 constructs a new Accounts::Manager object.
    ///
    /// ``` options: flag of manager_enums.Option ```
    pub fn New3(options: i32) QtC.Accounts__Manager {
        return qtc.Accounts__Manager_new3(@intCast(options));
    }

    /// New4 constructs a new Accounts::Manager object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.Accounts__Manager {
        return qtc.Accounts__Manager_new4(@ptrCast(parent));
    }

    /// New5 constructs a new Accounts::Manager object.
    ///
    /// ``` serviceType: []const u8, parent: QtC.QObject ```
    pub fn New5(serviceType: []const u8, parent: ?*anyopaque) QtC.Accounts__Manager {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };

        return qtc.Accounts__Manager_new5(serviceType_str, @ptrCast(parent));
    }

    /// New6 constructs a new Accounts::Manager object.
    ///
    /// ``` options: flag of manager_enums.Option, parent: QtC.QObject ```
    pub fn New6(options: i32, parent: ?*anyopaque) QtC.Accounts__Manager {
        return qtc.Accounts__Manager_new6(@intCast(options), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Accounts__Manager_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Accounts__Manager, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Manager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Accounts__Manager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Accounts__Manager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Accounts__Manager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Accounts__Manager_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Accounts__Manager_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::manager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, id: *const u32 ```
    pub fn Account(self: ?*anyopaque, id: *const u32) QtC.Accounts__Account {
        return qtc.Accounts__Manager_Account(@ptrCast(self), @ptrCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn AccountList(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts::manager.AccountList: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn AccountListEnabled(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts::manager.AccountListEnabled: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, providerName: []const u8 ```
    pub fn CreateAccount(self: ?*anyopaque, providerName: []const u8) QtC.Accounts__Account {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return qtc.Accounts__Manager_CreateAccount(@ptrCast(self), providerName_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, serviceName: []const u8 ```
    pub fn Service(self: ?*anyopaque, serviceName: []const u8) QtC.Accounts__Service {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.Accounts__Manager_Service(@ptrCast(self), serviceName_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn ServiceList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Accounts__Service, _arr.len) catch @panic("accounts::manager.ServiceList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, application: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn ServiceList2(self: ?*anyopaque, application: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList2(@ptrCast(self), @ptrCast(application));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Accounts__Service, _arr.len) catch @panic("accounts::manager.ServiceList2: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, providerName: []const u8 ```
    pub fn Provider(self: ?*anyopaque, providerName: []const u8) QtC.Accounts__Provider {
        const providerName_str = qtc.libqt_string{
            .len = providerName.len,
            .data = providerName.ptr,
        };
        return qtc.Accounts__Manager_Provider(@ptrCast(self), providerName_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn ProviderList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Accounts__Provider {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ProviderList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Accounts__Provider, _arr.len) catch @panic("accounts::manager.ProviderList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Provider = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, name: []const u8 ```
    pub fn ServiceType(self: ?*anyopaque, name: []const u8) QtC.Accounts__ServiceType {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.Accounts__Manager_ServiceType(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, applicationName: []const u8 ```
    pub fn Application(self: ?*anyopaque, applicationName: []const u8) QtC.Accounts__Application {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        return qtc.Accounts__Manager_Application(@ptrCast(self), applicationName_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, service: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn ApplicationList(self: ?*anyopaque, service: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Accounts__Application {
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ApplicationList(@ptrCast(self), @ptrCast(service));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Accounts__Application, _arr.len) catch @panic("accounts::manager.ApplicationList: Memory allocation failed");
        const _data: [*]QtC.Accounts__Application = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn ServiceType2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Manager_ServiceType2(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::manager.ServiceType2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, timeout: u32 ```
    pub fn SetTimeout(self: ?*anyopaque, timeout: u32) void {
        qtc.Accounts__Manager_SetTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn Timeout(self: ?*anyopaque) u32 {
        return qtc.Accounts__Manager_Timeout(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, abort: bool ```
    pub fn SetAbortOnTimeout(self: ?*anyopaque, abort: bool) void {
        qtc.Accounts__Manager_SetAbortOnTimeout(@ptrCast(self), abort);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn AbortOnTimeout(self: ?*anyopaque) bool {
        return qtc.Accounts__Manager_AbortOnTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    ///
    /// Returns: ``` flag of manager_enums.Option ```
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.Accounts__Manager_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn LastError(self: ?*anyopaque) QtC.Accounts__Error {
        return qtc.Accounts__Manager_LastError(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, id: u32 ```
    pub fn AccountCreated(self: ?*anyopaque, id: u32) void {
        qtc.Accounts__Manager_AccountCreated(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, id: u32) callconv(.c) void ```
    pub fn OnAccountCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountCreated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, id: u32 ```
    pub fn AccountRemoved(self: ?*anyopaque, id: u32) void {
        qtc.Accounts__Manager_AccountRemoved(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, id: u32) callconv(.c) void ```
    pub fn OnAccountRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, id: u32 ```
    pub fn AccountUpdated(self: ?*anyopaque, id: u32) void {
        qtc.Accounts__Manager_AccountUpdated(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, id: u32) callconv(.c) void ```
    pub fn OnAccountUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_AccountUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, id: u32 ```
    pub fn EnabledEvent(self: ?*anyopaque, id: u32) void {
        qtc.Accounts__Manager_EnabledEvent(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, id: u32) callconv(.c) void ```
    pub fn OnEnabledEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u32) callconv(.c) void) void {
        qtc.Accounts__Manager_Connect_EnabledEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Accounts__Manager_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::manager.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Accounts__Manager_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::manager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, serviceType: []const u8, allocator: std.mem.Allocator ```
    pub fn AccountList1(self: ?*anyopaque, serviceType: []const u8, allocator: std.mem.Allocator) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountList1(@ptrCast(self), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts::manager.AccountList1: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, serviceType: []const u8, allocator: std.mem.Allocator ```
    pub fn AccountListEnabled1(self: ?*anyopaque, serviceType: []const u8, allocator: std.mem.Allocator) []u32 {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_AccountListEnabled1(@ptrCast(self), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("accounts::manager.AccountListEnabled1: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// ``` self: QtC.Accounts__Manager, serviceType: []const u8, allocator: std.mem.Allocator ```
    pub fn ServiceList1(self: ?*anyopaque, serviceType: []const u8, allocator: std.mem.Allocator) []QtC.Accounts__Service {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Manager_ServiceList1(@ptrCast(self), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Accounts__Service, _arr.len) catch @panic("accounts::manager.ServiceList1: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::manager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Accounts__Manager, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Accounts__Manager, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Accounts__Manager, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Accounts__Manager, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Accounts__Manager, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Accounts__Manager, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("accounts::manager.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Accounts__Manager, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Accounts__Manager, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Accounts__Manager, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Accounts__Manager, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Accounts__Manager, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Accounts__Manager, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Accounts__Manager, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("accounts::manager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts::manager.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Accounts__Manager, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Accounts__Manager, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Accounts__Manager, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Accounts__Manager, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Accounts__Manager, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Accounts__Manager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Accounts__Manager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Accounts__Manager_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Accounts__Manager_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Accounts__Manager_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Accounts__Manager_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Accounts__Manager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Accounts__Manager_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Accounts__Manager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Accounts__Manager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Accounts__Manager_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Accounts__Manager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Accounts__Manager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Accounts__Manager_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Accounts__Manager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Accounts__Manager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.Accounts__Manager_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Accounts__Manager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Accounts__Manager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Accounts__Manager_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Manager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Accounts__Manager_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Accounts__Manager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Accounts__Manager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Accounts__Manager_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Accounts__Manager, callback: *const fn (self: QtC.Accounts__Manager, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Accounts__Manager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__Manager_Delete(@ptrCast(self));
    }
};

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Manager.html
pub const enums = struct {
    pub const Option = enum {
        pub const DisableNotifications: i32 = 1;
    };
};
