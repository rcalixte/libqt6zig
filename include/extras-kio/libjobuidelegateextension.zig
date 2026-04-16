const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const jobuidelegateextension_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html)
pub const KIO__JobUiDelegateExtension = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__JobUiDelegateExtension,

    pub const _is_KIO__JobUiDelegateExtension = {};

    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html#askDeleteConfirmation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__JobUiDelegateExtension `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: jobuidelegateextension_enums.DeletionType `
    ///
    /// ` confirmationType: jobuidelegateextension_enums.ConfirmationType `
    ///
    pub fn AskDeleteConfirmation(self: KIO__JobUiDelegateExtension, urls: []QUrl, deletionType: i32, confirmationType: i32) bool {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        return qtc.KIO__JobUiDelegateExtension_AskDeleteConfirmation(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html#updateUrlInClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__JobUiDelegateExtension `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    pub fn UpdateUrlInClipboard(self: KIO__JobUiDelegateExtension, src: anytype, dest: anytype) void {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        qtc.KIO__JobUiDelegateExtension_UpdateUrlInClipboard(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#defaultJobUiDelegateExtension)
    ///
    pub fn DefaultJobUiDelegateExtension() KIO__JobUiDelegateExtension {
        return .{ .ptr = qtc.KIO_DefaultJobUiDelegateExtension() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#setDefaultJobUiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIO__JobUiDelegateExtension `
    ///
    pub fn SetDefaultJobUiDelegateExtension(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KIO__JobUiDelegateExtension;
        qtc.KIO_SetDefaultJobUiDelegateExtension(@ptrCast(param1.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html#public-types)
pub const enums = struct {
    pub const RenameDialog_Option = enum(i32) {
        pub const RenameDialog_Overwrite: i32 = 1;
        pub const RenameDialog_OverwriteItself: i32 = 2;
        pub const RenameDialog_Skip: i32 = 4;
        pub const RenameDialog_MultipleItems: i32 = 8;
        pub const RenameDialog_Resume: i32 = 16;
        pub const RenameDialog_NoRename: i32 = 64;
        pub const RenameDialog_DestIsDirectory: i32 = 128;
        pub const RenameDialog_SourceIsDirectory: i32 = 256;
    };

    pub const SkipDialog_Option = enum(i32) {
        pub const SkipDialog_MultipleItems: i32 = 8;
        pub const SkipDialog_Replace_Invalid_Chars: i32 = 16;
        pub const SkipDialog_Hide_Retry: i32 = 32;
    };

    pub const RenameDialog_Result = enum(i32) {
        pub const Result_Cancel: i32 = 0;
        pub const Result_Rename: i32 = 1;
        pub const Result_Skip: i32 = 2;
        pub const Result_AutoSkip: i32 = 3;
        pub const Result_Overwrite: i32 = 4;
        pub const Result_OverwriteAll: i32 = 5;
        pub const Result_Resume: i32 = 6;
        pub const Result_ResumeAll: i32 = 7;
        pub const Result_AutoRename: i32 = 8;
        pub const Result_Retry: i32 = 9;
        pub const Result_OverwriteWhenOlder: i32 = 10;
        pub const Result_ReplaceInvalidChars: i32 = 11;
        pub const Result_ReplaceAllInvalidChars: i32 = 12;
    };

    pub const DeletionType = enum(i32) {
        pub const Delete: i32 = 0;
        pub const Trash: i32 = 1;
        pub const EmptyTrash: i32 = 2;
    };

    pub const ConfirmationType = enum(i32) {
        pub const DefaultConfirmation: i32 = 0;
        pub const ForceConfirmation: i32 = 1;
    };

    pub const ClipboardUpdaterMode = enum(i32) {
        pub const UpdateContent: i32 = 0;
        pub const OverwriteContent: i32 = 1;
        pub const RemoveContent: i32 = 2;
    };
};
