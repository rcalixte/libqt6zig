const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kmessagebox_enums = enums;
const qdialogbuttonbox_enums = @import("../libqdialogbuttonbox.zig").enums;
const qmessagebox_enums = @import("../libqmessagebox.zig").enums;
const std = @import("std");

/// https://api.kde.org/kmessagebox.html
pub const kmessagebox = struct {
    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActions)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActions(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActions(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActionsCancel)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActionsCancel(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancel(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActionsList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActionsList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.QuestionTwoActionsList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsList(@ptrCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActions)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActions(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningTwoActions(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsList(@ptrCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningContinueCancel)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningContinueCancel(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancel(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningContinueCancelDetailed)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option, param8: []const u8 ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningContinueCancelDetailed(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32, param8: []const u8) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelDetailed(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7), param8_str);
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningContinueCancelList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningContinueCancelList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningContinueCancelList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelList(@ptrCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsCancel)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsCancel(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancel(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: QtC.KGuiItem, param8: []const u8, param9: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsCancelList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: []const u8, param9: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsCancelList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelList(@ptrCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), param8_str, @intCast(param9));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: flag of kmessagebox_enums.Option ```
    pub fn Error(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.KMessageBox_Error(@ptrCast(param1), param2_str, param3_str, @intCast(param4));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#error)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: flag of kmessagebox_enums.Option ```
    pub fn Error2(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.KMessageBox_Error2(@ptrCast(param1), param2_str, param3_str, @ptrCast(param4), @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#errorList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    pub fn ErrorList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: i32, allocator: std.mem.Allocator) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.ErrorList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_ErrorList(@ptrCast(param1), param2_str, param3_list, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option ```
    pub fn DetailedError(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
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
        qtc.KMessageBox_DetailedError(@ptrCast(param1), param2_str, param3_str, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#detailedError)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: []const u8, param5: QtC.KGuiItem, param6: flag of kmessagebox_enums.Option ```
    pub fn DetailedError2(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: []const u8, param5: ?*anyopaque, param6: i32) void {
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
        qtc.KMessageBox_DetailedError2(@ptrCast(param1), param2_str, param3_str, param4_str, @ptrCast(param5), @intCast(param6));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#information)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: []const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option ```
    pub fn Information(param1: ?*anyopaque, param2: []const u8, param3: []const u8, param4: []const u8, param5: i32) void {
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
        qtc.KMessageBox_Information(@ptrCast(param1), param2_str, param3_str, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#informationList)
    ///
    /// ``` param1: QtC.QWidget, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: []const u8, param6: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    pub fn InformationList(param1: ?*anyopaque, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: []const u8, param6: i32, allocator: std.mem.Allocator) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.InformationList: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
        qtc.KMessageBox_InformationList(@ptrCast(param1), param2_str, param3_list, param4_str, param5_str, @intCast(param6));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#enableAllMessages)
    ///
    ///
    pub fn EnableAllMessages() void {
        qtc.KMessageBox_EnableAllMessages();
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#enableMessage)
    ///
    /// ``` param1: []const u8 ```
    pub fn EnableMessage(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_EnableMessage(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#messageBox)
    ///
    /// ``` param1: QtC.QWidget, param2: kmessagebox_enums.DialogType, param3: []const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: QtC.KGuiItem, param8: []const u8, param9: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn MessageBox(param1: ?*anyopaque, param2: i32, param3: []const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: []const u8, param9: i32) i32 {
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_MessageBox(@ptrCast(param1), @intCast(param2), param3_str, param4_str, @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), param8_str, @intCast(param9));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#shouldBeShownTwoActions)
    ///
    /// ``` param1: []const u8, param2: *kmessagebox_enums.ButtonCode ```
    pub fn ShouldBeShownTwoActions(param1: []const u8, param2: *i32) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownTwoActions(param1_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#shouldBeShownContinue)
    ///
    /// ``` param1: []const u8 ```
    pub fn ShouldBeShownContinue(param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KMessageBox_ShouldBeShownContinue(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
    ///
    /// ``` param1: []const u8, param2: kmessagebox_enums.ButtonCode ```
    pub fn SaveDontShowAgainTwoActions(param1: []const u8, param2: i32) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainTwoActions(param1_str, @intCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#saveDontShowAgainContinue)
    ///
    /// ``` param1: []const u8 ```
    pub fn SaveDontShowAgainContinue(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KMessageBox_SaveDontShowAgainContinue(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#setDontShowAgainConfig)
    ///
    /// ``` param1: QtC.KConfig ```
    pub fn SetDontShowAgainConfig(param1: ?*anyopaque) void {
        qtc.KMessageBox_SetDontShowAgainConfig(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#setDontShowAgainInterface)
    ///
    /// ``` param1: QtC.KMessageBoxDontAskAgainInterface ```
    pub fn SetDontShowAgainInterface(param1: ?*anyopaque) void {
        qtc.KMessageBox_SetDontShowAgainInterface(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#setNotifyInterface)
    ///
    /// ``` param1: QtC.KMessageBoxNotifyInterface ```
    pub fn SetNotifyInterface(param1: ?*anyopaque) void {
        qtc.KMessageBox_SetNotifyInterface(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ``` param1: QtC.QDialog, param2: QtC.QDialogButtonBox, param3: qmessagebox_enums.Icon, param4: []const u8, param5: [][]const u8, param6: []const u8, param7: *bool, param8: flag of kmessagebox_enums.Option, param9: []const u8, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` qdialogbuttonbox_enums.StandardButton ```
    pub fn CreateKMessageBox(param1: ?*anyopaque, param2: ?*anyopaque, param3: i32, param4: []const u8, param5: [][]const u8, param6: []const u8, param7: *bool, param8: i32, param9: []const u8, allocator: std.mem.Allocator) i32 {
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        var param5_arr = allocator.alloc(qtc.libqt_string, param5.len) catch @panic("kmessagebox.CreateKMessageBox: Memory allocation failed");
        defer allocator.free(param5_arr);
        for (param5, 0..param5.len) |item, i| {
            param5_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
        return qtc.KMessageBox_CreateKMessageBox(@ptrCast(param1), @ptrCast(param2), @intCast(param3), param4_str, param5_list, param6_str, @ptrCast(param7), @intCast(param8), param9_str);
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#createKMessageBox)
    ///
    /// ``` param1: QtC.QDialog, param2: QtC.QDialogButtonBox, param3: QtC.QIcon, param4: []const u8, param5: [][]const u8, param6: []const u8, param7: *bool, param8: flag of kmessagebox_enums.Option, param9: []const u8, param10: qmessagebox_enums.Icon, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` qdialogbuttonbox_enums.StandardButton ```
    pub fn CreateKMessageBox2(param1: ?*anyopaque, param2: ?*anyopaque, param3: ?*anyopaque, param4: []const u8, param5: [][]const u8, param6: []const u8, param7: *bool, param8: i32, param9: []const u8, param10: i32, allocator: std.mem.Allocator) i32 {
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        var param5_arr = allocator.alloc(qtc.libqt_string, param5.len) catch @panic("kmessagebox.CreateKMessageBox2: Memory allocation failed");
        defer allocator.free(param5_arr);
        for (param5, 0..param5.len) |item, i| {
            param5_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
        return qtc.KMessageBox_CreateKMessageBox2(@ptrCast(param1), @ptrCast(param2), @ptrCast(param3), param4_str, param5_list, param6_str, @ptrCast(param7), @intCast(param8), param9_str, @intCast(param10));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActionsWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActionsWId(param1: usize, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsWId(@intCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActionsCancelWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActionsCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsCancelWId(@intCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#questionTwoActionsListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn QuestionTwoActionsListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.QuestionTwoActionsListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_QuestionTwoActionsListWId(@intCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsWId(param1: usize, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsWId(@intCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsListWId(@intCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningContinueCancelWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: []const u8, param7: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningContinueCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: []const u8, param7: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param6_str = qtc.libqt_string{
            .len = param6.len,
            .data = param6.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelWId(@intCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), param6_str, @intCast(param7));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningContinueCancelListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningContinueCancelListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningContinueCancelListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningContinueCancelListWId(@intCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: QtC.KGuiItem, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: []const u8, param8: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsCancelWId(param1: usize, param2: []const u8, param3: []const u8, param4: ?*anyopaque, param5: ?*anyopaque, param6: ?*anyopaque, param7: []const u8, param8: i32) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param7_str = qtc.libqt_string{
            .len = param7.len,
            .data = param7.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelWId(@intCast(param1), param2_str, param3_str, @ptrCast(param4), @ptrCast(param5), @ptrCast(param6), param7_str, @intCast(param8));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: QtC.KGuiItem, param8: []const u8, param9: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn WarningTwoActionsCancelListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: []const u8, param9: i32, allocator: std.mem.Allocator) i32 {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.WarningTwoActionsCancelListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_WarningTwoActionsCancelListWId(@intCast(param1), param2_str, param3_list, param4_str, @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), param8_str, @intCast(param9));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#errorWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: flag of kmessagebox_enums.Option ```
    pub fn ErrorWId(param1: usize, param2: []const u8, param3: []const u8, param4: i32) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.KMessageBox_ErrorWId(@intCast(param1), param2_str, param3_str, @intCast(param4));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#errorListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    pub fn ErrorListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: i32, allocator: std.mem.Allocator) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.ErrorListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param3_list = qtc.libqt_list{
            .len = param3.len,
            .data = param3_arr.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        qtc.KMessageBox_ErrorListWId(@intCast(param1), param2_str, param3_list, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option ```
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
        qtc.KMessageBox_DetailedErrorWId(@intCast(param1), param2_str, param3_str, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#detailedErrorWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: QtC.KGuiItem, param6: flag of kmessagebox_enums.Option ```
    pub fn DetailedErrorWId2(param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: ?*anyopaque, param6: i32) void {
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
        qtc.KMessageBox_DetailedErrorWId2(@intCast(param1), param2_str, param3_str, param4_str, @ptrCast(param5), @intCast(param6));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#informationWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: []const u8, param4: []const u8, param5: flag of kmessagebox_enums.Option ```
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
        qtc.KMessageBox_InformationWId(@intCast(param1), param2_str, param3_str, param4_str, @intCast(param5));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#informationListWId)
    ///
    /// ``` param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: []const u8, param6: flag of kmessagebox_enums.Option, allocator: std.mem.Allocator ```
    pub fn InformationListWId(param1: usize, param2: []const u8, param3: [][]const u8, param4: []const u8, param5: []const u8, param6: i32, allocator: std.mem.Allocator) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var param3_arr = allocator.alloc(qtc.libqt_string, param3.len) catch @panic("kmessagebox.InformationListWId: Memory allocation failed");
        defer allocator.free(param3_arr);
        for (param3, 0..param3.len) |item, i| {
            param3_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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
        qtc.KMessageBox_InformationListWId(@intCast(param1), param2_str, param3_list, param4_str, param5_str, @intCast(param6));
    }

    /// [Qt documentation](https://api.kde.org/kmessagebox.html#messageBoxWId)
    ///
    /// ``` param1: usize, param2: kmessagebox_enums.DialogType, param3: []const u8, param4: []const u8, param5: QtC.KGuiItem, param6: QtC.KGuiItem, param7: QtC.KGuiItem, param8: []const u8, param9: flag of kmessagebox_enums.Option ```
    ///
    /// Returns: ``` kmessagebox_enums.ButtonCode ```
    pub fn MessageBoxWId(param1: usize, param2: i32, param3: []const u8, param4: []const u8, param5: ?*anyopaque, param6: ?*anyopaque, param7: ?*anyopaque, param8: []const u8, param9: i32) i32 {
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        const param8_str = qtc.libqt_string{
            .len = param8.len,
            .data = param8.ptr,
        };
        return qtc.KMessageBox_MessageBoxWId(@intCast(param1), @intCast(param2), param3_str, param4_str, @ptrCast(param5), @ptrCast(param6), @ptrCast(param7), param8_str, @intCast(param9));
    }
};

/// https://api.kde.org/kmessagebox.html#types
pub const enums = struct {
    pub const ButtonCode = enum {
        pub const Ok: i32 = 1;
        pub const Cancel: i32 = 2;
        pub const PrimaryAction: i32 = 3;
        pub const SecondaryAction: i32 = 4;
        pub const Continue: i32 = 5;
    };

    pub const DialogType = enum {
        pub const QuestionTwoActions: i32 = 1;
        pub const WarningTwoActions: i32 = 2;
        pub const WarningContinueCancel: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const Information: i32 = 5;
        pub const Error: i32 = 8;
        pub const QuestionTwoActionsCancel: i32 = 9;
    };

    pub const Option = enum {
        pub const Notify: i32 = 1;
        pub const AllowLink: i32 = 2;
        pub const Dangerous: i32 = 4;
        pub const NoExec: i32 = 16;
        pub const WindowModal: i32 = 32;
        pub const PlainText: i32 = 64;
    };
};
