const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)
pub const QLatin1StringMatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLatin1StringMatcher,

    pub const _is_QLatin1StringMatcher = {};

    /// New constructs a new QLatin1StringMatcher object.
    ///
    pub fn New() QLatin1StringMatcher {
        return .{ .ptr = qtc.QLatin1StringMatcher_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: QLatin1StringMatcher, cs: i32) void {
        qtc.QLatin1StringMatcher_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLatin1StringMatcher `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: QLatin1StringMatcher) i32 {
        return qtc.QLatin1StringMatcher_CaseSensitivity(@ptrCast(self.ptr));
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
    /// ` self: QLatin1StringMatcher `
    ///
    pub fn Delete(self: QLatin1StringMatcher) void {
        qtc.QLatin1StringMatcher_Delete(@ptrCast(self.ptr));
    }
};
