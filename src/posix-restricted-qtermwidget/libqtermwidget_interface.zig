const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtermwidget_interface_enums = enums;
const std = @import("std");

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const qtermwidgetinterface = struct {
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, enabled: bool ```
    pub fn SetTerminalSizeHint(self: ?*anyopaque, enabled: bool) void {
        qtc.QTermWidgetInterface_SetTerminalSizeHint(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn TerminalSizeHint(self: ?*anyopaque) bool {
        return qtc.QTermWidgetInterface_TerminalSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn StartShellProgram(self: ?*anyopaque) void {
        qtc.QTermWidgetInterface_StartShellProgram(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn StartTerminalTeletype(self: ?*anyopaque) void {
        qtc.QTermWidgetInterface_StartTerminalTeletype(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn GetShellPID(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_GetShellPID(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn GetForegroundProcessId(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_GetForegroundProcessId(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, dir: []const u8 ```
    pub fn ChangeDir(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_ChangeDir(@ptrCast(self), dir_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, font: QtC.QFont ```
    pub fn SetTerminalFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QTermWidgetInterface_SetTerminalFont(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn GetTerminalFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QTermWidgetInterface_GetTerminalFont(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, level: f64 ```
    pub fn SetTerminalOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QTermWidgetInterface_SetTerminalOpacity(@ptrCast(self), @floatCast(level));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, backgroundImage: []const u8 ```
    pub fn SetTerminalBackgroundImage(self: ?*anyopaque, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidgetInterface_SetTerminalBackgroundImage(@ptrCast(self), backgroundImage_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, mode: i32 ```
    pub fn SetTerminalBackgroundMode(self: ?*anyopaque, mode: i32) void {
        qtc.QTermWidgetInterface_SetTerminalBackgroundMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, environment: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetEnvironment(self: ?*anyopaque, environment: [][]const u8, allocator: std.mem.Allocator) void {
        var environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("qtermwidgetinterface.SetEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, i| {
            environment_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const environment_list = qtc.libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetEnvironment(@ptrCast(self), environment_list);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, program: []const u8 ```
    pub fn SetShellProgram(self: ?*anyopaque, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidgetInterface_SetShellProgram(@ptrCast(self), program_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, dir: []const u8 ```
    pub fn SetWorkingDirectory(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_SetWorkingDirectory(@ptrCast(self), dir_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_WorkingDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, args: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetArgs(self: ?*anyopaque, args: [][]const u8, allocator: std.mem.Allocator) void {
        var args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("qtermwidgetinterface.SetArgs: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i| {
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetArgs(@ptrCast(self), args_list);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, name: []const u8 ```
    pub fn SetColorScheme(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidgetInterface_SetColorScheme(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn GetAvailableColorSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_GetAvailableColorSchemes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtermwidgetinterface.GetAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidgetinterface.GetAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, lines: i32 ```
    pub fn SetHistorySize(self: ?*anyopaque, lines: i32) void {
        qtc.QTermWidgetInterface_SetHistorySize(@ptrCast(self), @intCast(lines));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn HistorySize(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_HistorySize(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition ```
    pub fn SetScrollBarPosition(self: ?*anyopaque, scrollBarPosition: i32) void {
        qtc.QTermWidgetInterface_SetScrollBarPosition(@ptrCast(self), @intCast(scrollBarPosition));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn ScrollToEnd(self: ?*anyopaque) void {
        qtc.QTermWidgetInterface_ScrollToEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, text: []const u8 ```
    pub fn SendText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_SendText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, e: QtC.QKeyEvent ```
    pub fn SendKeyEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QTermWidgetInterface_SendKeyEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, enabled: bool ```
    pub fn SetFlowControlEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn FlowControlEnabled(self: ?*anyopaque) bool {
        return qtc.QTermWidgetInterface_FlowControlEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, enabled: bool ```
    pub fn SetFlowControlWarningEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlWarningEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn KeyBindings(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_KeyBindings(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, motionAfterPasting: i32 ```
    pub fn SetMotionAfterPasting(self: ?*anyopaque, motionAfterPasting: i32) void {
        qtc.QTermWidgetInterface_SetMotionAfterPasting(@ptrCast(self), @intCast(motionAfterPasting));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn HistoryLinesCount(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_HistoryLinesCount(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn ScreenColumnsCount(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_ScreenColumnsCount(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn ScreenLinesCount(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_ScreenLinesCount(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, row: i32, column: i32 ```
    pub fn SetSelectionStart(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionStart(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, row: i32, column: i32 ```
    pub fn SetSelectionEnd(self: ?*anyopaque, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionEnd(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, row: *i32, column: *i32 ```
    pub fn GetSelectionStart(self: ?*anyopaque, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionStart(@ptrCast(self), @ptrCast(row), @ptrCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, row: *i32, column: *i32 ```
    pub fn GetSelectionEnd(self: ?*anyopaque, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionEnd(@ptrCast(self), @ptrCast(row), @ptrCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, preserveLineBreaks: bool, allocator: std.mem.Allocator ```
    pub fn SelectedText(self: ?*anyopaque, preserveLineBreaks: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_SelectedText(@ptrCast(self), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, monitorActivity: bool ```
    pub fn SetMonitorActivity(self: ?*anyopaque, monitorActivity: bool) void {
        qtc.QTermWidgetInterface_SetMonitorActivity(@ptrCast(self), monitorActivity);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, monitorSilence: bool ```
    pub fn SetMonitorSilence(self: ?*anyopaque, monitorSilence: bool) void {
        qtc.QTermWidgetInterface_SetMonitorSilence(@ptrCast(self), monitorSilence);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, seconds: i32 ```
    pub fn SetSilenceTimeout(self: ?*anyopaque, seconds: i32) void {
        qtc.QTermWidgetInterface_SetSilenceTimeout(@ptrCast(self), @intCast(seconds));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, position: QtC.QPoint, allocator: std.mem.Allocator ```
    pub fn FilterActions(self: ?*anyopaque, position: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_FilterActions(@ptrCast(self), @ptrCast(position));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qtermwidgetinterface.FilterActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn GetPtySlaveFd(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_GetPtySlaveFd(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, blink: bool ```
    pub fn SetBlinkingCursor(self: ?*anyopaque, blink: bool) void {
        qtc.QTermWidgetInterface_SetBlinkingCursor(@ptrCast(self), blink);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, enabled: bool ```
    pub fn SetBidiEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QTermWidgetInterface_SetBidiEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn IsBidiEnabled(self: ?*anyopaque) bool {
        return qtc.QTermWidgetInterface_IsBidiEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, autoClose: bool ```
    pub fn SetAutoClose(self: ?*anyopaque, autoClose: bool) void {
        qtc.QTermWidgetInterface_SetAutoClose(@ptrCast(self), autoClose);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn IsTitleChanged(self: ?*anyopaque) bool {
        return qtc.QTermWidgetInterface_IsTitleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, text: []const u8 ```
    pub fn BracketText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_BracketText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, disable: bool ```
    pub fn DisableBracketedPasteMode(self: ?*anyopaque, disable: bool) void {
        qtc.QTermWidgetInterface_DisableBracketedPasteMode(@ptrCast(self), disable);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn BracketedPasteModeIsDisabled(self: ?*anyopaque) bool {
        return qtc.QTermWidgetInterface_BracketedPasteModeIsDisabled(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, margin: i32 ```
    pub fn SetMargin(self: ?*anyopaque, margin: i32) void {
        qtc.QTermWidgetInterface_SetMargin(@ptrCast(self), @intCast(margin));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn GetMargin(self: ?*anyopaque) i32 {
        return qtc.QTermWidgetInterface_GetMargin(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, drawLineChars: bool ```
    pub fn SetDrawLineChars(self: ?*anyopaque, drawLineChars: bool) void {
        qtc.QTermWidgetInterface_SetDrawLineChars(@ptrCast(self), drawLineChars);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, boldIntense: bool ```
    pub fn SetBoldIntense(self: ?*anyopaque, boldIntense: bool) void {
        qtc.QTermWidgetInterface_SetBoldIntense(@ptrCast(self), boldIntense);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, confirmMultilinePaste: bool ```
    pub fn SetConfirmMultilinePaste(self: ?*anyopaque, confirmMultilinePaste: bool) void {
        qtc.QTermWidgetInterface_SetConfirmMultilinePaste(@ptrCast(self), confirmMultilinePaste);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, trimPastedTrailingNewlines: bool ```
    pub fn SetTrimPastedTrailingNewlines(self: ?*anyopaque, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidgetInterface_SetTrimPastedTrailingNewlines(@ptrCast(self), trimPastedTrailingNewlines);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, allocator: std.mem.Allocator ```
    pub fn WordCharacters(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTermWidgetInterface_WordCharacters(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.WordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, chars: []const u8 ```
    pub fn SetWordCharacters(self: ?*anyopaque, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidgetInterface_SetWordCharacters(@ptrCast(self), chars_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, startnow: i32 ```
    pub fn CreateWidget(self: ?*anyopaque, startnow: i32) QtC.QTermWidgetInterface {
        return qtc.QTermWidgetInterface_CreateWidget(@ptrCast(self), @intCast(startnow));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.QTermWidgetInterface, param1: QtC.QTermWidgetInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTermWidgetInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QTermWidgetInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTermWidgetInterface_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const enums = struct {
    pub const ScrollBarPosition = enum {
        pub const NoScrollBar: i32 = 0;
        pub const ScrollBarLeft: i32 = 1;
        pub const ScrollBarRight: i32 = 2;
    };
};
