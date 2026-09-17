const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html)
pub const qnumeric = extern struct {
    /// ### DEPRECATED: Use `qIsInf` instead
    ///
    pub const QIsInf = qIsInf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsInf)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qIsInf(d: f64) bool {
        return qtc.qnumeric_QIsInf(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qIsNaN` instead
    ///
    pub const QIsNaN = qIsNaN;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNaN)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qIsNaN(d: f64) bool {
        return qtc.qnumeric_QIsNaN(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qIsFinite` instead
    ///
    pub const QIsFinite = qIsFinite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsFinite)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qIsFinite(d: f64) bool {
        return qtc.qnumeric_QIsFinite(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qFpClassify` instead
    ///
    pub const QFpClassify = qFpClassify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFpClassify)
    ///
    /// ## Parameter(s):
    ///
    /// ` val: f64 `
    ///
    pub fn qFpClassify(val: f64) i32 {
        return qtc.qnumeric_QFpClassify(@bitCast(val));
    }

    /// ### DEPRECATED: Use `qIsInf2` instead
    ///
    pub const QIsInf2 = qIsInf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsInf)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qIsInf2(f: f32) bool {
        return qtc.qnumeric_QIsInf2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qIsNaN2` instead
    ///
    pub const QIsNaN2 = qIsNaN2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNaN)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qIsNaN2(f: f32) bool {
        return qtc.qnumeric_QIsNaN2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qIsFinite2` instead
    ///
    pub const QIsFinite2 = qIsFinite2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsFinite)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qIsFinite2(f: f32) bool {
        return qtc.qnumeric_QIsFinite2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qFpClassify2` instead
    ///
    pub const QFpClassify2 = qFpClassify2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFpClassify)
    ///
    /// ## Parameter(s):
    ///
    /// ` val: f32 `
    ///
    pub fn qFpClassify2(val: f32) i32 {
        return qtc.qnumeric_QFpClassify2(@bitCast(val));
    }

    /// ### DEPRECATED: Use `qSNaN` instead
    ///
    pub const QSNaN = qSNaN;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qSNaN)
    ///
    pub fn qSNaN() f64 {
        return qtc.qnumeric_QSNaN();
    }

    /// ### DEPRECATED: Use `qQNaN` instead
    ///
    pub const QQNaN = qQNaN;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qQNaN)
    ///
    pub fn qQNaN() f64 {
        return qtc.qnumeric_QQNaN();
    }

    /// ### DEPRECATED: Use `qInf` instead
    ///
    pub const QInf = qInf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qInf)
    ///
    pub fn qInf() f64 {
        return qtc.qnumeric_QInf();
    }

    /// ### DEPRECATED: Use `qFloatDistance` instead
    ///
    pub const QFloatDistance = qFloatDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFloatDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` a: f32 `
    ///
    /// ` b: f32 `
    ///
    pub fn qFloatDistance(a: f32, b: f32) u32 {
        return qtc.qnumeric_QFloatDistance(@bitCast(a), @bitCast(b));
    }

    /// ### DEPRECATED: Use `qFloatDistance2` instead
    ///
    pub const QFloatDistance2 = qFloatDistance2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFloatDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` a: f64 `
    ///
    /// ` b: f64 `
    ///
    pub fn qFloatDistance2(a: f64, b: f64) u64 {
        return qtc.qnumeric_QFloatDistance2(@bitCast(a), @bitCast(b));
    }

    /// ### DEPRECATED: Use `qRound` instead
    ///
    pub const QRound = qRound;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qRound(d: f64) i32 {
        return qtc.qnumeric_QRound(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qRound2` instead
    ///
    pub const QRound2 = qRound2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qRound2(f: f32) i32 {
        return qtc.qnumeric_QRound2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qRound64` instead
    ///
    pub const QRound64 = qRound64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound64)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qRound64(d: f64) i64 {
        return qtc.qnumeric_QRound64(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qRound642` instead
    ///
    pub const QRound642 = qRound642;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound64)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qRound642(f: f32) i64 {
        return qtc.qnumeric_QRound642(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qFuzzyCompare` instead
    ///
    pub const QFuzzyCompare = qFuzzyCompare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: f64 `
    ///
    /// ` p2: f64 `
    ///
    pub fn qFuzzyCompare(p1: f64, p2: f64) bool {
        return qtc.qnumeric_QFuzzyCompare(@bitCast(p1), @bitCast(p2));
    }

    /// ### DEPRECATED: Use `qFuzzyCompare2` instead
    ///
    pub const QFuzzyCompare2 = qFuzzyCompare2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyCompare)
    ///
    /// ## Parameter(s):
    ///
    /// ` p1: f32 `
    ///
    /// ` p2: f32 `
    ///
    pub fn qFuzzyCompare2(p1: f32, p2: f32) bool {
        return qtc.qnumeric_QFuzzyCompare2(@bitCast(p1), @bitCast(p2));
    }

    /// ### DEPRECATED: Use `qFuzzyIsNull` instead
    ///
    pub const QFuzzyIsNull = qFuzzyIsNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyIsNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qFuzzyIsNull(d: f64) bool {
        return qtc.qnumeric_QFuzzyIsNull(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qFuzzyIsNull2` instead
    ///
    pub const QFuzzyIsNull2 = qFuzzyIsNull2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyIsNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qFuzzyIsNull2(f: f32) bool {
        return qtc.qnumeric_QFuzzyIsNull2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qIsNull` instead
    ///
    pub const QIsNull = qIsNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn qIsNull(d: f64) bool {
        return qtc.qnumeric_QIsNull(@bitCast(d));
    }

    /// ### DEPRECATED: Use `qIsNull2` instead
    ///
    pub const QIsNull2 = qIsNull2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qIsNull2(f: f32) bool {
        return qtc.qnumeric_QIsNull2(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qIntCast` instead
    ///
    pub const QIntCast = qIntCast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIntCast)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f64 `
    ///
    pub fn qIntCast(f: f64) i32 {
        return qtc.qnumeric_QIntCast(@bitCast(f));
    }

    /// ### DEPRECATED: Use `qIntCast2` instead
    ///
    pub const QIntCast2 = qIntCast2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIntCast)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn qIntCast2(f: f32) i32 {
        return qtc.qnumeric_QIntCast2(@bitCast(f));
    }
};
