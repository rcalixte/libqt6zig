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
    /// ` effect: kwindoweffects_enums.Effect `
    ///
    pub fn IsEffectAvailable(effect: i32) bool {
        return qtc.KWindowEffects_IsEffectAvailable(@bitCast(effect));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBlurBehind)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` enable: bool `
    ///
    /// ` region: QRegion `
    ///
    pub fn EnableBlurBehind(window: anytype, enable: bool, region: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KWindowEffects_EnableBlurBehind(@ptrCast(window.ptr), enable, @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBackgroundContrast)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` enable: bool `
    ///
    /// ` contrast: f64 `
    ///
    /// ` intensity: f64 `
    ///
    /// ` saturation: f64 `
    ///
    /// ` region: QRegion `
    ///
    pub fn EnableBackgroundContrast(window: anytype, enable: bool, contrast: f64, intensity: f64, saturation: f64, region: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.KWindowEffects_EnableBackgroundContrast(@ptrCast(window.ptr), enable, @bitCast(contrast), @bitCast(intensity), @bitCast(saturation), @ptrCast(region.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwindoweffects.html#slideWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` location: kwindoweffects_enums.SlideFromLocation `
    ///
    /// ` offset: i32 `
    ///
    pub fn SlideWindow(window: anytype, location: i32, offset: i32) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KWindowEffects_SlideWindow(@ptrCast(window.ptr), @bitCast(location), @bitCast(offset));
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
