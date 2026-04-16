const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractEventDispatcher = @import("libqt6").QAbstractEventDispatcher;
const QAbstractNativeEventFilter = @import("libqt6").QAbstractNativeEventFilter;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QClipboard = @import("libqt6").QClipboard;
const QCoreApplication = @import("libqt6").QCoreApplication;
const QCursor = @import("libqt6").QCursor;
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QInputMethod = @import("libqt6").QInputMethod;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPalette = @import("libqt6").QPalette;
const QPermission = @import("libqt6").QPermission;
const QPoint = @import("libqt6").QPoint;
const QScreen = @import("libqt6").QScreen;
const QSessionManager = @import("libqt6").QSessionManager;
const QStyleHints = @import("libqt6").QStyleHints;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTranslator = @import("libqt6").QTranslator;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const qeventloop_enums = @import("libqeventloop.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html)
pub const QGuiApplication = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGuiApplication,

    pub const _is_QGuiApplication = {};
    pub const _is_QCoreApplication = {};
    pub const _is_QObject = {};

    /// New constructs a new QGuiApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argc: *i32 `
    ///
    /// ` argv: [][:0]u8 `
    ///
    pub fn New(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8) QGuiApplication {
        const argv_chararr = allocator.alloc([*c]u8, argv.len) catch @panic("qguiapplication.New: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QGuiApplication_new(@ptrCast(argc), argv_chararr.ptr) };
    }

    /// New2 constructs a new QGuiApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argc: *i32 `
    ///
    /// ` argv: [][:0]u8 `
    ///
    /// ` param3: i32 `
    ///
    pub fn New2(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8, param3: i32) QGuiApplication {
        const argv_chararr = allocator.alloc([*c]u8, argv.len) catch @panic("qguiapplication.New2: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QGuiApplication_new2(@ptrCast(argc), argv_chararr.ptr, @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn MetaObject(self: QGuiApplication) QMetaObject {
        return .{ .ptr = qtc.QGuiApplication_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QGuiApplication, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGuiApplication_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn SuperMetaObject(self: QGuiApplication) QMetaObject {
        return .{ .ptr = qtc.QGuiApplication_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGuiApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGuiApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QGuiApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGuiApplication, callback: *const fn (QGuiApplication, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGuiApplication_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QGuiApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: QGuiApplication `
    ///
    /// ` number: i64 `
    ///
    pub fn SetBadgeNumber(self: QGuiApplication, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self.ptr), @bitCast(number));
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
    pub fn AllWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("qguiapplication.AllWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("qguiapplication.TopLevelWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    pub fn TopLevelAt(pos: anytype) QWindow {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QGuiApplication_TopLevelAt(@ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    pub fn WindowIcon() QIcon {
        return .{ .ptr = qtc.QGuiApplication_WindowIcon() };
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
    pub fn ModalWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_ModalWindow() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    pub fn FocusWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_FocusWindow() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    pub fn FocusObject() QObject {
        return .{ .ptr = qtc.QGuiApplication_FocusObject() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    pub fn PrimaryScreen() QScreen {
        return .{ .ptr = qtc.QGuiApplication_PrimaryScreen() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Screens(allocator: std.mem.Allocator) []QScreen {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScreen, _arr.len) catch @panic("qguiapplication.Screens: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn ScreenAt(point: anytype) QScreen {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QGuiApplication_ScreenAt(@ptrCast(point.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn DevicePixelRatio(self: QGuiApplication) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    pub fn OverrideCursor() QCursor {
        return .{ .ptr = qtc.QGuiApplication_OverrideCursor() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` overrideCursor: QCursor `
    ///
    pub fn SetOverrideCursor(overrideCursor: anytype) void {
        comptime _ = @TypeOf(overrideCursor)._is_QCursor;
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCursor `
    ///
    pub fn ChangeOverrideCursor(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#font)
    ///
    pub fn Font() QFont {
        return .{ .ptr = qtc.QGuiApplication_Font() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGuiApplication_SetFont(@ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    pub fn Clipboard() QClipboard {
        return .{ .ptr = qtc.QGuiApplication_Clipboard() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#palette)
    ///
    pub fn Palette() QPalette {
        return .{ .ptr = qtc.QGuiApplication_Palette() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` pal: QPalette `
    ///
    pub fn SetPalette(pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_SetPalette(@ptrCast(pal.ptr));
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
        qtc.QGuiApplication_SetLayoutDirection(@bitCast(direction));
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
    pub fn StyleHints() QStyleHints {
        return .{ .ptr = qtc.QGuiApplication_StyleHints() };
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
    pub fn InputMethod() QInputMethod {
        return .{ .ptr = qtc.QGuiApplication_InputMethod() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` function: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn () callconv(.c) void `
    ///
    pub fn PlatformFunction(function: []u8) ?*const fn () callconv(.c) void {
        const function_str = qtc.libqt_string{
            .len = function.len,
            .data = function.ptr,
        };
        return @ptrFromInt(@as(usize, @bitCast(qtc.QGuiApplication_PlatformFunction(function_str))));
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
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@bitCast(policy));
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
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn Notify(self: QGuiApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGuiApplication_Notify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNotify` instead
    ///
    pub const QBaseNotify = SuperNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperNotify(self: QGuiApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGuiApplication_SuperNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn IsSessionRestored(self: QGuiApplication) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionId(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionKey(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn IsSavingSession(self: QGuiApplication) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: QGuiApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveInterface` instead
    ///
    pub const QBaseResolveInterface = SuperResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn SuperResolveInterface(self: QGuiApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
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
    /// ` self: QGuiApplication `
    ///
    pub fn FontDatabaseChanged(self: QGuiApplication) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnFontDatabaseChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn ScreenAdded(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnScreenAdded(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn ScreenRemoved(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnScreenRemoved(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn PrimaryScreenChanged(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnPrimaryScreenChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn LastWindowClosed(self: QGuiApplication) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnLastWindowClosed(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` focusObject: QObject `
    ///
    pub fn FocusObjectChanged(self: QGuiApplication, focusObject: anytype) void {
        comptime _ = @TypeOf(focusObject)._is_QObject;
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(focusObject.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, focusObject: QObject) callconv(.c) void `
    ///
    pub fn OnFocusObjectChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` focusWindow: QWindow `
    ///
    pub fn FocusWindowChanged(self: QGuiApplication, focusWindow: anytype) void {
        comptime _ = @TypeOf(focusWindow)._is_QWindow;
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self.ptr), @ptrCast(focusWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, focusWindow: QWindow) callconv(.c) void `
    ///
    pub fn OnFocusWindowChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QWindow) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationStateChanged(self: QGuiApplication, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void `
    ///
    pub fn OnApplicationStateChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirectionChanged(self: QGuiApplication, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn OnLayoutDirectionChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn CommitDataRequest(self: QGuiApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn OnCommitDataRequest(self: QGuiApplication, callback: *const fn (QGuiApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn SaveStateRequest(self: QGuiApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn OnSaveStateRequest(self: QGuiApplication, callback: *const fn (QGuiApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn ApplicationDisplayNameChanged(self: QGuiApplication) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationDisplayNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` pal: QPalette `
    ///
    pub fn PaletteChanged(self: QGuiApplication, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, pal: QPalette) callconv(.c) void `
    ///
    pub fn OnPaletteChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QPalette) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` font: QFont `
    ///
    pub fn FontChanged(self: QGuiApplication, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGuiApplication_FontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, font: QFont) callconv(.c) void `
    ///
    pub fn OnFontChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QFont) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: QGuiApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QGuiApplication_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: QGuiApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QGuiApplication_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
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
    pub fn Arguments(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_Arguments();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
        qtc.QCoreApplication_SetAttribute(@bitCast(attribute));
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
        return qtc.QCoreApplication_TestAttribute(@bitCast(attribute));
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
    pub fn Instance() QCoreApplication {
        return .{ .ptr = qtc.QCoreApplication_Instance() };
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
        qtc.QCoreApplication_ProcessEvents2(@bitCast(flags), @bitCast(maxtime));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` deadline: QDeadlineTimer `
    ///
    pub fn ProcessEvents3(flags: i32, deadline: anytype) void {
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        qtc.QCoreApplication_ProcessEvents3(@bitCast(flags), @ptrCast(deadline.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SendEvent(receiver: anytype, event: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn PostEvent(receiver: anytype, event: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver.ptr), @ptrCast(event.ptr));
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
    /// ` receiver: QObject `
    ///
    pub fn RemovePostedEvents(receiver: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    pub fn EventDispatcher() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QCoreApplication_EventDispatcher() };
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventDispatcher: QAbstractEventDispatcher `
    ///
    pub fn SetEventDispatcher(eventDispatcher: anytype) void {
        comptime _ = @TypeOf(eventDispatcher)._is_QAbstractEventDispatcher;
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher.ptr));
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
    /// ` self: QGuiApplication `
    ///
    /// ` permission: QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn CheckPermission(self: QGuiApplication, permission: anytype) i32 {
        comptime _ = @TypeOf(permission)._is_QPermission;
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self.ptr), @ptrCast(permission.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` libraryPaths: []const []const u8 `
    ///
    pub fn SetLibraryPaths(allocator: std.mem.Allocator, libraryPaths: []const []const u8) void {
        const libraryPaths_arr = allocator.alloc(qtc.libqt_string, libraryPaths.len) catch @panic("qguiapplication.SetLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, i|
            libraryPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
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
    pub fn LibraryPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_LibraryPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` messageFile: QTranslator `
    ///
    pub fn InstallTranslator(messageFile: anytype) bool {
        comptime _ = @TypeOf(messageFile)._is_QTranslator;
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QTranslator `
    ///
    pub fn RemoveTranslator(messageFile: anytype) bool {
        comptime _ = @TypeOf(messageFile)._is_QTranslator;
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn Translate(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8) []const u8 {
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
    /// ` self: QGuiApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnInstallNativeEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnRemoveNativeEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGuiApplication `
    ///
    pub fn OrganizationNameChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn OrganizationDomainChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationDomainChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn ApplicationNameChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn ApplicationVersionChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnApplicationVersionChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        qtc.QCoreApplication_SetAttribute2(@bitCast(attribute), on);
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
        qtc.QCoreApplication_ProcessEvents1(@bitCast(flags));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` event: QEvent `
    ///
    /// ` priority: i32 `
    ///
    pub fn PostEvent3(receiver: anytype, event: anytype, priority: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver.ptr), @ptrCast(event.ptr), @bitCast(priority));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    pub fn SendPostedEvents1(receiver: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` event_type: i32 `
    ///
    pub fn SendPostedEvents2(receiver: anytype, event_type: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver.ptr), @bitCast(event_type));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` eventType: i32 `
    ///
    pub fn RemovePostedEvents2(receiver: anytype, eventType: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver.ptr), @bitCast(eventType));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn Translate3(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` context: [:0]const u8 `
    ///
    /// ` key: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Translate4(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @bitCast(n));
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
        qtc.QCoreApplication_Exit1(@bitCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QGuiApplication `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QGuiApplication, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn IsWidgetType(self: QGuiApplication) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn IsWindowType(self: QGuiApplication) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn IsQuickItemType(self: QGuiApplication) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn SignalsBlocked(self: QGuiApplication) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QGuiApplication, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Thread(self: QGuiApplication) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGuiApplication, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QGuiApplication, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QGuiApplication, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QGuiApplication, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QGuiApplication, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QGuiApplication, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qguiapplication.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGuiApplication, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QGuiApplication, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGuiApplication, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Disconnect3(self: QGuiApplication) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QGuiApplication, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn DumpObjectTree(self: QGuiApplication) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn DumpObjectInfo(self: QGuiApplication) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QGuiApplication, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGuiApplication, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QGuiApplication, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QGuiApplication `
    ///
    pub fn BindingStorage(self: QGuiApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn BindingStorage2(self: QGuiApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Destroyed(self: QGuiApplication) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Parent(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QGuiApplication, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn DeleteLater(self: QGuiApplication) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QGuiApplication, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QGuiApplication, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGuiApplication, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGuiApplication, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QGuiApplication, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGuiApplication, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGuiApplication, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGuiApplication, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGuiApplication, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGuiApplication_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGuiApplication, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGuiApplication_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGuiApplication_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGuiApplication_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QTimerEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGuiApplication_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGuiApplication_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QChildEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGuiApplication_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGuiApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGuiApplication_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QGuiApplication_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QGuiApplication_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Sender(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QGuiApplication_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn SuperSender(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QGuiApplication_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QGuiApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGuiApplication_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn SenderSignalIndex(self: QGuiApplication) i32 {
        return qtc.QGuiApplication_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn SuperSenderSignalIndex(self: QGuiApplication) i32 {
        return qtc.QGuiApplication_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QGuiApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QGuiApplication_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QGuiApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QGuiApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGuiApplication_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QGuiApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGuiApplication_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QGuiApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGuiApplication_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication`
    ///
    /// ` callback: *const fn (self: QGuiApplication, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) bool) void {
        qtc.QGuiApplication_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn OnAboutToQuit(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#dtor.QGuiApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn Delete(self: QGuiApplication) void {
        qtc.QGuiApplication_Delete(@ptrCast(self.ptr));
    }
};
