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

    /// ### DEPRECATED: Use `versionMajor` instead
    ///
    pub const VersionMajor = versionMajor;

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionMajor)
    ///
    pub fn versionMajor() u32 {
        return qtc.Attica_VersionMajor();
    }

    /// ### DEPRECATED: Use `versionMinor` instead
    ///
    pub const VersionMinor = versionMinor;

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionMinor)
    ///
    pub fn versionMinor() u32 {
        return qtc.Attica_VersionMinor();
    }

    /// ### DEPRECATED: Use `versionRelease` instead
    ///
    pub const VersionRelease = versionRelease;

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionRelease)
    ///
    pub fn versionRelease() u32 {
        return qtc.Attica_VersionRelease();
    }

    /// ### DEPRECATED: Use `versionString` instead
    ///
    pub const VersionString = versionString;

    /// ### [Upstream resources](https://api.kde.org/attica.html#versionString)
    ///
    pub fn versionString() [:0]const u8 {
        const _ret = qtc.Attica_VersionString();
        return std.mem.span(_ret);
    }
};
