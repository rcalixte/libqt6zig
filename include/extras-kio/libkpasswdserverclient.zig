const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kpasswdserverclient.html
pub const kpasswdserverclient = struct {
    /// New constructs a new KPasswdServerClient object.
    ///
    ///
    pub fn New() QtC.KPasswdServerClient {
        return qtc.KPasswdServerClient_new();
    }

    /// [Qt documentation](https://api.kde.org/kpasswdserverclient.html#checkAuthInfo)
    ///
    /// ``` self: QtC.KPasswdServerClient, info: QtC.KIO__AuthInfo, windowId: i64, usertime: i64 ```
    pub fn CheckAuthInfo(self: ?*anyopaque, info: ?*anyopaque, windowId: i64, usertime: i64) bool {
        return qtc.KPasswdServerClient_CheckAuthInfo(@ptrCast(self), @ptrCast(info), @intCast(windowId), @intCast(usertime));
    }

    /// [Qt documentation](https://api.kde.org/kpasswdserverclient.html#queryAuthInfo)
    ///
    /// ``` self: QtC.KPasswdServerClient, info: QtC.KIO__AuthInfo, errorMsg: []const u8, windowId: i64, usertime: i64 ```
    pub fn QueryAuthInfo(self: ?*anyopaque, info: ?*anyopaque, errorMsg: []const u8, windowId: i64, usertime: i64) i32 {
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KPasswdServerClient_QueryAuthInfo(@ptrCast(self), @ptrCast(info), errorMsg_str, @intCast(windowId), @intCast(usertime));
    }

    /// [Qt documentation](https://api.kde.org/kpasswdserverclient.html#addAuthInfo)
    ///
    /// ``` self: QtC.KPasswdServerClient, info: QtC.KIO__AuthInfo, windowId: i64 ```
    pub fn AddAuthInfo(self: ?*anyopaque, info: ?*anyopaque, windowId: i64) void {
        qtc.KPasswdServerClient_AddAuthInfo(@ptrCast(self), @ptrCast(info), @intCast(windowId));
    }

    /// [Qt documentation](https://api.kde.org/kpasswdserverclient.html#removeAuthInfo)
    ///
    /// ``` self: QtC.KPasswdServerClient, host: []const u8, protocol: []const u8, user: []const u8 ```
    pub fn RemoveAuthInfo(self: ?*anyopaque, host: []const u8, protocol: []const u8, user: []const u8) void {
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
        qtc.KPasswdServerClient_RemoveAuthInfo(@ptrCast(self), host_str, protocol_str, user_str);
    }

    /// [Qt documentation](https://api.kde.org/kpasswdserverclient.html#dtor.KPasswdServerClient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPasswdServerClient ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPasswdServerClient_Delete(@ptrCast(self));
    }
};
