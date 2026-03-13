const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/knotificationpermission.html)
pub const knotificationpermission = struct {
    /// ### [Upstream resources](https://api.kde.org/knotificationpermission.html#checkPermission)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn CheckPermission() i32 {
        return qtc.KNotificationPermission_CheckPermission();
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationpermission.html#requestPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: *const fn (funcparam1: qnamespace_enums.PermissionStatus) callconv(.c) void `
    ///
    pub fn RequestPermission(param1: ?*anyopaque, param2: *const fn (i32) callconv(.c) void) void {
        qtc.KNotificationPermission_RequestPermission(@ptrCast(param1), @bitCast(@intFromPtr(param2)));
    }
};
