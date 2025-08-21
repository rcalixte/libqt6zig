const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/q20.html
pub const q20 = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/q20.html#is_constant_evaluated)
    ///
    ///
    pub fn IsConstantEvaluated() bool {
        return qtc.q20_IsConstantEvaluated();
    }
};
