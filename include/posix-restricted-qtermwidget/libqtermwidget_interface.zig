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

    /// ### DEPRECATED: Use `setTerminalSizeHint` instead
    ///
    pub const SetTerminalSizeHint = setTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTerminalSizeHint(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `terminalSizeHint` instead
    ///
    pub const TerminalSizeHint = terminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn terminalSizeHint(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_TerminalSizeHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startShellProgram` instead
    ///
    pub const StartShellProgram = startShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn startShellProgram(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_StartShellProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTerminalTeletype` instead
    ///
    pub const StartTerminalTeletype = startTerminalTeletype;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn startTerminalTeletype(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_StartTerminalTeletype(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getShellPID` instead
    ///
    pub const GetShellPID = getShellPID;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn getShellPID(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetShellPID(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getForegroundProcessId` instead
    ///
    pub const GetForegroundProcessId = getForegroundProcessId;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn getForegroundProcessId(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `changeDir` instead
    ///
    pub const ChangeDir = changeDir;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn changeDir(self: QTermWidgetInterface, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_ChangeDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `setTerminalFont` instead
    ///
    pub const SetTerminalFont = setTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` font: QFont `
    ///
    pub fn setTerminalFont(self: QTermWidgetInterface, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTermWidgetInterface_SetTerminalFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `getTerminalFont` instead
    ///
    pub const GetTerminalFont = getTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn getTerminalFont(self: QTermWidgetInterface) QFont {
        return .{ .ptr = qtc.QTermWidgetInterface_GetTerminalFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTerminalOpacity` instead
    ///
    pub const SetTerminalOpacity = setTerminalOpacity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` level: f64 `
    ///
    pub fn setTerminalOpacity(self: QTermWidgetInterface, level: f64) void {
        qtc.QTermWidgetInterface_SetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `setTerminalBackgroundImage` instead
    ///
    pub const SetTerminalBackgroundImage = setTerminalBackgroundImage;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` backgroundImage: []const u8 `
    ///
    pub fn setTerminalBackgroundImage(self: QTermWidgetInterface, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidgetInterface_SetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

    /// ### DEPRECATED: Use `setTerminalBackgroundMode` instead
    ///
    pub const SetTerminalBackgroundMode = setTerminalBackgroundMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` mode: i32 `
    ///
    pub fn setTerminalBackgroundMode(self: QTermWidgetInterface, mode: i32) void {
        qtc.QTermWidgetInterface_SetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setEnvironment` instead
    ///
    pub const SetEnvironment = setEnvironment;

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
    pub fn setEnvironment(self: QTermWidgetInterface, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("QTermWidgetInterface.setEnvironment: Memory allocation failed");
        defer allocator.free(environment_arr);
        for (environment, 0..environment.len) |str_item, i|
            environment_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const environment_list = qtc.libqt_list{
            .len = environment.len,
            .data = environment_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### DEPRECATED: Use `setShellProgram` instead
    ///
    pub const SetShellProgram = setShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` program: []const u8 `
    ///
    pub fn setShellProgram(self: QTermWidgetInterface, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidgetInterface_SetShellProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn setWorkingDirectory(self: QTermWidgetInterface, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidgetInterface_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setArgs` instead
    ///
    pub const SetArgs = setArgs;

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
    pub fn setArgs(self: QTermWidgetInterface, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("QTermWidgetInterface.setArgs: Memory allocation failed");
        defer allocator.free(args_arr);
        for (args, 0..args.len) |str_item, i|
            args_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = args_arr.ptr,
        };
        qtc.QTermWidgetInterface_SetArgs(@ptrCast(self.ptr), args_list);
    }

    /// ### DEPRECATED: Use `setColorScheme` instead
    ///
    pub const SetColorScheme = setColorScheme;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setColorScheme(self: QTermWidgetInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidgetInterface_SetColorScheme(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `getAvailableColorSchemes` instead
    ///
    pub const GetAvailableColorSchemes = getAvailableColorSchemes;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getAvailableColorSchemes(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_GetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTermWidgetInterface.getAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidgetInterface.getAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setHistorySize` instead
    ///
    pub const SetHistorySize = setHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` lines: i32 `
    ///
    pub fn setHistorySize(self: QTermWidgetInterface, lines: i32) void {
        qtc.QTermWidgetInterface_SetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

    /// ### DEPRECATED: Use `historySize` instead
    ///
    pub const HistorySize = historySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn historySize(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_HistorySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScrollBarPosition` instead
    ///
    pub const SetScrollBarPosition = setScrollBarPosition;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition `
    ///
    pub fn setScrollBarPosition(self: QTermWidgetInterface, scrollBarPosition: i32) void {
        qtc.QTermWidgetInterface_SetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

    /// ### DEPRECATED: Use `scrollToEnd` instead
    ///
    pub const ScrollToEnd = scrollToEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn scrollToEnd(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_ScrollToEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sendText` instead
    ///
    pub const SendText = sendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn sendText(self: QTermWidgetInterface, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_SendText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `sendKeyEvent` instead
    ///
    pub const SendKeyEvent = sendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn sendKeyEvent(self: QTermWidgetInterface, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidgetInterface_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `setFlowControlEnabled` instead
    ///
    pub const SetFlowControlEnabled = setFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlowControlEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `flowControlEnabled` instead
    ///
    pub const FlowControlEnabled = flowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn flowControlEnabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_FlowControlEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlowControlWarningEnabled` instead
    ///
    pub const SetFlowControlWarningEnabled = setFlowControlWarningEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlowControlWarningEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `keyBindings` instead
    ///
    pub const KeyBindings = keyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyBindings(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.keyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMotionAfterPasting` instead
    ///
    pub const SetMotionAfterPasting = setMotionAfterPasting;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` motionAfterPasting: i32 `
    ///
    pub fn setMotionAfterPasting(self: QTermWidgetInterface, motionAfterPasting: i32) void {
        qtc.QTermWidgetInterface_SetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

    /// ### DEPRECATED: Use `historyLinesCount` instead
    ///
    pub const HistoryLinesCount = historyLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn historyLinesCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_HistoryLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenColumnsCount` instead
    ///
    pub const ScreenColumnsCount = screenColumnsCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn screenColumnsCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_ScreenColumnsCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenLinesCount` instead
    ///
    pub const ScreenLinesCount = screenLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn screenLinesCount(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_ScreenLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionStart` instead
    ///
    pub const SetSelectionStart = setSelectionStart;

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
    pub fn setSelectionStart(self: QTermWidgetInterface, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setSelectionEnd` instead
    ///
    pub const SetSelectionEnd = setSelectionEnd;

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
    pub fn setSelectionEnd(self: QTermWidgetInterface, row: i32, column: i32) void {
        qtc.QTermWidgetInterface_SetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `getSelectionStart` instead
    ///
    pub const GetSelectionStart = getSelectionStart;

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
    pub fn getSelectionStart(self: QTermWidgetInterface, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `getSelectionEnd` instead
    ///
    pub const GetSelectionEnd = getSelectionEnd;

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
    pub fn getSelectionEnd(self: QTermWidgetInterface, row: *i32, column: *i32) void {
        qtc.QTermWidgetInterface_GetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

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
    pub fn selectedText(self: QTermWidgetInterface, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidgetInterface_SelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMonitorActivity` instead
    ///
    pub const SetMonitorActivity = setMonitorActivity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` monitorActivity: bool `
    ///
    pub fn setMonitorActivity(self: QTermWidgetInterface, monitorActivity: bool) void {
        qtc.QTermWidgetInterface_SetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

    /// ### DEPRECATED: Use `setMonitorSilence` instead
    ///
    pub const SetMonitorSilence = setMonitorSilence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` monitorSilence: bool `
    ///
    pub fn setMonitorSilence(self: QTermWidgetInterface, monitorSilence: bool) void {
        qtc.QTermWidgetInterface_SetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

    /// ### DEPRECATED: Use `setSilenceTimeout` instead
    ///
    pub const SetSilenceTimeout = setSilenceTimeout;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` seconds: i32 `
    ///
    pub fn setSilenceTimeout(self: QTermWidgetInterface, seconds: i32) void {
        qtc.QTermWidgetInterface_SetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### DEPRECATED: Use `filterActions` instead
    ///
    pub const FilterActions = filterActions;

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
    pub fn filterActions(self: QTermWidgetInterface, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidgetInterface_FilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTermWidgetInterface.filterActions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `getPtySlaveFd` instead
    ///
    pub const GetPtySlaveFd = getPtySlaveFd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn getPtySlaveFd(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetPtySlaveFd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlinkingCursor` instead
    ///
    pub const SetBlinkingCursor = setBlinkingCursor;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` blink: bool `
    ///
    pub fn setBlinkingCursor(self: QTermWidgetInterface, blink: bool) void {
        qtc.QTermWidgetInterface_SetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

    /// ### DEPRECATED: Use `setBidiEnabled` instead
    ///
    pub const SetBidiEnabled = setBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` enabled: bool `
    ///
    pub fn setBidiEnabled(self: QTermWidgetInterface, enabled: bool) void {
        qtc.QTermWidgetInterface_SetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isBidiEnabled` instead
    ///
    pub const IsBidiEnabled = isBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn isBidiEnabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_IsBidiEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoClose` instead
    ///
    pub const SetAutoClose = setAutoClose;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` autoClose: bool `
    ///
    pub fn setAutoClose(self: QTermWidgetInterface, autoClose: bool) void {
        qtc.QTermWidgetInterface_SetAutoClose(@ptrCast(self.ptr), autoClose);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isTitleChanged` instead
    ///
    pub const IsTitleChanged = isTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn isTitleChanged(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_IsTitleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bracketText` instead
    ///
    pub const BracketText = bracketText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` text: []const u8 `
    ///
    pub fn bracketText(self: QTermWidgetInterface, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidgetInterface_BracketText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `disableBracketedPasteMode` instead
    ///
    pub const DisableBracketedPasteMode = disableBracketedPasteMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` disable: bool `
    ///
    pub fn disableBracketedPasteMode(self: QTermWidgetInterface, disable: bool) void {
        qtc.QTermWidgetInterface_DisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

    /// ### DEPRECATED: Use `bracketedPasteModeIsDisabled` instead
    ///
    pub const BracketedPasteModeIsDisabled = bracketedPasteModeIsDisabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn bracketedPasteModeIsDisabled(self: QTermWidgetInterface) bool {
        return qtc.QTermWidgetInterface_BracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` margin: i32 `
    ///
    pub fn setMargin(self: QTermWidgetInterface, margin: i32) void {
        qtc.QTermWidgetInterface_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `getMargin` instead
    ///
    pub const GetMargin = getMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn getMargin(self: QTermWidgetInterface) i32 {
        return qtc.QTermWidgetInterface_GetMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDrawLineChars` instead
    ///
    pub const SetDrawLineChars = setDrawLineChars;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` drawLineChars: bool `
    ///
    pub fn setDrawLineChars(self: QTermWidgetInterface, drawLineChars: bool) void {
        qtc.QTermWidgetInterface_SetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

    /// ### DEPRECATED: Use `setBoldIntense` instead
    ///
    pub const SetBoldIntense = setBoldIntense;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` boldIntense: bool `
    ///
    pub fn setBoldIntense(self: QTermWidgetInterface, boldIntense: bool) void {
        qtc.QTermWidgetInterface_SetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

    /// ### DEPRECATED: Use `setConfirmMultilinePaste` instead
    ///
    pub const SetConfirmMultilinePaste = setConfirmMultilinePaste;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` confirmMultilinePaste: bool `
    ///
    pub fn setConfirmMultilinePaste(self: QTermWidgetInterface, confirmMultilinePaste: bool) void {
        qtc.QTermWidgetInterface_SetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

    /// ### DEPRECATED: Use `setTrimPastedTrailingNewlines` instead
    ///
    pub const SetTrimPastedTrailingNewlines = setTrimPastedTrailingNewlines;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` trimPastedTrailingNewlines: bool `
    ///
    pub fn setTrimPastedTrailingNewlines(self: QTermWidgetInterface, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidgetInterface_SetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn wordCharacters(self: QTermWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidgetInterface_WordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidgetInterface.wordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWordCharacters` instead
    ///
    pub const SetWordCharacters = setWordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` chars: []const u8 `
    ///
    pub fn setWordCharacters(self: QTermWidgetInterface, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidgetInterface_SetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` startnow: i32 `
    ///
    pub fn createWidget(self: QTermWidgetInterface, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidgetInterface_CreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidgetInterface `
    ///
    /// ` param1: QTermWidgetInterface `
    ///
    pub fn operatorAssign(self: QTermWidgetInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTermWidgetInterface;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQTermWidgetInterface")) param1.asQTermWidgetInterface() else param1;
        qtc.QTermWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1_.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTermWidgetInterface `
    ///
    pub fn delete(self: QTermWidgetInterface) void {
        qtc.QTermWidgetInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const ScrollBarPosition = enum {
        pub const NoScrollBar: i32 = 0;
        pub const ScrollBarLeft: i32 = 1;
        pub const ScrollBarRight: i32 = 2;
    };
};
