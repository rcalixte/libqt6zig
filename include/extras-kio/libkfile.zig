const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfile_enums = enums;
const qdir_enums = @import("../libqdir.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kfile.html)
pub const KFile = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFile,

    pub const _is_KFile = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFile `
    ///
    pub fn new(other: anytype) KFile {
        comptime _ = @TypeOf(other)._is_KFile;
        return .{ .ptr = qtc.KFile_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFile object and invalidate the source KFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KFile `
    ///
    pub fn new2(other: anytype) KFile {
        comptime _ = @TypeOf(other)._is_KFile;
        return .{ .ptr = qtc.KFile_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KFile `
    ///
    /// ` other: KFile `
    ///
    pub fn copyAssign(self: KFile, other: KFile) void {
        qtc.KFile_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KFile `
    ///
    /// ` other: KFile `
    ///
    pub fn moveAssign(self: KFile, other: KFile) void {
        qtc.KFile_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isSortByName` instead
    ///
    pub const IsSortByName = isSortByName;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortByName(sort: *const i32) bool {
        return qtc.KFile_IsSortByName(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isSortBySize` instead
    ///
    pub const IsSortBySize = isSortBySize;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortBySize)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortBySize(sort: *const i32) bool {
        return qtc.KFile_IsSortBySize(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isSortByDate` instead
    ///
    pub const IsSortByDate = isSortByDate;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortByDate(sort: *const i32) bool {
        return qtc.KFile_IsSortByDate(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isSortByType` instead
    ///
    pub const IsSortByType = isSortByType;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortByType)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortByType(sort: *const i32) bool {
        return qtc.KFile_IsSortByType(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isSortDirsFirst` instead
    ///
    pub const IsSortDirsFirst = isSortDirsFirst;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortDirsFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortDirsFirst(sort: *const i32) bool {
        return qtc.KFile_IsSortDirsFirst(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isSortCaseInsensitive` instead
    ///
    pub const IsSortCaseInsensitive = isSortCaseInsensitive;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSortCaseInsensitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` sort: *const flag of qdir_enums.SortFlag `
    ///
    pub fn isSortCaseInsensitive(sort: *const i32) bool {
        return qtc.KFile_IsSortCaseInsensitive(@ptrCast(sort));
    }

    /// ### DEPRECATED: Use `isDefaultView` instead
    ///
    pub const IsDefaultView = isDefaultView;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDefaultView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isDefaultView(view: *const i32) bool {
        return qtc.KFile_IsDefaultView(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isSimpleView` instead
    ///
    pub const IsSimpleView = isSimpleView;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSimpleView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isSimpleView(view: *const i32) bool {
        return qtc.KFile_IsSimpleView(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isDetailView` instead
    ///
    pub const IsDetailView = isDetailView;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDetailView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isDetailView(view: *const i32) bool {
        return qtc.KFile_IsDetailView(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isSeparateDirs` instead
    ///
    pub const IsSeparateDirs = isSeparateDirs;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isSeparateDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isSeparateDirs(view: *const i32) bool {
        return qtc.KFile_IsSeparateDirs(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isPreviewContents` instead
    ///
    pub const IsPreviewContents = isPreviewContents;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isPreviewContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isPreviewContents(view: *const i32) bool {
        return qtc.KFile_IsPreviewContents(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isPreviewInfo` instead
    ///
    pub const IsPreviewInfo = isPreviewInfo;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isPreviewInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isPreviewInfo(view: *const i32) bool {
        return qtc.KFile_IsPreviewInfo(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isTreeView` instead
    ///
    pub const IsTreeView = isTreeView;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isTreeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isTreeView(view: *const i32) bool {
        return qtc.KFile_IsTreeView(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `isDetailTreeView` instead
    ///
    pub const IsDetailTreeView = isDetailTreeView;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#isDetailTreeView)
    ///
    /// ## Parameter(s):
    ///
    /// ` view: *const kfile_enums.FileView `
    ///
    pub fn isDetailTreeView(view: *const i32) bool {
        return qtc.KFile_IsDetailTreeView(@ptrCast(view));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfile.html#dtor.KFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFile `
    ///
    pub fn delete(self: KFile) void {
        qtc.KFile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfile.html#public-types)
pub const enums = struct {
    pub const Mode = enum {
        pub const File: i32 = 1;
        pub const Directory: i32 = 2;
        pub const Files: i32 = 4;
        pub const ExistingOnly: i32 = 8;
        pub const LocalOnly: i32 = 16;
        pub const ModeMax: i32 = 65536;
    };

    pub const FileView = enum {
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

    pub const SelectionMode = enum {
        pub const Single: i32 = 1;
        pub const Multi: i32 = 2;
        pub const Extended: i32 = 4;
        pub const NoSelection: i32 = 8;
    };
};
