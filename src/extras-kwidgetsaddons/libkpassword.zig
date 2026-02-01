const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kpassword_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kpassword.html)
pub const kpassword = struct {
    /// ### [Upstream resources](https://api.kde.org/kpassword.html#qt_getEnumMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kpassword_enums.RevealMode `
    ///
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.KPassword_GetEnumMetaObject(@intCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kpassword.html#qt_getEnumName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kpassword_enums.RevealMode `
    ///
    pub fn GetEnumName(param1: i32) [:0]const u8 {
        const _ret = qtc.KPassword_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// ### [Upstream resources](https://api.kde.org/kpassword.html#public-types)
pub const enums = struct {
    pub const RevealMode = enum(i32) {
        pub const OnlyNew: i32 = 0;
        pub const Never: i32 = 1;
        pub const Always: i32 = 2;
    };
};
