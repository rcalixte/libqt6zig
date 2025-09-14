const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kurlauthorized.html
pub const kurlauthorized = struct {
    /// [Qt documentation](https://api.kde.org/kurlauthorized.html#authorizeUrlAction)
    ///
    /// ``` param1: []const u8, param2: QtC.QUrl, param3: QtC.QUrl ```
    pub fn AuthorizeUrlAction(param1: []const u8, param2: ?*anyopaque, param3: ?*anyopaque) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KUrlAuthorized_AuthorizeUrlAction(param1_str, @ptrCast(param2), @ptrCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kurlauthorized.html#allowUrlAction)
    ///
    /// ``` param1: []const u8, param2: QtC.QUrl, param3: QtC.QUrl ```
    pub fn AllowUrlAction(param1: []const u8, param2: ?*anyopaque, param3: ?*anyopaque) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KUrlAuthorized_AllowUrlAction(param1_str, @ptrCast(param2), @ptrCast(param3));
    }
};
