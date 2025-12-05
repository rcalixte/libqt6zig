const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kwindoweffects_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kwindoweffects.html)
pub const kwindoweffects = struct {
    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#isEffectAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kwindoweffects_enums.Effect `
    ///
    pub fn IsEffectAvailable(param1: i32) bool {
        return qtc.KWindowEffects_IsEffectAvailable(@intCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBlurBehind)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: bool `
    ///
    /// ` param3: QtC.QRegion `
    ///
    pub fn EnableBlurBehind(param1: ?*anyopaque, param2: bool, param3: ?*anyopaque) void {
        qtc.KWindowEffects_EnableBlurBehind(@ptrCast(param1), param2, @ptrCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBackgroundContrast)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: bool `
    ///
    /// ` param3: f64 `
    ///
    /// ` param4: f64 `
    ///
    /// ` param5: f64 `
    ///
    /// ` param6: QtC.QRegion `
    ///
    pub fn EnableBackgroundContrast(param1: ?*anyopaque, param2: bool, param3: f64, param4: f64, param5: f64, param6: ?*anyopaque) void {
        qtc.KWindowEffects_EnableBackgroundContrast(@ptrCast(param1), param2, @floatCast(param3), @floatCast(param4), @floatCast(param5), @ptrCast(param6));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#slideWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QWindow `
    ///
    /// ` param2: kwindoweffects_enums.SlideFromLocation `
    ///
    /// ` param3: i32 `
    ///
    pub fn SlideWindow(param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.KWindowEffects_SlideWindow(@ptrCast(param1), @intCast(param2), @intCast(param3));
    }
};

/// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#public-types)
pub const enums = struct {
    pub const Effect = enum {
        pub const Slide: i32 = 1;
        pub const BlurBehind: i32 = 7;
        pub const BackgroundContrast: i32 = 9;
    };

    pub const SlideFromLocation = enum {
        pub const NoEdge: i32 = 0;
        pub const TopEdge: i32 = 1;
        pub const RightEdge: i32 = 2;
        pub const BottomEdge: i32 = 3;
        pub const LeftEdge: i32 = 4;
    };
};
