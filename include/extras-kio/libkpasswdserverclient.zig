const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html)
pub const kpasswdserverclient = struct {
    /// New constructs a new KPasswdServerClient object.
    ///
    pub fn New() QtC.KPasswdServerClient {
        return qtc.KPasswdServerClient_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#checkAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPasswdServerClient `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    /// ` windowId: isize `
    ///
    /// ` usertime: isize `
    ///
    pub fn CheckAuthInfo(self: ?*anyopaque, info: ?*anyopaque, windowId: isize, usertime: isize) bool {
        return qtc.KPasswdServerClient_CheckAuthInfo(@ptrCast(self), @ptrCast(info), @bitCast(windowId), @bitCast(usertime));
    }

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#queryAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPasswdServerClient `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    /// ` errorMsg: []const u8 `
    ///
    /// ` windowId: isize `
    ///
    /// ` usertime: isize `
    ///
    pub fn QueryAuthInfo(self: ?*anyopaque, info: ?*anyopaque, errorMsg: []const u8, windowId: isize, usertime: isize) i32 {
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KPasswdServerClient_QueryAuthInfo(@ptrCast(self), @ptrCast(info), errorMsg_str, @bitCast(windowId), @bitCast(usertime));
    }

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#addAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPasswdServerClient `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    /// ` windowId: isize `
    ///
    pub fn AddAuthInfo(self: ?*anyopaque, info: ?*anyopaque, windowId: isize) void {
        qtc.KPasswdServerClient_AddAuthInfo(@ptrCast(self), @ptrCast(info), @bitCast(windowId));
    }

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#removeAuthInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KPasswdServerClient `
    ///
    /// ` host: []const u8 `
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` user: []const u8 `
    ///
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpasswdserverclient.html#dtor.KPasswdServerClient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KPasswdServerClient `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KPasswdServerClient_Delete(@ptrCast(self));
    }
};
