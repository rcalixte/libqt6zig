const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIO__AuthInfo = @import("libqt6").KIO__AuthInfo;

/// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html)
pub const KPasswdServerClient = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPasswdServerClient,

    pub const _is_KPasswdServerClient = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPasswdServerClient object in C++ memory
    ///
    pub fn new() KPasswdServerClient {
        return .{ .ptr = qtc.KPasswdServerClient_new() };
    }

    /// ### DEPRECATED: Use `checkAuthInfo` instead
    ///
    pub const CheckAuthInfo = checkAuthInfo;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#checkAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPasswdServerClient `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    /// ` windowId: isize `
    ///
    /// ` usertime: isize `
    ///
    pub fn checkAuthInfo(self: KPasswdServerClient, info: anytype, windowId: isize, usertime: isize) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KPasswdServerClient_CheckAuthInfo(@ptrCast(self.ptr), @ptrCast(info.ptr), @bitCast(windowId), @bitCast(usertime));
    }

    /// ### DEPRECATED: Use `queryAuthInfo` instead
    ///
    pub const QueryAuthInfo = queryAuthInfo;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#queryAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPasswdServerClient `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    /// ` errorMsg: []const u8 `
    ///
    /// ` windowId: isize `
    ///
    /// ` usertime: isize `
    ///
    pub fn queryAuthInfo(self: KPasswdServerClient, info: anytype, errorMsg: []const u8, windowId: isize, usertime: isize) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KPasswdServerClient_QueryAuthInfo(@ptrCast(self.ptr), @ptrCast(info.ptr), errorMsg_str, @bitCast(windowId), @bitCast(usertime));
    }

    /// ### DEPRECATED: Use `addAuthInfo` instead
    ///
    pub const AddAuthInfo = addAuthInfo;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#addAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPasswdServerClient `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    /// ` windowId: isize `
    ///
    pub fn addAuthInfo(self: KPasswdServerClient, info: anytype, windowId: isize) void {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        qtc.KPasswdServerClient_AddAuthInfo(@ptrCast(self.ptr), @ptrCast(info.ptr), @bitCast(windowId));
    }

    /// ### DEPRECATED: Use `removeAuthInfo` instead
    ///
    pub const RemoveAuthInfo = removeAuthInfo;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#removeAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPasswdServerClient `
    ///
    /// ` host: []const u8 `
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn removeAuthInfo(self: KPasswdServerClient, host: []const u8, protocol: []const u8, user: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.KPasswdServerClient_RemoveAuthInfo(@ptrCast(self.ptr), host_str, protocol_str, user_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#dtor.KPasswdServerClient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPasswdServerClient `
    ///
    pub fn delete(self: KPasswdServerClient) void {
        qtc.KPasswdServerClient_Delete(@ptrCast(self.ptr));
    }
};
