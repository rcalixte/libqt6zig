const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QImage = @import("libqt6").QImage;
const QPixmap = @import("libqt6").QPixmap;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kiconeffect.html)
pub const KIconEffect = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconEffect,

    pub const _is_KIconEffect = {};

    /// New constructs a new KIconEffect object.
    ///
    pub fn New() KIconEffect {
        return .{ .ptr = qtc.KIconEffect_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    pub fn Init(self: KIconEffect) void {
        qtc.KIconEffect_Init(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#hasEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn HasEffect(self: KIconEffect, group: i32, state: i32) bool {
        return qtc.KIconEffect_HasEffect(@ptrCast(self.ptr), @bitCast(group), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#fingerprint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn Fingerprint(self: KIconEffect, allocator: std.mem.Allocator, group: i32, state: i32) []const u8 {
        var _str = qtc.KIconEffect_Fingerprint(@ptrCast(self.ptr), @bitCast(group), @bitCast(state));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconeffect.Fingerprint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QImage `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn Apply(self: KIconEffect, src: anytype, group: i32, state: i32) QImage {
        comptime _ = @TypeOf(src)._is_QImage;
        return .{ .ptr = qtc.KIconEffect_Apply(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(group), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QImage `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply2(self: KIconEffect, src: anytype, effect: i32, value: f32, rgb: anytype, trans: bool) QImage {
        comptime _ = @TypeOf(src)._is_QImage;
        comptime _ = @TypeOf(rgb)._is_QColor;
        return .{ .ptr = qtc.KIconEffect_Apply2(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(effect), @bitCast(value), @ptrCast(rgb.ptr), trans) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QImage `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QColor `
    ///
    /// ` rgb2: QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply3(self: KIconEffect, src: anytype, effect: i32, value: f32, rgb: anytype, rgb2: anytype, trans: bool) QImage {
        comptime _ = @TypeOf(src)._is_QImage;
        comptime _ = @TypeOf(rgb)._is_QColor;
        comptime _ = @TypeOf(rgb2)._is_QColor;
        return .{ .ptr = qtc.KIconEffect_Apply3(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(effect), @bitCast(value), @ptrCast(rgb.ptr), @ptrCast(rgb2.ptr), trans) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QPixmap `
    ///
    /// ` group: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn Apply4(self: KIconEffect, src: anytype, group: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(src)._is_QPixmap;
        return .{ .ptr = qtc.KIconEffect_Apply4(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(group), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QPixmap `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply5(self: KIconEffect, src: anytype, effect: i32, value: f32, rgb: anytype, trans: bool) QPixmap {
        comptime _ = @TypeOf(src)._is_QPixmap;
        comptime _ = @TypeOf(rgb)._is_QColor;
        return .{ .ptr = qtc.KIconEffect_Apply5(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(effect), @bitCast(value), @ptrCast(rgb.ptr), trans) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QPixmap `
    ///
    /// ` effect: i32 `
    ///
    /// ` value: f32 `
    ///
    /// ` rgb: QColor `
    ///
    /// ` rgb2: QColor `
    ///
    /// ` trans: bool `
    ///
    pub fn Apply6(self: KIconEffect, src: anytype, effect: i32, value: f32, rgb: anytype, rgb2: anytype, trans: bool) QPixmap {
        comptime _ = @TypeOf(src)._is_QPixmap;
        comptime _ = @TypeOf(rgb)._is_QColor;
        comptime _ = @TypeOf(rgb2)._is_QColor;
        return .{ .ptr = qtc.KIconEffect_Apply6(@ptrCast(self.ptr), @ptrCast(src.ptr), @bitCast(effect), @bitCast(value), @ptrCast(rgb.ptr), @ptrCast(rgb2.ptr), trans) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#doublePixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEffect `
    ///
    /// ` src: QImage `
    ///
    pub fn DoublePixels(self: KIconEffect, src: anytype) QImage {
        comptime _ = @TypeOf(src)._is_QImage;
        return .{ .ptr = qtc.KIconEffect_DoublePixels(@ptrCast(self.ptr), @ptrCast(src.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn ToGray(image: anytype, value: f32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_ToGray(@ptrCast(image.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#colorize)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` col: QColor `
    ///
    /// ` value: f32 `
    ///
    pub fn Colorize(image: anytype, col: anytype, value: f32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.KIconEffect_Colorize(@ptrCast(image.ptr), @ptrCast(col.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toMonochrome)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` black: QColor `
    ///
    /// ` white: QColor `
    ///
    /// ` value: f32 `
    ///
    pub fn ToMonochrome(image: anytype, black: anytype, white: anytype, value: f32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(black)._is_QColor;
        comptime _ = @TypeOf(white)._is_QColor;
        qtc.KIconEffect_ToMonochrome(@ptrCast(image.ptr), @ptrCast(black.ptr), @ptrCast(white.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#deSaturate)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn DeSaturate(image: anytype, value: f32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_DeSaturate(@ptrCast(image.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toGamma)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` value: f32 `
    ///
    pub fn ToGamma(image: anytype, value: f32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_ToGamma(@ptrCast(image.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn SemiTransparent(image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_SemiTransparent(@ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SemiTransparent2(pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconEffect_SemiTransparent2(@ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#overlay)
    ///
    /// ## Parameter(s):
    ///
    /// ` src: QImage `
    ///
    /// ` overlay: QImage `
    ///
    pub fn Overlay(src: anytype, overlay: anytype) void {
        comptime _ = @TypeOf(src)._is_QImage;
        comptime _ = @TypeOf(overlay)._is_QImage;
        qtc.KIconEffect_Overlay(@ptrCast(src.ptr), @ptrCast(overlay.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn ToDisabled(image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_ToDisabled(@ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn ToDisabled2(pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconEffect_ToDisabled2(@ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn ToActive(image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KIconEffect_ToActive(@ptrCast(image.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn ToActive2(pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconEffect_ToActive2(@ptrCast(pixmap.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kiconeffect.html#dtor.KIconEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconEffect `
    ///
    pub fn Delete(self: KIconEffect) void {
        qtc.KIconEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kiconeffect.html#public-types)
pub const enums = struct {
    pub const Effects = enum(i32) {
        pub const NoEffect: i32 = 0;
        pub const ToGray: i32 = 1;
        pub const Colorize: i32 = 2;
        pub const ToGamma: i32 = 3;
        pub const DeSaturate: i32 = 4;
        pub const ToMonochrome: i32 = 5;
        pub const LastEffect: i32 = 6;
    };
};
