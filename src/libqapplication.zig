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
const QFontMetrics = @import("libqt6").QFontMetrics;
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
const QStyle = @import("libqt6").QStyle;
const QStyleHints = @import("libqt6").QStyleHints;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTranslator = @import("libqt6").QTranslator;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qeventloop_enums = @import("libqeventloop.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html)
pub const QApplication = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QApplication,

    pub const _is_QApplication = {};
    pub const _is_QGuiApplication = {};
    pub const _is_QCoreApplication = {};
    pub const _is_QObject = {};

    /// New constructs a new QApplication object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argc: *i32 `
    ///
    /// ` argv: [][:0]u8 `
    ///
    pub fn New(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8) QApplication {
        const argv_chararr = allocator.alloc([*c]u8, argv.len) catch @panic("qapplication.New: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QApplication_new(@ptrCast(argc), argv_chararr.ptr) };
    }

    /// New2 constructs a new QApplication object.
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
    pub fn New2(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8, param3: i32) QApplication {
        const argv_chararr = allocator.alloc([*c]u8, argv.len) catch @panic("qapplication.New2: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QApplication_new2(@ptrCast(argc), argv_chararr.ptr, @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn MetaObject(self: QApplication) QMetaObject {
        return .{ .ptr = qtc.QApplication_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QApplication, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QApplication_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    pub fn SuperMetaObject(self: QApplication) QMetaObject {
        return .{ .ptr = qtc.QApplication_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QApplication_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QApplication_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QApplication_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QApplication, callback: *const fn (QApplication, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QApplication_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QApplication_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#style)
    ///
    pub fn Style() QStyle {
        return .{ .ptr = qtc.QApplication_Style() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QApplication_SetStyle(@ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` style: []const u8 `
    ///
    pub fn SetStyle2(style: []const u8) QStyle {
        const style_str = qtc.libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return .{ .ptr = qtc.QApplication_SetStyle2(style_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    pub fn Palette(param1: anytype) QPalette {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QApplication_Palette(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn Palette2(className: [:0]const u8) QPalette {
        const className_Cstring = className.ptr;
        return .{ .ptr = qtc.QApplication_Palette2(className_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn SetPalette(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QApplication_SetPalette(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    pub fn Font() QFont {
        return .{ .ptr = qtc.QApplication_Font() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    pub fn Font2(param1: anytype) QFont {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QApplication_Font2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn Font3(className: [:0]const u8) QFont {
        const className_Cstring = className.ptr;
        return .{ .ptr = qtc.QApplication_Font3(className_Cstring) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn SetFont(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        qtc.QApplication_SetFont(@ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
    ///
    pub fn FontMetrics() QFontMetrics {
        return .{ .ptr = qtc.QApplication_FontMetrics() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllWidgets(allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QApplication_AllWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qapplication.AllWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TopLevelWidgets(allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QApplication_TopLevelWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qapplication.TopLevelWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
    ///
    pub fn ActivePopupWidget() QWidget {
        return .{ .ptr = qtc.QApplication_ActivePopupWidget() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
    ///
    pub fn ActiveModalWidget() QWidget {
        return .{ .ptr = qtc.QApplication_ActiveModalWidget() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
    ///
    pub fn FocusWidget() QWidget {
        return .{ .ptr = qtc.QApplication_FocusWidget() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
    ///
    pub fn ActiveWindow() QWidget {
        return .{ .ptr = qtc.QApplication_ActiveWindow() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` act: QWidget `
    ///
    pub fn SetActiveWindow(act: anytype) void {
        comptime _ = @TypeOf(act)._is_QWidget;
        qtc.QApplication_SetActiveWindow(@ptrCast(act.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn WidgetAt(p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QApplication_WidgetAt(@ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn WidgetAt2(x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QApplication_WidgetAt2(@bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn TopLevelAt(p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QApplication_TopLevelAt(@ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn TopLevelAt2(x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QApplication_TopLevelAt2(@bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#beep)
    ///
    pub fn Beep() void {
        qtc.QApplication_Beep();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn Alert(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QApplication_Alert(@ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` cursorFlashTime: i32 `
    ///
    pub fn SetCursorFlashTime(cursorFlashTime: i32) void {
        qtc.QApplication_SetCursorFlashTime(@bitCast(cursorFlashTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
    ///
    pub fn CursorFlashTime() i32 {
        return qtc.QApplication_CursorFlashTime();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` doubleClickInterval: i32 `
    ///
    pub fn SetDoubleClickInterval(doubleClickInterval: i32) void {
        qtc.QApplication_SetDoubleClickInterval(@bitCast(doubleClickInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
    ///
    pub fn DoubleClickInterval() i32 {
        return qtc.QApplication_DoubleClickInterval();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyboardInputInterval: i32 `
    ///
    pub fn SetKeyboardInputInterval(keyboardInputInterval: i32) void {
        qtc.QApplication_SetKeyboardInputInterval(@bitCast(keyboardInputInterval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
    ///
    pub fn KeyboardInputInterval() i32 {
        return qtc.QApplication_KeyboardInputInterval();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` wheelScrollLines: i32 `
    ///
    pub fn SetWheelScrollLines(wheelScrollLines: i32) void {
        qtc.QApplication_SetWheelScrollLines(@bitCast(wheelScrollLines));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
    ///
    pub fn WheelScrollLines() i32 {
        return qtc.QApplication_WheelScrollLines();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` ms: i32 `
    ///
    pub fn SetStartDragTime(ms: i32) void {
        qtc.QApplication_SetStartDragTime(@bitCast(ms));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
    ///
    pub fn StartDragTime() i32 {
        return qtc.QApplication_StartDragTime();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` l: i32 `
    ///
    pub fn SetStartDragDistance(l: i32) void {
        qtc.QApplication_SetStartDragDistance(@bitCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
    ///
    pub fn StartDragDistance() i32 {
        return qtc.QApplication_StartDragDistance();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    pub fn IsEffectEnabled(param1: i32) bool {
        return qtc.QApplication_IsEffectEnabled(@bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    pub fn SetEffectEnabled(param1: i32) void {
        qtc.QApplication_SetEffectEnabled(@bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#exec)
    ///
    pub fn Exec() i32 {
        return qtc.QApplication_Exec();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn Notify(self: QApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QApplication_Notify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnNotify(self: QApplication, callback: *const fn (QApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNotify` instead
    ///
    pub const QBaseNotify = SuperNotify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperNotify(self: QApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QApplication_SuperNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn ResolveInterface(self: QApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, name: [*:0]const u8, revision: i32) callconv(.c) ?*anyopaque `
    ///
    pub fn OnResolveInterface(self: QApplication, callback: *const fn (QApplication, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResolveInterface` instead
    ///
    pub const QBaseResolveInterface = SuperResolveInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` revision: i32 `
    ///
    pub fn SuperResolveInterface(self: QApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` old: QWidget `
    ///
    /// ` now: QWidget `
    ///
    pub fn FocusChanged(self: QApplication, old: anytype, now: anytype) void {
        comptime _ = @TypeOf(old)._is_QWidget;
        comptime _ = @TypeOf(now)._is_QWidget;
        qtc.QApplication_FocusChanged(@ptrCast(self.ptr), @ptrCast(old.ptr), @ptrCast(now.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, old: QWidget, now: QWidget) callconv(.c) void `
    ///
    pub fn OnFocusChanged(self: QApplication, callback: *const fn (QApplication, QWidget, QWidget) callconv(.c) void) void {
        qtc.QApplication_Connect_FocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QApplication_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn AutoSipEnabled(self: QApplication) bool {
        return qtc.QApplication_AutoSipEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` sheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QApplication, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QApplication_SetStyleSheet(@ptrCast(self.ptr), sheet_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoSipEnabled(self: QApplication, enabled: bool) void {
        qtc.QApplication_SetAutoSipEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
    ///
    pub fn CloseAllWindows() void {
        qtc.QApplication_CloseAllWindows();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
    ///
    pub fn AboutQt() void {
        qtc.QApplication_AboutQt();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: QApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QApplication_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QApplication, callback: *const fn (QApplication, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: QApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QApplication_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn SetPalette2(param1: anytype, className: [:0]const u8) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        const className_Cstring = className.ptr;
        qtc.QApplication_SetPalette2(@ptrCast(param1.ptr), className_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn SetFont2(param1: anytype, className: [:0]const u8) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        const className_Cstring = className.ptr;
        qtc.QApplication_SetFont2(@ptrCast(param1.ptr), className_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    /// ` duration: i32 `
    ///
    pub fn Alert2(widget: anytype, duration: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QApplication_Alert2(@ptrCast(widget.ptr), @bitCast(duration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEffectEnabled2(param1: i32, enable: bool) void {
        qtc.QApplication_SetEffectEnabled2(@bitCast(param1), enable);
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` number: i64 `
    ///
    pub fn SetBadgeNumber(self: QApplication, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self.ptr), @bitCast(number));
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("qapplication.AllWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("qapplication.TopLevelWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    pub fn WindowIcon() QIcon {
        return .{ .ptr = qtc.QGuiApplication_WindowIcon() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlatformName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.PlatformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    pub fn ModalWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_ModalWindow() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    pub fn FocusWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_FocusWindow() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    pub fn FocusObject() QObject {
        return .{ .ptr = qtc.QGuiApplication_FocusObject() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    pub fn PrimaryScreen() QScreen {
        return .{ .ptr = qtc.QGuiApplication_PrimaryScreen() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Screens(allocator: std.mem.Allocator) []QScreen {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScreen, _arr.len) catch @panic("qapplication.Screens: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn DevicePixelRatio(self: QApplication) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    pub fn OverrideCursor() QCursor {
        return .{ .ptr = qtc.QGuiApplication_OverrideCursor() };
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    pub fn Clipboard() QClipboard {
        return .{ .ptr = qtc.QGuiApplication_Clipboard() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn KeyboardModifiers() i32 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn QueryKeyboardModifiers() i32 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn MouseButtons() i32 {
        return qtc.QGuiApplication_MouseButtons();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(direction: i32) void {
        qtc.QGuiApplication_SetLayoutDirection(@bitCast(direction));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection() i32 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    pub fn IsRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    pub fn IsLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    pub fn StyleHints() QStyleHints {
        return .{ .ptr = qtc.QGuiApplication_StyleHints() };
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` on: bool `
    ///
    pub fn SetDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    pub fn DesktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    pub fn InputMethod() QInputMethod {
        return .{ .ptr = qtc.QGuiApplication_InputMethod() };
    }

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` quit: bool `
    ///
    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    pub fn QuitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationState() i32 {
        return qtc.QGuiApplication_ApplicationState();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i32) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@bitCast(policy));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn HighDpiScaleFactorRoundingPolicy() i32 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn IsSessionRestored(self: QApplication) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionId(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.SessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SessionKey(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.SessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn IsSavingSession(self: QApplication) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    pub fn Sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn FontDatabaseChanged(self: QApplication) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnFontDatabaseChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn ScreenAdded(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnScreenAdded(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn ScreenRemoved(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnScreenRemoved(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` screen: QScreen `
    ///
    pub fn PrimaryScreenChanged(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, screen: QScreen) callconv(.c) void `
    ///
    pub fn OnPrimaryScreenChanged(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn LastWindowClosed(self: QApplication) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnLastWindowClosed(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` focusObject: QObject `
    ///
    pub fn FocusObjectChanged(self: QApplication, focusObject: anytype) void {
        comptime _ = @TypeOf(focusObject)._is_QObject;
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(focusObject.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, focusObject: QObject) callconv(.c) void `
    ///
    pub fn OnFocusObjectChanged(self: QApplication, callback: *const fn (QApplication, QObject) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` focusWindow: QWindow `
    ///
    pub fn FocusWindowChanged(self: QApplication, focusWindow: anytype) void {
        comptime _ = @TypeOf(focusWindow)._is_QWindow;
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self.ptr), @ptrCast(focusWindow.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, focusWindow: QWindow) callconv(.c) void `
    ///
    pub fn OnFocusWindowChanged(self: QApplication, callback: *const fn (QApplication, QWindow) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` state: qnamespace_enums.ApplicationState `
    ///
    pub fn ApplicationStateChanged(self: QApplication, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void `
    ///
    pub fn OnApplicationStateChanged(self: QApplication, callback: *const fn (QApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirectionChanged(self: QApplication, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn OnLayoutDirectionChanged(self: QApplication, callback: *const fn (QApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn CommitDataRequest(self: QApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn OnCommitDataRequest(self: QApplication, callback: *const fn (QApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` sessionManager: QSessionManager `
    ///
    pub fn SaveStateRequest(self: QApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, sessionManager: QSessionManager) callconv(.c) void `
    ///
    pub fn OnSaveStateRequest(self: QApplication, callback: *const fn (QApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn ApplicationDisplayNameChanged(self: QApplication) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnApplicationDisplayNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` pal: QPalette `
    ///
    pub fn PaletteChanged(self: QApplication, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, pal: QPalette) callconv(.c) void `
    ///
    pub fn OnPaletteChanged(self: QApplication, callback: *const fn (QApplication, QPalette) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` font: QFont `
    ///
    pub fn FontChanged(self: QApplication, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QGuiApplication_FontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, font: QFont) callconv(.c) void `
    ///
    pub fn OnFontChanged(self: QApplication, callback: *const fn (QApplication, QFont) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qapplication.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.Arguments: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.OrganizationDomain: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.OrganizationName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationVersion: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationDirPath: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationFilePath: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` permission: QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn CheckPermission(self: QApplication, permission: anytype) i32 {
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
        const libraryPaths_arr = allocator.alloc(qtc.libqt_string, libraryPaths.len) catch @panic("qapplication.SetLibraryPaths: Memory allocation failed");
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qapplication.LibraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.LibraryPaths: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: QApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnInstallNativeEventFilter(self: QApplication, callback: *const fn (QApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: QApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn OnRemoveNativeEventFilter(self: QApplication, callback: *const fn (QApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn OrganizationNameChanged(self: QApplication) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn OrganizationDomainChanged(self: QApplication) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnOrganizationDomainChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn ApplicationNameChanged(self: QApplication) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnApplicationNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn ApplicationVersionChanged(self: QApplication) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnApplicationVersionChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate3: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate4: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QApplication, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn IsWidgetType(self: QApplication) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn IsWindowType(self: QApplication) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn IsQuickItemType(self: QApplication) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn SignalsBlocked(self: QApplication) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QApplication, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn Thread(self: QApplication) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QApplication, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QApplication, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QApplication, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QApplication, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QApplication, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QApplication, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qapplication.Children: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QApplication, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QApplication, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QApplication, obj: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QApplication, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QApplication `
    ///
    pub fn Disconnect3(self: QApplication) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QApplication, receiver: anytype) bool {
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
    /// ` self: QApplication `
    ///
    pub fn DumpObjectTree(self: QApplication) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn DumpObjectInfo(self: QApplication) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QApplication, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QApplication, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QApplication, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qapplication.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    pub fn BindingStorage(self: QApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn BindingStorage2(self: QApplication) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn Destroyed(self: QApplication) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn Parent(self: QApplication) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QApplication, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn DeleteLater(self: QApplication) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QApplication, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QApplication, time: i64, timerType: i32) i32 {
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
    /// ` self: QApplication `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QApplication, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QApplication, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QApplication, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QApplication, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QApplication, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QApplication, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QApplication, callback: *const fn (QApplication, QObject) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QApplication, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QApplication_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QApplication, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QApplication_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QApplication, callback: *const fn (QApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QApplication_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QApplication_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QApplication, callback: *const fn (QApplication, QTimerEvent) callconv(.c) void) void {
        qtc.QApplication_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QApplication_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QApplication_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QApplication, callback: *const fn (QApplication, QChildEvent) callconv(.c) void) void {
        qtc.QApplication_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QApplication_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QApplication, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QApplication_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QApplication, callback: *const fn (QApplication, QEvent) callconv(.c) void) void {
        qtc.QApplication_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QApplication_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QApplication_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn Sender(self: QApplication) QObject {
        return .{ .ptr = qtc.QApplication_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QApplication `
    ///
    pub fn SuperSender(self: QApplication) QObject {
        return .{ .ptr = qtc.QApplication_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QApplication_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn SenderSignalIndex(self: QApplication) i32 {
        return qtc.QApplication_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QApplication `
    ///
    pub fn SuperSenderSignalIndex(self: QApplication) i32 {
        return qtc.QApplication_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QApplication_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) i32) void {
        qtc.QApplication_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QApplication_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QApplication_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) bool) void {
        qtc.QApplication_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QCoreApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn OnAboutToQuit(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#dtor.QApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QApplication `
    ///
    pub fn Delete(self: QApplication) void {
        qtc.QApplication_Delete(@ptrCast(self.ptr));
    }
};
