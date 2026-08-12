const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html)
pub const Attica__RemoteAccount = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__RemoteAccount,

    pub const _is_Attica__RemoteAccount = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::RemoteAccount object in C++ memory
    ///
    pub fn new() Attica__RemoteAccount {
        return .{ .ptr = qtc.Attica__RemoteAccount_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::RemoteAccount object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__RemoteAccount `
    ///
    pub fn new2(other: anytype) Attica__RemoteAccount {
        comptime _ = @TypeOf(other)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__RemoteAccount_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` other: Attica__RemoteAccount `
    ///
    pub fn operatorAssign(self: Attica__RemoteAccount, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__RemoteAccount;
        qtc.Attica__RemoteAccount_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__RemoteAccount, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__RemoteAccount_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn setType(self: Attica__RemoteAccount, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__RemoteAccount_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn type0(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.type0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRemoteServiceId` instead
    ///
    pub const SetRemoteServiceId = setRemoteServiceId;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setRemoteServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` _remoteServiceId: []const u8 `
    ///
    pub fn setRemoteServiceId(self: Attica__RemoteAccount, _remoteServiceId: []const u8) void {
        const remoteServiceId_str = qtc.libqt_string{
            .len = _remoteServiceId.len,
            .data = _remoteServiceId.ptr,
        };
        qtc.Attica__RemoteAccount_SetRemoteServiceId(@ptrCast(self.ptr), remoteServiceId_str);
    }

    /// ### DEPRECATED: Use `remoteServiceId` instead
    ///
    pub const RemoteServiceId = remoteServiceId;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#remoteServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn remoteServiceId(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_RemoteServiceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.remoteServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` _data: []const u8 `
    ///
    pub fn setData(self: Attica__RemoteAccount, _data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.Attica__RemoteAccount_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLogin` instead
    ///
    pub const SetLogin = setLogin;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setLogin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` _login: []const u8 `
    ///
    pub fn setLogin(self: Attica__RemoteAccount, _login: []const u8) void {
        const login_str = qtc.libqt_string{
            .len = _login.len,
            .data = _login.ptr,
        };
        qtc.Attica__RemoteAccount_SetLogin(@ptrCast(self.ptr), login_str);
    }

    /// ### DEPRECATED: Use `login` instead
    ///
    pub const Login = login;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#login)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn login(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Login(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.login: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: Attica__RemoteAccount, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.Attica__RemoteAccount_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__RemoteAccount.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    pub fn isValid(self: Attica__RemoteAccount) bool {
        return qtc.Attica__RemoteAccount_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    pub fn delete(self: Attica__RemoteAccount) void {
        qtc.Attica__RemoteAccount_Delete(@ptrCast(self.ptr));
    }
};
