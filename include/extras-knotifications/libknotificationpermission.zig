const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/knotificationpermission.html)
pub const KNotificationPermission = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knotificationpermission.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNotificationPermission,

    pub const _is_KNotificationPermission = {};

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
    /// ` context: QObject `
    ///
    /// ` callback: *const fn (funcparam1: qnamespace_enums.PermissionStatus) callconv(.c) void `
    ///
    pub fn RequestPermission(context: anytype, callback: *const fn (i32) callconv(.c) void) void {
        comptime _ = @TypeOf(context)._is_QObject;
        qtc.KNotificationPermission_RequestPermission(@ptrCast(context.ptr), @bitCast(@intFromPtr(callback)));
    }
};
