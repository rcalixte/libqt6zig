const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
pub const poppler__version = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn String(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Version_String();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__version.String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
    ///
    pub fn Major() u32 {
        return qtc.Poppler__Version_Major();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
    ///
    pub fn Minor() u32 {
        return qtc.Poppler__Version_Minor();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
    ///
    pub fn Micro() u32 {
        return qtc.Poppler__Version_Micro();
    }
};
