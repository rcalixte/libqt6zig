const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/q20.html)
pub const q20 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/q20.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.q20,

    pub const _is_q20 = {};

    /// ### DEPRECATED: Use `isConstantEvaluated` instead
    ///
    pub const IsConstantEvaluated = isConstantEvaluated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/q20.html#is_constant_evaluated)
    ///
    pub fn isConstantEvaluated() bool {
        return qtc.q20_IsConstantEvaluated();
    }
};
