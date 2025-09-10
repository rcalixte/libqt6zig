const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api.kde.org/kbookmarkactioninterface.html
pub const kbookmarkactioninterface = struct {
    /// New constructs a new KBookmarkActionInterface object.
    ///
    /// ``` bk: QtC.KBookmark ```
    pub fn New(bk: ?*anyopaque) QtC.KBookmarkActionInterface {
        return qtc.KBookmarkActionInterface_new(@ptrCast(bk));
    }

    /// New2 constructs a new KBookmarkActionInterface object.
    ///
    /// ``` param1: QtC.KBookmarkActionInterface ```
    pub fn New2(param1: ?*anyopaque) QtC.KBookmarkActionInterface {
        return qtc.KBookmarkActionInterface_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
    ///
    /// ``` self: QtC.KBookmarkActionInterface ```
    pub fn Bookmark(self: ?*anyopaque) QtC.KBookmark {
        return qtc.KBookmarkActionInterface_Bookmark(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkactioninterface.html#dtor.KBookmarkActionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmarkActionInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmarkActionInterface_Delete(@ptrCast(self));
    }
};
