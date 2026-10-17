const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qutils-h-qtdatavis.html)
pub const qutils_h = extern struct {
    /// ### DEPRECATED: Use `qDefaultSurfaceFormat` instead
    ///
    pub const QDefaultSurfaceFormat = qDefaultSurfaceFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qutils-h-qtdatavis.html#qDefaultSurfaceFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` antialias: bool `
    ///
    pub fn qDefaultSurfaceFormat(antialias: bool) QSurfaceFormat {
        return .{ .ptr = qtc.qutils_h_QDefaultSurfaceFormat(antialias) };
    }
};
