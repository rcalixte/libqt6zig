const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qguiapplication.html
pub const qguiapplication = struct {
    /// New constructs a new QGuiApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8 ```
    pub fn New(argc: usize, argv: [*][*:0]u8) QtC.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QGuiApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QGuiApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8, param3: i32 ```
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) QtC.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QGuiApplication_new2(&argc_param, argv_param, @intCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGuiApplication_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGuiApplication, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGuiApplication_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGuiApplication_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGuiApplication_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGuiApplication_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetApplicationDisplayName(name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetDesktopFileName(name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetDesktopFileName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DesktopFileName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qguiapplication.AllWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qguiapplication.TopLevelWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
    ///
    /// ``` pos: QtC.QPoint ```
    pub fn TopLevelAt(pos: ?*anyopaque) QtC.QWindow {
        return qtc.QGuiApplication_TopLevelAt(@ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ``` icon: QtC.QIcon ```
    pub fn SetWindowIcon(icon: ?*anyopaque) void {
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    ///
    pub fn WindowIcon() QtC.QIcon {
        return qtc.QGuiApplication_WindowIcon();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PlatformName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.PlatformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    ///
    pub fn ModalWindow() QtC.QWindow {
        return qtc.QGuiApplication_ModalWindow();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    ///
    pub fn FocusWindow() QtC.QWindow {
        return qtc.QGuiApplication_FocusWindow();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    ///
    pub fn FocusObject() QtC.QObject {
        return qtc.QGuiApplication_FocusObject();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    ///
    pub fn PrimaryScreen() QtC.QScreen {
        return qtc.QGuiApplication_PrimaryScreen();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Screens(allocator: std.mem.Allocator) []QtC.QScreen {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScreen, _arr.len) catch @panic("qguiapplication.Screens: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ``` point: QtC.QPoint ```
    pub fn ScreenAt(point: ?*anyopaque) QtC.QScreen {
        return qtc.QGuiApplication_ScreenAt(@ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    ///
    pub fn OverrideCursor() QtC.QCursor {
        return qtc.QGuiApplication_OverrideCursor();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ``` overrideCursor: QtC.QCursor ```
    pub fn SetOverrideCursor(overrideCursor: ?*anyopaque) void {
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ``` param1: QtC.QCursor ```
    pub fn ChangeOverrideCursor(param1: ?*anyopaque) void {
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    ///
    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#font)
    ///
    ///
    pub fn Font() QtC.QFont {
        return qtc.QGuiApplication_Font();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
    ///
    /// ``` font: QtC.QFont ```
    pub fn SetFont(font: ?*anyopaque) void {
        qtc.QGuiApplication_SetFont(@ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    ///
    pub fn Clipboard() QtC.QClipboard {
        return qtc.QGuiApplication_Clipboard();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#palette)
    ///
    ///
    pub fn Palette() QtC.QPalette {
        return qtc.QGuiApplication_Palette();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
    ///
    /// ``` pal: QtC.QPalette ```
    pub fn SetPalette(pal: ?*anyopaque) void {
        qtc.QGuiApplication_SetPalette(@ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    ///
    pub fn KeyboardModifiers() i64 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    ///
    pub fn QueryKeyboardModifiers() i64 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    ///
    pub fn MouseButtons() i64 {
        return qtc.QGuiApplication_MouseButtons();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(direction: i64) void {
        qtc.QGuiApplication_SetLayoutDirection(@intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    ///
    pub fn LayoutDirection() i64 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    ///
    pub fn IsRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    ///
    pub fn IsLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    ///
    pub fn StyleHints() QtC.QStyleHints {
        return qtc.QGuiApplication_StyleHints();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ``` on: bool ```
    pub fn SetDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    ///
    pub fn DesktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    ///
    pub fn InputMethod() QtC.QInputMethod {
        return qtc.QGuiApplication_InputMethod();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ``` quit: bool ```
    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    ///
    pub fn QuitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    ///
    pub fn ApplicationState() i64 {
        return qtc.QGuiApplication_ApplicationState();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ``` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy ```
    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i64) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    ///
    pub fn HighDpiScaleFactorRoundingPolicy() i64 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#exec)
    ///
    ///
    pub fn Exec() i32 {
        return qtc.QGuiApplication_Exec();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// ``` self: QtC.QGuiApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGuiApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn IsSessionRestored(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ``` self: QtC.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn SessionId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ``` self: QtC.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn SessionKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn IsSavingSession(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// ``` self: QtC.QGuiApplication, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, name: []const u8, revision: i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGuiApplication, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    ///
    pub fn Sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn FontDatabaseChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnFontDatabaseChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ``` self: QtC.QGuiApplication, screen: QtC.QScreen ```
    pub fn ScreenAdded(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenAdded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ``` self: QtC.QGuiApplication, screen: QtC.QScreen ```
    pub fn ScreenRemoved(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ``` self: QtC.QGuiApplication, screen: QtC.QScreen ```
    pub fn PrimaryScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnPrimaryScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn LastWindowClosed(self: ?*anyopaque) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnLastWindowClosed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QGuiApplication, focusObject: QtC.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, focusObject: ?*anyopaque) void {
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self), @ptrCast(focusObject));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, focusObject: QtC.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ``` self: QtC.QGuiApplication, focusWindow: QtC.QWindow ```
    pub fn FocusWindowChanged(self: ?*anyopaque, focusWindow: ?*anyopaque) void {
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self), @ptrCast(focusWindow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, focusWindow: QtC.QWindow) callconv(.c) void ```
    pub fn OnFocusWindowChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ``` self: QtC.QGuiApplication, state: qnamespace_enums.ApplicationState ```
    pub fn ApplicationStateChanged(self: ?*anyopaque, state: i64) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void ```
    pub fn OnApplicationStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ``` self: QtC.QGuiApplication, direction: qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirectionChanged(self: ?*anyopaque, direction: i64) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnLayoutDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ``` self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager ```
    pub fn CommitDataRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void ```
    pub fn OnCommitDataRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ``` self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager ```
    pub fn SaveStateRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void ```
    pub fn OnSaveStateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn ApplicationDisplayNameChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnApplicationDisplayNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ``` self: QtC.QGuiApplication, pal: QtC.QPalette ```
    pub fn PaletteChanged(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self), @ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, pal: QtC.QPalette) callconv(.c) void ```
    pub fn OnPaletteChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ``` self: QtC.QGuiApplication, font: QtC.QFont ```
    pub fn FontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGuiApplication_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, font: QtC.QFont) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// ``` self: QtC.QGuiApplication, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGuiApplication, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGuiApplication_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGuiApplication_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Arguments(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCoreApplication_Arguments();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn SetAttribute(attribute: i64) void {
        qtc.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn TestAttribute(attribute: i64) bool {
        return qtc.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ``` orgDomain: []const u8 ```
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.struct_libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ``` orgName: []const u8 ```
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.struct_libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ``` application: []const u8 ```
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.struct_libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ``` version: []const u8 ```
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.struct_libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ``` allow: bool ```
    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    ///
    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    ///
    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    ///
    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32, maxtime: i32 ```
    pub fn ProcessEvents2(flags: i64, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@intCast(flags), @intCast(maxtime));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    ///
    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    ///
    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ``` eventDispatcher: QtC.QAbstractEventDispatcher ```
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    ///
    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    ///
    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    ///
    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ``` libraryPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetLibraryPaths(libraryPaths: [][]const u8, allocator: std.mem.Allocator) void {
        var libraryPaths_arr = allocator.alloc(qtc.struct_libqt_string, libraryPaths.len) catch @panic("qguiapplication.SetLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, i| {
            libraryPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const libraryPaths_list = qtc.struct_libqt_list{
            .len = libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        qtc.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn LibraryPaths(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCoreApplication_LibraryPaths();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate(context: []const u8, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QGuiApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QGuiApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    ///
    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ``` enabled: bool ```
    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    ///
    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    ///
    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute, on: bool ```
    pub fn SetAttribute2(attribute: i64, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32 ```
    pub fn ProcessEvents1(flags: i64) void {
        qtc.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent, priority: i32 ```
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @intCast(priority));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject, event_type: i32 ```
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @intCast(event_type));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject, eventType: i32 ```
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @intCast(eventType));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate3(context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Translate4(context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ``` retcode: i32 ```
    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@intCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGuiApplication, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGuiApplication, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGuiApplication, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGuiApplication, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGuiApplication, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qguiapplication.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGuiApplication, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGuiApplication, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGuiApplication, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGuiApplication, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGuiApplication, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGuiApplication, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGuiApplication, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGuiApplication, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGuiApplication, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGuiApplication, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGuiApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGuiApplication_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGuiApplication_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGuiApplication_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGuiApplication_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGuiApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGuiApplication_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGuiApplication_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGuiApplication_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnAboutToQuit(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#dtor.QGuiApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGuiApplication ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGuiApplication_Delete(@ptrCast(self));
    }
};
