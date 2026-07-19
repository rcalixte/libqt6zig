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
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Compare(lhs_str, rhs_str);
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
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Equal(lhs_str, rhs_str);
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
        const lhs_str = qtc.libqt_string{
            .len = lhs.len,
            .data = lhs.ptr,
        };
        const rhs_str = qtc.libqt_string{
            .len = rhs.len,
            .data = rhs.ptr,
        };
        return qtc.QAnyStringView_Compare3(lhs_str, rhs_str, @bitCast(cs));
    }
};
