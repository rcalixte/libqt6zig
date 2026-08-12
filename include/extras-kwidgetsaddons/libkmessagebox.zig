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

    /// ### DEPRECATED: Use `questionTwoActions` instead
    ///
    pub const QuestionTwoActions = questionTwoActions;

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
    pub fn questionTwoActions(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `questionTwoActionsCancel` instead
    ///
    pub const QuestionTwoActionsCancel = questionTwoActionsCancel;

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
    pub fn questionTwoActionsCancel(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `questionTwoActionsList` instead
    ///
    pub const QuestionTwoActionsList = questionTwoActionsList;

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
    pub fn questionTwoActionsList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.questionTwoActionsList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningTwoActions` instead
    ///
    pub const WarningTwoActions = warningTwoActions;

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
    pub fn warningTwoActions(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningTwoActionsList` instead
    ///
    pub const WarningTwoActionsList = warningTwoActionsList;

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
    pub fn warningTwoActionsList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningTwoActionsList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningContinueCancel` instead
    ///
    pub const WarningContinueCancel = warningContinueCancel;

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
    pub fn warningContinueCancel(parent: anytype, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningContinueCancelDetailed` instead
    ///
    pub const WarningContinueCancelDetailed = warningContinueCancelDetailed;

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
    pub fn warningContinueCancelDetailed(parent: anytype, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32, details: []const u8) i32 {
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

    /// ### DEPRECATED: Use `warningContinueCancelList` instead
    ///
    pub const WarningContinueCancelList = warningContinueCancelList;

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
    pub fn warningContinueCancelList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningContinueCancelList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningTwoActionsCancel` instead
    ///
    pub const WarningTwoActionsCancel = warningTwoActionsCancel;

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
    pub fn warningTwoActionsCancel(parent: anytype, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningTwoActionsCancelList` instead
    ///
    pub const WarningTwoActionsCancelList = warningTwoActionsCancelList;

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
    pub fn warningTwoActionsCancelList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningTwoActionsCancelList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(parent: anytype, text: []const u8, title: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `error2` instead
    ///
    pub const Error2 = error2;

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
    pub fn error2(parent: anytype, text: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
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

    /// ### DEPRECATED: Use `errorList` instead
    ///
    pub const ErrorList = errorList;

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
    pub fn errorList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.errorList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `detailedError` instead
    ///
    pub const DetailedError = detailedError;

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
    pub fn detailedError(parent: anytype, text: []const u8, details: []const u8, title: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `detailedError2` instead
    ///
    pub const DetailedError2 = detailedError2;

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
    pub fn detailedError2(parent: anytype, text: []const u8, details: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
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

    /// ### DEPRECATED: Use `information` instead
    ///
    pub const Information = information;

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
    pub fn information(parent: anytype, text: []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `informationList` instead
    ///
    pub const InformationList = informationList;

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
    pub fn informationList(allocator: std.mem.Allocator, parent: anytype, text: []const u8, strlist: []const []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.informationList: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `enableAllMessages` instead
    ///
    pub const EnableAllMessages = enableAllMessages;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#enableAllMessages)
    ///
    pub fn enableAllMessages() void {
        qtc.KMessageBox_EnableAllMessages();
    }

    /// ### DEPRECATED: Use `enableMessage` instead
    ///
    pub const EnableMessage = enableMessage;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#enableMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn enableMessage(dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_EnableMessage(dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `messageBox` instead
    ///
    pub const MessageBox = messageBox;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` _type: kmessagebox_enums.DialogType `
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
    pub fn messageBox(parent: anytype, _type: i32, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontShowAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `shouldBeShownTwoActions` instead
    ///
    pub const ShouldBeShownTwoActions = shouldBeShownTwoActions;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: *kmessagebox_enums.ButtonCode `
    ///
    pub fn shouldBeShownTwoActions(dontShowAgainName: []const u8, result: *i32) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownTwoActions(dontShowAgainName_str, @ptrCast(result));
    }

    /// ### DEPRECATED: Use `shouldBeShownContinue` instead
    ///
    pub const ShouldBeShownContinue = shouldBeShownContinue;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn shouldBeShownContinue(dontShowAgainName: []const u8) bool {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownContinue(dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `saveDontShowAgainTwoActions` instead
    ///
    pub const SaveDontShowAgainTwoActions = saveDontShowAgainTwoActions;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    /// ` result: kmessagebox_enums.ButtonCode `
    ///
    pub fn saveDontShowAgainTwoActions(dontShowAgainName: []const u8, result: i32) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainTwoActions(dontShowAgainName_str, @bitCast(result));
    }

    /// ### DEPRECATED: Use `saveDontShowAgainContinue` instead
    ///
    pub const SaveDontShowAgainContinue = saveDontShowAgainContinue;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontShowAgainName: []const u8 `
    ///
    pub fn saveDontShowAgainContinue(dontShowAgainName: []const u8) void {
        const dontShowAgainName_str = qtc.libqt_string{
            .len = dontShowAgainName.len,
            .data = dontShowAgainName.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainContinue(dontShowAgainName_str);
    }

    /// ### DEPRECATED: Use `setDontShowAgainConfig` instead
    ///
    pub const SetDontShowAgainConfig = setDontShowAgainConfig;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` cfg: KConfig `
    ///
    pub fn setDontShowAgainConfig(cfg: anytype) void {
        comptime _ = @TypeOf(cfg)._is_KConfig;
        qtc.KMessageBox_SetDontShowAgainConfig(@ptrCast(cfg.ptr));
    }

    /// ### DEPRECATED: Use `setDontShowAgainInterface` instead
    ///
    pub const SetDontShowAgainInterface = setDontShowAgainInterface;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` dontAskAgainInterface: KMessageBoxDontAskAgainInterface `
    ///
    pub fn setDontShowAgainInterface(dontAskAgainInterface: anytype) void {
        comptime _ = @TypeOf(dontAskAgainInterface)._is_KMessageBoxDontAskAgainInterface;
        qtc.KMessageBox_SetDontShowAgainInterface(@ptrCast(dontAskAgainInterface.ptr));
    }

    /// ### DEPRECATED: Use `setNotifyInterface` instead
    ///
    pub const SetNotifyInterface = setNotifyInterface;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setNotifyInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` notifyInterface: KMessageBoxNotifyInterface `
    ///
    pub fn setNotifyInterface(notifyInterface: anytype) void {
        comptime _ = @TypeOf(notifyInterface)._is_KMessageBoxNotifyInterface;
        qtc.KMessageBox_SetNotifyInterface(@ptrCast(notifyInterface.ptr));
    }

    /// ### DEPRECATED: Use `createKMessageBox` instead
    ///
    pub const CreateKMessageBox = createKMessageBox;

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
    pub fn createKMessageBox(allocator: std.mem.Allocator, dialog: anytype, buttons: anytype, icon: i32, text: []const u8, strlist: []const []const u8, ask: []const u8, checkboxReturn: *bool, options: i32, details: []const u8) i32 {
        comptime _ = @TypeOf(dialog)._is_QDialog;
        comptime _ = @TypeOf(buttons)._is_QDialogButtonBox;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.createKMessageBox: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `createKMessageBox2` instead
    ///
    pub const CreateKMessageBox2 = createKMessageBox2;

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
    pub fn createKMessageBox2(allocator: std.mem.Allocator, dialog: anytype, buttons: anytype, icon: anytype, text: []const u8, strlist: []const []const u8, ask: []const u8, checkboxReturn: *bool, options: i32, details: []const u8, notifyType: i32) i32 {
        comptime _ = @TypeOf(dialog)._is_QDialog;
        comptime _ = @TypeOf(buttons)._is_QDialogButtonBox;
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.createKMessageBox2: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `questionTwoActionsWId` instead
    ///
    pub const QuestionTwoActionsWId = questionTwoActionsWId;

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
    pub fn questionTwoActionsWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `questionTwoActionsCancelWId` instead
    ///
    pub const QuestionTwoActionsCancelWId = questionTwoActionsCancelWId;

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
    pub fn questionTwoActionsCancelWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `questionTwoActionsListWId` instead
    ///
    pub const QuestionTwoActionsListWId = questionTwoActionsListWId;

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
    pub fn questionTwoActionsListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.questionTwoActionsListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningTwoActionsWId` instead
    ///
    pub const WarningTwoActionsWId = warningTwoActionsWId;

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
    pub fn warningTwoActionsWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningTwoActionsListWId` instead
    ///
    pub const WarningTwoActionsListWId = warningTwoActionsListWId;

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
    pub fn warningTwoActionsListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningTwoActionsListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningContinueCancelWId` instead
    ///
    pub const WarningContinueCancelWId = warningContinueCancelWId;

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
    pub fn warningContinueCancelWId(parent_id: usize, text: []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningContinueCancelListWId` instead
    ///
    pub const WarningContinueCancelListWId = warningContinueCancelListWId;

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
    pub fn warningContinueCancelListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, buttonContinue: anytype, buttonCancel: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningContinueCancelListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `warningTwoActionsCancelWId` instead
    ///
    pub const WarningTwoActionsCancelWId = warningTwoActionsCancelWId;

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
    pub fn warningTwoActionsCancelWId(parent_id: usize, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
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

    /// ### DEPRECATED: Use `warningTwoActionsCancelListWId` instead
    ///
    pub const WarningTwoActionsCancelListWId = warningTwoActionsCancelListWId;

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
    pub fn warningTwoActionsCancelListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontAskAgainName: []const u8, options: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.warningTwoActionsCancelListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `errorWId` instead
    ///
    pub const ErrorWId = errorWId;

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
    pub fn errorWId(parent_id: usize, text: []const u8, title: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `errorListWId` instead
    ///
    pub const ErrorListWId = errorListWId;

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
    pub fn errorListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.errorListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `detailedErrorWId` instead
    ///
    pub const DetailedErrorWId = detailedErrorWId;

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
    pub fn detailedErrorWId(parent_id: usize, text: []const u8, details: []const u8, title: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `detailedErrorWId2` instead
    ///
    pub const DetailedErrorWId2 = detailedErrorWId2;

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
    pub fn detailedErrorWId2(parent_id: usize, text: []const u8, details: []const u8, title: []const u8, buttonOk: anytype, options: i32) void {
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

    /// ### DEPRECATED: Use `informationWId` instead
    ///
    pub const InformationWId = informationWId;

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
    pub fn informationWId(parent_id: usize, text: []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
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

    /// ### DEPRECATED: Use `informationListWId` instead
    ///
    pub const InformationListWId = informationListWId;

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
    pub fn informationListWId(allocator: std.mem.Allocator, parent_id: usize, text: []const u8, strlist: []const []const u8, title: []const u8, dontShowAgainName: []const u8, options: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const strlist_arr = allocator.alloc(qtc.libqt_string, strlist.len) catch @panic("KMessageBox.informationListWId: Memory allocation failed");
        defer allocator.free(strlist_arr);
        for (strlist, 0..strlist.len) |str_item, i|
            strlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `messageBoxWId` instead
    ///
    pub const MessageBoxWId = messageBoxWId;

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBoxWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent_id: usize `
    ///
    /// ` _type: kmessagebox_enums.DialogType `
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
    pub fn messageBoxWId(parent_id: usize, _type: i32, text: []const u8, title: []const u8, primaryAction: anytype, secondaryAction: anytype, cancelAction: anytype, dontShowAskAgainName: []const u8, options: i32) i32 {
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
