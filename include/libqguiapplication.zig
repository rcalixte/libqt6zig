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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGuiApplication object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argc: *i32 `
    ///
    /// ` argv: [][:0]u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8) QGuiApplication {
        const argv_chararr = allocator.alloc([*:0]u8, argv.len) catch @panic("QGuiApplication.new: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QGuiApplication_new(@ptrCast(argc), @ptrCast(argv_chararr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGuiApplication object in C++ memory
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
    pub fn new2(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8, param3: i32) QGuiApplication {
        const argv_chararr = allocator.alloc([*:0]u8, argv.len) catch @panic("QGuiApplication.new2: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QGuiApplication_new2(@ptrCast(argc), @ptrCast(argv_chararr), @bitCast(param3)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn metaObject(self: QGuiApplication) QMetaObject {
        return .{ .ptr = qtc.QGuiApplication_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QGuiApplication, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGuiApplication_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn superMetaObject(self: QGuiApplication) QMetaObject {
        return .{ .ptr = qtc.QGuiApplication_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGuiApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGuiApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGuiApplication_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QGuiApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGuiApplication, callback: *const fn (QGuiApplication, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGuiApplication_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QGuiApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGuiApplication_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationDisplayName` instead
    ///
    pub const SetApplicationDisplayName = setApplicationDisplayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn setApplicationDisplayName(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    /// ### DEPRECATED: Use `applicationDisplayName` instead
    ///
    pub const ApplicationDisplayName = applicationDisplayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.applicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBadgeNumber` instead
    ///
    pub const SetBadgeNumber = setBadgeNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` number: i64 `
    ///
    pub fn setBadgeNumber(self: QGuiApplication, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self.ptr), @bitCast(number));
    }

    /// ### DEPRECATED: Use `setDesktopFileName` instead
    ///
    pub const SetDesktopFileName = setDesktopFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn setDesktopFileName(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetDesktopFileName(name_str);
    }

    /// ### DEPRECATED: Use `desktopFileName` instead
    ///
    pub const DesktopFileName = desktopFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.desktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allWindows` instead
    ///
    pub const AllWindows = allWindows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("QGuiApplication.allWindows: Memory allocation failed");
        const _data_val: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `topLevelWindows` instead
    ///
    pub const TopLevelWindows = topLevelWindows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn topLevelWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("QGuiApplication.topLevelWindows: Memory allocation failed");
        const _data_val: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `topLevelAt` instead
    ///
    pub const TopLevelAt = topLevelAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: QPoint `
    ///
    pub fn topLevelAt(pos: anytype) QWindow {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QGuiApplication_TopLevelAt(@ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `windowIcon` instead
    ///
    pub const WindowIcon = windowIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    pub fn windowIcon() QIcon {
        return .{ .ptr = qtc.QGuiApplication_WindowIcon() };
    }

    /// ### DEPRECATED: Use `platformName` instead
    ///
    pub const PlatformName = platformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn platformName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.platformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `modalWindow` instead
    ///
    pub const ModalWindow = modalWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    pub fn modalWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_ModalWindow() };
    }

    /// ### DEPRECATED: Use `focusWindow` instead
    ///
    pub const FocusWindow = focusWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    pub fn focusWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_FocusWindow() };
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    pub fn focusObject() QObject {
        return .{ .ptr = qtc.QGuiApplication_FocusObject() };
    }

    /// ### DEPRECATED: Use `primaryScreen` instead
    ///
    pub const PrimaryScreen = primaryScreen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    pub fn primaryScreen() QScreen {
        return .{ .ptr = qtc.QGuiApplication_PrimaryScreen() };
    }

    /// ### DEPRECATED: Use `screens` instead
    ///
    pub const Screens = screens;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn screens(allocator: std.mem.Allocator) []QScreen {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScreen, _arr.len) catch @panic("QGuiApplication.screens: Memory allocation failed");
        const _data_val: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `screenAt` instead
    ///
    pub const ScreenAt = screenAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` point: QPoint `
    ///
    pub fn screenAt(point: anytype) QScreen {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QGuiApplication_ScreenAt(@ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn devicePixelRatio(self: QGuiApplication) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `overrideCursor` instead
    ///
    pub const OverrideCursor = overrideCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    pub fn overrideCursor() QCursor {
        return .{ .ptr = qtc.QGuiApplication_OverrideCursor() };
    }

    /// ### DEPRECATED: Use `setOverrideCursor` instead
    ///
    pub const SetOverrideCursor = setOverrideCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` _overrideCursor: QCursor `
    ///
    pub fn setOverrideCursor(_overrideCursor: anytype) void {
        comptime _ = @TypeOf(_overrideCursor)._is_QCursor;
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(_overrideCursor.ptr));
    }

    /// ### DEPRECATED: Use `changeOverrideCursor` instead
    ///
    pub const ChangeOverrideCursor = changeOverrideCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCursor `
    ///
    pub fn changeOverrideCursor(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `restoreOverrideCursor` instead
    ///
    pub const RestoreOverrideCursor = restoreOverrideCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    pub fn restoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#font)
    ///
    pub fn font() QFont {
        return .{ .ptr = qtc.QGuiApplication_Font() };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(_font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGuiApplication_SetFont(@ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `clipboard` instead
    ///
    pub const Clipboard = clipboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    pub fn clipboard() QClipboard {
        return .{ .ptr = qtc.QGuiApplication_Clipboard() };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#palette)
    ///
    pub fn palette() QPalette {
        return .{ .ptr = qtc.QGuiApplication_Palette() };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` pal: QPalette `
    ///
    pub fn setPalette(pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_SetPalette(@ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn keyboardModifiers() i32 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    /// ### DEPRECATED: Use `queryKeyboardModifiers` instead
    ///
    pub const QueryKeyboardModifiers = queryKeyboardModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn queryKeyboardModifiers() i32 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    /// ### DEPRECATED: Use `mouseButtons` instead
    ///
    pub const MouseButtons = mouseButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn mouseButtons() i32 {
        return qtc.QGuiApplication_MouseButtons();
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(direction: i32) void {
        qtc.QGuiApplication_SetLayoutDirection(@bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection() i32 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    pub fn isRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    pub fn isLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// ### DEPRECATED: Use `styleHints` instead
    ///
    pub const StyleHints = styleHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    pub fn styleHints() QStyleHints {
        return .{ .ptr = qtc.QGuiApplication_StyleHints() };
    }

    /// ### DEPRECATED: Use `setDesktopSettingsAware` instead
    ///
    pub const SetDesktopSettingsAware = setDesktopSettingsAware;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` on: bool `
    ///
    pub fn setDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// ### DEPRECATED: Use `desktopSettingsAware` instead
    ///
    pub const DesktopSettingsAware = desktopSettingsAware;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    pub fn desktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// ### DEPRECATED: Use `inputMethod` instead
    ///
    pub const InputMethod = inputMethod;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    pub fn inputMethod() QInputMethod {
        return .{ .ptr = qtc.QGuiApplication_InputMethod() };
    }

    /// ### DEPRECATED: Use `platformFunction` instead
    ///
    pub const PlatformFunction = platformFunction;

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
    pub fn platformFunction(function: []u8) ?*const fn () callconv(.c) void {
        const function_str = qtc.libqt_string{
            .len = function.len,
            .data = function.ptr,
        };
        return @ptrFromInt(@as(usize, @bitCast(qtc.QGuiApplication_PlatformFunction(function_str))));
    }

    /// ### DEPRECATED: Use `setQuitOnLastWindowClosed` instead
    ///
    pub const SetQuitOnLastWindowClosed = setQuitOnLastWindowClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` _quit: bool `
    ///
    pub fn setQuitOnLastWindowClosed(_quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(_quit);
    }

    /// ### DEPRECATED: Use `quitOnLastWindowClosed` instead
    ///
    pub const QuitOnLastWindowClosed = quitOnLastWindowClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    pub fn quitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// ### DEPRECATED: Use `applicationState` instead
    ///
    pub const ApplicationState = applicationState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ApplicationState `
    ///
    pub fn applicationState() i32 {
        return qtc.QGuiApplication_ApplicationState();
    }

    /// ### DEPRECATED: Use `setHighDpiScaleFactorRoundingPolicy` instead
    ///
    pub const SetHighDpiScaleFactorRoundingPolicy = setHighDpiScaleFactorRoundingPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn setHighDpiScaleFactorRoundingPolicy(policy: i32) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@bitCast(policy));
    }

    /// ### DEPRECATED: Use `highDpiScaleFactorRoundingPolicy` instead
    ///
    pub const HighDpiScaleFactorRoundingPolicy = highDpiScaleFactorRoundingPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn highDpiScaleFactorRoundingPolicy() i32 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#exec)
    ///
    pub fn exec() i32 {
        return qtc.QGuiApplication_Exec();
    }

    /// ### DEPRECATED: Use `notify` instead
    ///
    pub const Notify = notify;

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
    pub fn notify(self: QGuiApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGuiApplication_Notify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onNotify` instead
    ///
    pub const OnNotify = onNotify;

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
    pub fn onNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNotify` instead
    ///
    pub const SuperNotify = superNotify;

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
    pub fn superNotify(self: QGuiApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QGuiApplication_SuperNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `isSessionRestored` instead
    ///
    pub const IsSessionRestored = isSessionRestored;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn isSessionRestored(self: QGuiApplication) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sessionId` instead
    ///
    pub const SessionId = sessionId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sessionId(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.sessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sessionKey` instead
    ///
    pub const SessionKey = sessionKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sessionKey(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.sessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSavingSession` instead
    ///
    pub const IsSavingSession = isSavingSession;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn isSavingSession(self: QGuiApplication) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

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
    pub fn resolveInterface(self: QGuiApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

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
    pub fn onResolveInterface(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

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
    pub fn superResolveInterface(self: QGuiApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QGuiApplication_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    pub fn sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// ### DEPRECATED: Use `fontDatabaseChanged` instead
    ///
    pub const FontDatabaseChanged = fontDatabaseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn fontDatabaseChanged(self: QGuiApplication) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFontDatabaseChanged` instead
    ///
    pub const OnFontDatabaseChanged = onFontDatabaseChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn onFontDatabaseChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `screenAdded` instead
    ///
    pub const ScreenAdded = screenAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn screenAdded(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenAdded` instead
    ///
    pub const OnScreenAdded = onScreenAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn onScreenAdded(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `screenRemoved` instead
    ///
    pub const ScreenRemoved = screenRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn screenRemoved(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenRemoved` instead
    ///
    pub const OnScreenRemoved = onScreenRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn onScreenRemoved(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `primaryScreenChanged` instead
    ///
    pub const PrimaryScreenChanged = primaryScreenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn primaryScreenChanged(self: QGuiApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onPrimaryScreenChanged` instead
    ///
    pub const OnPrimaryScreenChanged = onPrimaryScreenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn onPrimaryScreenChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastWindowClosed` instead
    ///
    pub const LastWindowClosed = lastWindowClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn lastWindowClosed(self: QGuiApplication) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastWindowClosed` instead
    ///
    pub const OnLastWindowClosed = onLastWindowClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn onLastWindowClosed(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _focusObject: QObject `
    ///
    pub fn focusObjectChanged(self: QGuiApplication, _focusObject: anytype) void {
        comptime _ = @TypeOf(_focusObject)._is_QObject;
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(_focusObject.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, focusObject: QObject) callconv(.c) void `
    ///
    pub fn onFocusObjectChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusWindowChanged` instead
    ///
    pub const FocusWindowChanged = focusWindowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _focusWindow: QWindow `
    ///
    pub fn focusWindowChanged(self: QGuiApplication, _focusWindow: anytype) void {
        comptime _ = @TypeOf(_focusWindow)._is_QWindow;
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self.ptr), @ptrCast(_focusWindow.ptr));
    }

    /// ### DEPRECATED: Use `onFocusWindowChanged` instead
    ///
    pub const OnFocusWindowChanged = onFocusWindowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, focusWindow: QWindow) callconv(.c) void `
    ///
    pub fn onFocusWindowChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QWindow) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationStateChanged` instead
    ///
    pub const ApplicationStateChanged = applicationStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn applicationStateChanged(self: QGuiApplication, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onApplicationStateChanged` instead
    ///
    pub const OnApplicationStateChanged = onApplicationStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void `
    ///
    pub fn onApplicationStateChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutDirectionChanged` instead
    ///
    pub const LayoutDirectionChanged = layoutDirectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirectionChanged(self: QGuiApplication, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `onLayoutDirectionChanged` instead
    ///
    pub const OnLayoutDirectionChanged = onLayoutDirectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn onLayoutDirectionChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `commitDataRequest` instead
    ///
    pub const CommitDataRequest = commitDataRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn commitDataRequest(self: QGuiApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### DEPRECATED: Use `onCommitDataRequest` instead
    ///
    pub const OnCommitDataRequest = onCommitDataRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn onCommitDataRequest(self: QGuiApplication, callback: *const fn (QGuiApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saveStateRequest` instead
    ///
    pub const SaveStateRequest = saveStateRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn saveStateRequest(self: QGuiApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### DEPRECATED: Use `onSaveStateRequest` instead
    ///
    pub const OnSaveStateRequest = onSaveStateRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn onSaveStateRequest(self: QGuiApplication, callback: *const fn (QGuiApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationDisplayNameChanged` instead
    ///
    pub const ApplicationDisplayNameChanged = applicationDisplayNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn applicationDisplayNameChanged(self: QGuiApplication) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onApplicationDisplayNameChanged` instead
    ///
    pub const OnApplicationDisplayNameChanged = onApplicationDisplayNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication) callconv(.c) void `
    ///
    pub fn onApplicationDisplayNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` pal: QPalette `
    ///
    pub fn paletteChanged(self: QGuiApplication, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, pal: QPalette) callconv(.c) void `
    ///
    pub fn onPaletteChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QPalette) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _font: QFont `
    ///
    pub fn fontChanged(self: QGuiApplication, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGuiApplication_FontChanged(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` callback: *const fn (self: QGuiApplication, font: QFont) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, QFont) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QGuiApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QGuiApplication_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QGuiApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QGuiApplication_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn arguments(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_Arguments();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QGuiApplication.arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGuiApplication.arguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn setAttribute(attribute: i32) void {
        qtc.QCoreApplication_SetAttribute(@bitCast(attribute));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` attribute: qnamespace_enums.ApplicationAttribute `
    ///
    pub fn testAttribute(attribute: i32) bool {
        return qtc.QCoreApplication_TestAttribute(@bitCast(attribute));
    }

    /// ### DEPRECATED: Use `setOrganizationDomain` instead
    ///
    pub const SetOrganizationDomain = setOrganizationDomain;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgDomain: []const u8 `
    ///
    pub fn setOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// ### DEPRECATED: Use `organizationDomain` instead
    ///
    pub const OrganizationDomain = organizationDomain;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn organizationDomain(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.organizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOrganizationName` instead
    ///
    pub const SetOrganizationName = setOrganizationName;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` orgName: []const u8 `
    ///
    pub fn setOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// ### DEPRECATED: Use `organizationName` instead
    ///
    pub const OrganizationName = organizationName;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn organizationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.organizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationName` instead
    ///
    pub const SetApplicationName = setApplicationName;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` application: []const u8 `
    ///
    pub fn setApplicationName(application: []const u8) void {
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// ### DEPRECATED: Use `applicationName` instead
    ///
    pub const ApplicationName = applicationName;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.applicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationVersion` instead
    ///
    pub const SetApplicationVersion = setApplicationVersion;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` version: []const u8 `
    ///
    pub fn setApplicationVersion(version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// ### DEPRECATED: Use `applicationVersion` instead
    ///
    pub const ApplicationVersion = applicationVersion;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationVersion(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.applicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSetuidAllowed` instead
    ///
    pub const SetSetuidAllowed = setSetuidAllowed;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` allow: bool `
    ///
    pub fn setSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// ### DEPRECATED: Use `isSetuidAllowed` instead
    ///
    pub const IsSetuidAllowed = isSetuidAllowed;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    pub fn isSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    pub fn instance() QCoreApplication {
        return .{ .ptr = qtc.QCoreApplication_Instance() };
    }

    /// ### DEPRECATED: Use `processEvents` instead
    ///
    pub const ProcessEvents = processEvents;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    pub fn processEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// ### DEPRECATED: Use `processEvents2` instead
    ///
    pub const ProcessEvents2 = processEvents2;

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
    pub fn processEvents2(flags: i32, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@bitCast(flags), @bitCast(maxtime));
    }

    /// ### DEPRECATED: Use `processEvents3` instead
    ///
    pub const ProcessEvents3 = processEvents3;

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
    pub fn processEvents3(flags: i32, deadline: anytype) void {
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        qtc.QCoreApplication_ProcessEvents3(@bitCast(flags), @ptrCast(deadline.ptr));
    }

    /// ### DEPRECATED: Use `sendEvent` instead
    ///
    pub const SendEvent = sendEvent;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sendEvent(receiver: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `postEvent` instead
    ///
    pub const PostEvent = postEvent;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn postEvent(receiver: anytype, _event: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `sendPostedEvents` instead
    ///
    pub const SendPostedEvents = sendPostedEvents;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    pub fn sendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// ### DEPRECATED: Use `removePostedEvents` instead
    ///
    pub const RemovePostedEvents = removePostedEvents;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    pub fn removePostedEvents(receiver: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `eventDispatcher` instead
    ///
    pub const EventDispatcher = eventDispatcher;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    pub fn eventDispatcher() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QCoreApplication_EventDispatcher() };
    }

    /// ### DEPRECATED: Use `setEventDispatcher` instead
    ///
    pub const SetEventDispatcher = setEventDispatcher;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventDispatcher: QAbstractEventDispatcher `
    ///
    pub fn setEventDispatcher(_eventDispatcher: anytype) void {
        comptime _ = @TypeOf(_eventDispatcher)._is_QAbstractEventDispatcher;
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(_eventDispatcher.ptr));
    }

    /// ### DEPRECATED: Use `startingUp` instead
    ///
    pub const StartingUp = startingUp;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    pub fn startingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// ### DEPRECATED: Use `closingDown` instead
    ///
    pub const ClosingDown = closingDown;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    pub fn closingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// ### DEPRECATED: Use `applicationDirPath` instead
    ///
    pub const ApplicationDirPath = applicationDirPath;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationDirPath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.applicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applicationFilePath` instead
    ///
    pub const ApplicationFilePath = applicationFilePath;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationFilePath(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.applicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applicationPid` instead
    ///
    pub const ApplicationPid = applicationPid;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    pub fn applicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// ### DEPRECATED: Use `checkPermission` instead
    ///
    pub const CheckPermission = checkPermission;

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
    pub fn checkPermission(self: QGuiApplication, permission: anytype) i32 {
        comptime _ = @TypeOf(permission)._is_QPermission;
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self.ptr), @ptrCast(permission.ptr));
    }

    /// ### DEPRECATED: Use `setLibraryPaths` instead
    ///
    pub const SetLibraryPaths = setLibraryPaths;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _libraryPaths: []const []const u8 `
    ///
    pub fn setLibraryPaths(allocator: std.mem.Allocator, _libraryPaths: []const []const u8) void {
        const libraryPaths_arr = allocator.alloc(qtc.libqt_string, _libraryPaths.len) catch @panic("QGuiApplication.setLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (_libraryPaths, 0.._libraryPaths.len) |str_item, i|
            libraryPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const libraryPaths_list = qtc.libqt_list{
            .len = _libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        qtc.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// ### DEPRECATED: Use `libraryPaths` instead
    ///
    pub const LibraryPaths = libraryPaths;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn libraryPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCoreApplication_LibraryPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QGuiApplication.libraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGuiApplication.libraryPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addLibraryPath` instead
    ///
    pub const AddLibraryPath = addLibraryPath;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn addLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// ### DEPRECATED: Use `removeLibraryPath` instead
    ///
    pub const RemoveLibraryPath = removeLibraryPath;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn removeLibraryPath(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// ### DEPRECATED: Use `installTranslator` instead
    ///
    pub const InstallTranslator = installTranslator;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QTranslator `
    ///
    pub fn installTranslator(messageFile: anytype) bool {
        comptime _ = @TypeOf(messageFile)._is_QTranslator;
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile.ptr));
    }

    /// ### DEPRECATED: Use `removeTranslator` instead
    ///
    pub const RemoveTranslator = removeTranslator;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ## Parameter(s):
    ///
    /// ` messageFile: QTranslator `
    ///
    pub fn removeTranslator(messageFile: anytype) bool {
        comptime _ = @TypeOf(messageFile)._is_QTranslator;
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile.ptr));
    }

    /// ### DEPRECATED: Use `translate` instead
    ///
    pub const Translate = translate;

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
    pub fn translate(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        var _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `installNativeEventFilter` instead
    ///
    pub const InstallNativeEventFilter = installNativeEventFilter;

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
    pub fn installNativeEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `onInstallNativeEventFilter` instead
    ///
    pub const OnInstallNativeEventFilter = onInstallNativeEventFilter;

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
    pub fn onInstallNativeEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeNativeEventFilter` instead
    ///
    pub const RemoveNativeEventFilter = removeNativeEventFilter;

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
    pub fn removeNativeEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveNativeEventFilter` instead
    ///
    pub const OnRemoveNativeEventFilter = onRemoveNativeEventFilter;

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
    pub fn onRemoveNativeEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isQuitLockEnabled` instead
    ///
    pub const IsQuitLockEnabled = isQuitLockEnabled;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    pub fn isQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// ### DEPRECATED: Use `setQuitLockEnabled` instead
    ///
    pub const SetQuitLockEnabled = setQuitLockEnabled;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` enabled: bool `
    ///
    pub fn setQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// ### DEPRECATED: Use `quit` instead
    ///
    pub const Quit = quit;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    pub fn quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// ### DEPRECATED: Use `exit` instead
    ///
    pub const Exit = exit;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    pub fn exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// ### DEPRECATED: Use `organizationNameChanged` instead
    ///
    pub const OrganizationNameChanged = organizationNameChanged;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn organizationNameChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrganizationNameChanged` instead
    ///
    pub const OnOrganizationNameChanged = onOrganizationNameChanged;

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
    pub fn onOrganizationNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `organizationDomainChanged` instead
    ///
    pub const OrganizationDomainChanged = organizationDomainChanged;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn organizationDomainChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOrganizationDomainChanged` instead
    ///
    pub const OnOrganizationDomainChanged = onOrganizationDomainChanged;

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
    pub fn onOrganizationDomainChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationNameChanged` instead
    ///
    pub const ApplicationNameChanged = applicationNameChanged;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn applicationNameChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onApplicationNameChanged` instead
    ///
    pub const OnApplicationNameChanged = onApplicationNameChanged;

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
    pub fn onApplicationNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationVersionChanged` instead
    ///
    pub const ApplicationVersionChanged = applicationVersionChanged;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn applicationVersionChanged(self: QGuiApplication) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onApplicationVersionChanged` instead
    ///
    pub const OnApplicationVersionChanged = onApplicationVersionChanged;

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
    pub fn onApplicationVersionChanged(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

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
    pub fn setAttribute2(attribute: i32, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@bitCast(attribute), on);
    }

    /// ### DEPRECATED: Use `processEvents1` instead
    ///
    pub const ProcessEvents1 = processEvents1;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn processEvents1(flags: i32) void {
        qtc.QCoreApplication_ProcessEvents1(@bitCast(flags));
    }

    /// ### DEPRECATED: Use `postEvent3` instead
    ///
    pub const PostEvent3 = postEvent3;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    /// ` _event: QEvent `
    ///
    /// ` priority: i32 `
    ///
    pub fn postEvent3(receiver: anytype, _event: anytype, priority: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver.ptr), @ptrCast(_event.ptr), @bitCast(priority));
    }

    /// ### DEPRECATED: Use `sendPostedEvents1` instead
    ///
    pub const SendPostedEvents1 = sendPostedEvents1;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` receiver: QObject `
    ///
    pub fn sendPostedEvents1(receiver: anytype) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `sendPostedEvents2` instead
    ///
    pub const SendPostedEvents2 = sendPostedEvents2;

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
    pub fn sendPostedEvents2(receiver: anytype, event_type: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver.ptr), @bitCast(event_type));
    }

    /// ### DEPRECATED: Use `removePostedEvents2` instead
    ///
    pub const RemovePostedEvents2 = removePostedEvents2;

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
    pub fn removePostedEvents2(receiver: anytype, eventType: i32) void {
        comptime _ = @TypeOf(receiver)._is_QObject;
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver.ptr), @bitCast(eventType));
    }

    /// ### DEPRECATED: Use `translate3` instead
    ///
    pub const Translate3 = translate3;

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
    pub fn translate3(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `translate4` instead
    ///
    pub const Translate4 = translate4;

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
    pub fn translate4(allocator: std.mem.Allocator, context: [:0]const u8, key: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exit1` instead
    ///
    pub const Exit1 = exit1;

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` retcode: i32 `
    ///
    pub fn exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@bitCast(retcode));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QGuiApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGuiApplication.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QGuiApplication, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn isWidgetType(self: QGuiApplication) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn isWindowType(self: QGuiApplication) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn isQuickItemType(self: QGuiApplication) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn signalsBlocked(self: QGuiApplication) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QGuiApplication, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn thread(self: QGuiApplication) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGuiApplication, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QGuiApplication, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QGuiApplication, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QGuiApplication, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QGuiApplication, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QGuiApplication, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGuiApplication.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGuiApplication, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QGuiApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QGuiApplication, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGuiApplication, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn disconnect3(self: QGuiApplication) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QGuiApplication, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn dumpObjectTree(self: QGuiApplication) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn dumpObjectInfo(self: QGuiApplication) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QGuiApplication, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QGuiApplication, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QGuiApplication, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGuiApplication.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGuiApplication.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn bindingStorage(self: QGuiApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn bindingStorage2(self: QGuiApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn destroyed(self: QGuiApplication) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn parent(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QGuiApplication, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn deleteLater(self: QGuiApplication) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QGuiApplication, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QGuiApplication, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGuiApplication `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGuiApplication, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QGuiApplication, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QGuiApplication, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QGuiApplication, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QGuiApplication, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QGuiApplication, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGuiApplication, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGuiApplication_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGuiApplication, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGuiApplication_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QGuiApplication, callback: *const fn (QGuiApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGuiApplication_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGuiApplication_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QTimerEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGuiApplication_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGuiApplication_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QChildEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGuiApplication_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGuiApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGuiApplication_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QGuiApplication, callback: *const fn (QGuiApplication, QEvent) callconv(.c) void) void {
        qtc.QGuiApplication_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QGuiApplication_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QGuiApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGuiApplication_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QGuiApplication_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QGuiApplication_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QGuiApplication) QObject {
        return .{ .ptr = qtc.QGuiApplication_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QGuiApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGuiApplication_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QGuiApplication) i32 {
        return qtc.QGuiApplication_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QGuiApplication) i32 {
        return qtc.QGuiApplication_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QGuiApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QGuiApplication_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QGuiApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QGuiApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGuiApplication_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGuiApplication_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QGuiApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGuiApplication_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QGuiApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGuiApplication_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QGuiApplication, callback: *const fn (QGuiApplication, QMetaMethod) callconv(.c) bool) void {
        qtc.QGuiApplication_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onAboutToQuit` instead
    ///
    pub const OnAboutToQuit = onAboutToQuit;

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
    pub fn onAboutToQuit(self: QGuiApplication, callback: *const fn (QGuiApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QGuiApplication, callback: *const fn (QGuiApplication, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#dtor.QGuiApplication)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGuiApplication `
    ///
    pub fn delete(self: QGuiApplication) void {
        qtc.QGuiApplication_Delete(@ptrCast(self.ptr));
    }
};
