const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kcursorsaver.html)
pub const KCursorSaver = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCursorSaver,

    pub const _is_KCursorSaver = {};

    /// New constructs a new KCursorSaver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` shape: qnamespace_enums.CursorShape `
    ///
    pub fn New(shape: i32) KCursorSaver {
        return .{ .ptr = qtc.KCursorSaver_new(@bitCast(shape)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#restoreCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCursorSaver `
    ///
    pub fn RestoreCursor(self: KCursorSaver) void {
        qtc.KCursorSaver_RestoreCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#dtor.KCursorSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCursorSaver `
    ///
    pub fn Delete(self: KCursorSaver) void {
        qtc.KCursorSaver_Delete(@ptrCast(self.ptr));
    }
};
