const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kpassword_enums = enums;
const std = @import("std");

/// https://api.kde.org/kpassword.html
pub const kpassword = struct {
    /// [Qt documentation](https://api.kde.org/kpassword.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: kpassword_enums.RevealMode ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.KPassword_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kpassword.html#qt_getEnumName)
    ///
    /// ``` param1: kpassword_enums.RevealMode ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.KPassword_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://api.kde.org/kpassword.html#types
pub const enums = struct {
    pub const RevealMode = enum {
        pub const OnlyNew: i32 = 0;
        pub const Never: i32 = 1;
        pub const Always: i32 = 2;
    };
};
