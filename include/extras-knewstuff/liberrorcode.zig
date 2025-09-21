const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const errorcode_enums = enums;
const std = @import("std");

/// https://api.kde.org/knscore-errorcode.html
pub const knscore__errorcode = struct {
    /// [Qt documentation](https://api.kde.org/knscore-errorcode.html#qt_getEnumMetaObject)
    ///
    /// ``` param1: errorcode_enums.ErrorCode ```
    pub fn GetEnumMetaObject(param1: i32) QtC.QMetaObject {
        return qtc.KNSCore__ErrorCode_GetEnumMetaObject(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/knscore-errorcode.html#qt_getEnumName)
    ///
    /// ``` param1: errorcode_enums.ErrorCode ```
    pub fn GetEnumName(param1: i32) []const u8 {
        const _ret = qtc.KNSCore__ErrorCode_GetEnumName(@intCast(param1));
        return std.mem.span(_ret);
    }
};

/// https://api.kde.org/knscore-errorcode.html#types
pub const enums = struct {
    pub const ErrorCode = enum {
        pub const UnknownError: i32 = 0;
        pub const NetworkError: i32 = 1;
        pub const OcsError: i32 = 2;
        pub const ConfigFileError: i32 = 3;
        pub const ProviderError: i32 = 4;
        pub const InstallationError: i32 = 5;
        pub const ImageError: i32 = 6;
        pub const AdoptionError: i32 = 7;
        pub const TryAgainLaterError: i32 = 8;
    };
};
