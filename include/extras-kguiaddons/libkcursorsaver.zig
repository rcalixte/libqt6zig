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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCursorSaver object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` shape: qnamespace_enums.CursorShape `
    ///
    pub fn new(shape: i32) KCursorSaver {
        return .{ .ptr = qtc.KCursorSaver_new(@bitCast(shape)) };
    }

    /// ### DEPRECATED: Use `restoreCursor` instead
    ///
    pub const RestoreCursor = restoreCursor;

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#restoreCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCursorSaver `
    ///
    pub fn restoreCursor(self: KCursorSaver) void {
        qtc.KCursorSaver_RestoreCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcursorsaver.html#dtor.KCursorSaver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCursorSaver `
    ///
    pub fn delete(self: KCursorSaver) void {
        qtc.KCursorSaver_Delete(@ptrCast(self.ptr));
    }
};
