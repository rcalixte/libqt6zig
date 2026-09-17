const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html)
pub const qrgb_h = extern struct {
    /// ### DEPRECATED: Use `qRed` instead
    ///
    pub const QRed = qRed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRed)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qRed(rgb: u32) i32 {
        return qtc.qrgb_h_QRed(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qGreen` instead
    ///
    pub const QGreen = qGreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qGreen(rgb: u32) i32 {
        return qtc.qrgb_h_QGreen(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qBlue` instead
    ///
    pub const QBlue = qBlue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qBlue)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qBlue(rgb: u32) i32 {
        return qtc.qrgb_h_QBlue(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qAlpha` instead
    ///
    pub const QAlpha = qAlpha;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qAlpha)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qAlpha(rgb: u32) i32 {
        return qtc.qrgb_h_QAlpha(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qRgb` instead
    ///
    pub const QRgb = qRgb;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRgb)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn qRgb(r: i32, g: i32, b: i32) u32 {
        return qtc.qrgb_h_QRgb(@bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### DEPRECATED: Use `qRgba` instead
    ///
    pub const QRgba = qRgba;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRgba)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    /// ` a: i32 `
    ///
    pub fn qRgba(r: i32, g: i32, b: i32, a: i32) u32 {
        return qtc.qrgb_h_QRgba(@bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `qGray` instead
    ///
    pub const QGray = qGray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` r: i32 `
    ///
    /// ` g: i32 `
    ///
    /// ` b: i32 `
    ///
    pub fn qGray(r: i32, g: i32, b: i32) i32 {
        return qtc.qrgb_h_QGray(@bitCast(r), @bitCast(g), @bitCast(b));
    }

    /// ### DEPRECATED: Use `qGray2` instead
    ///
    pub const QGray2 = qGray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qGray2(rgb: u32) i32 {
        return qtc.qrgb_h_QGray2(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qIsGray` instead
    ///
    pub const QIsGray = qIsGray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qIsGray)
    ///
    /// ## Parameter(s):
    ///
    /// ` rgb: u32 `
    ///
    pub fn qIsGray(rgb: u32) bool {
        return qtc.qrgb_h_QIsGray(@bitCast(rgb));
    }

    /// ### DEPRECATED: Use `qPremultiply` instead
    ///
    pub const QPremultiply = qPremultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qPremultiply)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: u32 `
    ///
    pub fn qPremultiply(x: u32) u32 {
        return qtc.qrgb_h_QPremultiply(@bitCast(x));
    }

    /// ### DEPRECATED: Use `qUnpremultiply` instead
    ///
    pub const QUnpremultiply = qUnpremultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qUnpremultiply)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: u32 `
    ///
    pub fn qUnpremultiply(p: u32) u32 {
        return qtc.qrgb_h_QUnpremultiply(@bitCast(p));
    }
};
