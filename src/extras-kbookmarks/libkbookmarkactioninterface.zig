const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KBookmark = @import("libqt6").KBookmark;

/// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html)
pub const KBookmarkActionInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkActionInterface,

    pub const _is_KBookmarkActionInterface = {};

    /// New constructs a new KBookmarkActionInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bk: KBookmark `
    ///
    pub fn New(bk: anytype) KBookmarkActionInterface {
        comptime _ = @TypeOf(bk)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkActionInterface_new(@ptrCast(bk.ptr)) };
    }

    /// New2 constructs a new KBookmarkActionInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KBookmarkActionInterface `
    ///
    pub fn New2(param1: anytype) KBookmarkActionInterface {
        comptime _ = @TypeOf(param1)._is_KBookmarkActionInterface;
        return .{ .ptr = qtc.KBookmarkActionInterface_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkActionInterface `
    ///
    pub fn Bookmark(self: KBookmarkActionInterface) KBookmark {
        return .{ .ptr = qtc.KBookmarkActionInterface_Bookmark(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#dtor.KBookmarkActionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkActionInterface `
    ///
    pub fn Delete(self: KBookmarkActionInterface) void {
        qtc.KBookmarkActionInterface_Delete(@ptrCast(self.ptr));
    }
};
