const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica.html
pub const attica = struct {
    /// [Qt documentation](https://api.kde.org/attica.html#versionMajor)
    ///
    ///
    pub fn VersionMajor() u32 {
        return qtc.Attica_VersionMajor();
    }

    /// [Qt documentation](https://api.kde.org/attica.html#versionMinor)
    ///
    ///
    pub fn VersionMinor() u32 {
        return qtc.Attica_VersionMinor();
    }

    /// [Qt documentation](https://api.kde.org/attica.html#versionRelease)
    ///
    ///
    pub fn VersionRelease() u32 {
        return qtc.Attica_VersionRelease();
    }

    /// [Qt documentation](https://api.kde.org/attica.html#versionString)
    ///
    ///
    pub fn VersionString() []const u8 {
        const _ret = qtc.Attica_VersionString();
        return std.mem.span(_ret);
    }
};
