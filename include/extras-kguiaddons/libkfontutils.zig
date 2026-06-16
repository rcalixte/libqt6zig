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
    /// ` painter: QPainter `
    ///
    /// ` text: []const u8 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    /// ` maxFontSize: f64 `
    ///
    /// ` minFontSize: f64 `
    ///
    /// ` flags: flag of kfontutils_enums.AdaptFontSizeOption `
    ///
    pub fn AdaptFontSize(painter: anytype, text: []const u8, width: f64, height: f64, maxFontSize: f64, minFontSize: f64, flags: i32) f64 {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KFontUtils_AdaptFontSize(@ptrCast(painter.ptr), text_str, @bitCast(width), @bitCast(height), @bitCast(maxFontSize), @bitCast(minFontSize), @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` painter: QPainter `
    ///
    /// ` text: []const u8 `
    ///
    /// ` availableSize: QSizeF `
    ///
    /// ` maxFontSize: f64 `
    ///
    /// ` minFontSize: f64 `
    ///
    /// ` flags: flag of kfontutils_enums.AdaptFontSizeOption `
    ///
    pub fn AdaptFontSize2(painter: anytype, text: []const u8, availableSize: anytype, maxFontSize: f64, minFontSize: f64, flags: i32) f64 {
        comptime _ = @TypeOf(painter)._is_QPainter;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(availableSize)._is_QSizeF;
        return qtc.KFontUtils_AdaptFontSize2(@ptrCast(painter.ptr), text_str, @ptrCast(availableSize.ptr), @bitCast(maxFontSize), @bitCast(minFontSize), @bitCast(flags));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfontutils.html#public-types)
pub const enums = struct {
    pub const AdaptFontSizeOption = enum(i32) {
        pub const NoFlags: i32 = 1;
        pub const DoNotAllowWordWrap: i32 = 2;
    };
};
