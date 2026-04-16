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
    /// ` param1: []const u8 `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: QUrl `
    ///
    pub fn AuthorizeUrlAction(param1: []const u8, param2: anytype, param3: anytype) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QUrl;
        comptime _ = @TypeOf(param3)._is_QUrl;
        return qtc.KUrlAuthorized_AuthorizeUrlAction(param1_str, @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlauthorized.html#allowUrlAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: QUrl `
    ///
    pub fn AllowUrlAction(param1: []const u8, param2: anytype, param3: anytype) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QUrl;
        comptime _ = @TypeOf(param3)._is_QUrl;
        qtc.KUrlAuthorized_AllowUrlAction(param1_str, @ptrCast(param2.ptr), @ptrCast(param3.ptr));
    }
};
