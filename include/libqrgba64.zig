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

    /// New constructs a new QRgba64 object.
    ///
    pub fn New() QRgba64 {
        return .{ .ptr = qtc.QRgba64_new() };
    }

    /// New2 constructs a new QRgba64 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QRgba64 `
    ///
    pub fn New2(param1: anytype) QRgba64 {
        comptime _ = @TypeOf(param1)._is_QRgba64;
        return .{ .ptr = qtc.QRgba64_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
    ///
    /// ## Parameter(s):
    ///
    /// ` c: u64 `
    ///
    pub fn FromRgba64(c: u64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba64(@bitCast(c)) };
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
    pub fn FromRgba642(red: u16, green: u16, blue: u16, alpha: u16) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba642(@bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha)) };
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
    pub fn FromRgba(red: u8, green: u8, blue: u8, alpha: u8) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromRgba(@bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#fromArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn FromArgb32(rgb: u32) QRgba64 {
        return .{ .ptr = qtc.QRgba64_FromArgb32(@bitCast(rgb)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isOpaque)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn IsOpaque(self: QRgba64) bool {
        return qtc.QRgba64_IsOpaque(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#isTransparent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn IsTransparent(self: QRgba64) bool {
        return qtc.QRgba64_IsTransparent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Red(self: QRgba64) u16 {
        return qtc.QRgba64_Red(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Green(self: QRgba64) u16 {
        return qtc.QRgba64_Green(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Blue(self: QRgba64) u16 {
        return qtc.QRgba64_Blue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Alpha(self: QRgba64) u16 {
        return qtc.QRgba64_Alpha(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _red: u16 `
    ///
    pub fn SetRed(self: QRgba64, _red: u16) void {
        qtc.QRgba64_SetRed(@ptrCast(self.ptr), @bitCast(_red));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _green: u16 `
    ///
    pub fn SetGreen(self: QRgba64, _green: u16) void {
        qtc.QRgba64_SetGreen(@ptrCast(self.ptr), @bitCast(_green));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _blue: u16 `
    ///
    pub fn SetBlue(self: QRgba64, _blue: u16) void {
        qtc.QRgba64_SetBlue(@ptrCast(self.ptr), @bitCast(_blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#setAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _alpha: u16 `
    ///
    pub fn SetAlpha(self: QRgba64, _alpha: u16) void {
        qtc.QRgba64_SetAlpha(@ptrCast(self.ptr), @bitCast(_alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#red8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Red8(self: QRgba64) u8 {
        return qtc.QRgba64_Red8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#green8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Green8(self: QRgba64) u8 {
        return qtc.QRgba64_Green8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#blue8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Blue8(self: QRgba64) u8 {
        return qtc.QRgba64_Blue8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#alpha8)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Alpha8(self: QRgba64) u8 {
        return qtc.QRgba64_Alpha8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toArgb32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn ToArgb32(self: QRgba64) u32 {
        return qtc.QRgba64_ToArgb32(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#toRgb16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn ToRgb16(self: QRgba64) u16 {
        return qtc.QRgba64_ToRgb16(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#premultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Premultiplied(self: QRgba64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_Premultiplied(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#unpremultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Unpremultiplied(self: QRgba64) QRgba64 {
        return .{ .ptr = qtc.QRgba64_Unpremultiplied(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    pub fn ToUnsignedLongLong(self: QRgba64) u64 {
        return qtc.QRgba64_ToUnsignedLongLong(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRgba64 `
    ///
    /// ` _rgba: u64 `
    ///
    pub fn OperatorAssign(self: QRgba64, _rgba: u64) void {
        qtc.QRgba64_OperatorAssign(@ptrCast(self.ptr), @bitCast(_rgba));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgba64.html#dtor.QRgba64)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QRgba64 `
    ///
    pub fn Delete(self: QRgba64) void {
        qtc.QRgba64_Delete(@ptrCast(self.ptr));
    }
};
