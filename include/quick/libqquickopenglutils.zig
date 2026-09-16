const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickopenglutils.html)
pub const QQuickOpenGLUtils = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickopenglutils.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickOpenGLUtils,

    pub const _is_QQuickOpenGLUtils = {};

    /// ### DEPRECATED: Use `resetOpenGLState` instead
    ///
    pub const ResetOpenGLState = resetOpenGLState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickopenglutils.html#resetOpenGLState)
    ///
    pub fn resetOpenGLState() void {
        qtc.QQuickOpenGLUtils_ResetOpenGLState();
    }
};
