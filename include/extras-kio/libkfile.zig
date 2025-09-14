const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfile_enums = enums;
const qdir_enums = @import("../libqdir.zig").enums;

/// https://api.kde.org/kfile.html
pub const kfile = struct {
    /// New constructs a new KFile object.
    ///
    /// ``` other: QtC.KFile ```
    pub fn New(other: ?*anyopaque) QtC.KFile {
        return qtc.KFile_new(@ptrCast(other));
    }

    /// New2 constructs a new KFile object and invalidates the source KFile object.
    ///
    /// ``` other: QtC.KFile ```
    pub fn New2(other: ?*anyopaque) QtC.KFile {
        return qtc.KFile_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KFile, other: QtC.KFile ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFile_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KFile, other: QtC.KFile ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KFile_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortByName)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortByName(sort: *const i32) bool {
        return qtc.KFile_IsSortByName(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortBySize)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortBySize(sort: *const i32) bool {
        return qtc.KFile_IsSortBySize(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortByDate)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortByDate(sort: *const i32) bool {
        return qtc.KFile_IsSortByDate(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortByType)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortByType(sort: *const i32) bool {
        return qtc.KFile_IsSortByType(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortDirsFirst)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortDirsFirst(sort: *const i32) bool {
        return qtc.KFile_IsSortDirsFirst(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSortCaseInsensitive)
    ///
    /// ``` sort: *const flag of qdir_enums.SortFlag ```
    pub fn IsSortCaseInsensitive(sort: *const i32) bool {
        return qtc.KFile_IsSortCaseInsensitive(@ptrCast(sort));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isDefaultView)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsDefaultView(view: *const i32) bool {
        return qtc.KFile_IsDefaultView(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSimpleView)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsSimpleView(view: *const i32) bool {
        return qtc.KFile_IsSimpleView(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isDetailView)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsDetailView(view: *const i32) bool {
        return qtc.KFile_IsDetailView(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isSeparateDirs)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsSeparateDirs(view: *const i32) bool {
        return qtc.KFile_IsSeparateDirs(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isPreviewContents)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsPreviewContents(view: *const i32) bool {
        return qtc.KFile_IsPreviewContents(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isPreviewInfo)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsPreviewInfo(view: *const i32) bool {
        return qtc.KFile_IsPreviewInfo(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isTreeView)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsTreeView(view: *const i32) bool {
        return qtc.KFile_IsTreeView(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#isDetailTreeView)
    ///
    /// ``` view: *const kfile_enums.FileView ```
    pub fn IsDetailTreeView(view: *const i32) bool {
        return qtc.KFile_IsDetailTreeView(@ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/kfile.html#dtor.KFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFile_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kfile.html#types
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
