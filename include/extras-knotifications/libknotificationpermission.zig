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
};
