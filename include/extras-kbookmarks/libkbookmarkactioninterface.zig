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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmarkActionInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bk: KBookmark `
    ///
    pub fn new(bk: anytype) KBookmarkActionInterface {
        comptime _ = @TypeOf(bk)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkActionInterface_new(@ptrCast(bk.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KBookmarkActionInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KBookmarkActionInterface `
    ///
    pub fn new2(param1: anytype) KBookmarkActionInterface {
        comptime _ = @TypeOf(param1)._is_KBookmarkActionInterface;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asKBookmarkActionInterface")) param1.asKBookmarkActionInterface() else param1;

        return .{ .ptr = qtc.KBookmarkActionInterface_new2(@ptrCast(param1_.ptr)) };
    }

    /// ### DEPRECATED: Use `bookmark` instead
    ///
    pub const Bookmark = bookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkActionInterface `
    ///
    pub fn bookmark(self: KBookmarkActionInterface) KBookmark {
        return .{ .ptr = qtc.KBookmarkActionInterface_Bookmark(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#dtor.KBookmarkActionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkActionInterface `
    ///
    pub fn delete(self: KBookmarkActionInterface) void {
        qtc.KBookmarkActionInterface_Delete(@ptrCast(self.ptr));
    }
};
