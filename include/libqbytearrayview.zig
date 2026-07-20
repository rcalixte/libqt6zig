const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
pub const QByteArrayView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QByteArrayView_MaxSize2();
    }
};
