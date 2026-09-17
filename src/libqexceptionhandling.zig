const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qexceptionhandling.html)
pub const qexceptionhandling = extern struct {
    /// ### DEPRECATED: Use `qTerminate` instead
    ///
    pub const QTerminate = qTerminate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qexceptionhandling.html#qTerminate)
    ///
    pub fn qTerminate() void {
        qtc.qexceptionhandling_QTerminate();
    }
};
