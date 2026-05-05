const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html)
pub const QAnyStringView = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    pub fn Compare(lhs: []const u8, rhs: []const u8) i32 {
        return qtc.QAnyStringView_Compare(lhs.ptr, rhs.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#equal)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    pub fn Equal(lhs: []const u8, rhs: []const u8) bool {
        return qtc.QAnyStringView_Equal(lhs.ptr, rhs.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: []const u8 `
    ///
    /// ` rhs: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Compare3(lhs: []const u8, rhs: []const u8, cs: i32) i32 {
        return qtc.QAnyStringView_Compare3(lhs.ptr, rhs.ptr, @bitCast(cs));
    }
};
