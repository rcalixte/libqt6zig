const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/ktimezone.html
pub const ktimezone = struct {
    /// [Qt documentation](https://api.kde.org/ktimezone.html#fromLocation)
    ///
    /// ``` param1: f32, param2: f32 ```
    pub fn FromLocation(param1: f32, param2: f32) []const u8 {
        const _ret = qtc.KTimeZone_FromLocation(@floatCast(param1), @floatCast(param2));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/ktimezone.html#country)
    ///
    /// ``` param1: []const u8 ```
    pub fn Country(param1: []const u8) QtC.KCountry {
        const param1_Cstring = param1.ptr;
        return qtc.KTimeZone_Country(param1_Cstring);
    }
};
