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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QApplication object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` argc: *i32 `
    ///
    /// ` argv: [][:0]u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8) QApplication {
        const argv_chararr = allocator.alloc([*:0]u8, argv.len) catch @panic("QApplication.new: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QApplication_new(@ptrCast(argc), @ptrCast(argv_chararr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QApplication object in C++ memory
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
    pub fn new2(allocator: std.mem.Allocator, argc: *i32, argv: [][:0]u8, param3: i32) QApplication {
        const argv_chararr = allocator.alloc([*:0]u8, argv.len) catch @panic("QApplication.new2: Memory allocation failed");
        // Qt takes ownership of the memory.
        // The memory must outlive the application.
        // Do not free this allocation.
        for (argv, 0..argv.len) |str, i|
            argv_chararr[i] = @ptrCast(str.ptr);
        return .{ .ptr = qtc.QApplication_new2(@ptrCast(argc), @ptrCast(argv_chararr), @bitCast(param3)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn metaObject(self: QApplication) QMetaObject {
        return .{ .ptr = qtc.QApplication_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QApplication, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QApplication_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    pub fn superMetaObject(self: QApplication) QMetaObject {
        return .{ .ptr = qtc.QApplication_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QApplication_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QApplication, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QApplication_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QApplication_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QApplication, callback: *const fn (QApplication, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QApplication_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QApplication, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QApplication_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#style)
    ///
    pub fn style() QStyle {
        return .{ .ptr = qtc.QApplication_Style() };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(_style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QApplication_SetStyle(@ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `setStyle2` instead
    ///
    pub const SetStyle2 = setStyle2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` _style: []const u8 `
    ///
    pub fn setStyle2(_style: []const u8) QStyle {
        const style_str = qtc.libqt_string{
            .len = _style.len,
            .data = _style.ptr,
        };
        return .{ .ptr = qtc.QApplication_SetStyle2(style_str) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    pub fn palette(param1: anytype) QPalette {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QApplication_Palette(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `palette2` instead
    ///
    pub const Palette2 = palette2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn palette2(className: [:0]const u8) QPalette {
        const className_Cstring = className.ptr;
        return .{ .ptr = qtc.QApplication_Palette2(className_Cstring) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    pub fn setPalette(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        qtc.QApplication_SetPalette(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    pub fn font() QFont {
        return .{ .ptr = qtc.QApplication_Font() };
    }

    /// ### DEPRECATED: Use `font2` instead
    ///
    pub const Font2 = font2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    pub fn font2(param1: anytype) QFont {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QApplication_Font2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `font3` instead
    ///
    pub const Font3 = font3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn font3(className: [:0]const u8) QFont {
        const className_Cstring = className.ptr;
        return .{ .ptr = qtc.QApplication_Font3(className_Cstring) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn setFont(param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        qtc.QApplication_SetFont(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
    ///
    pub fn fontMetrics() QFontMetrics {
        return .{ .ptr = qtc.QApplication_FontMetrics() };
    }

    /// ### DEPRECATED: Use `allWidgets` instead
    ///
    pub const AllWidgets = allWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allWidgets(allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QApplication_AllWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QApplication.allWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `topLevelWidgets` instead
    ///
    pub const TopLevelWidgets = topLevelWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn topLevelWidgets(allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.QApplication_TopLevelWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QApplication.topLevelWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `activePopupWidget` instead
    ///
    pub const ActivePopupWidget = activePopupWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
    ///
    pub fn activePopupWidget() QWidget {
        return .{ .ptr = qtc.QApplication_ActivePopupWidget() };
    }

    /// ### DEPRECATED: Use `activeModalWidget` instead
    ///
    pub const ActiveModalWidget = activeModalWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
    ///
    pub fn activeModalWidget() QWidget {
        return .{ .ptr = qtc.QApplication_ActiveModalWidget() };
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
    ///
    pub fn focusWidget() QWidget {
        return .{ .ptr = qtc.QApplication_FocusWidget() };
    }

    /// ### DEPRECATED: Use `activeWindow` instead
    ///
    pub const ActiveWindow = activeWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
    ///
    pub fn activeWindow() QWidget {
        return .{ .ptr = qtc.QApplication_ActiveWindow() };
    }

    /// ### DEPRECATED: Use `setActiveWindow` instead
    ///
    pub const SetActiveWindow = setActiveWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` act: QWidget `
    ///
    pub fn setActiveWindow(act: anytype) void {
        comptime _ = @TypeOf(act)._is_QWidget;
        qtc.QApplication_SetActiveWindow(@ptrCast(act.ptr));
    }

    /// ### DEPRECATED: Use `widgetAt` instead
    ///
    pub const WidgetAt = widgetAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn widgetAt(p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QApplication_WidgetAt(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `widgetAt2` instead
    ///
    pub const WidgetAt2 = widgetAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn widgetAt2(x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QApplication_WidgetAt2(@bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `topLevelAt` instead
    ///
    pub const TopLevelAt = topLevelAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPoint `
    ///
    pub fn topLevelAt(p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QApplication_TopLevelAt(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelAt2` instead
    ///
    pub const TopLevelAt2 = topLevelAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn topLevelAt2(x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QApplication_TopLevelAt2(@bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `beep` instead
    ///
    pub const Beep = beep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#beep)
    ///
    pub fn beep() void {
        qtc.QApplication_Beep();
    }

    /// ### DEPRECATED: Use `alert` instead
    ///
    pub const Alert = alert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    pub fn alert(widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QApplication_Alert(@ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `setCursorFlashTime` instead
    ///
    pub const SetCursorFlashTime = setCursorFlashTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` _cursorFlashTime: i32 `
    ///
    pub fn setCursorFlashTime(_cursorFlashTime: i32) void {
        qtc.QApplication_SetCursorFlashTime(@bitCast(_cursorFlashTime));
    }

    /// ### DEPRECATED: Use `cursorFlashTime` instead
    ///
    pub const CursorFlashTime = cursorFlashTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
    ///
    pub fn cursorFlashTime() i32 {
        return qtc.QApplication_CursorFlashTime();
    }

    /// ### DEPRECATED: Use `setDoubleClickInterval` instead
    ///
    pub const SetDoubleClickInterval = setDoubleClickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` _doubleClickInterval: i32 `
    ///
    pub fn setDoubleClickInterval(_doubleClickInterval: i32) void {
        qtc.QApplication_SetDoubleClickInterval(@bitCast(_doubleClickInterval));
    }

    /// ### DEPRECATED: Use `doubleClickInterval` instead
    ///
    pub const DoubleClickInterval = doubleClickInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
    ///
    pub fn doubleClickInterval() i32 {
        return qtc.QApplication_DoubleClickInterval();
    }

    /// ### DEPRECATED: Use `setKeyboardInputInterval` instead
    ///
    pub const SetKeyboardInputInterval = setKeyboardInputInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` _keyboardInputInterval: i32 `
    ///
    pub fn setKeyboardInputInterval(_keyboardInputInterval: i32) void {
        qtc.QApplication_SetKeyboardInputInterval(@bitCast(_keyboardInputInterval));
    }

    /// ### DEPRECATED: Use `keyboardInputInterval` instead
    ///
    pub const KeyboardInputInterval = keyboardInputInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
    ///
    pub fn keyboardInputInterval() i32 {
        return qtc.QApplication_KeyboardInputInterval();
    }

    /// ### DEPRECATED: Use `setWheelScrollLines` instead
    ///
    pub const SetWheelScrollLines = setWheelScrollLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` _wheelScrollLines: i32 `
    ///
    pub fn setWheelScrollLines(_wheelScrollLines: i32) void {
        qtc.QApplication_SetWheelScrollLines(@bitCast(_wheelScrollLines));
    }

    /// ### DEPRECATED: Use `wheelScrollLines` instead
    ///
    pub const WheelScrollLines = wheelScrollLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
    ///
    pub fn wheelScrollLines() i32 {
        return qtc.QApplication_WheelScrollLines();
    }

    /// ### DEPRECATED: Use `setStartDragTime` instead
    ///
    pub const SetStartDragTime = setStartDragTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` ms: i32 `
    ///
    pub fn setStartDragTime(ms: i32) void {
        qtc.QApplication_SetStartDragTime(@bitCast(ms));
    }

    /// ### DEPRECATED: Use `startDragTime` instead
    ///
    pub const StartDragTime = startDragTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
    ///
    pub fn startDragTime() i32 {
        return qtc.QApplication_StartDragTime();
    }

    /// ### DEPRECATED: Use `setStartDragDistance` instead
    ///
    pub const SetStartDragDistance = setStartDragDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` l: i32 `
    ///
    pub fn setStartDragDistance(l: i32) void {
        qtc.QApplication_SetStartDragDistance(@bitCast(l));
    }

    /// ### DEPRECATED: Use `startDragDistance` instead
    ///
    pub const StartDragDistance = startDragDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
    ///
    pub fn startDragDistance() i32 {
        return qtc.QApplication_StartDragDistance();
    }

    /// ### DEPRECATED: Use `isEffectEnabled` instead
    ///
    pub const IsEffectEnabled = isEffectEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    pub fn isEffectEnabled(param1: i32) bool {
        return qtc.QApplication_IsEffectEnabled(@bitCast(param1));
    }

    /// ### DEPRECATED: Use `setEffectEnabled` instead
    ///
    pub const SetEffectEnabled = setEffectEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    pub fn setEffectEnabled(param1: i32) void {
        qtc.QApplication_SetEffectEnabled(@bitCast(param1));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#exec)
    ///
    pub fn exec() i32 {
        return qtc.QApplication_Exec();
    }

    /// ### DEPRECATED: Use `notify` instead
    ///
    pub const Notify = notify;

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
    pub fn notify(self: QApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QApplication_Notify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onNotify` instead
    ///
    pub const OnNotify = onNotify;

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
    pub fn onNotify(self: QApplication, callback: *const fn (QApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNotify` instead
    ///
    pub const SuperNotify = superNotify;

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
    pub fn superNotify(self: QApplication, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QApplication_SuperNotify(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `resolveInterface` instead
    ///
    pub const ResolveInterface = resolveInterface;

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
    pub fn resolveInterface(self: QApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_ResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `onResolveInterface` instead
    ///
    pub const OnResolveInterface = onResolveInterface;

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
    pub fn onResolveInterface(self: QApplication, callback: *const fn (QApplication, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnResolveInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResolveInterface` instead
    ///
    pub const SuperResolveInterface = superResolveInterface;

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
    pub fn superResolveInterface(self: QApplication, name: [:0]const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_SuperResolveInterface(@ptrCast(self.ptr), name_Cstring, @bitCast(revision));
    }

    /// ### DEPRECATED: Use `focusChanged` instead
    ///
    pub const FocusChanged = focusChanged;

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
    pub fn focusChanged(self: QApplication, old: anytype, now: anytype) void {
        comptime _ = @TypeOf(old)._is_QWidget;
        comptime _ = @TypeOf(now)._is_QWidget;
        qtc.QApplication_FocusChanged(@ptrCast(self.ptr), @ptrCast(old.ptr), @ptrCast(now.ptr));
    }

    /// ### DEPRECATED: Use `onFocusChanged` instead
    ///
    pub const OnFocusChanged = onFocusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, old: QWidget, now: QWidget) callconv(.c) void `
    ///
    pub fn onFocusChanged(self: QApplication, callback: *const fn (QApplication, QWidget, QWidget) callconv(.c) void) void {
        qtc.QApplication_Connect_FocusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `styleSheet` instead
    ///
    pub const StyleSheet = styleSheet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QApplication_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.styleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `autoSipEnabled` instead
    ///
    pub const AutoSipEnabled = autoSipEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn autoSipEnabled(self: QApplication) bool {
        return qtc.QApplication_AutoSipEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyleSheet` instead
    ///
    pub const SetStyleSheet = setStyleSheet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` sheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QApplication, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QApplication_SetStyleSheet(@ptrCast(self.ptr), sheet_str);
    }

    /// ### DEPRECATED: Use `setAutoSipEnabled` instead
    ///
    pub const SetAutoSipEnabled = setAutoSipEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoSipEnabled(self: QApplication, enabled: bool) void {
        qtc.QApplication_SetAutoSipEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `closeAllWindows` instead
    ///
    pub const CloseAllWindows = closeAllWindows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
    ///
    pub fn closeAllWindows() void {
        qtc.QApplication_CloseAllWindows();
    }

    /// ### DEPRECATED: Use `aboutQt` instead
    ///
    pub const AboutQt = aboutQt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
    ///
    pub fn aboutQt() void {
        qtc.QApplication_AboutQt();
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QApplication_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QApplication, callback: *const fn (QApplication, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QApplication, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QApplication_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPalette2` instead
    ///
    pub const SetPalette2 = setPalette2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPalette `
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn setPalette2(param1: anytype, className: [:0]const u8) void {
        comptime _ = @TypeOf(param1)._is_QPalette;
        const className_Cstring = className.ptr;
        qtc.QApplication_SetPalette2(@ptrCast(param1.ptr), className_Cstring);
    }

    /// ### DEPRECATED: Use `setFont2` instead
    ///
    pub const SetFont2 = setFont2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    /// ` className: [:0]const u8 `
    ///
    pub fn setFont2(param1: anytype, className: [:0]const u8) void {
        comptime _ = @TypeOf(param1)._is_QFont;
        const className_Cstring = className.ptr;
        qtc.QApplication_SetFont2(@ptrCast(param1.ptr), className_Cstring);
    }

    /// ### DEPRECATED: Use `alert2` instead
    ///
    pub const Alert2 = alert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` widget: QWidget `
    ///
    /// ` duration: i32 `
    ///
    pub fn alert2(widget: anytype, duration: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QApplication_Alert2(@ptrCast(widget.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `setEffectEnabled2` instead
    ///
    pub const SetEffectEnabled2 = setEffectEnabled2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.UIEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEffectEnabled2(param1: i32, enable: bool) void {
        qtc.QApplication_SetEffectEnabled2(@bitCast(param1), enable);
    }

    /// ### DEPRECATED: Use `setApplicationDisplayName` instead
    ///
    pub const SetApplicationDisplayName = setApplicationDisplayName;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.applicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBadgeNumber` instead
    ///
    pub const SetBadgeNumber = setBadgeNumber;

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
    pub fn setBadgeNumber(self: QApplication, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self.ptr), @bitCast(number));
    }

    /// ### DEPRECATED: Use `setDesktopFileName` instead
    ///
    pub const SetDesktopFileName = setDesktopFileName;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFileName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.desktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allWindows` instead
    ///
    pub const AllWindows = allWindows;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("QApplication.allWindows: Memory allocation failed");
        const _data_val: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `topLevelWindows` instead
    ///
    pub const TopLevelWindows = topLevelWindows;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn topLevelWindows(allocator: std.mem.Allocator) []QWindow {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWindow, _arr.len) catch @panic("QApplication.topLevelWindows: Memory allocation failed");
        const _data_val: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    pub fn windowIcon() QIcon {
        return .{ .ptr = qtc.QGuiApplication_WindowIcon() };
    }

    /// ### DEPRECATED: Use `platformName` instead
    ///
    pub const PlatformName = platformName;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn platformName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.platformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `modalWindow` instead
    ///
    pub const ModalWindow = modalWindow;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    pub fn modalWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_ModalWindow() };
    }

    /// ### DEPRECATED: Use `focusWindow` instead
    ///
    pub const FocusWindow = focusWindow;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    pub fn focusWindow() QWindow {
        return .{ .ptr = qtc.QGuiApplication_FocusWindow() };
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    pub fn focusObject() QObject {
        return .{ .ptr = qtc.QGuiApplication_FocusObject() };
    }

    /// ### DEPRECATED: Use `primaryScreen` instead
    ///
    pub const PrimaryScreen = primaryScreen;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    pub fn primaryScreen() QScreen {
        return .{ .ptr = qtc.QGuiApplication_PrimaryScreen() };
    }

    /// ### DEPRECATED: Use `screens` instead
    ///
    pub const Screens = screens;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn screens(allocator: std.mem.Allocator) []QScreen {
        const _arr: qtc.libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScreen, _arr.len) catch @panic("QApplication.screens: Memory allocation failed");
        const _data_val: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `screenAt` instead
    ///
    pub const ScreenAt = screenAt;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn devicePixelRatio(self: QApplication) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `overrideCursor` instead
    ///
    pub const OverrideCursor = overrideCursor;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    pub fn overrideCursor() QCursor {
        return .{ .ptr = qtc.QGuiApplication_OverrideCursor() };
    }

    /// ### DEPRECATED: Use `setOverrideCursor` instead
    ///
    pub const SetOverrideCursor = setOverrideCursor;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    pub fn restoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// ### DEPRECATED: Use `clipboard` instead
    ///
    pub const Clipboard = clipboard;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    pub fn clipboard() QClipboard {
        return .{ .ptr = qtc.QGuiApplication_Clipboard() };
    }

    /// ### DEPRECATED: Use `keyboardModifiers` instead
    ///
    pub const KeyboardModifiers = keyboardModifiers;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    pub fn isRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    pub fn isLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// ### DEPRECATED: Use `styleHints` instead
    ///
    pub const StyleHints = styleHints;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    pub fn styleHints() QStyleHints {
        return .{ .ptr = qtc.QGuiApplication_StyleHints() };
    }

    /// ### DEPRECATED: Use `setDesktopSettingsAware` instead
    ///
    pub const SetDesktopSettingsAware = setDesktopSettingsAware;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    pub fn desktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// ### DEPRECATED: Use `inputMethod` instead
    ///
    pub const InputMethod = inputMethod;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    pub fn inputMethod() QInputMethod {
        return .{ .ptr = qtc.QGuiApplication_InputMethod() };
    }

    /// ### DEPRECATED: Use `platformFunction` instead
    ///
    pub const PlatformFunction = platformFunction;

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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    pub fn quitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// ### DEPRECATED: Use `applicationState` instead
    ///
    pub const ApplicationState = applicationState;

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
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

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.HighDpiScaleFactorRoundingPolicy `
    ///
    pub fn highDpiScaleFactorRoundingPolicy() i32 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// ### DEPRECATED: Use `isSessionRestored` instead
    ///
    pub const IsSessionRestored = isSessionRestored;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn isSessionRestored(self: QApplication) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sessionId` instead
    ///
    pub const SessionId = sessionId;

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
    pub fn sessionId(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.sessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sessionKey` instead
    ///
    pub const SessionKey = sessionKey;

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
    pub fn sessionKey(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGuiApplication_SessionKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.sessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSavingSession` instead
    ///
    pub const IsSavingSession = isSavingSession;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn isSavingSession(self: QApplication) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    pub fn sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// ### DEPRECATED: Use `fontDatabaseChanged` instead
    ///
    pub const FontDatabaseChanged = fontDatabaseChanged;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn fontDatabaseChanged(self: QApplication) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFontDatabaseChanged` instead
    ///
    pub const OnFontDatabaseChanged = onFontDatabaseChanged;

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
    pub fn onFontDatabaseChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `screenAdded` instead
    ///
    pub const ScreenAdded = screenAdded;

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
    pub fn screenAdded(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenAdded` instead
    ///
    pub const OnScreenAdded = onScreenAdded;

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
    pub fn onScreenAdded(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `screenRemoved` instead
    ///
    pub const ScreenRemoved = screenRemoved;

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
    pub fn screenRemoved(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenRemoved` instead
    ///
    pub const OnScreenRemoved = onScreenRemoved;

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
    pub fn onScreenRemoved(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `primaryScreenChanged` instead
    ///
    pub const PrimaryScreenChanged = primaryScreenChanged;

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
    pub fn primaryScreenChanged(self: QApplication, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// ### DEPRECATED: Use `onPrimaryScreenChanged` instead
    ///
    pub const OnPrimaryScreenChanged = onPrimaryScreenChanged;

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
    pub fn onPrimaryScreenChanged(self: QApplication, callback: *const fn (QApplication, QScreen) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastWindowClosed` instead
    ///
    pub const LastWindowClosed = lastWindowClosed;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn lastWindowClosed(self: QApplication) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLastWindowClosed` instead
    ///
    pub const OnLastWindowClosed = onLastWindowClosed;

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
    pub fn onLastWindowClosed(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` _focusObject: QObject `
    ///
    pub fn focusObjectChanged(self: QApplication, _focusObject: anytype) void {
        comptime _ = @TypeOf(_focusObject)._is_QObject;
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(_focusObject.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

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
    pub fn onFocusObjectChanged(self: QApplication, callback: *const fn (QApplication, QObject) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusWindowChanged` instead
    ///
    pub const FocusWindowChanged = focusWindowChanged;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` _focusWindow: QWindow `
    ///
    pub fn focusWindowChanged(self: QApplication, _focusWindow: anytype) void {
        comptime _ = @TypeOf(_focusWindow)._is_QWindow;
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self.ptr), @ptrCast(_focusWindow.ptr));
    }

    /// ### DEPRECATED: Use `onFocusWindowChanged` instead
    ///
    pub const OnFocusWindowChanged = onFocusWindowChanged;

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
    pub fn onFocusWindowChanged(self: QApplication, callback: *const fn (QApplication, QWindow) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationStateChanged` instead
    ///
    pub const ApplicationStateChanged = applicationStateChanged;

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
    pub fn applicationStateChanged(self: QApplication, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onApplicationStateChanged` instead
    ///
    pub const OnApplicationStateChanged = onApplicationStateChanged;

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
    pub fn onApplicationStateChanged(self: QApplication, callback: *const fn (QApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutDirectionChanged` instead
    ///
    pub const LayoutDirectionChanged = layoutDirectionChanged;

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
    pub fn layoutDirectionChanged(self: QApplication, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `onLayoutDirectionChanged` instead
    ///
    pub const OnLayoutDirectionChanged = onLayoutDirectionChanged;

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
    pub fn onLayoutDirectionChanged(self: QApplication, callback: *const fn (QApplication, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `commitDataRequest` instead
    ///
    pub const CommitDataRequest = commitDataRequest;

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
    pub fn commitDataRequest(self: QApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### DEPRECATED: Use `onCommitDataRequest` instead
    ///
    pub const OnCommitDataRequest = onCommitDataRequest;

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
    pub fn onCommitDataRequest(self: QApplication, callback: *const fn (QApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `saveStateRequest` instead
    ///
    pub const SaveStateRequest = saveStateRequest;

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
    pub fn saveStateRequest(self: QApplication, sessionManager: anytype) void {
        comptime _ = @TypeOf(sessionManager)._is_QSessionManager;
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self.ptr), @ptrCast(sessionManager.ptr));
    }

    /// ### DEPRECATED: Use `onSaveStateRequest` instead
    ///
    pub const OnSaveStateRequest = onSaveStateRequest;

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
    pub fn onSaveStateRequest(self: QApplication, callback: *const fn (QApplication, QSessionManager) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `applicationDisplayNameChanged` instead
    ///
    pub const ApplicationDisplayNameChanged = applicationDisplayNameChanged;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    pub fn applicationDisplayNameChanged(self: QApplication) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onApplicationDisplayNameChanged` instead
    ///
    pub const OnApplicationDisplayNameChanged = onApplicationDisplayNameChanged;

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
    pub fn onApplicationDisplayNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paletteChanged` instead
    ///
    pub const PaletteChanged = paletteChanged;

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
    pub fn paletteChanged(self: QApplication, pal: anytype) void {
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self.ptr), @ptrCast(pal.ptr));
    }

    /// ### DEPRECATED: Use `onPaletteChanged` instead
    ///
    pub const OnPaletteChanged = onPaletteChanged;

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
    pub fn onPaletteChanged(self: QApplication, callback: *const fn (QApplication, QPalette) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// Inherited from QGuiApplication
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QApplication `
    ///
    /// ` _font: QFont `
    ///
    pub fn fontChanged(self: QApplication, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGuiApplication_FontChanged(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

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
    pub fn onFontChanged(self: QApplication, callback: *const fn (QApplication, QFont) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QApplication.arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QApplication.arguments: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.organizationDomain: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.organizationName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.applicationName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.applicationVersion: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.applicationDirPath: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.applicationFilePath: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` permission: QPermission `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.PermissionStatus `
    ///
    pub fn checkPermission(self: QApplication, permission: anytype) i32 {
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
        const libraryPaths_arr = allocator.alloc(qtc.libqt_string, _libraryPaths.len) catch @panic("QApplication.setLibraryPaths: Memory allocation failed");
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QApplication.libraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QApplication.libraryPaths: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.translate: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn installNativeEventFilter(self: QApplication, filterObj: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn onInstallNativeEventFilter(self: QApplication, callback: *const fn (QApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn removeNativeEventFilter(self: QApplication, filterObj: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, filterObj: QAbstractNativeEventFilter) callconv(.c) void `
    ///
    pub fn onRemoveNativeEventFilter(self: QApplication, callback: *const fn (QApplication, QAbstractNativeEventFilter) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn organizationNameChanged(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onOrganizationNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn organizationDomainChanged(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onOrganizationDomainChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn applicationNameChanged(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onApplicationNameChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn applicationVersionChanged(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onApplicationVersionChanged(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.translate3: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.translate4: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QApplication, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QApplication.objectName: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QApplication, name: []const u8) void {
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
    /// ` self: QApplication `
    ///
    pub fn isWidgetType(self: QApplication) bool {
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
    /// ` self: QApplication `
    ///
    pub fn isWindowType(self: QApplication) bool {
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
    /// ` self: QApplication `
    ///
    pub fn isQuickItemType(self: QApplication) bool {
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
    /// ` self: QApplication `
    ///
    pub fn signalsBlocked(self: QApplication) bool {
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
    /// ` self: QApplication `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QApplication, b: bool) bool {
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
    /// ` self: QApplication `
    ///
    pub fn thread(self: QApplication) QThread {
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
    /// ` self: QApplication `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QApplication, _thread: anytype) bool {
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
    /// ` self: QApplication `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QApplication, interval: i32) i32 {
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
    /// ` self: QApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QApplication, time: i64) i32 {
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
    /// ` self: QApplication `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QApplication, id: i32) void {
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
    /// ` self: QApplication `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QApplication, id: i32) void {
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
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QApplication, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QApplication.children: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QApplication, _parent: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QApplication, filterObj: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QApplication, obj: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QApplication, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QApplication `
    ///
    pub fn disconnect3(self: QApplication) bool {
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
    /// ` self: QApplication `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QApplication, receiver: anytype) bool {
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
    /// ` self: QApplication `
    ///
    pub fn dumpObjectTree(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    pub fn dumpObjectInfo(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QApplication, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QApplication `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QApplication, name: [:0]const u8) QVariant {
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
    /// ` self: QApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QApplication, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QApplication.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QApplication.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QApplication `
    ///
    pub fn bindingStorage(self: QApplication) QBindingStorage {
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
    /// ` self: QApplication `
    ///
    pub fn bindingStorage2(self: QApplication) QBindingStorage {
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
    /// ` self: QApplication `
    ///
    pub fn destroyed(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    pub fn parent(self: QApplication) QObject {
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
    /// ` self: QApplication `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QApplication, classname: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    pub fn deleteLater(self: QApplication) void {
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
    /// ` self: QApplication `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QApplication, interval: i32, timerType: i32) i32 {
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
    /// ` self: QApplication `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QApplication, time: i64, timerType: i32) i32 {
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
    /// ` self: QApplication `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QApplication, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QApplication, signal: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QApplication, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QApplication, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QApplication, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QApplication `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QApplication, param1: anytype) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QApplication, callback: *const fn (QApplication, QObject) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QApplication, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QApplication_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QApplication, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QApplication_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QApplication, callback: *const fn (QApplication, QObject, QEvent) callconv(.c) bool) void {
        qtc.QApplication_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QApplication_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QApplication_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QApplication, callback: *const fn (QApplication, QTimerEvent) callconv(.c) void) void {
        qtc.QApplication_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QApplication_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QApplication_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QApplication, callback: *const fn (QApplication, QChildEvent) callconv(.c) void) void {
        qtc.QApplication_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QApplication_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QApplication, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QApplication_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QApplication, callback: *const fn (QApplication, QEvent) callconv(.c) void) void {
        qtc.QApplication_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QApplication_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QApplication, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QApplication_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) void) void {
        qtc.QApplication_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    pub fn sender(self: QApplication) QObject {
        return .{ .ptr = qtc.QApplication_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QApplication `
    ///
    pub fn superSender(self: QApplication) QObject {
        return .{ .ptr = qtc.QApplication_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QApplication_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    pub fn senderSignalIndex(self: QApplication) i32 {
        return qtc.QApplication_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QApplication `
    ///
    pub fn superSenderSignalIndex(self: QApplication) i32 {
        return qtc.QApplication_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QApplication_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QApplication `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QApplication, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) i32) void {
        qtc.QApplication_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QApplication_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QApplication, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QApplication_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QApplication`
    ///
    /// ` callback: *const fn (self: QApplication, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QApplication, callback: *const fn (QApplication, QMetaMethod) callconv(.c) bool) void {
        qtc.QApplication_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication) callconv(.c) void `
    ///
    pub fn onAboutToQuit(self: QApplication, callback: *const fn (QApplication) callconv(.c) void) void {
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
    /// ` self: QApplication `
    ///
    /// ` callback: *const fn (self: QApplication, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QApplication, callback: *const fn (QApplication, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qapplication.html#dtor.QApplication)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QApplication `
    ///
    pub fn delete(self: QApplication) void {
        qtc.QApplication_Delete(@ptrCast(self.ptr));
    }
};
