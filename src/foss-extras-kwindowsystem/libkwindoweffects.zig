const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRegion = @import("libqt6").QRegion;
const QWindow = @import("libqt6").QWindow;
const kwindoweffects_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kwindoweffects.html)
pub const KWindowEffects = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWindowEffects,

    pub const _is_KWindowEffects = {};

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#isEffectAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kwindoweffects_enums.Effect `
    ///
    pub fn IsEffectAvailable(param1: i32) bool {
        return qtc.KWindowEffects_IsEffectAvailable(@bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBlurBehind)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: bool `
    ///
    /// ` param3: QRegion `
    ///
    pub fn EnableBlurBehind(param1: anytype, param2: bool, param3: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param3)._is_QRegion;
        qtc.KWindowEffects_EnableBlurBehind(@ptrCast(param1.ptr), param2, @ptrCast(param3.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBackgroundContrast)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: bool `
    ///
    /// ` param3: f64 `
    ///
    /// ` param4: f64 `
    ///
    /// ` param5: f64 `
    ///
    /// ` param6: QRegion `
    ///
    pub fn EnableBackgroundContrast(param1: anytype, param2: bool, param3: f64, param4: f64, param5: f64, param6: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        comptime _ = @TypeOf(param6)._is_QRegion;
        qtc.KWindowEffects_EnableBackgroundContrast(@ptrCast(param1.ptr), param2, @bitCast(param3), @bitCast(param4), @bitCast(param5), @ptrCast(param6.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#slideWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWindow `
    ///
    /// ` param2: kwindoweffects_enums.SlideFromLocation `
    ///
    /// ` param3: i32 `
    ///
    pub fn SlideWindow(param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_QWindow;
        qtc.KWindowEffects_SlideWindow(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }
};

/// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#public-types)
pub const enums = struct {
    pub const Effect = enum(i32) {
        pub const Slide: i32 = 1;
        pub const BlurBehind: i32 = 7;
        pub const BackgroundContrast: i32 = 9;
    };

    pub const SlideFromLocation = enum(i32) {
        pub const NoEdge: i32 = 0;
        pub const TopEdge: i32 = 1;
        pub const RightEdge: i32 = 2;
        pub const BottomEdge: i32 = 3;
        pub const LeftEdge: i32 = 4;
    };
};
