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
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActions(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActions(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsCancel(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancel(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.QuestionTwoActionsList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActions(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningTwoActions(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancel(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancel(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelDetailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ` param8: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelDetailed(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32, param8: []const u8) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelDetailed(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7), param8_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningContinueCancelList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancel(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancel(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: KGuiItem `
    ///
    /// ` param8: []const u8 `
    ///
    /// ` param9: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: anytype, param8: []const u8, param9: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsCancelList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        comptime _ = @TypeOf(param7)._is_KGuiItem;
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), param8_str, @bitCast(param9));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: flag of kmessagebox_enums.Option `
    ///
    pub fn Error(param1: anytype, param2: []const u8, param3: []const u8, param4: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.KMessageBox_Error(@ptrCast(param1.ptr), param2_str, param3_str, @bitCast(param4));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn Error2(param1: anytype, param2: []const u8, param3: []const u8, param4: anytype, param5: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        qtc.KMessageBox_Error2(@ptrCast(param1.ptr), param2_str, param3_str, @ptrCast(param4.ptr), @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.ErrorList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_ErrorList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedError(param1: anytype, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_DetailedError(@ptrCast(param1.ptr), param2_str, param3_str, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedError2(param1: anytype, param2: []const u8, param3: []const u8, param4: []const u8, param5: anytype, param6: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        qtc.KMessageBox_DetailedError2(@ptrCast(param1.ptr), param2_str, param3_str, param4_str, @ptrCast(param5.ptr), @bitCast(param6));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn Information(param1: anytype, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_Information(@ptrCast(param1.ptr), param2_str, param3_str, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: []const u8 `
    ///
    /// ` param6: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationList(allocator: std.mem.Allocator, param1: anytype, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: []const u8, param6: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.InformationList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param5_str = qtc.libqt_string{
            .len = param5.len,
            .data = param5.ptr,
        };
        qtc.KMessageBox_InformationList(@ptrCast(param1.ptr), param2_str, param3_list, param4_str, param5_str, @bitCast(param6));
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
    /// ` param1: []const u8 `
    ///
    pub fn EnableMessage(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_EnableMessage(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: kmessagebox_enums.DialogType `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: KGuiItem `
    ///
    /// ` param8: []const u8 `
    ///
    /// ` param9: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn MessageBox(param1: anytype, param2: i32, param3: []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: anytype, param8: []const u8, param9: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        comptime _ = @TypeOf(param7)._is_KGuiItem;
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_MessageBox(@ptrCast(param1.ptr), @bitCast(param2), param3_str, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), param8_str, @bitCast(param9));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: *kmessagebox_enums.ButtonCode `
    ///
    pub fn ShouldBeShownTwoActions(param1: []const u8, param2: *i32) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownTwoActions(param1_str, @ptrCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn ShouldBeShownContinue(param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownContinue(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: kmessagebox_enums.ButtonCode `
    ///
    pub fn SaveDontShowAgainTwoActions(param1: []const u8, param2: i32) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainTwoActions(param1_str, @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainContinue)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SaveDontShowAgainContinue(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainContinue(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KConfig `
    ///
    pub fn SetDontShowAgainConfig(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KConfig;
        qtc.KMessageBox_SetDontShowAgainConfig(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KMessageBoxDontAskAgainInterface `
    ///
    pub fn SetDontShowAgainInterface(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KMessageBoxDontAskAgainInterface;
        qtc.KMessageBox_SetDontShowAgainInterface(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#setNotifyInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KMessageBoxNotifyInterface `
    ///
    pub fn SetNotifyInterface(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KMessageBoxNotifyInterface;
        qtc.KMessageBox_SetNotifyInterface(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QDialog `
    ///
    /// ` param2: QDialogButtonBox `
    ///
    /// ` param3: qmessagebox_enums.Icon `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: []const []const u8 `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: *bool `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ` param9: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qdialogbuttonbox_enums.StandardButton `
    ///
    pub fn CreateKMessageBox(allocator: std.mem.Allocator, param1: anytype, param2: anytype, param3: i32, param4: []const u8, param5: []const []const u8, param6: []const u8, param7: *bool, param8: i32, param9: []const u8) i32 {
        comptime _ = @TypeOf(param1)._is_QDialog;
        comptime _ = @TypeOf(param2)._is_QDialogButtonBox;
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param5_arr = allocator.alloc(qtc.libqt_string, param5.len) catch @panic("kmessagebox.CreateKMessageBox: Memory allocation failed");
        defer allocator.free(param5_arr);
        for (param5, 0..param5.len) |item, i|
            param5_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param5_list = qtc.libqt_list{
            .len = param5.len,
            .data = param5_arr.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        const param9_str = qtc.libqt_string{
            .len = param9.len,
            .data = param9.ptr,
        };
        return qtc.KMessageBox_CreateKMessageBox(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3), param4_str, param5_list, param6_str, @ptrCast(param7), @bitCast(param8), param9_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QDialog `
    ///
    /// ` param2: QDialogButtonBox `
    ///
    /// ` param3: QIcon `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: []const []const u8 `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: *bool `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ` param9: []const u8 `
    ///
    /// ` param10: qmessagebox_enums.Icon `
    ///
    /// ## Returns:
    ///
    /// ` qdialogbuttonbox_enums.StandardButton `
    ///
    pub fn CreateKMessageBox2(allocator: std.mem.Allocator, param1: anytype, param2: anytype, param3: anytype, param4: []const u8, param5: []const []const u8, param6: []const u8, param7: *bool, param8: i32, param9: []const u8, param10: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QDialog;
        comptime _ = @TypeOf(param2)._is_QDialogButtonBox;
        comptime _ = @TypeOf(param3)._is_QIcon;
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param5_arr = allocator.alloc(qtc.libqt_string, param5.len) catch @panic("kmessagebox.CreateKMessageBox2: Memory allocation failed");
        defer allocator.free(param5_arr);
        for (param5, 0..param5.len) |item, i|
            param5_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param5_list = qtc.libqt_list{
            .len = param5.len,
            .data = param5_arr.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        const param9_str = qtc.libqt_string{
            .len = param9.len,
            .data = param9.ptr,
        };
        return qtc.KMessageBox_CreateKMessageBox2(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @ptrCast(param3.ptr), param4_str, param5_list, param6_str, @ptrCast(param7), @bitCast(param8), param9_str, @bitCast(param10));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsWId(param1: usize, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsWId(@bitCast(param1), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancelWId(@bitCast(param1), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn QuestionTwoActionsListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.QuestionTwoActionsListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsListWId(@bitCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsWId(param1: usize, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsWId(@bitCast(param1), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsListWId(@bitCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: []const u8 `
    ///
    /// ` param7: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelWId(@bitCast(param1), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), param6_str, @bitCast(param7));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningContinueCancelListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningContinueCancelListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelListWId(@bitCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: KGuiItem `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: []const u8 `
    ///
    /// ` param8: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: anytype, param5: anytype, param6: anytype, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        comptime _ = @TypeOf(param4)._is_KGuiItem;
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelWId(@bitCast(param1), param2_str, param3_str, @ptrCast(param4.ptr), @ptrCast(param5.ptr), @ptrCast(param6.ptr), param7_str, @bitCast(param8));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: KGuiItem `
    ///
    /// ` param8: []const u8 `
    ///
    /// ` param9: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn WarningTwoActionsCancelListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: anytype, param8: []const u8, param9: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsCancelListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        comptime _ = @TypeOf(param7)._is_KGuiItem;
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelListWId(@bitCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), param8_str, @bitCast(param9));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorWId(param1: usize, param2: []const u8, param3: []const u8, param4: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.KMessageBox_ErrorWId(@bitCast(param1), param2_str, param3_str, @bitCast(param4));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#errorListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn ErrorListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.ErrorListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_ErrorListWId(@bitCast(param1), param2_str, param3_list, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedErrorWId(param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_DetailedErrorWId(@bitCast(param1), param2_str, param3_str, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: flag of kmessagebox_enums.Option `
    ///
    pub fn DetailedErrorWId2(param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: anytype, param6: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        qtc.KMessageBox_DetailedErrorWId2(@bitCast(param1), param2_str, param3_str, param4_str, @ptrCast(param5.ptr), @bitCast(param6));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationWId(param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_InformationWId(@bitCast(param1), param2_str, param3_str, param4_str, @bitCast(param5));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#informationListWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: []const u8 `
    ///
    /// ` param6: flag of kmessagebox_enums.Option `
    ///
    pub fn InformationListWId(allocator: std.mem.Allocator, param1: usize, param2: []const u8, param3: []const []const u8, param4: []const u8, param5: []const u8, param6: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.InformationListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i|
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param5_str = qtc.libqt_string{
            .len = param5.len,
            .data = param5.ptr,
        };
        qtc.KMessageBox_InformationListWId(@bitCast(param1), param2_str, param3_list, param4_str, param5_str, @bitCast(param6));
    }

    /// ### [Upstream resources](https://api.kde.org/kmessagebox.html#messageBoxWId)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    /// ` param2: kmessagebox_enums.DialogType `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ` param5: KGuiItem `
    ///
    /// ` param6: KGuiItem `
    ///
    /// ` param7: KGuiItem `
    ///
    /// ` param8: []const u8 `
    ///
    /// ` param9: flag of kmessagebox_enums.Option `
    ///
    /// ## Returns:
    ///
    /// ` kmessagebox_enums.ButtonCode `
    ///
    pub fn MessageBoxWId(param1: usize, param2: i32, param3: []const u8, param4: []const u8, param5: anytype, param6: anytype, param7: anytype, param8: []const u8, param9: i32) i32 {
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        comptime _ = @TypeOf(param5)._is_KGuiItem;
        comptime _ = @TypeOf(param6)._is_KGuiItem;
        comptime _ = @TypeOf(param7)._is_KGuiItem;
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_MessageBoxWId(@bitCast(param1), @bitCast(param2), param3_str, param4_str, @ptrCast(param5.ptr), @ptrCast(param6.ptr), @ptrCast(param7.ptr), param8_str, @bitCast(param9));
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
