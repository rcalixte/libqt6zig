const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html)
pub const qalgorithms = extern struct {
    /// ### DEPRECATED: Use `qPopulationCount` instead
    ///
    pub const QPopulationCount = qPopulationCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u32 `
    ///
    pub fn qPopulationCount(v: u32) u32 {
        return qtc.qalgorithms_QPopulationCount(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qPopulationCount2` instead
    ///
    pub const QPopulationCount2 = qPopulationCount2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u8 `
    ///
    pub fn qPopulationCount2(v: u8) u32 {
        return qtc.qalgorithms_QPopulationCount2(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qPopulationCount3` instead
    ///
    pub const QPopulationCount3 = qPopulationCount3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u16 `
    ///
    pub fn qPopulationCount3(v: u16) u32 {
        return qtc.qalgorithms_QPopulationCount3(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qPopulationCount4` instead
    ///
    pub const QPopulationCount4 = qPopulationCount4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u64 `
    ///
    pub fn qPopulationCount4(v: u64) u32 {
        return qtc.qalgorithms_QPopulationCount4(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qPopulationCount5` instead
    ///
    pub const QPopulationCount5 = qPopulationCount5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: usize `
    ///
    pub fn qPopulationCount5(v: usize) u32 {
        return qtc.qalgorithms_QPopulationCount5(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountTrailingZeroBits` instead
    ///
    pub const QCountTrailingZeroBits = qCountTrailingZeroBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u32 `
    ///
    pub fn qCountTrailingZeroBits(v: u32) u32 {
        return qtc.qalgorithms_QCountTrailingZeroBits(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountTrailingZeroBits2` instead
    ///
    pub const QCountTrailingZeroBits2 = qCountTrailingZeroBits2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u8 `
    ///
    pub fn qCountTrailingZeroBits2(v: u8) u32 {
        return qtc.qalgorithms_QCountTrailingZeroBits2(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountTrailingZeroBits3` instead
    ///
    pub const QCountTrailingZeroBits3 = qCountTrailingZeroBits3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u16 `
    ///
    pub fn qCountTrailingZeroBits3(v: u16) u32 {
        return qtc.qalgorithms_QCountTrailingZeroBits3(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountTrailingZeroBits4` instead
    ///
    pub const QCountTrailingZeroBits4 = qCountTrailingZeroBits4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u64 `
    ///
    pub fn qCountTrailingZeroBits4(v: u64) u32 {
        return qtc.qalgorithms_QCountTrailingZeroBits4(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountTrailingZeroBits5` instead
    ///
    pub const QCountTrailingZeroBits5 = qCountTrailingZeroBits5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: usize `
    ///
    pub fn qCountTrailingZeroBits5(v: usize) u32 {
        return qtc.qalgorithms_QCountTrailingZeroBits5(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountLeadingZeroBits` instead
    ///
    pub const QCountLeadingZeroBits = qCountLeadingZeroBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u32 `
    ///
    pub fn qCountLeadingZeroBits(v: u32) u32 {
        return qtc.qalgorithms_QCountLeadingZeroBits(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountLeadingZeroBits2` instead
    ///
    pub const QCountLeadingZeroBits2 = qCountLeadingZeroBits2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u8 `
    ///
    pub fn qCountLeadingZeroBits2(v: u8) u32 {
        return qtc.qalgorithms_QCountLeadingZeroBits2(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountLeadingZeroBits3` instead
    ///
    pub const QCountLeadingZeroBits3 = qCountLeadingZeroBits3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u16 `
    ///
    pub fn qCountLeadingZeroBits3(v: u16) u32 {
        return qtc.qalgorithms_QCountLeadingZeroBits3(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountLeadingZeroBits4` instead
    ///
    pub const QCountLeadingZeroBits4 = qCountLeadingZeroBits4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: u64 `
    ///
    pub fn qCountLeadingZeroBits4(v: u64) u32 {
        return qtc.qalgorithms_QCountLeadingZeroBits4(@bitCast(v));
    }

    /// ### DEPRECATED: Use `qCountLeadingZeroBits5` instead
    ///
    pub const QCountLeadingZeroBits5 = qCountLeadingZeroBits5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` v: usize `
    ///
    pub fn qCountLeadingZeroBits5(v: usize) u32 {
        return qtc.qalgorithms_QCountLeadingZeroBits5(@bitCast(v));
    }
};
