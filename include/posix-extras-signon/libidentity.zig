const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html
pub const signon__identity = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.SignOn__Identity_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.SignOn__Identity, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__Identity_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.SignOn__Identity, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.SignOn__Identity_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(@alignCast(param3)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identity.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    ///
    pub fn NewIdentity() QtC.SignOn__Identity {
        return qtc.SignOn__Identity_NewIdentity();
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` id: u32 ```
    pub fn ExistingIdentity(id: u32) QtC.SignOn__Identity {
        return qtc.SignOn__Identity_ExistingIdentity(@intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.SignOn__Identity_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn QueryAvailableMethods(self: ?*anyopaque) void {
        qtc.SignOn__Identity_QueryAvailableMethods(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn RequestCredentialsUpdate(self: ?*anyopaque) void {
        qtc.SignOn__Identity_RequestCredentialsUpdate(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn StoreCredentials(self: ?*anyopaque) void {
        qtc.SignOn__Identity_StoreCredentials(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Remove(self: ?*anyopaque) void {
        qtc.SignOn__Identity_Remove(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn AddReference(self: ?*anyopaque) void {
        qtc.SignOn__Identity_AddReference(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn RemoveReference(self: ?*anyopaque) void {
        qtc.SignOn__Identity_RemoveReference(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn QueryInfo(self: ?*anyopaque) void {
        qtc.SignOn__Identity_QueryInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn VerifyUser(self: ?*anyopaque) void {
        qtc.SignOn__Identity_VerifyUser(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, params: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn VerifyUser2(self: ?*anyopaque, params: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const params_keys = allocator.alloc(qtc.libqt_string, params.count()) catch @panic("signon::identity.VerifyUser2: Memory allocation failed");
        defer allocator.free(params_keys);
        const params_values = allocator.alloc(QtC.QVariant, params.count()) catch @panic("signon::identity.VerifyUser2: Memory allocation failed");
        defer allocator.free(params_values);
        var i: usize = 0;
        var params_it = params.iterator();
        while (params_it.next()) |entry| {
            const key = entry.key_ptr.*;
            params_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            params_values[i] = @ptrCast(entry.value_ptr.*);
            i += 1;
        }
        const params_map = qtc.libqt_map{
            .len = params.count(),
            .keys = @ptrCast(params_keys.ptr),
            .values = @ptrCast(params_values.ptr),
        };
        qtc.SignOn__Identity_VerifyUser2(@ptrCast(self), params_map);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, secret: []const u8 ```
    pub fn VerifySecret(self: ?*anyopaque, secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__Identity_VerifySecret(@ptrCast(self), secret_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn SignOut(self: ?*anyopaque) void {
        qtc.SignOn__Identity_SignOut(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, err: QtC.SignOn__Error ```
    pub fn Error(self: ?*anyopaque, err: ?*anyopaque) void {
        qtc.SignOn__Identity_Error(@ptrCast(self), @ptrCast(err));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, err: QtC.SignOn__Error) callconv(.c) void ```
    pub fn OnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Error(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, methods: [][]const u8, allocator: std.mem.Allocator ```
    pub fn MethodsAvailable(self: ?*anyopaque, methods: [][]const u8, allocator: std.mem.Allocator) void {
        var methods_arr = allocator.alloc(qtc.libqt_string, methods.len) catch @panic("signon::identity.MethodsAvailable: Memory allocation failed");
        defer allocator.free(methods_arr);
        for (methods, 0..methods.len) |item, i| {
            methods_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const methods_list = qtc.libqt_list{
            .len = methods.len,
            .data = methods_arr.ptr,
        };
        qtc.SignOn__Identity_MethodsAvailable(@ptrCast(self), methods_list);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, methods: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnMethodsAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_MethodsAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, id: u32 ```
    pub fn CredentialsStored(self: ?*anyopaque, id: u32) void {
        qtc.SignOn__Identity_CredentialsStored(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, id: u32) callconv(.c) void ```
    pub fn OnCredentialsStored(self: ?*anyopaque, callback: *const fn (?*anyopaque, u32) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_CredentialsStored(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn ReferenceAdded(self: ?*anyopaque) void {
        qtc.SignOn__Identity_ReferenceAdded(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity) callconv(.c) void ```
    pub fn OnReferenceAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn ReferenceRemoved(self: ?*anyopaque) void {
        qtc.SignOn__Identity_ReferenceRemoved(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity) callconv(.c) void ```
    pub fn OnReferenceRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_ReferenceRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, info: QtC.SignOn__IdentityInfo ```
    pub fn Info(self: ?*anyopaque, info: ?*anyopaque) void {
        qtc.SignOn__Identity_Info(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, info: QtC.SignOn__IdentityInfo) callconv(.c) void ```
    pub fn OnInfo(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Info(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, valid: bool ```
    pub fn UserVerified(self: ?*anyopaque, valid: bool) void {
        qtc.SignOn__Identity_UserVerified(@ptrCast(self), valid);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, valid: bool) callconv(.c) void ```
    pub fn OnUserVerified(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_UserVerified(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, valid: bool ```
    pub fn SecretVerified(self: ?*anyopaque, valid: bool) void {
        qtc.SignOn__Identity_SecretVerified(@ptrCast(self), valid);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, valid: bool) callconv(.c) void ```
    pub fn OnSecretVerified(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SecretVerified(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn SignedOut(self: ?*anyopaque) void {
        qtc.SignOn__Identity_SignedOut(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity) callconv(.c) void ```
    pub fn OnSignedOut(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_SignedOut(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Removed(self: ?*anyopaque) void {
        qtc.SignOn__Identity_Removed(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity) callconv(.c) void ```
    pub fn OnRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__Identity_Connect_Removed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identity.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identity.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` info: QtC.SignOn__IdentityInfo ```
    pub fn NewIdentity1(info: ?*anyopaque) QtC.SignOn__Identity {
        return qtc.SignOn__Identity_NewIdentity1(@ptrCast(info));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` info: QtC.SignOn__IdentityInfo, parent: QtC.QObject ```
    pub fn NewIdentity2(info: ?*anyopaque, parent: ?*anyopaque) QtC.SignOn__Identity {
        return qtc.SignOn__Identity_NewIdentity2(@ptrCast(info), @ptrCast(parent));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` id: u32, parent: QtC.QObject ```
    pub fn ExistingIdentity2(id: u32, parent: ?*anyopaque) QtC.SignOn__Identity {
        return qtc.SignOn__Identity_ExistingIdentity2(@intCast(id), @ptrCast(parent));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, message: []const u8 ```
    pub fn RequestCredentialsUpdate1(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_RequestCredentialsUpdate1(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, info: QtC.SignOn__IdentityInfo ```
    pub fn StoreCredentials1(self: ?*anyopaque, info: ?*anyopaque) void {
        qtc.SignOn__Identity_StoreCredentials1(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, reference: []const u8 ```
    pub fn AddReference1(self: ?*anyopaque, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_AddReference1(@ptrCast(self), reference_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, reference: []const u8 ```
    pub fn RemoveReference1(self: ?*anyopaque, reference: []const u8) void {
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        qtc.SignOn__Identity_RemoveReference1(@ptrCast(self), reference_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// ``` self: QtC.SignOn__Identity, message: []const u8 ```
    pub fn VerifyUser1(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__Identity_VerifyUser1(@ptrCast(self), message_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.SignOn__Identity, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.SignOn__Identity, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.SignOn__Identity, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identity.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.SignOn__Identity, name: []const u8 ```
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
    /// ``` self: QtC.SignOn__Identity ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.SignOn__Identity, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.SignOn__Identity, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.SignOn__Identity, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.SignOn__Identity, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.SignOn__Identity, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.SignOn__Identity, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("signon::identity.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.SignOn__Identity, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.SignOn__Identity, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.SignOn__Identity, obj: QtC.QObject ```
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
    /// ``` self: QtC.SignOn__Identity, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.SignOn__Identity ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.SignOn__Identity, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.SignOn__Identity, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.SignOn__Identity, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("signon::identity.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::identity.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.SignOn__Identity, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.SignOn__Identity, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.SignOn__Identity, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.SignOn__Identity, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__Identity, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.SignOn__Identity, callback: *const fn (self: QtC.SignOn__Identity, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.SignOn__Identity ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.SignOn__Identity_Delete(@ptrCast(self));
    }
};

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identity.html
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
