const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPainter = @import("libqt6").QPainter;
const QSizeF = @import("libqt6").QSizeF;
const kfontutils_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kfontutils.html)
pub const KFontUtils = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfontutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFontUtils,

    pub const _is_KFontUtils = {};

    /// ### [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainter `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: f64 `
    ///
    /// ` param4: f64 `
    ///
    /// ` param5: f64 `
    ///
    /// ` param6: f64 `
    ///
    /// ` param7: flag of kfontutils_enums.AdaptFontSizeOption `
    ///
    pub fn AdaptFontSize(param1: anytype, param2: []const u8, param3: f64, param4: f64, param5: f64, param6: f64, param7: i32) f64 {
        comptime _ = @TypeOf(param1)._is_QPainter;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KFontUtils_AdaptFontSize(@ptrCast(param1.ptr), param2_str, @bitCast(param3), @bitCast(param4), @bitCast(param5), @bitCast(param6), @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPainter `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: QSizeF `
    ///
    /// ` param4: f64 `
    ///
    /// ` param5: f64 `
    ///
    /// ` param6: flag of kfontutils_enums.AdaptFontSizeOption `
    ///
    pub fn AdaptFontSize2(param1: anytype, param2: []const u8, param3: anytype, param4: f64, param5: f64, param6: i32) f64 {
        comptime _ = @TypeOf(param1)._is_QPainter;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        comptime _ = @TypeOf(param3)._is_QSizeF;
        return qtc.KFontUtils_AdaptFontSize2(@ptrCast(param1.ptr), param2_str, @ptrCast(param3.ptr), @bitCast(param4), @bitCast(param5), @bitCast(param6));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfontutils.html#public-types)
pub const enums = struct {
    pub const AdaptFontSizeOption = enum(i32) {
        pub const NoFlags: i32 = 1;
        pub const DoNotAllowWordWrap: i32 = 2;
    };
};
