const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qeventloop_enums = @import("libqeventloop.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html)
pub const qguiapplication = struct {
    /// New constructs a new QGuiApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` argc: usize `
    ///
    /// ` argv: [*][*:0]u8 `
    ///
    pub fn New(argc: usize, argv: [*][*:0]u8) QtC.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QGuiApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QGuiApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` argc: usize `
    ///
    /// ` argv: [*][*:0]u8 `
    ///
    /// ` param3: i32 `
    ///
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) QtC.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QGuiApplication_new2(&argc_param, argv_param, @intCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGuiApplication_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QGuiApplication_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGuiApplication_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGuiApplication_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetApplicationDisplayName(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` number: i64 `
    ///
    pub fn SetBadgeNumber(self: ?*anyopaque, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self), @intCast(number));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetDesktopFileName(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetDesktopFileName(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qguiapplication.AllWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qguiapplication.TopLevelWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn TopLevelAt(pos: ?*anyopaque) QtC.QWindow {
        return qtc.QGuiApplication_TopLevelAt(@ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetWindowIcon(icon: ?*anyopaque) void {
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    pub fn WindowIcon() QtC.QIcon {
        return qtc.QGuiApplication_WindowIcon();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlatformName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.PlatformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    pub fn ModalWindow() QtC.QWindow {
        return qtc.QGuiApplication_ModalWindow();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    pub fn FocusWindow() QtC.QWindow {
        return qtc.QGuiApplication_FocusWindow();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    pub fn FocusObject() QtC.QObject {
        return qtc.QGuiApplication_FocusObject();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    pub fn PrimaryScreen() QtC.QScreen {
        return qtc.QGuiApplication_PrimaryScreen();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Screens(allocator: std.mem.Allocator) []QtC.QScreen {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScreen, _arr.len) catch @panic("qguiapplication.Screens: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn ScreenAt(point: ?*anyopaque) QtC.QScreen {
        return qtc.QGuiApplication_ScreenAt(@ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    pub fn OverrideCursor() QtC.QCursor {
        return qtc.QGuiApplication_OverrideCursor();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` overrideCursor: QtC.QCursor `
    ///
    pub fn SetOverrideCursor(overrideCursor: ?*anyopaque) void {
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCursor `
    ///
    pub fn ChangeOverrideCursor(param1: ?*anyopaque) void {
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#font)
    ///
    pub fn Font() QtC.QFont {
        return qtc.QGuiApplication_Font();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetFont(font: ?*anyopaque) void {
        qtc.QGuiApplication_SetFont(@ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    pub fn Clipboard() QtC.QClipboard {
        return qtc.QGuiApplication_Clipboard();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#palette)
    ///
    pub fn Palette() QtC.QPalette {
        return qtc.QGuiApplication_Palette();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` pal: QtC.QPalette `
    ///
    pub fn SetPalette(pal: ?*anyopaque) void {
        qtc.QGuiApplication_SetPalette(@ptrCast(pal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers() i32 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn QueryKeyboardModifiers() i32 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons() i32 {
        return qtc.QGuiApplication_MouseButtons();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(direction: i32) void {
        qtc.QGuiApplication_SetLayoutDirection(@intCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection() i32 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    pub fn IsRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    pub fn IsLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    pub fn StyleHints() QtC.QStyleHints {
        return qtc.QGuiApplication_StyleHints();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` on: bool `
    ///
    pub fn SetDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    pub fn DesktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    pub fn InputMethod() QtC.QInputMethod {
        return qtc.QGuiApplication_InputMethod();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` quit: bool `
    ///
    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    pub fn QuitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationState() i32 {
        return qtc.QGuiApplication_ApplicationState();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i32) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@intCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn HighDpiScaleFactorRoundingPolicy() i32 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#exec)
    ///
    pub fn Exec() i32 {
        return qtc.QGuiApplication_Exec();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    /// ` param2: QtC.QEvent `
    ///
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn IsSessionRestored(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn IsSavingSession(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    pub fn Sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn FontDatabaseChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnFontDatabaseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn ScreenAdded(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self), @ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void `
    ///
    pub fn OnScreenAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn ScreenRemoved(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self), @ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void `
    ///
    pub fn OnScreenRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` screen: QtC.QScreen `
    ///
    pub fn PrimaryScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void `
    ///
    pub fn OnPrimaryScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn LastWindowClosed(self: ?*anyopaque) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnLastWindowClosed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` focusObject: QtC.QObject `
    ///
    pub fn FocusObjectChanged(self: ?*anyopaque, focusObject: ?*anyopaque) void {
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self), @ptrCast(focusObject));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, focusObject: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnFocusObjectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` focusWindow: QtC.QWindow `
    ///
    pub fn FocusWindowChanged(self: ?*anyopaque, focusWindow: ?*anyopaque) void {
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self), @ptrCast(focusWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, focusWindow: QtC.QWindow) callconv(.c) void `
    ///
    pub fn OnFocusWindowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void `
    ///
    pub fn OnApplicationStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirectionChanged(self: ?*anyopaque, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self), @intCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn OnLayoutDirectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` sessionManager: QtC.QSessionManager `
    ///
    pub fn CommitDataRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void `
    ///
    pub fn OnCommitDataRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` sessionManager: QtC.QSessionManager `
    ///
    pub fn SaveStateRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void `
    ///
    pub fn OnSaveStateRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn ApplicationDisplayNameChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationDisplayNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` pal: QtC.QPalette `
    ///
    pub fn PaletteChanged(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self), @ptrCast(pal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, pal: QtC.QPalette) callconv(.c) void `
    ///
    pub fn OnPaletteChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn FontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGuiApplication_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, font: QtC.QFont) callconv(.c) void `
    ///
    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, param1: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_Arguments();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qguiapplication.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qguiapplication.Arguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn SetAttribute(attribute: i32) void {
        qtc.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn TestAttribute(attribute: i32) bool {
        return qtc.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgDomain: []const u8 `
    ///
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgName: []const u8 `
    ///
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` application: []const u8 `
    ///
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` allow: bool `
    ///
    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` maxtime: i32 `
    ///
    pub fn ProcessEvents2(flags: i32, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@intCast(flags), @intCast(maxtime));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` deadline: QtC.QDeadlineTimer `
    ///
    pub fn ProcessEvents3(flags: i32, deadline: QtC.QDeadlineTimer) void {
        qtc.QCoreApplication_ProcessEvents3(@intCast(flags), @ptrCast(deadline));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventDispatcher: QtC.QAbstractEventDispatcher `
    ///
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` permission: QtC.QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn CheckPermission(self: ?*anyopaque, permission: ?*anyopaque) i32 {
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self), @ptrCast(permission));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` libraryPaths: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetLibraryPaths(libraryPaths: [][]const u8, allocator: std.mem.Allocator) void {
        var libraryPaths_arr = allocator.alloc(qtc.libqt_string, libraryPaths.len) catch @panic("qguiapplication.SetLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, i| {
            libraryPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const libraryPaths_list = qtc.libqt_list{
            .len = libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        qtc.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LibraryPaths(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_LibraryPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qguiapplication.LibraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qguiapplication.LibraryPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QtC.QTranslator `
    ///
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QtC.QTranslator `
    ///
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate(context: [:0]const u8, key: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        var _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` filterObj: QtC.QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` filterObj: QtC.QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` enabled: bool `
    ///
    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(attribute: i32, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn ProcessEvents1(flags: i32) void {
        qtc.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` priority: i32 `
    ///
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @intCast(priority));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` event_type: i32 `
    ///
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @intCast(event_type));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` eventType: i32 `
    ///
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @intCast(eventType));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate3(context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Translate4(context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` retcode: i32 `
    ///
    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@intCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qguiapplication.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qguiapplication.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qguiapplication.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGuiApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGuiApplication_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGuiApplication_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QGuiApplication_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGuiApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGuiApplication_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QGuiApplication_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGuiApplication_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication`
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication) callconv(.c) void `
    ///
    pub fn OnAboutToQuit(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    /// ` callback: *const fn (self: QtC.QGuiApplication, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#dtor.QGuiApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGuiApplication `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGuiApplication_Delete(@ptrCast(self));
    }
};
