const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html)
pub const qrgba64 = struct {
    /// New constructs a new QRgba64 object.
    ///
    pub fn New() QtC.QRgba64 {
        return qtc.QRgba64_new();
    }

    /// New2 constructs a new QRgba64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QRgba64 `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QRgba64 {
        return qtc.QRgba64_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u64 `
    ///
    pub fn FromRgba64(c: u64) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba64(@intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn FromRgba642(red: u16, green: u16, blue: u16, alpha: u16) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba642(@intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn FromRgba(red: u8, green: u8, blue: u8, alpha: u8) QtC.QRgba64 {
        return qtc.QRgba64_FromRgba(@intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn FromArgb32(rgb: u32) QtC.QRgba64 {
        return qtc.QRgba64_FromArgb32(@intCast(rgb));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isOpaque)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn IsOpaque(self: ?*anyopaque) bool {
        return qtc.QRgba64_IsOpaque(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn IsTransparent(self: ?*anyopaque) bool {
        return qtc.QRgba64_IsTransparent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Red(self: ?*anyopaque) u16 {
        return qtc.QRgba64_Red(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Green(self: ?*anyopaque) u16 {
        return qtc.QRgba64_Green(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Blue(self: ?*anyopaque) u16 {
        return qtc.QRgba64_Blue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Alpha(self: ?*anyopaque) u16 {
        return qtc.QRgba64_Alpha(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    /// ` _red: u16 `
    ///
    pub fn SetRed(self: ?*anyopaque, _red: u16) void {
        qtc.QRgba64_SetRed(@ptrCast(self), @intCast(_red));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    /// ` _green: u16 `
    ///
    pub fn SetGreen(self: ?*anyopaque, _green: u16) void {
        qtc.QRgba64_SetGreen(@ptrCast(self), @intCast(_green));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    /// ` _blue: u16 `
    ///
    pub fn SetBlue(self: ?*anyopaque, _blue: u16) void {
        qtc.QRgba64_SetBlue(@ptrCast(self), @intCast(_blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    /// ` _alpha: u16 `
    ///
    pub fn SetAlpha(self: ?*anyopaque, _alpha: u16) void {
        qtc.QRgba64_SetAlpha(@ptrCast(self), @intCast(_alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Red8(self: ?*anyopaque) u8 {
        return qtc.QRgba64_Red8(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Green8(self: ?*anyopaque) u8 {
        return qtc.QRgba64_Green8(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Blue8(self: ?*anyopaque) u8 {
        return qtc.QRgba64_Blue8(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Alpha8(self: ?*anyopaque) u8 {
        return qtc.QRgba64_Alpha8(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn ToArgb32(self: ?*anyopaque) u32 {
        return qtc.QRgba64_ToArgb32(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toRgb16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn ToRgb16(self: ?*anyopaque) u16 {
        return qtc.QRgba64_ToRgb16(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#premultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Premultiplied(self: ?*anyopaque) QtC.QRgba64 {
        return qtc.QRgba64_Premultiplied(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#unpremultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn Unpremultiplied(self: ?*anyopaque) QtC.QRgba64 {
        return qtc.QRgba64_Unpremultiplied(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn ToUnsignedLongLong(self: ?*anyopaque) u64 {
        return qtc.QRgba64_ToUnsignedLongLong(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QRgba64 `
    ///
    /// ` _rgba: u64 `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, _rgba: u64) void {
        qtc.QRgba64_OperatorAssign(@ptrCast(self), @intCast(_rgba));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#dtor.QRgba64)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QRgba64 `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRgba64_Delete(@ptrCast(self));
    }
};
