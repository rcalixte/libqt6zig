const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html)
pub const qendian_h = extern struct {
    /// ### DEPRECATED: Use `qbswapHelper` instead
    ///
    pub const QbswapHelper = qbswapHelper;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` source: u64 `
    ///
    pub fn qbswapHelper(source: u64) u64 {
        return qtc.qendian_h_QbswapHelper(@bitCast(source));
    }

    /// ### DEPRECATED: Use `qbswapHelper2` instead
    ///
    pub const QbswapHelper2 = qbswapHelper2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` source: u32 `
    ///
    pub fn qbswapHelper2(source: u32) u32 {
        return qtc.qendian_h_QbswapHelper2(@bitCast(source));
    }

    /// ### DEPRECATED: Use `qbswapHelper3` instead
    ///
    pub const QbswapHelper3 = qbswapHelper3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` source: u16 `
    ///
    pub fn qbswapHelper3(source: u16) u16 {
        return qtc.qendian_h_QbswapHelper3(@bitCast(source));
    }

    /// ### DEPRECATED: Use `qbswapHelper4` instead
    ///
    pub const QbswapHelper4 = qbswapHelper4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
    ///
    /// ## Parameter(s):
    ///
    /// ` source: u8 `
    ///
    pub fn qbswapHelper4(source: u8) u8 {
        return qtc.qendian_h_QbswapHelper4(@bitCast(source));
    }
};
