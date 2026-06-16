const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KGuiItem = @import("libqt6").KGuiItem;
const KMessageBoxDontAskAgainInterface = @import("libqt6").KMessageBoxDontAskAgainInterface;
const KMessageBoxNotifyInterface = @import("libqt6").KMessageBoxNotifyInterface;
const QDialog = @import("libqt6").QDialog;
const QDialogButtonBox = @import("libqt6").QDialogButtonBox;
const QIcon = @import("libqt6").QIcon;
const QWidget = @import("libqt6").QWidget;
const kmessagebox_enums = enums;
const qdialogbuttonbox_enums = @import("../libqdialogbuttonbox.zig").enums;
const qmessagebox_enums = @import("../libqmessagebox.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kmessagebox.html)
pub const KMessageBox = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMessageBox,

    pub const _is_KMessageBox = {};

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActions(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActions(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsCancel(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancel(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.QuestionTwoActionsList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActions(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActions(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningTwoActionsList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonContinue: KGuiItem `
    ///
    /// ` buttonCancel: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancel(parent: anytype, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonContinue)._is_KGuiItem;
        comptime _ = @TypeOf(buttonCancel)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancel(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(buttonContinue.ptr), @ptrCast(buttonCancel.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelDetailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonContinue: KGuiItem `
    ///
    /// ` buttonCancel: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ` details: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelDetailed(parent: anytype, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32, details: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonContinue)._is_KGuiItem;
        comptime _ = @TypeOf(buttonCancel)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelDetailed(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(buttonContinue.ptr), @ptrCast(buttonCancel.ptr), dontAskAgainName_str, @bitCast(options), details_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonContinue: KGuiItem `
    ///
    /// ` buttonCancel: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningContinueCancelList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonContinue)._is_KGuiItem;
        comptime _ = @TypeOf(buttonCancel)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, @ptrCast(buttonContinue.ptr), @ptrCast(buttonCancel.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancel(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancel(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningTwoActionsCancelList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn Error(parent: anytype, text: []const u8, title: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_Error(@ptrCast(parent.ptr), text_str, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonOk: KGuiItem `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn Error2(parent: anytype, text: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonOk)._is_KGuiItem;
        qtc.KMessageBox_Error2(@ptrCast(parent.ptr), text_str, title_str, @ptrCast(buttonOk.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.ErrorList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_ErrorList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedError(parent: anytype, text: []const u8, details: []const u8, title: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_DetailedError(@ptrCast(parent.ptr), text_str, details_str, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonOk: KGuiItem `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedError2(parent: anytype, text: []const u8, details: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonOk)._is_KGuiItem;
        qtc.KMessageBox_DetailedError2(@ptrCast(parent.ptr), text_str, details_str, title_str, @ptrCast(buttonOk.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn Information(parent: anytype, text: []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_Information(@ptrCast(parent.ptr), text_str, title_str, dontShowAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.InformationList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_InformationList(@ptrCast(parent.ptr), text_str, strlist_list, title_str, dontShowAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#enableAllMessages)
    ///
    pub fn EnableAllMessages() void {
        qtc.KMessageBox_EnableAllMessages();
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#enableMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn EnableMessage(dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_EnableMessage(dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` type: kmessagebox_enums.DialogType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontShowAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn MessageBox(parent: anytype, _type: i32, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontShowAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontShowAskAgainName_str = qtc.libqt_string{
            .len = dontShowAskAgainName.len,
            .data = dontShowAskAgainName.ptr,
        };
        return qtc.KMessageBox_MessageBox(@ptrCast(parent.ptr), @bitCast(_type), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontShowAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn ShouldBeShownTwoActions(dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownTwoActions(dontShowAgainName_str, @ptrCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn ShouldBeShownContinue(dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownContinue(dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn SaveDontShowAgainTwoActions(dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainTwoActions(dontShowAgainName_str, @bitCast(result));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn SaveDontShowAgainContinue(dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainContinue(dontShowAgainName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` cfg: KConfig `
    ///
    pub fn SetDontShowAgainConfig(cfg: anytype) void {
        comptime _ = @TypeOf(cfg)._is_KConfig;
        qtc.KMessageBox_SetDontShowAgainConfig(@ptrCast(cfg.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontAskAgainInterface: KMessageBoxDontAskAgainInterface `
    ///
    pub fn SetDontShowAgainInterface(dontAskAgainInterface: anytype) void {
        comptime _ = @TypeOf(dontAskAgainInterface)._is_KMessageBoxDontAskAgainInterface;
        qtc.KMessageBox_SetDontShowAgainInterface(@ptrCast(dontAskAgainInterface.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setNotifyInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` notifyInterface: KMessageBoxNotifyInterface `
    ///
    pub fn SetNotifyInterface(notifyInterface: anytype) void {
        comptime _ = @TypeOf(notifyInterface)._is_KMessageBoxNotifyInterface;
        qtc.KMessageBox_SetNotifyInterface(@ptrCast(notifyInterface.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dialog: QDialog `
    ///
    /// ` buttons: QDialogButtonBox `
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` ask: []const u8 `
    ///
    /// ` checkboxReturn: *bool `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ` details: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qdialogbuttonbox_enums.StandardButton `
    ///
    pub fn CreateKMessageBox(allocator: std.mem.Allocator, dialog: anytype, buttons: anytype, icon: i32, text: []const u8, strlist: []const []const u8, ask: []const u8, checkboxReturn: *bool, options: i32, details: []const u8) i32 {
        comptime _ = @TypeOf(dialog)._is_QDialog;
        comptime _ = @TypeOf(buttons)._is_QDialogButtonBox;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.CreateKMessageBox: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const ask_str = qtc.libqt_string{
            .len = ask.len,
            .data = ask.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        return qtc.KMessageBox_CreateKMessageBox(@ptrCast(dialog.ptr), @ptrCast(buttons.ptr), @bitCast(icon), text_str, strlist_list, ask_str, @ptrCast(checkboxReturn), @bitCast(options), details_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dialog: QDialog `
    ///
    /// ` buttons: QDialogButtonBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` ask: []const u8 `
    ///
    /// ` checkboxReturn: *bool `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ` details: []const u8 `
    ///
    /// ` notifyType: qmessagebox_enums.Icon `
    ///
    /// ## Returns:
    ///
    /// ` qdialogbuttonbox_enums.StandardButton `
    ///
    pub fn CreateKMessageBox2(allocator: std.mem.Allocator, dialog: anytype, buttons: anytype, icon: anytype, text: []const u8, strlist: []const []const u8, ask: []const u8, checkboxReturn: *bool, options: i32, details: []const u8, notifyType: i32) i32 {
        comptime _ = @TypeOf(dialog)._is_QDialog;
        comptime _ = @TypeOf(buttons)._is_QDialogButtonBox;
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.CreateKMessageBox2: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const ask_str = qtc.libqt_string{
            .len = ask.len,
            .data = ask.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        return qtc.KMessageBox_CreateKMessageBox2(@ptrCast(dialog.ptr), @ptrCast(buttons.ptr), @ptrCast(icon.ptr), text_str, strlist_list, ask_str, @ptrCast(checkboxReturn), @bitCast(options), details_str, @bitCast(notifyType));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsWId(@bitCast(parent_id), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsCancelWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancelWId(@bitCast(parent_id), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.QuestionTwoActionsListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsListWId(@bitCast(parent_id), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsWId(@bitCast(parent_id), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningTwoActionsListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsListWId(@bitCast(parent_id), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonContinue: KGuiItem `
    ///
    /// ` buttonCancel: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelWId(parent_id: usize, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonContinue)._is_KGuiItem;
        comptime _ = @TypeOf(buttonCancel)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelWId(@bitCast(parent_id), text_str, title_str, @ptrCast(buttonContinue.ptr), @ptrCast(buttonCancel.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonContinue: KGuiItem `
    ///
    /// ` buttonCancel: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningContinueCancelListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonContinue)._is_KGuiItem;
        comptime _ = @TypeOf(buttonCancel)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelListWId(@bitCast(parent_id), text_str, strlist_list, title_str, @ptrCast(buttonContinue.ptr), @ptrCast(buttonCancel.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelWId(@bitCast(parent_id), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.WarningTwoActionsCancelListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelListWId(@bitCast(parent_id), text_str, strlist_list, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontAskAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorWId(parent_id: usize, text: []const u8, title: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_ErrorWId(@bitCast(parent_id), text_str, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.ErrorListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_ErrorListWId(@bitCast(parent_id), text_str, strlist_list, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedErrorWId(parent_id: usize, text: []const u8, details: []const u8, title: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KMessageBox_DetailedErrorWId(@bitCast(parent_id), text_str, details_str, title_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` buttonOk: KGuiItem `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedErrorWId2(parent_id: usize, text: []const u8, details: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(buttonOk)._is_KGuiItem;
        qtc.KMessageBox_DetailedErrorWId2(@bitCast(parent_id), text_str, details_str, title_str, @ptrCast(buttonOk.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationWId(parent_id: usize, text: []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_InformationWId(@bitCast(parent_id), text_str, title_str, dontShowAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent_id: usize `
    ///
    /// ` text: []const u8 `
    ///
    /// ` strlist: []const []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("kmessagebox.InformationListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |item, i|
            strlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strlist_list = qtc.libqt_list{
            .len = strlist.len,
            .data = strlist_arr.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_InformationListWId(@bitCast(parent_id), text_str, strlist_list, title_str, dontShowAgainName_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBoxWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` type: kmessagebox_enums.DialogType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryAction: KGuiItem `
    ///
    /// ` secondaryAction: KGuiItem `
    ///
    /// ` cancelAction: KGuiItem `
    ///
    /// ` dontShowAskAgainName: []const u8 `
    ///
    /// ` options: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn MessageBoxWId(parent_id: usize, _type: i32, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontShowAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(primaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(secondaryAction)._is_KGuiItem;
        comptime _ = @TypeOf(cancelAction)._is_KGuiItem;
        const dontShowAskAgainName_str = qtc.libqt_string{
            .len = dontShowAskAgainName.len,
            .data = dontShowAskAgainName.ptr,
        };
        return qtc.KMessageBox_MessageBoxWId(@bitCast(parent_id), @bitCast(_type), text_str, title_str, @ptrCast(primaryAction.ptr), @ptrCast(secondaryAction.ptr), @ptrCast(cancelAction.ptr), dontShowAskAgainName_str, @bitCast(options));
    }
};

/// ### [Upstream resources](https://api.kde.org/kmessagebox.html#public-types)
pub const enums = struct {
    pub const ButtonCode = enum(i32) {
        pub const Ok: i32 = 1;
        pub const Cancel: i32 = 2;
        pub const PrimaryAction: i32 = 3;
        pub const SecondaryAction: i32 = 4;
        pub const Continue: i32 = 5;
    };

    pub const DialogType = enum(i32) {
        pub const QuestionTwoActions: i32 = 1;
        pub const WarningTwoActions: i32 = 2;
        pub const WarningContinueCancel: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const Information: i32 = 5;
        pub const Error: i32 = 8;
        pub const QuestionTwoActionsCancel: i32 = 9;
    };

    pub const Option = enum(i32) {
        pub const Notify: i32 = 1;
        pub const AllowLink: i32 = 2;
        pub const Dangerous: i32 = 4;
        pub const NoExec: i32 = 16;
        pub const WindowModal: i32 = 32;
        pub const PlainText: i32 = 64;
    };
};
