const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// https://api.kde.org/knotificationpermission.html
pub const knotificationpermission = struct {
    /// [Qt documentation](https://api.kde.org/knotificationpermission.html#checkPermission)
    ///
    ///
    ///
    /// Returns: ``` qnamespace_enums.PermissionStatus ```
    pub fn CheckPermission() i32 {
        return qtc.KNotificationPermission_CheckPermission();
    }
};
