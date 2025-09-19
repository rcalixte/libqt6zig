const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-remoteaccount.html
pub const attica__remoteaccount = struct {
    /// New constructs a new Attica::RemoteAccount object.
    ///
    ///
    pub fn New() QtC.Attica__RemoteAccount {
        return qtc.Attica__RemoteAccount_new();
    }

    /// New2 constructs a new Attica::RemoteAccount object.
    ///
    /// ``` other: QtC.Attica__RemoteAccount ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__RemoteAccount {
        return qtc.Attica__RemoteAccount_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, other: QtC.Attica__RemoteAccount ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__RemoteAccount_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setId)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__RemoteAccount_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#id)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setType)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, typeVal: []const u8 ```
    pub fn SetType(self: ?*anyopaque, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__RemoteAccount_SetType(@ptrCast(self), typeVal_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#type)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn Type(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_Type(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setRemoteServiceId)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, remoteServiceId: []const u8 ```
    pub fn SetRemoteServiceId(self: ?*anyopaque, remoteServiceId: []const u8) void {
        const remoteServiceId_str = qtc.libqt_string{
            .len = remoteServiceId.len,
            .data = remoteServiceId.ptr,
        };
        qtc.Attica__RemoteAccount_SetRemoteServiceId(@ptrCast(self), remoteServiceId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#remoteServiceId)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn RemoteServiceId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_RemoteServiceId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.RemoteServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setData)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, data: []const u8 ```
    pub fn SetData(self: ?*anyopaque, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.Attica__RemoteAccount_SetData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#data)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setLogin)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, login: []const u8 ```
    pub fn SetLogin(self: ?*anyopaque, login: []const u8) void {
        const login_str = qtc.libqt_string{
            .len = login.len,
            .data = login.ptr,
        };
        qtc.Attica__RemoteAccount_SetLogin(@ptrCast(self), login_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#login)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn Login(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_Login(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.Login: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setPassword)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Attica__RemoteAccount_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#password)
    ///
    /// ``` self: QtC.Attica__RemoteAccount, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__RemoteAccount_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::remoteaccount.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#isValid)
    ///
    /// ``` self: QtC.Attica__RemoteAccount ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__RemoteAccount_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__RemoteAccount ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__RemoteAccount_Delete(@ptrCast(self));
    }
};
