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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn metaObject(self: SignOn__Identity) QMetaObject {
        return .{ .ptr = qtc.SignOn__Identity_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: SignOn__Identity, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__Identity_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: SignOn__Identity, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__Identity_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__Identity.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `newIdentity` instead
    ///
    pub const NewIdentity = newIdentity;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    pub fn newIdentity() SignOn__Identity {
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity() };
    }

    /// ### DEPRECATED: Use `existingIdentity` instead
    ///
    pub const ExistingIdentity = existingIdentity;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: u32 `
    ///
    pub fn existingIdentity(_id: u32) SignOn__Identity {
        return .{ .ptr = qtc.SignOn__Identity_ExistingIdentity(@bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn id(self: SignOn__Identity) u32 {
        return qtc.SignOn__Identity_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryAvailableMethods` instead
    ///
    pub const QueryAvailableMethods = queryAvailableMethods;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn queryAvailableMethods(self: SignOn__Identity) void {
        qtc.SignOn__Identity_QueryAvailableMethods(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestCredentialsUpdate` instead
    ///
    pub const RequestCredentialsUpdate = requestCredentialsUpdate;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn requestCredentialsUpdate(self: SignOn__Identity) void {
        qtc.SignOn__Identity_RequestCredentialsUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `storeCredentials` instead
    ///
    pub const StoreCredentials = storeCredentials;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn storeCredentials(self: SignOn__Identity) void {
        qtc.SignOn__Identity_StoreCredentials(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn remove(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Remove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addReference` instead
    ///
    pub const AddReference = addReference;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn addReference(self: SignOn__Identity) void {
        qtc.SignOn__Identity_AddReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeReference` instead
    ///
    pub const RemoveReference = removeReference;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn removeReference(self: SignOn__Identity) void {
        qtc.SignOn__Identity_RemoveReference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryInfo` instead
    ///
    pub const QueryInfo = queryInfo;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn queryInfo(self: SignOn__Identity) void {
        qtc.SignOn__Identity_QueryInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verifyUser` instead
    ///
    pub const VerifyUser = verifyUser;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn verifyUser(self: SignOn__Identity) void {
        qtc.SignOn__Identity_VerifyUser(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verifyUser2` instead
    ///
    pub const VerifyUser2 = verifyUser2;

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
    pub fn verifyUser2(self: SignOn__Identity, allocator: std.mem.Allocator, params: ArrayMap_constu8_QVariant) void {
        const params_count = params.count();
        const params_keys = allocator.alloc(qtc.libqt_string, params_count) catch @panic("SignOn__Identity.verifyUser2: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params_count) catch @panic("SignOn__Identity.verifyUser2: Memory allocation failed");
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

    /// ### DEPRECATED: Use `verifySecret` instead
    ///
    pub const VerifySecret = verifySecret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` secret: []const u8 `
    ///
    pub fn verifySecret(self: SignOn__Identity, secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__Identity_VerifySecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### DEPRECATED: Use `signOut` instead
    ///
    pub const SignOut = signOut;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn signOut(self: SignOn__Identity) void {
        qtc.SignOn__Identity_SignOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` err: SignOn__Error `
    ///
    pub fn error0(self: SignOn__Identity, err: anytype) void {
        comptime _ = @TypeOf(err)._is_SignOn__Error;
        qtc.SignOn__Identity_Error(@ptrCast(self.ptr), @ptrCast(err.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, err: SignOn__Error) callconv(.c) void `
    ///
    pub fn onError(self: SignOn__Identity, callback: *const fn (SignOn__Identity, SignOn__Error) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `methodsAvailable` instead
    ///
    pub const MethodsAvailable = methodsAvailable;

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
    pub fn methodsAvailable(self: SignOn__Identity, allocator: std.mem.Allocator, methods: []const []const u8) void {
        const methods_arr = allocator.alloc(qtc.libqt_string, methods.len) catch @panic("SignOn__Identity.methodsAvailable: Memory allocation failed");
        defer allocator.free(methods_arr);
        for (methods, 0..methods.len) |str_item, i|
            methods_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const methods_list = qtc.libqt_list{
            .len = methods.len,
            .data = methods_arr.ptr,
        };
        qtc.SignOn__Identity_MethodsAvailable(@ptrCast(self.ptr), methods_list);
    }

    /// ### DEPRECATED: Use `onMethodsAvailable` instead
    ///
    pub const OnMethodsAvailable = onMethodsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, methods: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMethodsAvailable(self: SignOn__Identity, callback: *const fn (SignOn__Identity, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_MethodsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `credentialsStored` instead
    ///
    pub const CredentialsStored = credentialsStored;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` _id: u32 `
    ///
    pub fn credentialsStored(self: SignOn__Identity, _id: u32) void {
        qtc.SignOn__Identity_CredentialsStored(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `onCredentialsStored` instead
    ///
    pub const OnCredentialsStored = onCredentialsStored;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, id: u32) callconv(.c) void `
    ///
    pub fn onCredentialsStored(self: SignOn__Identity, callback: *const fn (SignOn__Identity, u32) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_CredentialsStored(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `referenceAdded` instead
    ///
    pub const ReferenceAdded = referenceAdded;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn referenceAdded(self: SignOn__Identity) void {
        qtc.SignOn__Identity_ReferenceAdded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReferenceAdded` instead
    ///
    pub const OnReferenceAdded = onReferenceAdded;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn onReferenceAdded(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `referenceRemoved` instead
    ///
    pub const ReferenceRemoved = referenceRemoved;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn referenceRemoved(self: SignOn__Identity) void {
        qtc.SignOn__Identity_ReferenceRemoved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReferenceRemoved` instead
    ///
    pub const OnReferenceRemoved = onReferenceRemoved;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn onReferenceRemoved(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `info` instead
    ///
    pub const Info = info;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` _info: SignOn__IdentityInfo `
    ///
    pub fn info(self: SignOn__Identity, _info: anytype) void {
        comptime _ = @TypeOf(_info)._is_SignOn__IdentityInfo;
        qtc.SignOn__Identity_Info(@ptrCast(self.ptr), @ptrCast(_info.ptr));
    }

    /// ### DEPRECATED: Use `onInfo` instead
    ///
    pub const OnInfo = onInfo;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, info: SignOn__IdentityInfo) callconv(.c) void `
    ///
    pub fn onInfo(self: SignOn__Identity, callback: *const fn (SignOn__Identity, SignOn__IdentityInfo) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Info(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `userVerified` instead
    ///
    pub const UserVerified = userVerified;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` valid: bool `
    ///
    pub fn userVerified(self: SignOn__Identity, valid: bool) void {
        qtc.SignOn__Identity_UserVerified(@ptrCast(self.ptr), valid);
    }

    /// ### DEPRECATED: Use `onUserVerified` instead
    ///
    pub const OnUserVerified = onUserVerified;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, valid: bool) callconv(.c) void `
    ///
    pub fn onUserVerified(self: SignOn__Identity, callback: *const fn (SignOn__Identity, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_UserVerified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `secretVerified` instead
    ///
    pub const SecretVerified = secretVerified;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` valid: bool `
    ///
    pub fn secretVerified(self: SignOn__Identity, valid: bool) void {
        qtc.SignOn__Identity_SecretVerified(@ptrCast(self.ptr), valid);
    }

    /// ### DEPRECATED: Use `onSecretVerified` instead
    ///
    pub const OnSecretVerified = onSecretVerified;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, valid: bool) callconv(.c) void `
    ///
    pub fn onSecretVerified(self: SignOn__Identity, callback: *const fn (SignOn__Identity, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SecretVerified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `signedOut` instead
    ///
    pub const SignedOut = signedOut;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn signedOut(self: SignOn__Identity) void {
        qtc.SignOn__Identity_SignedOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSignedOut` instead
    ///
    pub const OnSignedOut = onSignedOut;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn onSignedOut(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SignedOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removed` instead
    ///
    pub const Removed = removed;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn removed(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Removed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemoved` instead
    ///
    pub const OnRemoved = onRemoved;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn onRemoved(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Removed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__Identity.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__Identity.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `newIdentity1` instead
    ///
    pub const NewIdentity1 = newIdentity1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` _info: SignOn__IdentityInfo `
    ///
    pub fn newIdentity1(_info: anytype) SignOn__Identity {
        comptime _ = @TypeOf(_info)._is_SignOn__IdentityInfo;
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity1(@ptrCast(_info.ptr)) };
    }

    /// ### DEPRECATED: Use `newIdentity2` instead
    ///
    pub const NewIdentity2 = newIdentity2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` _info: SignOn__IdentityInfo `
    ///
    /// ` _parent: QObject `
    ///
    pub fn newIdentity2(_info: anytype, _parent: anytype) SignOn__Identity {
        comptime _ = @TypeOf(_info)._is_SignOn__IdentityInfo;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.SignOn__Identity_NewIdentity2(@ptrCast(_info.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `existingIdentity2` instead
    ///
    pub const ExistingIdentity2 = existingIdentity2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: u32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn existingIdentity2(_id: u32, _parent: anytype) SignOn__Identity {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.SignOn__Identity_ExistingIdentity2(@bitCast(_id), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `requestCredentialsUpdate1` instead
    ///
    pub const RequestCredentialsUpdate1 = requestCredentialsUpdate1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` message: []const u8 `
    ///
    pub fn requestCredentialsUpdate1(self: SignOn__Identity, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_RequestCredentialsUpdate1(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `storeCredentials1` instead
    ///
    pub const StoreCredentials1 = storeCredentials1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` _info: SignOn__IdentityInfo `
    ///
    pub fn storeCredentials1(self: SignOn__Identity, _info: anytype) void {
        comptime _ = @TypeOf(_info)._is_SignOn__IdentityInfo;
        qtc.SignOn__Identity_StoreCredentials1(@ptrCast(self.ptr), @ptrCast(_info.ptr));
    }

    /// ### DEPRECATED: Use `addReference1` instead
    ///
    pub const AddReference1 = addReference1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addReference1(self: SignOn__Identity, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_AddReference1(@ptrCast(self.ptr), reference_str);
    }

    /// ### DEPRECATED: Use `removeReference1` instead
    ///
    pub const RemoveReference1 = removeReference1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn removeReference1(self: SignOn__Identity, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_RemoveReference1(@ptrCast(self.ptr), reference_str);
    }

    /// ### DEPRECATED: Use `verifyUser1` instead
    ///
    pub const VerifyUser1 = verifyUser1;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` message: []const u8 `
    ///
    pub fn verifyUser1(self: SignOn__Identity, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_VerifyUser1(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__Identity `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: SignOn__Identity, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: SignOn__Identity, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: SignOn__Identity, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__Identity.objectName: Memory allocation failed");
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
    /// ` self: SignOn__Identity `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: SignOn__Identity, name: []const u8) void {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn isWidgetType(self: SignOn__Identity) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn isWindowType(self: SignOn__Identity) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn isQuickItemType(self: SignOn__Identity) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn signalsBlocked(self: SignOn__Identity) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: SignOn__Identity, b: bool) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn thread(self: SignOn__Identity) QThread {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: SignOn__Identity, _thread: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: SignOn__Identity, interval: i32) i32 {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: SignOn__Identity, time: i64) i32 {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: SignOn__Identity, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: SignOn__Identity, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: SignOn__Identity, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("SignOn__Identity.children: Memory allocation failed");
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: SignOn__Identity, _parent: anytype) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: SignOn__Identity, filterObj: anytype) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: SignOn__Identity, obj: anytype) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: SignOn__Identity, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn disconnect3(self: SignOn__Identity) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: SignOn__Identity, receiver: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn dumpObjectTree(self: SignOn__Identity) void {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn dumpObjectInfo(self: SignOn__Identity) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: SignOn__Identity, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: SignOn__Identity, name: [:0]const u8) QVariant {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: SignOn__Identity, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("SignOn__Identity.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__Identity.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: SignOn__Identity `
    ///
    pub fn bindingStorage(self: SignOn__Identity) QBindingStorage {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn bindingStorage2(self: SignOn__Identity) QBindingStorage {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn destroyed(self: SignOn__Identity) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity) callconv(.c) void `
    ///
    pub fn onDestroyed(self: SignOn__Identity, callback: *const fn (SignOn__Identity) callconv(.c) void) void {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn parent(self: SignOn__Identity) QObject {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: SignOn__Identity, classname: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    pub fn deleteLater(self: SignOn__Identity) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: SignOn__Identity, interval: i32, timerType: i32) i32 {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: SignOn__Identity, time: i64, timerType: i32) i32 {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: SignOn__Identity, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: SignOn__Identity, signal: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: SignOn__Identity, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: SignOn__Identity, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: SignOn__Identity, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: SignOn__Identity, param1: anytype) void {
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
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: SignOn__Identity, callback: *const fn (SignOn__Identity, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: SignOn__Identity `
    ///
    /// ` callback: *const fn (self: SignOn__Identity, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: SignOn__Identity, callback: *const fn (SignOn__Identity, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__Identity `
    ///
    pub fn delete(self: SignOn__Identity) void {
        qtc.SignOn__Identity_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
pub const enums = struct {
    pub const IdentityError = enum {
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
