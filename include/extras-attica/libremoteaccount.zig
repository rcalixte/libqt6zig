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

    /// New constructs a new Attica::RemoteAccount object.
    ///
    pub fn New() Attica__RemoteAccount {
        return .{ .ptr = qtc.Attica__RemoteAccount_new() };
    }

    /// New2 constructs a new Attica::RemoteAccount object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__RemoteAccount `
    ///
    pub fn New2(other: anytype) Attica__RemoteAccount {
        comptime _ = @TypeOf(other)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__RemoteAccount_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` other: Attica__RemoteAccount `
    ///
    pub fn OperatorAssign(self: Attica__RemoteAccount, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__RemoteAccount;
        qtc.Attica__RemoteAccount_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__RemoteAccount, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__RemoteAccount_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` typeVal: []const u8 `
    ///
    pub fn SetType(self: Attica__RemoteAccount, typeVal: []const u8) void {
        const typeVal_str = qtc.libqt_string{
            .len = typeVal.len,
            .data = typeVal.ptr,
        };
        qtc.Attica__RemoteAccount_SetType(@ptrCast(self.ptr), typeVal_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Type(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Type(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.Type: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setRemoteServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` remoteServiceId: []const u8 `
    ///
    pub fn SetRemoteServiceId(self: Attica__RemoteAccount, remoteServiceId: []const u8) void {
        const remoteServiceId_str = qtc.libqt_string{
            .len = remoteServiceId.len,
            .data = remoteServiceId.ptr,
        };
        qtc.Attica__RemoteAccount_SetRemoteServiceId(@ptrCast(self.ptr), remoteServiceId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#remoteServiceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RemoteServiceId(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_RemoteServiceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.RemoteServiceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetData(self: Attica__RemoteAccount, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.Attica__RemoteAccount_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.Data: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setLogin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` login: []const u8 `
    ///
    pub fn SetLogin(self: Attica__RemoteAccount, login: []const u8) void {
        const login_str = qtc.libqt_string{
            .len = login.len,
            .data = login.ptr,
        };
        qtc.Attica__RemoteAccount_SetLogin(@ptrCast(self.ptr), login_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#login)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Login(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Login(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.Login: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: Attica__RemoteAccount, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Attica__RemoteAccount_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: Attica__RemoteAccount, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__RemoteAccount_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__remoteaccount.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-remoteaccount.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    pub fn IsValid(self: Attica__RemoteAccount) bool {
        return qtc.Attica__RemoteAccount_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__RemoteAccount `
    ///
    pub fn Delete(self: Attica__RemoteAccount) void {
        qtc.Attica__RemoteAccount_Delete(@ptrCast(self.ptr));
    }
};
