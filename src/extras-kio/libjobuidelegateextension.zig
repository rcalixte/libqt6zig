const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const jobuidelegateextension_enums = enums;
const std = @import("std");

/// https://api.kde.org/kio-jobuidelegateextension.html
pub const kio__jobuidelegateextension = struct {
    /// [Qt documentation](https://api.kde.org/kio-jobuidelegateextension.html#askDeleteConfirmation)
    ///
    /// ``` self: QtC.KIO__JobUiDelegateExtension, urls: []QtC.QUrl, deletionType: jobuidelegateextension_enums.DeletionType, confirmationType: jobuidelegateextension_enums.ConfirmationType ```
    pub fn AskDeleteConfirmation(self: ?*anyopaque, urls: []QtC.QUrl, deletionType: i32, confirmationType: i32) bool {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        return qtc.KIO__JobUiDelegateExtension_AskDeleteConfirmation(@ptrCast(self), urls_list, @intCast(deletionType), @intCast(confirmationType));
    }

    /// [Qt documentation](https://api.kde.org/kio-jobuidelegateextension.html#updateUrlInClipboard)
    ///
    /// ``` self: QtC.KIO__JobUiDelegateExtension, src: QtC.QUrl, dest: QtC.QUrl ```
    pub fn UpdateUrlInClipboard(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque) void {
        qtc.KIO__JobUiDelegateExtension_UpdateUrlInClipboard(@ptrCast(self), @ptrCast(src), @ptrCast(dest));
    }
};

/// https://api.kde.org/kio.html
pub const kio = struct {
    /// [Qt documentation](https://api.kde.org/kio.html#defaultJobUiDelegateExtension)
    ///
    ///
    pub fn DefaultJobUiDelegateExtension() QtC.KIO__JobUiDelegateExtension {
        return qtc.KIO_DefaultJobUiDelegateExtension();
    }

    /// [Qt documentation](https://api.kde.org/kio.html#setDefaultJobUiDelegateExtension)
    ///
    /// ``` param1: QtC.KIO__JobUiDelegateExtension ```
    pub fn SetDefaultJobUiDelegateExtension(param1: ?*anyopaque) void {
        qtc.KIO_SetDefaultJobUiDelegateExtension(@ptrCast(param1));
    }
};

/// https://api.kde.org/kio-jobuidelegateextension.html#types
pub const enums = struct {
    pub const RenameDialog_Option = enum {
        pub const RenameDialog_Overwrite: i32 = 1;
        pub const RenameDialog_OverwriteItself: i32 = 2;
        pub const RenameDialog_Skip: i32 = 4;
        pub const RenameDialog_MultipleItems: i32 = 8;
        pub const RenameDialog_Resume: i32 = 16;
        pub const RenameDialog_NoRename: i32 = 64;
        pub const RenameDialog_DestIsDirectory: i32 = 128;
        pub const RenameDialog_SourceIsDirectory: i32 = 256;
    };

    pub const SkipDialog_Option = enum {
        pub const SkipDialog_MultipleItems: i32 = 8;
        pub const SkipDialog_Replace_Invalid_Chars: i32 = 16;
        pub const SkipDialog_Hide_Retry: i32 = 32;
    };

    pub const RenameDialog_Result = enum {
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

    pub const DeletionType = enum {
        pub const Delete: i32 = 0;
        pub const Trash: i32 = 1;
        pub const EmptyTrash: i32 = 2;
    };

    pub const ConfirmationType = enum {
        pub const DefaultConfirmation: i32 = 0;
        pub const ForceConfirmation: i32 = 1;
    };

    pub const ClipboardUpdaterMode = enum {
        pub const UpdateContent: i32 = 0;
        pub const OverwriteContent: i32 = 1;
        pub const RemoveContent: i32 = 2;
    };
};
