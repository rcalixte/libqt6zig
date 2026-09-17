const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html)
pub const qmath = extern struct {
    /// ### DEPRECATED: Use `qFastSin` instead
    ///
    pub const QFastSin = qFastSin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qFastSin)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    pub fn qFastSin(x: f64) f64 {
        return qtc.qmath_QFastSin(@bitCast(x));
    }

    /// ### DEPRECATED: Use `qFastCos` instead
    ///
    pub const QFastCos = qFastCos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qFastCos)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    pub fn qFastCos(x: f64) f64 {
        return qtc.qmath_QFastCos(@bitCast(x));
    }

    /// ### DEPRECATED: Use `qDegreesToRadians` instead
    ///
    pub const QDegreesToRadians = qDegreesToRadians;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qDegreesToRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` degrees: f32 `
    ///
    pub fn qDegreesToRadians(degrees: f32) f32 {
        return qtc.qmath_QDegreesToRadians(@bitCast(degrees));
    }

    /// ### DEPRECATED: Use `qDegreesToRadians2` instead
    ///
    pub const QDegreesToRadians2 = qDegreesToRadians2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qDegreesToRadians)
    ///
    /// ## Parameter(s):
    ///
    /// ` degrees: f64 `
    ///
    pub fn qDegreesToRadians2(degrees: f64) f64 {
        return qtc.qmath_QDegreesToRadians2(@bitCast(degrees));
    }

    /// ### DEPRECATED: Use `qRadiansToDegrees` instead
    ///
    pub const QRadiansToDegrees = qRadiansToDegrees;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qRadiansToDegrees)
    ///
    /// ## Parameter(s):
    ///
    /// ` radians: f32 `
    ///
    pub fn qRadiansToDegrees(radians: f32) f32 {
        return qtc.qmath_QRadiansToDegrees(@bitCast(radians));
    }

    /// ### DEPRECATED: Use `qRadiansToDegrees2` instead
    ///
    pub const QRadiansToDegrees2 = qRadiansToDegrees2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qRadiansToDegrees)
    ///
    /// ## Parameter(s):
    ///
    /// ` radians: f64 `
    ///
    pub fn qRadiansToDegrees2(radians: f64) f64 {
        return qtc.qmath_QRadiansToDegrees2(@bitCast(radians));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo` instead
    ///
    pub const QNextPowerOfTwo = qNextPowerOfTwo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u32 `
    ///
    pub fn qNextPowerOfTwo(v: u32) u32 {
        return qtc.qmath_QNextPowerOfTwo(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo2` instead
    ///
    pub const QNextPowerOfTwo2 = qNextPowerOfTwo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u64 `
    ///
    pub fn qNextPowerOfTwo2(v: u64) u64 {
        return qtc.qmath_QNextPowerOfTwo2(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo3` instead
    ///
    pub const QNextPowerOfTwo3 = qNextPowerOfTwo3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: i32 `
    ///
    pub fn qNextPowerOfTwo3(v: i32) u32 {
        return qtc.qmath_QNextPowerOfTwo3(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo4` instead
    ///
    pub const QNextPowerOfTwo4 = qNextPowerOfTwo4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: i64 `
    ///
    pub fn qNextPowerOfTwo4(v: i64) u64 {
        return qtc.qmath_QNextPowerOfTwo4(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo5` instead
    ///
    pub const QNextPowerOfTwo5 = qNextPowerOfTwo5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: usize `
    ///
    pub fn qNextPowerOfTwo5(v: usize) usize {
        return qtc.qmath_QNextPowerOfTwo5(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qNextPowerOfTwo6` instead
    ///
    pub const QNextPowerOfTwo6 = qNextPowerOfTwo6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: isize `
    ///
    pub fn qNextPowerOfTwo6(v: isize) usize {
        return qtc.qmath_QNextPowerOfTwo6(@bitCast(v));
    }
};
