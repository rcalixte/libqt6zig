const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcoreaddons.html)
pub const kcoreaddons = struct {
    /// ### [Upstream resources](https://api.kde.org/kcoreaddons.html#versionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VersionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreAddons_VersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcoreaddons.VersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcoreaddons.html#version)
    ///
    pub fn Version() u32 {
        return qtc.KCoreAddons_Version();
    }
};
