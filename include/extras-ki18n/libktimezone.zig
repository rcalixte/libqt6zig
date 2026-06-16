const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCountry = @import("libqt6").KCountry;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktimezone.html)
pub const KTimeZone = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktimezone.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTimeZone,

    pub const _is_KTimeZone = {};

    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` latitude: f32 `
    ///
    /// ` longitude: f32 `
    ///
    pub fn FromLocation(latitude: f32, longitude: f32) [:0]const u8 {
        const _ret = qtc.KTimeZone_FromLocation(@bitCast(latitude), @bitCast(longitude));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` ianaId: [:0]const u8 `
    ///
    pub fn Country(ianaId: [:0]const u8) KCountry {
        const ianaId_Cstring = ianaId.ptr;
        return .{ .ptr = qtc.KTimeZone_Country(ianaId_Cstring) };
    }
};
