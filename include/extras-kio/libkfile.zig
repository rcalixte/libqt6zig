const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfile_enums = enums;
const qdir_enums = @import("../libqdir.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kfile.html)
pub const kfile = struct {
    /// New constructs a new KFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KFile `
    ///
    pub fn New(other: ?*anyopaque) QtC.KFile {
        return qtc.KFile_new(@ptrCast(other));
    }

    /// New2 constructs a new KFile object and invalidates the source KFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KFile `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KFile {
        return qtc.KFile_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFile `
    ///
    /// ` other: QtC.KFile `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFile_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFile `
    ///
    /// ` other: QtC.KFile `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFile_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortByName(sort: *const i32) bool {
        return qtc.KFile_IsSortByName(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortBySize)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortBySize(sort: *const i32) bool {
        return qtc.KFile_IsSortBySize(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortByDate(sort: *const i32) bool {
        return qtc.KFile_IsSortByDate(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByType)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortByType(sort: *const i32) bool {
        return qtc.KFile_IsSortByType(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortDirsFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortDirsFirst(sort: *const i32) bool {
        return qtc.KFile_IsSortDirsFirst(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortCaseInsensitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn IsSortCaseInsensitive(sort: *const i32) bool {
        return qtc.KFile_IsSortCaseInsensitive(@ptrCast(sort));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDefaultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsDefaultView(view: *const i32) bool {
        return qtc.KFile_IsDefaultView(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSimpleView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsSimpleView(view: *const i32) bool {
        return qtc.KFile_IsSimpleView(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDetailView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsDetailView(view: *const i32) bool {
        return qtc.KFile_IsDetailView(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSeparateDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsSeparateDirs(view: *const i32) bool {
        return qtc.KFile_IsSeparateDirs(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isPreviewContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsPreviewContents(view: *const i32) bool {
        return qtc.KFile_IsPreviewContents(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isPreviewInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsPreviewInfo(view: *const i32) bool {
        return qtc.KFile_IsPreviewInfo(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isTreeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsTreeView(view: *const i32) bool {
        return qtc.KFile_IsTreeView(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDetailTreeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn IsDetailTreeView(view: *const i32) bool {
        return qtc.KFile_IsDetailTreeView(@ptrCast(view));
    }

    /// ### [Upstream resources](https://api.kde.org/kfile.html#dtor.KFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFile `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFile_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfile.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const File: i32 = 1;
        pub const Directory: i32 = 2;
        pub const Files: i32 = 4;
        pub const ExistingOnly: i32 = 8;
        pub const LocalOnly: i32 = 16;
        pub const ModeMax: i32 = 65536;
    };

    pub const FileView = enum(i32) {
        pub const Default: i32 = 0;
        pub const Simple: i32 = 1;
        pub const Detail: i32 = 2;
        pub const SeparateDirs: i32 = 4;
        pub const PreviewContents: i32 = 8;
        pub const PreviewInfo: i32 = 16;
        pub const Tree: i32 = 32;
        pub const DetailTree: i32 = 64;
        pub const FileViewMax: i32 = 65536;
    };

    pub const SelectionMode = enum(i32) {
        pub const Single: i32 = 1;
        pub const Multi: i32 = 2;
        pub const Extended: i32 = 4;
        pub const NoSelection: i32 = 8;
    };
};
