const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kiconeffect.html)
pub const kiconeffect = struct {
    /// New constructs a new KIconEffect object.
    ///
    pub fn New() QtC.KIconEffect {
        return qtc.KIconEffect_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    pub fn Init(self: ?*anyopaque) void {
        qtc.KIconEffect_Init(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#hasEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn HasEffect(self: ?*anyopaque, group: i32, state: i32) bool {
        return qtc.KIconEffect_HasEffect(@ptrCast(self), @intCast(group), @intCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#fingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Fingerprint(self: ?*anyopaque, group: i32, state: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconEffect_Fingerprint(@ptrCast(self), @intCast(group), @intCast(state));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconeffect.Fingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QImage `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn Apply(self: ?*anyopaque, src: ?*anyopaque, group: i32, state: i32) QtC.QImage {
        return qtc.KIconEffect_Apply(@ptrCast(self), @ptrCast(src), @intCast(group), @intCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QImage `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QtC.QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply2(self: ?*anyopaque, src: ?*anyopaque, effect: i32, value: f32, rgb: ?*anyopaque, trans: bool) QtC.QImage {
        return qtc.KIconEffect_Apply2(@ptrCast(self), @ptrCast(src), @intCast(effect), @floatCast(value), @ptrCast(rgb), trans);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QImage `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QtC.QColor `
    ///
    /// ` rgb2: QtC.QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply3(self: ?*anyopaque, src: ?*anyopaque, effect: i32, value: f32, rgb: ?*anyopaque, rgb2: ?*anyopaque, trans: bool) QtC.QImage {
        return qtc.KIconEffect_Apply3(@ptrCast(self), @ptrCast(src), @intCast(effect), @floatCast(value), @ptrCast(rgb), @ptrCast(rgb2), trans);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QPixmap `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn Apply4(self: ?*anyopaque, src: ?*anyopaque, group: i32, state: i32) QtC.QPixmap {
        return qtc.KIconEffect_Apply4(@ptrCast(self), @ptrCast(src), @intCast(group), @intCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QPixmap `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QtC.QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply5(self: ?*anyopaque, src: ?*anyopaque, effect: i32, value: f32, rgb: ?*anyopaque, trans: bool) QtC.QPixmap {
        return qtc.KIconEffect_Apply5(@ptrCast(self), @ptrCast(src), @intCast(effect), @floatCast(value), @ptrCast(rgb), trans);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QPixmap `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QtC.QColor `
    ///
    /// ` rgb2: QtC.QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply6(self: ?*anyopaque, src: ?*anyopaque, effect: i32, value: f32, rgb: ?*anyopaque, rgb2: ?*anyopaque, trans: bool) QtC.QPixmap {
        return qtc.KIconEffect_Apply6(@ptrCast(self), @ptrCast(src), @intCast(effect), @floatCast(value), @ptrCast(rgb), @ptrCast(rgb2), trans);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#doublePixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEffect `
    ///
    /// ` src: QtC.QImage `
    ///
    pub fn DoublePixels(self: ?*anyopaque, src: ?*anyopaque) QtC.QImage {
        return qtc.KIconEffect_DoublePixels(@ptrCast(self), @ptrCast(src));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn ToGray(image: ?*anyopaque, value: f32) void {
        qtc.KIconEffect_ToGray(@ptrCast(image), @floatCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#colorize)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` col: QtC.QColor `
    ///
    /// ` value: f32 `
    ///
    pub fn Colorize(image: ?*anyopaque, col: ?*anyopaque, value: f32) void {
        qtc.KIconEffect_Colorize(@ptrCast(image), @ptrCast(col), @floatCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toMonochrome)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` black: QtC.QColor `
    ///
    /// ` white: QtC.QColor `
    ///
    /// ` value: f32 `
    ///
    pub fn ToMonochrome(image: ?*anyopaque, black: ?*anyopaque, white: ?*anyopaque, value: f32) void {
        qtc.KIconEffect_ToMonochrome(@ptrCast(image), @ptrCast(black), @ptrCast(white), @floatCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#deSaturate)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn DeSaturate(image: ?*anyopaque, value: f32) void {
        qtc.KIconEffect_DeSaturate(@ptrCast(image), @floatCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toGamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn ToGamma(image: ?*anyopaque, value: f32) void {
        qtc.KIconEffect_ToGamma(@ptrCast(image), @floatCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn SemiTransparent(image: ?*anyopaque) void {
        qtc.KIconEffect_SemiTransparent(@ptrCast(image));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SemiTransparent2(pixmap: ?*anyopaque) void {
        qtc.KIconEffect_SemiTransparent2(@ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#overlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` src: QtC.QImage `
    ///
    /// ` overlay: QtC.QImage `
    ///
    pub fn Overlay(src: ?*anyopaque, overlay: ?*anyopaque) void {
        qtc.KIconEffect_Overlay(@ptrCast(src), @ptrCast(overlay));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn ToDisabled(image: ?*anyopaque) void {
        qtc.KIconEffect_ToDisabled(@ptrCast(image));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn ToDisabled2(pixmap: ?*anyopaque) void {
        qtc.KIconEffect_ToDisabled2(@ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn ToActive(image: ?*anyopaque) void {
        qtc.KIconEffect_ToActive(@ptrCast(image));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn ToActive2(pixmap: ?*anyopaque) void {
        qtc.KIconEffect_ToActive2(@ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#dtor.KIconEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KIconEffect `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIconEffect_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kiconeffect.html#public-types)
pub const enums = struct {
    pub const Effects = enum {
        pub const NoEffect: i32 = 0;
        pub const ToGray: i32 = 1;
        pub const Colorize: i32 = 2;
        pub const ToGamma: i32 = 3;
        pub const DeSaturate: i32 = 4;
        pub const ToMonochrome: i32 = 5;
        pub const LastEffect: i32 = 6;
    };
};
