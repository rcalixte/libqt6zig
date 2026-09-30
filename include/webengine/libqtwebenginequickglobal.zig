const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginequick.html)
pub const QtWebEngineQuick = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginequick.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QtWebEngineQuick,

    pub const _is_QtWebEngineQuick = {};

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginequick.html#initialize)
    ///
    pub fn initialize() void {
        qtc.QtWebEngineQuick_Initialize();
    }
};
