const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;

/// ### [Upstream resources](https://api.kde.org/kurlauthorized.html)
pub const KUrlAuthorized = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurlauthorized.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUrlAuthorized,

    pub const _is_KUrlAuthorized = {};

    /// ### DEPRECATED: Use `authorizeUrlAction` instead
    ///
    pub const AuthorizeUrlAction = authorizeUrlAction;

    /// ### [Upstream resources](https://api.kde.org/kurlauthorized.html#authorizeUrlAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: []const u8 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` destUrl: QUrl `
    ///
    pub fn authorizeUrlAction(action: []const u8, baseUrl: anytype, destUrl: anytype) bool {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        comptime _ = @TypeOf(destUrl)._is_QUrl;
        return qtc.KUrlAuthorized_AuthorizeUrlAction(action_str, @ptrCast(baseUrl.ptr), @ptrCast(destUrl.ptr));
    }

    /// ### DEPRECATED: Use `allowUrlAction` instead
    ///
    pub const AllowUrlAction = allowUrlAction;

    /// ### [Upstream resources](https://api.kde.org/kurlauthorized.html#allowUrlAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: []const u8 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` destUrl: QUrl `
    ///
    pub fn allowUrlAction(action: []const u8, baseUrl: anytype, destUrl: anytype) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        comptime _ = @TypeOf(destUrl)._is_QUrl;
        qtc.KUrlAuthorized_AllowUrlAction(action_str, @ptrCast(baseUrl.ptr), @ptrCast(destUrl.ptr));
    }
};
