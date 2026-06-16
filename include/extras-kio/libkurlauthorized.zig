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
    pub fn AuthorizeUrlAction(action: []const u8, baseUrl: anytype, destUrl: anytype) bool {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        comptime _ = @TypeOf(destUrl)._is_QUrl;
        return qtc.KUrlAuthorized_AuthorizeUrlAction(action_str, @ptrCast(baseUrl.ptr), @ptrCast(destUrl.ptr));
    }

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
    pub fn AllowUrlAction(action: []const u8, baseUrl: anytype, destUrl: anytype) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        comptime _ = @TypeOf(destUrl)._is_QUrl;
        qtc.KUrlAuthorized_AllowUrlAction(action_str, @ptrCast(baseUrl.ptr), @ptrCast(destUrl.ptr));
    }
};
