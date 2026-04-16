const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const SignOn__Error = @import("libqt6").SignOn__Error;
const SignOn__IdentityInfo = @import("libqt6").SignOn__IdentityInfo;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
pub const SignOn__Identity = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__Identity,

    pub const _is_SignOn__Identity = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn MetaObject(self: SignOn__Identity) QMetaObject {
        return .{ .ptr = qtc.SignOn__Identity_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: SignOn__Identity, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__Identity_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: SignOn__Identity, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__Identity_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identity.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    pub fn NewIdentity() SignOn__Identity {
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity() };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: u32 `
    ///
    pub fn ExistingIdentity(id: u32) SignOn__Identity {
        return .{ .ptr = qtc.SignOn__Identity_ExistingIdentity(@bitCast(id)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Id(self: SignOn__Identity) u32 {
        return qtc.SignOn__Identity_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn QueryAvailableMethods(self: SignOn__Identity) void {
        qtc.SignOn__Identity_QueryAvailableMethods(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn RequestCredentialsUpdate(self: SignOn__Identity) void {
        qtc.SignOn__Identity_RequestCredentialsUpdate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn StoreCredentials(self: SignOn__Identity) void {
        qtc.SignOn__Identity_StoreCredentials(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Remove(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Remove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn AddReference(self: SignOn__Identity) void {
        qtc.SignOn__Identity_AddReference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn RemoveReference(self: SignOn__Identity) void {
        qtc.SignOn__Identity_RemoveReference(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn QueryInfo(self: SignOn__Identity) void {
        qtc.SignOn__Identity_QueryInfo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn VerifyUser(self: SignOn__Identity) void {
        qtc.SignOn__Identity_VerifyUser(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` params: ArrayMap_constu8_QVariant `
    ///
    pub fn VerifyUser2(self: SignOn__Identity, allocator: std.mem.Allocator, params: ArrayMap_constu8_QVariant) void {
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("signon__identity.VerifyUser2: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("signon__identity.VerifyUser2: Memory allocation failed");
        defer allocator.free(params_values);
        var i: usize = 0;
        var params_it = params.iterator();
        while (params_it.next()) |it_entry| : (i += 1) {
            const params_key = it_entry.key_ptr.*;
            params_keys[i] = qtc.libqt_string{
                .len = params_key.len,
                .data = params_key.ptr,
            };
            params_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const params_map = qtc.libqt_map{
            .len = params_count,
            .keys = @ptrCast(params_keys.ptr),
            .values = @ptrCast(params_values.ptr),
        };
        qtc.SignOn__Identity_VerifyUser2(@ptrCast(self.ptr), params_map);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` secret: []const u8 `
    ///
    pub fn VerifySecret(self: SignOn__Identity, secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__Identity_VerifySecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn SignOut(self: SignOn__Identity) void {
        qtc.SignOn__Identity_SignOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` err: SignOn__Error `
    ///
    pub fn Error(self: SignOn__Identity, err: anytype) void {
        comptime _ = @TypeOf(err)._is_SignOn__Error;
        qtc.SignOn__Identity_Error(@ptrCast(self.ptr), @ptrCast(err.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, err: SignOn__Error) callconv(.c) void `
    ///
    pub fn OnError(self: SignOn__Identity, callback: *const fn (SignOn__Identity, SignOn__Error) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` methods: []const []const u8 `
    ///
    pub fn MethodsAvailable(self: SignOn__Identity, allocator: std.mem.Allocator, methods: []const []const u8) void {
        const methods_arr = allocator.alloc(qtc.libqt_string, methods.len) catch @panic("signon__identity.MethodsAvailable: Memory allocation failed");
        defer allocator.free(methods_arr);
        for (methods, 0..methods.len) |item, i|
            methods_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const methods_list = qtc.libqt_list{
            .len = methods.len,
            .data = methods_arr.ptr,
        };
        qtc.SignOn__Identity_MethodsAvailable(@ptrCast(self.ptr), methods_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, methods: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMethodsAvailable(self: SignOn__Identity, callback: *const fn (SignOn__Identity, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_MethodsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` id: u32 `
    ///
    pub fn CredentialsStored(self: SignOn__Identity, id: u32) void {
        qtc.SignOn__Identity_CredentialsStored(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, id: u32) callconv(.c) void `
    ///
    pub fn OnCredentialsStored(self: SignOn__Identity, callback: *const fn (SignOn__Identity, u32) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_CredentialsStored(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn ReferenceAdded(self: SignOn__Identity) void {
        qtc.SignOn__Identity_ReferenceAdded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn OnReferenceAdded(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn ReferenceRemoved(self: SignOn__Identity) void {
        qtc.SignOn__Identity_ReferenceRemoved(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn OnReferenceRemoved(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` info: SignOn__IdentityInfo `
    ///
    pub fn Info(self: SignOn__Identity, info: anytype) void {
        comptime _ = @TypeOf(info)._is_SignOn__IdentityInfo;
        qtc.SignOn__Identity_Info(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, info: SignOn__IdentityInfo) callconv(.c) void `
    ///
    pub fn OnInfo(self: SignOn__Identity, callback: *const fn (SignOn__Identity, SignOn__IdentityInfo) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Info(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` valid: bool `
    ///
    pub fn UserVerified(self: SignOn__Identity, valid: bool) void {
        qtc.SignOn__Identity_UserVerified(@ptrCast(self.ptr), valid);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, valid: bool) callconv(.c) void `
    ///
    pub fn OnUserVerified(self: SignOn__Identity, callback: *const fn (SignOn__Identity, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_UserVerified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` valid: bool `
    ///
    pub fn SecretVerified(self: SignOn__Identity, valid: bool) void {
        qtc.SignOn__Identity_SecretVerified(@ptrCast(self.ptr), valid);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, valid: bool) callconv(.c) void `
    ///
    pub fn OnSecretVerified(self: SignOn__Identity, callback: *const fn (SignOn__Identity, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SecretVerified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn SignedOut(self: SignOn__Identity) void {
        qtc.SignOn__Identity_SignedOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn OnSignedOut(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SignedOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Removed(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Removed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn OnRemoved(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Removed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identity.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identity.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` info: SignOn__IdentityInfo `
    ///
    pub fn NewIdentity1(info: anytype) SignOn__Identity {
        comptime _ = @TypeOf(info)._is_SignOn__IdentityInfo;
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity1(@ptrCast(info.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` info: SignOn__IdentityInfo `
    ///
    /// ` parent: QObject `
    ///
    pub fn NewIdentity2(info: anytype, parent: anytype) SignOn__Identity {
        comptime _ = @TypeOf(info)._is_SignOn__IdentityInfo;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity2(@ptrCast(info.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: u32 `
    ///
    /// ` parent: QObject `
    ///
    pub fn ExistingIdentity2(id: u32, parent: anytype) SignOn__Identity {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.SignOn__Identity_ExistingIdentity2(@bitCast(id), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` message: []const u8 `
    ///
    pub fn RequestCredentialsUpdate1(self: SignOn__Identity, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_RequestCredentialsUpdate1(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` info: SignOn__IdentityInfo `
    ///
    pub fn StoreCredentials1(self: SignOn__Identity, info: anytype) void {
        comptime _ = @TypeOf(info)._is_SignOn__IdentityInfo;
        qtc.SignOn__Identity_StoreCredentials1(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn AddReference1(self: SignOn__Identity, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_AddReference1(@ptrCast(self.ptr), reference_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn RemoveReference1(self: SignOn__Identity, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_RemoveReference1(@ptrCast(self.ptr), reference_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` message: []const u8 `
    ///
    pub fn VerifyUser1(self: SignOn__Identity, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_VerifyUser1(@ptrCast(self.ptr), message_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: SignOn__Identity, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: SignOn__Identity, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: SignOn__Identity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identity.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: SignOn__Identity, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn IsWidgetType(self: SignOn__Identity) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn IsWindowType(self: SignOn__Identity) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn IsQuickItemType(self: SignOn__Identity) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn SignalsBlocked(self: SignOn__Identity) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: SignOn__Identity, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Thread(self: SignOn__Identity) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: SignOn__Identity, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: SignOn__Identity, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: SignOn__Identity, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: SignOn__Identity, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: SignOn__Identity, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: SignOn__Identity, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("signon__identity.Children: Memory allocation failed");
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
    /// ` self: SignOn__Identity `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: SignOn__Identity, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: SignOn__Identity, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: SignOn__Identity, obj: anytype) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: SignOn__Identity, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn Disconnect3(self: SignOn__Identity) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: SignOn__Identity, receiver: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn DumpObjectTree(self: SignOn__Identity) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn DumpObjectInfo(self: SignOn__Identity) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: SignOn__Identity, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: SignOn__Identity, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: SignOn__Identity, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("signon__identity.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__identity.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: SignOn__Identity `
    ///
    pub fn BindingStorage(self: SignOn__Identity) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn BindingStorage2(self: SignOn__Identity) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Destroyed(self: SignOn__Identity) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Parent(self: SignOn__Identity) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: SignOn__Identity, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn DeleteLater(self: SignOn__Identity) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: SignOn__Identity, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: SignOn__Identity, time: i64, timerType: i32) i32 {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: SignOn__Identity, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: SignOn__Identity, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: SignOn__Identity, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: SignOn__Identity, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: SignOn__Identity, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: SignOn__Identity, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: SignOn__Identity, callback: *const fn (SignOn__Identity, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: SignOn__Identity, callback: *const fn (SignOn__Identity, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn Delete(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
pub const enums = struct {
    pub const IdentityError = enum(i32) {
        pub const UnknownError: i32 = 1;
        pub const InternalServerError: i32 = 2;
        pub const InternalCommunicationError: i32 = 3;
        pub const PermissionDeniedError: i32 = 4;
        pub const IdentityErr: i32 = 200;
        pub const MethodNotAvailableError: i32 = 201;
        pub const NotFoundError: i32 = 202;
        pub const StoreFailedError: i32 = 203;
        pub const RemoveFailedError: i32 = 204;
        pub const SignOutFailedError: i32 = 205;
        pub const CanceledError: i32 = 206;
        pub const CredentialsNotAvailableError: i32 = 207;
    };
};
