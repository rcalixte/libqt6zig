const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcoreaddons.html)
pub const KCoreAddons = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreaddons.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCoreAddons,

    pub const _is_KCoreAddons = {};

    /// ### DEPRECATED: Use `versionString` instead
    ///
    pub const VersionString = versionString;

    /// ### [Upstream resources](https://api.kde.org/kcoreaddons.html#versionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn versionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreAddons_VersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCoreAddons.versionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/kcoreaddons.html#version)
    ///
    pub fn version() u32 {
        return qtc.KCoreAddons_Version();
    }
};
