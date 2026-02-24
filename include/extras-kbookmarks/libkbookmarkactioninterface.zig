const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html)
pub const kbookmarkactioninterface = struct {
    /// New constructs a new KBookmarkActionInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bk: QtC.KBookmark `
    ///
    pub fn New(bk: ?*anyopaque) QtC.KBookmarkActionInterface {
        return qtc.KBookmarkActionInterface_new(@ptrCast(bk));
    }

    /// New2 constructs a new KBookmarkActionInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KBookmarkActionInterface `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KBookmarkActionInterface {
        return qtc.KBookmarkActionInterface_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KBookmarkActionInterface `
    ///
    pub fn Bookmark(self: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkActionInterface_Bookmark(@ptrCast(self));
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
    /// ` self: QtC.KBookmarkActionInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KBookmarkActionInterface_Delete(@ptrCast(self));
    }
};
