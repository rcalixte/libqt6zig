const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QFont = @import("libqt6").QFont;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QPoint = @import("libqt6").QPoint;
const qtermwidget_interface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const QTermWidgetInterface = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTermWidgetInterface,

    pub const _is_QTermWidgetInterface = {};

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTerminalSizeHint(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn TerminalSizeHint(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_TerminalSizeHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn StartShellProgram(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_StartShellProgram(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn StartTerminalTeletype(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_StartTerminalTeletype(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn GetShellPID(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetShellPID(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn GetForegroundProcessId(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn ChangeDir(self: QTermWidgetInterface, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_ChangeDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTerminalFont(self: QTermWidgetInterface, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTermWidgetInterface_SetTerminalFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn GetTerminalFont(self: QTermWidgetInterface) QFont {
        return .{ .ptr = qtc.QTermWidgetInterface_GetTerminalFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` level: f64 `
    ///
    pub fn SetTerminalOpacity(self: QTermWidgetInterface, level: f64) void {
        qtc.QTermWidgetInterface_SetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` backgroundImage: []const u8 `
    ///
    pub fn SetTerminalBackgroundImage(self: QTermWidgetInterface, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidgetInterface_SetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` mode: i32 `
    ///
    pub fn SetTerminalBackgroundMode(self: QTermWidgetInterface, mode: i32) void {
        qtc.QTermWidgetInterface_SetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` environment: []const []const u8 `
    ///
    pub fn SetEnvironment(self: QTermWidgetInterface, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("qtermwidgetinterface.SetEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |item, i|
            environment_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const environment_list = qtc.libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` program: []const u8 `
    ///
    pub fn SetShellProgram(self: QTermWidgetInterface, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidgetInterface_SetShellProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: QTermWidgetInterface, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn SetArgs(self: QTermWidgetInterface, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("qtermwidgetinterface.SetArgs: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |item, i|
            args_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetArgs(@ptrCast(self.ptr), args_list);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetColorScheme(self: QTermWidgetInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidgetInterface_SetColorScheme(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetAvailableColorSchemes(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_GetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` lines: i32 `
    ///
    pub fn SetHistorySize(self: QTermWidgetInterface, lines: i32) void {
        qtc.QTermWidgetInterface_SetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn HistorySize(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_HistorySize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition `
    ///
    pub fn SetScrollBarPosition(self: QTermWidgetInterface, scrollBarPosition: i32) void {
        qtc.QTermWidgetInterface_SetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn ScrollToEnd(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_ScrollToEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SendText(self: QTermWidgetInterface, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_SendText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SendKeyEvent(self: QTermWidgetInterface, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidgetInterface_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlowControlEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn FlowControlEnabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_FlowControlEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlowControlWarningEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyBindings(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` motionAfterPasting: i32 `
    ///
    pub fn SetMotionAfterPasting(self: QTermWidgetInterface, motionAfterPasting: i32) void {
        qtc.QTermWidgetInterface_SetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn HistoryLinesCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_HistoryLinesCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn ScreenColumnsCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_ScreenColumnsCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn ScreenLinesCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_ScreenLinesCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetSelectionStart(self: QTermWidgetInterface, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SetSelectionEnd(self: QTermWidgetInterface, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn GetSelectionStart(self: QTermWidgetInterface, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn GetSelectionEnd(self: QTermWidgetInterface, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` preserveLineBreaks: bool `
    ///
    pub fn SelectedText(self: QTermWidgetInterface, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidgetInterface_SelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` monitorActivity: bool `
    ///
    pub fn SetMonitorActivity(self: QTermWidgetInterface, monitorActivity: bool) void {
        qtc.QTermWidgetInterface_SetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` monitorSilence: bool `
    ///
    pub fn SetMonitorSilence(self: QTermWidgetInterface, monitorSilence: bool) void {
        qtc.QTermWidgetInterface_SetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` seconds: i32 `
    ///
    pub fn SetSilenceTimeout(self: QTermWidgetInterface, seconds: i32) void {
        qtc.QTermWidgetInterface_SetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` position: QPoint `
    ///
    pub fn FilterActions(self: QTermWidgetInterface, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_FilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtermwidgetinterface.FilterActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn GetPtySlaveFd(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetPtySlaveFd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` blink: bool `
    ///
    pub fn SetBlinkingCursor(self: QTermWidgetInterface, blink: bool) void {
        qtc.QTermWidgetInterface_SetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetBidiEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn IsBidiEnabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_IsBidiEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` autoClose: bool `
    ///
    pub fn SetAutoClose(self: QTermWidgetInterface, autoClose: bool) void {
        qtc.QTermWidgetInterface_SetAutoClose(@ptrCast(self.ptr), autoClose);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn IsTitleChanged(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_IsTitleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BracketText(self: QTermWidgetInterface, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_BracketText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` disable: bool `
    ///
    pub fn DisableBracketedPasteMode(self: QTermWidgetInterface, disable: bool) void {
        qtc.QTermWidgetInterface_DisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn BracketedPasteModeIsDisabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_BracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetMargin(self: QTermWidgetInterface, margin: i32) void {
        qtc.QTermWidgetInterface_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn GetMargin(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` drawLineChars: bool `
    ///
    pub fn SetDrawLineChars(self: QTermWidgetInterface, drawLineChars: bool) void {
        qtc.QTermWidgetInterface_SetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` boldIntense: bool `
    ///
    pub fn SetBoldIntense(self: QTermWidgetInterface, boldIntense: bool) void {
        qtc.QTermWidgetInterface_SetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` confirmMultilinePaste: bool `
    ///
    pub fn SetConfirmMultilinePaste(self: QTermWidgetInterface, confirmMultilinePaste: bool) void {
        qtc.QTermWidgetInterface_SetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` trimPastedTrailingNewlines: bool `
    ///
    pub fn SetTrimPastedTrailingNewlines(self: QTermWidgetInterface, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidgetInterface_SetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WordCharacters(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_WordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidgetinterface.WordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` chars: []const u8 `
    ///
    pub fn SetWordCharacters(self: QTermWidgetInterface, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidgetInterface_SetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` startnow: i32 `
    ///
    pub fn CreateWidget(self: QTermWidgetInterface, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidgetInterface_CreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` param1: QTermWidgetInterface `
    ///
    pub fn OperatorAssign(self: QTermWidgetInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTermWidgetInterface;
        qtc.QTermWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn Delete(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const ScrollBarPosition = enum(i32) {
        pub const NoScrollBar: i32 = 0;
        pub const ScrollBarLeft: i32 = 1;
        pub const ScrollBarRight: i32 = 2;
    };
};
