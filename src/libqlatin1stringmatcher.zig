const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)
pub const qlatin1stringmatcher = struct {
    /// New constructs a new QLatin1StringMatcher object.
    ///
    pub fn New() QtC.QLatin1StringMatcher {
        return qtc.QLatin1StringMatcher_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1StringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLatin1StringMatcher `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLatin1StringMatcher `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self));
    }
};
