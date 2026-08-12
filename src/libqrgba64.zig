const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html)
pub const QRgba64 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRgba64,

    pub const _is_QRgba64 = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRgba64 object in C++ memory
    ///
    pub fn new() QRgba64 {
        return .{ .ptr = qtc.QRgba64_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRgba64 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRgba64 `
    ///
    pub fn new2(param1: anytype) QRgba64 {
        comptime _ = @TypeOf(param1)._is_QRgba64;
        return .{ .ptr = qtc.QRgba64_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `fromRgba64` instead
    ///
    pub const FromRgba64 = fromRgba64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u64 `
    ///
    pub fn fromRgba64(c: u64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba64(@bitCast(c)) };
    }

    /// ### DEPRECATED: Use `fromRgba642` instead
    ///
    pub const FromRgba642 = fromRgba642;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` _red: u16 `
    ///
    /// ` _green: u16 `
    ///
    /// ` _blue: u16 `
    ///
    /// ` _alpha: u16 `
    ///
    pub fn fromRgba642(_red: u16, _green: u16, _blue: u16, _alpha: u16) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba642(@bitCast(_red), @bitCast(_green), @bitCast(_blue), @bitCast(_alpha)) };
    }

    /// ### DEPRECATED: Use `fromRgba` instead
    ///
    pub const FromRgba = fromRgba;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` _red: u8 `
    ///
    /// ` _green: u8 `
    ///
    /// ` _blue: u8 `
    ///
    /// ` _alpha: u8 `
    ///
    pub fn fromRgba(_red: u8, _green: u8, _blue: u8, _alpha: u8) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba(@bitCast(_red), @bitCast(_green), @bitCast(_blue), @bitCast(_alpha)) };
    }

    /// ### DEPRECATED: Use `fromArgb32` instead
    ///
    pub const FromArgb32 = fromArgb32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn fromArgb32(rgb: u32) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromArgb32(@bitCast(rgb)) };
    }

    /// ### DEPRECATED: Use `isOpaque` instead
    ///
    pub const IsOpaque = isOpaque;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isOpaque)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn isOpaque(self: QRgba64) bool {
        return qtc.QRgba64_IsOpaque(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransparent` instead
    ///
    pub const IsTransparent = isTransparent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn isTransparent(self: QRgba64) bool {
        return qtc.QRgba64_IsTransparent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `red` instead
    ///
    pub const Red = red;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn red(self: QRgba64) u16 {
        return qtc.QRgba64_Red(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `green` instead
    ///
    pub const Green = green;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn green(self: QRgba64) u16 {
        return qtc.QRgba64_Green(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blue` instead
    ///
    pub const Blue = blue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn blue(self: QRgba64) u16 {
        return qtc.QRgba64_Blue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alpha` instead
    ///
    pub const Alpha = alpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn alpha(self: QRgba64) u16 {
        return qtc.QRgba64_Alpha(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRed` instead
    ///
    pub const SetRed = setRed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _red: u16 `
    ///
    pub fn setRed(self: QRgba64, _red: u16) void {
        qtc.QRgba64_SetRed(@ptrCast(self.ptr), @bitCast(_red));
    }

    /// ### DEPRECATED: Use `setGreen` instead
    ///
    pub const SetGreen = setGreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _green: u16 `
    ///
    pub fn setGreen(self: QRgba64, _green: u16) void {
        qtc.QRgba64_SetGreen(@ptrCast(self.ptr), @bitCast(_green));
    }

    /// ### DEPRECATED: Use `setBlue` instead
    ///
    pub const SetBlue = setBlue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _blue: u16 `
    ///
    pub fn setBlue(self: QRgba64, _blue: u16) void {
        qtc.QRgba64_SetBlue(@ptrCast(self.ptr), @bitCast(_blue));
    }

    /// ### DEPRECATED: Use `setAlpha` instead
    ///
    pub const SetAlpha = setAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _alpha: u16 `
    ///
    pub fn setAlpha(self: QRgba64, _alpha: u16) void {
        qtc.QRgba64_SetAlpha(@ptrCast(self.ptr), @bitCast(_alpha));
    }

    /// ### DEPRECATED: Use `red8` instead
    ///
    pub const Red8 = red8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn red8(self: QRgba64) u8 {
        return qtc.QRgba64_Red8(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `green8` instead
    ///
    pub const Green8 = green8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn green8(self: QRgba64) u8 {
        return qtc.QRgba64_Green8(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blue8` instead
    ///
    pub const Blue8 = blue8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn blue8(self: QRgba64) u8 {
        return qtc.QRgba64_Blue8(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alpha8` instead
    ///
    pub const Alpha8 = alpha8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn alpha8(self: QRgba64) u8 {
        return qtc.QRgba64_Alpha8(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toArgb32` instead
    ///
    pub const ToArgb32 = toArgb32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn toArgb32(self: QRgba64) u32 {
        return qtc.QRgba64_ToArgb32(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toRgb16` instead
    ///
    pub const ToRgb16 = toRgb16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toRgb16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn toRgb16(self: QRgba64) u16 {
        return qtc.QRgba64_ToRgb16(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `premultiplied` instead
    ///
    pub const Premultiplied = premultiplied;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#premultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn premultiplied(self: QRgba64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_Premultiplied(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `unpremultiplied` instead
    ///
    pub const Unpremultiplied = unpremultiplied;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#unpremultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn unpremultiplied(self: QRgba64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_Unpremultiplied(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUnsignedLongLong` instead
    ///
    pub const ToUnsignedLongLong = toUnsignedLongLong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn toUnsignedLongLong(self: QRgba64) u64 {
        return qtc.QRgba64_ToUnsignedLongLong(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _rgba: u64 `
    ///
    pub fn operatorAssign(self: QRgba64, _rgba: u64) void {
        qtc.QRgba64_OperatorAssign(@ptrCast(self.ptr), @bitCast(_rgba));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#dtor.QRgba64)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRgba64 `
    ///
    pub fn delete(self: QRgba64) void {
        qtc.QRgba64_Delete(@ptrCast(self.ptr));
    }
};
