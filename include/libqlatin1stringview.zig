const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)
pub const QLatin1String = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QLatin1String_MaxSize2();
    }
};
