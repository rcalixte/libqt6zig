const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
pub const QByteArrayView = extern struct {
    /// ### DEPRECATED: Use `maxSize2` instead
    ///
    pub const MaxSize2 = maxSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
    ///
    pub fn maxSize2() isize {
        return qtc.QByteArrayView_MaxSize2();
    }
};
