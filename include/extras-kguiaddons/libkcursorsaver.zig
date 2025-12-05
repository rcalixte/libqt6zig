const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcursorsaver.html)
pub const kcursorsaver = struct {
    /// New constructs a new KCursorSaver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shape: qnamespace_enums.CursorShape `
    ///
    pub fn New(shape: i32) QtC.KCursorSaver {
        return qtc.KCursorSaver_new(@intCast(shape));
    }

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#restoreCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCursorSaver `
    ///
    pub fn RestoreCursor(self: ?*anyopaque) void {
        qtc.KCursorSaver_RestoreCursor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#dtor.KCursorSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCursorSaver `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCursorSaver_Delete(@ptrCast(self));
    }
};
