const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qyieldcpu.html)
pub const qyieldcpu = extern struct {
    /// ### DEPRECATED: Use `qYieldCpu` instead
    ///
    pub const QYieldCpu = qYieldCpu;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qyieldcpu.html#qYieldCpu)
    ///
    pub fn qYieldCpu() void {
        qtc.qyieldcpu_QYieldCpu();
    }

    /// ### DEPRECATED: Use `qYieldCpu2` instead
    ///
    pub const QYieldCpu2 = qYieldCpu2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qyieldcpu.html#qYieldCpu)
    ///
    pub fn qYieldCpu2() void {
        qtc.qyieldcpu_QYieldCpu2();
    }
};
