const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktimezone.html)
pub const ktimezone = struct {
    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#fromLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: f32 `
    ///
    /// ` param2: f32 `
    ///
    pub fn FromLocation(param1: f32, param2: f32) [:0]const u8 {
        const _ret = qtc.KTimeZone_FromLocation(@bitCast(param1), @bitCast(param2));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/ktimezone.html#country)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Country(param1: [:0]const u8) QtC.KCountry {
        const param1_Cstring = param1.ptr;
        return qtc.KTimeZone_Country(param1_Cstring);
    }
};
