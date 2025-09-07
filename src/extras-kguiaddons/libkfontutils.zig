const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfontutils_enums = enums;

/// https://api.kde.org/kfontutils.html
pub const kfontutils = struct {
    /// [Qt documentation](https://api.kde.org/kfontutils.html#adaptFontSize)
    ///
    /// ``` param1: QtC.QPainter, param2: []const u8, param3: f64, param4: f64, param5: f64, param6: f64, param7: flag of kfontutils_enums.AdaptFontSizeOption ```
    pub fn AdaptFontSize(param1: ?*anyopaque, param2: []const u8, param3: f64, param4: f64, param5: f64, param6: f64, param7: i32) f64 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KFontUtils_AdaptFontSize(@ptrCast(param1), param2_str, @floatCast(param3), @floatCast(param4), @floatCast(param5), @floatCast(param6), @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kfontutils.html#adaptFontSize)
    ///
    /// ``` param1: QtC.QPainter, param2: []const u8, param3: QtC.QSizeF, param4: f64, param5: f64, param6: flag of kfontutils_enums.AdaptFontSizeOption ```
    pub fn AdaptFontSize2(param1: ?*anyopaque, param2: []const u8, param3: ?*anyopaque, param4: f64, param5: f64, param6: i32) f64 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KFontUtils_AdaptFontSize2(@ptrCast(param1), param2_str, @ptrCast(param3), @floatCast(param4), @floatCast(param5), @intCast(param6));
    }
};

/// https://api.kde.org/kfontutils.html#types
pub const enums = struct {
    pub const AdaptFontSizeOption = enum {
        pub const NoFlags: i32 = 1;
        pub const DoNotAllowWordWrap: i32 = 2;
    };
};
