const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q20.html)
pub const q20 = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q20.html#is_constant_evaluated)
    ///
    pub fn IsConstantEvaluated() bool {
        return qtc.q20_IsConstantEvaluated();
    }
};
