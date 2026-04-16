const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica.html)
pub const Attica = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica,

    pub const _is_Attica = {};

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionMajor)
    ///
    pub fn VersionMajor() u32 {
        return qtc.Attica_VersionMajor();
    }

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionMinor)
    ///
    pub fn VersionMinor() u32 {
        return qtc.Attica_VersionMinor();
    }

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionRelease)
    ///
    pub fn VersionRelease() u32 {
        return qtc.Attica_VersionRelease();
    }

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionString)
    ///
    pub fn VersionString() [:0]const u8 {
        const _ret = qtc.Attica_VersionString();
        return std.mem.span(_ret);
    }
};
