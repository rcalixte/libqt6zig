const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qguiapplication.html
pub const qguiapplication = struct {
    /// New constructs a new QGuiApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8 ```
    pub fn New(argc: usize, argv: [*][*:0]u8) ?*C.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return C.QGuiApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QGuiApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8, param3: i32 ```
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) ?*C.QGuiApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return C.QGuiApplication_new2(&argc_param, argv_param, @intCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGuiApplication_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGuiApplication, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGuiApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGuiApplication_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QGuiApplication_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGuiApplication_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGuiApplication_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetApplicationDisplayName(name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGuiApplication_ApplicationDisplayName();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetDesktopFileName(name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QGuiApplication_SetDesktopFileName(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DesktopFileName(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGuiApplication_DesktopFileName();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllWindows(allocator: std.mem.Allocator) []?*C.QWindow {
        const _arr: C.struct_libqt_list = C.QGuiApplication_AllWindows();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QWindow, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []?*C.QWindow {
        const _arr: C.struct_libqt_list = C.QGuiApplication_TopLevelWindows();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QWindow, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
    ///
    /// ``` pos: ?*C.QPoint ```
    pub fn TopLevelAt(pos: ?*anyopaque) ?*C.QWindow {
        return C.QGuiApplication_TopLevelAt(@ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ``` icon: ?*C.QIcon ```
    pub fn SetWindowIcon(icon: ?*anyopaque) void {
        C.QGuiApplication_SetWindowIcon(@ptrCast(icon));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    ///
    pub fn WindowIcon() ?*C.QIcon {
        return C.QGuiApplication_WindowIcon();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PlatformName(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGuiApplication_PlatformName();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    ///
    pub fn ModalWindow() ?*C.QWindow {
        return C.QGuiApplication_ModalWindow();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    ///
    pub fn FocusWindow() ?*C.QWindow {
        return C.QGuiApplication_FocusWindow();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    ///
    pub fn FocusObject() ?*C.QObject {
        return C.QGuiApplication_FocusObject();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    ///
    pub fn PrimaryScreen() ?*C.QScreen {
        return C.QGuiApplication_PrimaryScreen();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Screens(allocator: std.mem.Allocator) []?*C.QScreen {
        const _arr: C.struct_libqt_list = C.QGuiApplication_Screens();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QScreen, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ``` point: ?*C.QPoint ```
    pub fn ScreenAt(point: ?*anyopaque) ?*C.QScreen {
        return C.QGuiApplication_ScreenAt(@ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QGuiApplication_DevicePixelRatio(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    ///
    pub fn OverrideCursor() ?*C.QCursor {
        return C.QGuiApplication_OverrideCursor();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ``` overrideCursor: ?*C.QCursor ```
    pub fn SetOverrideCursor(overrideCursor: ?*anyopaque) void {
        C.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ``` param1: ?*C.QCursor ```
    pub fn ChangeOverrideCursor(param1: ?*anyopaque) void {
        C.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    ///
    pub fn RestoreOverrideCursor() void {
        C.QGuiApplication_RestoreOverrideCursor();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#font)
    ///
    ///
    pub fn Font() ?*C.QFont {
        return C.QGuiApplication_Font();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
    ///
    /// ``` font: ?*C.QFont ```
    pub fn SetFont(font: ?*anyopaque) void {
        C.QGuiApplication_SetFont(@ptrCast(font));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    ///
    pub fn Clipboard() ?*C.QClipboard {
        return C.QGuiApplication_Clipboard();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#palette)
    ///
    ///
    pub fn Palette() ?*C.QPalette {
        return C.QGuiApplication_Palette();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
    ///
    /// ``` pal: ?*C.QPalette ```
    pub fn SetPalette(pal: ?*anyopaque) void {
        C.QGuiApplication_SetPalette(@ptrCast(pal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    ///
    pub fn KeyboardModifiers() i64 {
        return C.QGuiApplication_KeyboardModifiers();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    ///
    pub fn QueryKeyboardModifiers() i64 {
        return C.QGuiApplication_QueryKeyboardModifiers();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    ///
    pub fn MouseButtons() i64 {
        return C.QGuiApplication_MouseButtons();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(direction: i64) void {
        C.QGuiApplication_SetLayoutDirection(@intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    ///
    pub fn LayoutDirection() i64 {
        return C.QGuiApplication_LayoutDirection();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    ///
    pub fn IsRightToLeft() bool {
        return C.QGuiApplication_IsRightToLeft();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    ///
    pub fn IsLeftToRight() bool {
        return C.QGuiApplication_IsLeftToRight();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    ///
    pub fn StyleHints() ?*C.QStyleHints {
        return C.QGuiApplication_StyleHints();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ``` on: bool ```
    pub fn SetDesktopSettingsAware(on: bool) void {
        C.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    ///
    pub fn DesktopSettingsAware() bool {
        return C.QGuiApplication_DesktopSettingsAware();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    ///
    pub fn InputMethod() ?*C.QInputMethod {
        return C.QGuiApplication_InputMethod();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ``` quit: bool ```
    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        C.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    ///
    pub fn QuitOnLastWindowClosed() bool {
        return C.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    ///
    pub fn ApplicationState() i64 {
        return C.QGuiApplication_ApplicationState();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ``` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy ```
    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i64) void {
        C.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    ///
    pub fn HighDpiScaleFactorRoundingPolicy() i64 {
        return C.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#exec)
    ///
    ///
    pub fn Exec() i32 {
        return C.QGuiApplication_Exec();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// ``` self: ?*C.QGuiApplication, param1: ?*C.QObject, param2: ?*C.QEvent ```
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return C.QGuiApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGuiApplication_OnNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGuiApplication, param1: ?*C.QObject, param2: ?*C.QEvent ```
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return C.QGuiApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn IsSessionRestored(self: ?*anyopaque) bool {
        return C.QGuiApplication_IsSessionRestored(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ``` self: ?*C.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn SessionId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGuiApplication_SessionId(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ``` self: ?*C.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn SessionKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QGuiApplication_SessionKey(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn IsSavingSession(self: ?*anyopaque) bool {
        return C.QGuiApplication_IsSavingSession(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// ``` self: ?*C.QGuiApplication, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = @constCast(name.ptr);
        return C.QGuiApplication_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, []const u8, i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        C.QGuiApplication_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGuiApplication, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = @constCast(name.ptr);
        return C.QGuiApplication_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    ///
    pub fn Sync() void {
        C.QGuiApplication_Sync();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn FontDatabaseChanged(self: ?*anyopaque) void {
        C.QGuiApplication_FontDatabaseChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication) callconv(.c) void ```
    pub fn OnFontDatabaseChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ``` self: ?*C.QGuiApplication, screen: ?*C.QScreen ```
    pub fn ScreenAdded(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QGuiApplication_ScreenAdded(@ptrCast(self), @ptrCast(screen));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QScreen) callconv(.c) void ```
    pub fn OnScreenAdded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_ScreenAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ``` self: ?*C.QGuiApplication, screen: ?*C.QScreen ```
    pub fn ScreenRemoved(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QGuiApplication_ScreenRemoved(@ptrCast(self), @ptrCast(screen));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QScreen) callconv(.c) void ```
    pub fn OnScreenRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, screen: ?*C.QScreen ```
    pub fn PrimaryScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QGuiApplication_PrimaryScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QScreen) callconv(.c) void ```
    pub fn OnPrimaryScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn LastWindowClosed(self: ?*anyopaque) void {
        C.QGuiApplication_LastWindowClosed(@ptrCast(self));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication) callconv(.c) void ```
    pub fn OnLastWindowClosed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, focusObject: ?*C.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, focusObject: ?*anyopaque) void {
        C.QGuiApplication_FocusObjectChanged(@ptrCast(self), @ptrCast(focusObject));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, focusWindow: ?*C.QWindow ```
    pub fn FocusWindowChanged(self: ?*anyopaque, focusWindow: ?*anyopaque) void {
        C.QGuiApplication_FocusWindowChanged(@ptrCast(self), @ptrCast(focusWindow));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QWindow) callconv(.c) void ```
    pub fn OnFocusWindowChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, state: qnamespace_enums.ApplicationState ```
    pub fn ApplicationStateChanged(self: ?*anyopaque, state: i64) void {
        C.QGuiApplication_ApplicationStateChanged(@ptrCast(self), @intCast(state));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, qnamespace_enums.ApplicationState) callconv(.c) void ```
    pub fn OnApplicationStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, direction: qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirectionChanged(self: ?*anyopaque, direction: i64) void {
        C.QGuiApplication_LayoutDirectionChanged(@ptrCast(self), @intCast(direction));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnLayoutDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ``` self: ?*C.QGuiApplication, sessionManager: ?*C.QSessionManager ```
    pub fn CommitDataRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        C.QGuiApplication_CommitDataRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QSessionManager) callconv(.c) void ```
    pub fn OnCommitDataRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ``` self: ?*C.QGuiApplication, sessionManager: ?*C.QSessionManager ```
    pub fn SaveStateRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        C.QGuiApplication_SaveStateRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QSessionManager) callconv(.c) void ```
    pub fn OnSaveStateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn ApplicationDisplayNameChanged(self: ?*anyopaque) void {
        C.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication) callconv(.c) void ```
    pub fn OnApplicationDisplayNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, pal: ?*C.QPalette ```
    pub fn PaletteChanged(self: ?*anyopaque, pal: ?*anyopaque) void {
        C.QGuiApplication_PaletteChanged(@ptrCast(self), @ptrCast(pal));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QPalette) callconv(.c) void ```
    pub fn OnPaletteChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_PaletteChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ``` self: ?*C.QGuiApplication, font: ?*C.QFont ```
    pub fn FontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QGuiApplication_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QFont) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_Connect_FontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// ``` self: ?*C.QGuiApplication, param1: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QGuiApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGuiApplication_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGuiApplication, param1: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QGuiApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGuiApplication_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGuiApplication_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Arguments(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QCoreApplication_Arguments();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn SetAttribute(attribute: i64) void {
        C.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn TestAttribute(attribute: i64) bool {
        return C.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ``` orgDomain: []const u8 ```
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = C.struct_libqt_string{
            .len = orgDomain.len,
            .data = @constCast(orgDomain.ptr),
        };
        C.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_OrganizationDomain();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ``` orgName: []const u8 ```
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = C.struct_libqt_string{
            .len = orgName.len,
            .data = @constCast(orgName.ptr),
        };
        C.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_OrganizationName();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ``` application: []const u8 ```
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };
        C.QCoreApplication_SetApplicationName(application_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_ApplicationName();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ``` version: []const u8 ```
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = C.struct_libqt_string{
            .len = version.len,
            .data = @constCast(version.ptr),
        };
        C.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_ApplicationVersion();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ``` allow: bool ```
    pub fn SetSetuidAllowed(allow: bool) void {
        C.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    ///
    pub fn IsSetuidAllowed() bool {
        return C.QCoreApplication_IsSetuidAllowed();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    ///
    pub fn Instance() ?*C.QCoreApplication {
        return C.QCoreApplication_Instance();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    ///
    pub fn ProcessEvents() void {
        C.QCoreApplication_ProcessEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32, maxtime: i32 ```
    pub fn ProcessEvents2(flags: i64, maxtime: i32) void {
        C.QCoreApplication_ProcessEvents2(@intCast(flags), @intCast(maxtime));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ``` receiver: ?*C.QObject, event: ?*C.QEvent ```
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: ?*C.QObject, event: ?*C.QEvent ```
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        C.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    ///
    pub fn SendPostedEvents() void {
        C.QCoreApplication_SendPostedEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: ?*C.QObject ```
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        C.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    ///
    pub fn EventDispatcher() ?*C.QAbstractEventDispatcher {
        return C.QCoreApplication_EventDispatcher();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ``` eventDispatcher: ?*C.QAbstractEventDispatcher ```
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        C.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    ///
    pub fn StartingUp() bool {
        return C.QCoreApplication_StartingUp();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    ///
    pub fn ClosingDown() bool {
        return C.QCoreApplication_ClosingDown();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_ApplicationDirPath();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QCoreApplication_ApplicationFilePath();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    ///
    pub fn ApplicationPid() i64 {
        return C.QCoreApplication_ApplicationPid();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ``` libraryPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetLibraryPaths(libraryPaths: [][]const u8, allocator: std.mem.Allocator) void {
        var libraryPaths_arr = allocator.alloc(C.struct_libqt_string, libraryPaths.len) catch @panic("Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, _i| {
            libraryPaths_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const libraryPaths_list = C.struct_libqt_list{
            .len = libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        C.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn LibraryPaths(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QCoreApplication_LibraryPaths();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = C.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        C.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = C.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        C.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ``` messageFile: ?*C.QTranslator ```
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return C.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ``` messageFile: ?*C.QTranslator ```
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return C.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate(context: []const u8, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = @constCast(context.ptr);
        const key_Cstring = @constCast(key.ptr);
        const _str = C.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: ?*C.QGuiApplication, filterObj: ?*C.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication, ?*C.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: ?*C.QGuiApplication, filterObj: ?*C.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication, ?*C.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    ///
    pub fn IsQuitLockEnabled() bool {
        return C.QCoreApplication_IsQuitLockEnabled();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ``` enabled: bool ```
    pub fn SetQuitLockEnabled(enabled: bool) void {
        C.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    ///
    pub fn Quit() void {
        C.QCoreApplication_Quit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    ///
    pub fn Exit() void {
        C.QCoreApplication_Exit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        C.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        C.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        C.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        C.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// ``` self: ?*C.QCoreApplication, slot: fn (?*C.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute, on: bool ```
    pub fn SetAttribute2(attribute: i64, on: bool) void {
        C.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32 ```
    pub fn ProcessEvents1(flags: i64) void {
        C.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: ?*C.QObject, event: ?*C.QEvent, priority: i32 ```
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        C.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @intCast(priority));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: ?*C.QObject ```
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        C.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: ?*C.QObject, event_type: i32 ```
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        C.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @intCast(event_type));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: ?*C.QObject, eventType: i32 ```
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        C.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @intCast(eventType));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate3(context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = @constCast(context.ptr);
        const key_Cstring = @constCast(key.ptr);
        const disambiguation_Cstring = @constCast(disambiguation.ptr);
        const _str = C.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Translate4(context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = @constCast(context.ptr);
        const key_Cstring = @constCast(key.ptr);
        const disambiguation_Cstring = @constCast(disambiguation.ptr);
        const _str = C.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ``` retcode: i32 ```
    pub fn Exit1(retcode: i32) void {
        C.QCoreApplication_Exit1(@intCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QGuiApplication, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGuiApplication, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGuiApplication, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGuiApplication, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGuiApplication, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QGuiApplication, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGuiApplication, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGuiApplication, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGuiApplication, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGuiApplication, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGuiApplication, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGuiApplication, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGuiApplication, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGuiApplication, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGuiApplication, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGuiApplication, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGuiApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QGuiApplication_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGuiApplication_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QGuiApplication_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGuiApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGuiApplication_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGuiApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QGuiApplication_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGuiApplication_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QGuiApplication_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QGuiApplication_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QGuiApplication_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGuiApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QGuiApplication_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGuiApplication_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGuiApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QGuiApplication_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QGuiApplication_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGuiApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QGuiApplication_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGuiApplication, slot: fn (?*C.QGuiApplication, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QGuiApplication_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGuiApplication ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGuiApplication_Delete(@ptrCast(self));
    }
};
