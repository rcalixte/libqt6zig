const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html)
pub const QStringView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QStringView_MaxSize2();
    }
};
