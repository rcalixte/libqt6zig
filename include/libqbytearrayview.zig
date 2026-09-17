const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)
pub const qbytearrayview = extern struct {
    /// ### DEPRECATED: Use `qChecksum` instead
    ///
    pub const QChecksum = qChecksum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#qChecksum)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    /// ` standard: qnamespace_enums.ChecksumType `
    ///
    pub fn qChecksum(s: [:0]const u8, len: isize, standard: i32) u16 {
        const s_Cstring = s.ptr;
        return qtc.qbytearrayview_QChecksum(s_Cstring, @bitCast(len), @bitCast(standard));
    }
};
