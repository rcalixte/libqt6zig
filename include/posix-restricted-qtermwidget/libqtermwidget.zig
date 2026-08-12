const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Emulation_enums = @import("libEmulation.zig").enums;
const Konsole__Filter__HotSpot = @import("libqt6").Konsole__Filter__HotSpot;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEnterEvent = @import("libqt6").QEnterEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QIODevice = @import("libqt6").QIODevice;
const QIcon = @import("libqt6").QIcon;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QTermWidgetInterface = @import("libqt6").QTermWidgetInterface;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtermwidget_interface_enums = @import("libqtermwidget_interface.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const QTermWidget = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTermWidget,

    pub const _is_QTermWidget = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};
    pub const _is_QTermWidgetInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTermWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QTermWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QTermWidget_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTermWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` startnow: i32 `
    ///
    pub fn new2(startnow: i32) QTermWidget {
        return .{ .ptr = qtc.QTermWidget_new2(@bitCast(startnow)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTermWidget object in C++ memory
    ///
    pub fn new3() QTermWidget {
        return .{ .ptr = qtc.QTermWidget_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTermWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` startnow: i32 `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new4(startnow: i32, _parent: anytype) QTermWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QTermWidget_new4(@bitCast(startnow), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn metaObject(self: QTermWidget) QMetaObject {
        return .{ .ptr = qtc.QTermWidget_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTermWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTermWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn superMetaObject(self: QTermWidget) QMetaObject {
        return .{ .ptr = qtc.QTermWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTermWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTermWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTermWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTermWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTermWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTermWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTermWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTermWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTermWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTermWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn sizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTermWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTerminalSizeHint` instead
    ///
    pub const SetTerminalSizeHint = setTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTerminalSizeHint(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onSetTerminalSizeHint` instead
    ///
    pub const OnSetTerminalSizeHint = onSetTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, enabled: bool) callconv(.c) void `
    ///
    pub fn onSetTerminalSizeHint(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTerminalSizeHint` instead
    ///
    pub const SuperSetTerminalSizeHint = superSetTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSetTerminalSizeHint(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `terminalSizeHint` instead
    ///
    pub const TerminalSizeHint = terminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn terminalSizeHint(self: QTermWidget) bool {
        return qtc.QTermWidget_TerminalSizeHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTerminalSizeHint` instead
    ///
    pub const OnTerminalSizeHint = onTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onTerminalSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnTerminalSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTerminalSizeHint` instead
    ///
    pub const SuperTerminalSizeHint = superTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superTerminalSizeHint(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperTerminalSizeHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startShellProgram` instead
    ///
    pub const StartShellProgram = startShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn startShellProgram(self: QTermWidget) void {
        qtc.QTermWidget_StartShellProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartShellProgram` instead
    ///
    pub const OnStartShellProgram = onStartShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartShellProgram(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnStartShellProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartShellProgram` instead
    ///
    pub const SuperStartShellProgram = superStartShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superStartShellProgram(self: QTermWidget) void {
        qtc.QTermWidget_SuperStartShellProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTerminalTeletype` instead
    ///
    pub const StartTerminalTeletype = startTerminalTeletype;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn startTerminalTeletype(self: QTermWidget) void {
        qtc.QTermWidget_StartTerminalTeletype(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartTerminalTeletype` instead
    ///
    pub const OnStartTerminalTeletype = onStartTerminalTeletype;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartTerminalTeletype(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnStartTerminalTeletype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartTerminalTeletype` instead
    ///
    pub const SuperStartTerminalTeletype = superStartTerminalTeletype;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superStartTerminalTeletype(self: QTermWidget) void {
        qtc.QTermWidget_SuperStartTerminalTeletype(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getShellPID` instead
    ///
    pub const GetShellPID = getShellPID;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn getShellPID(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetShellPID(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGetShellPID` instead
    ///
    pub const OnGetShellPID = onGetShellPID;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onGetShellPID(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetShellPID(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetShellPID` instead
    ///
    pub const SuperGetShellPID = superGetShellPID;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superGetShellPID(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetShellPID(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getForegroundProcessId` instead
    ///
    pub const GetForegroundProcessId = getForegroundProcessId;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn getForegroundProcessId(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGetForegroundProcessId` instead
    ///
    pub const OnGetForegroundProcessId = onGetForegroundProcessId;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onGetForegroundProcessId(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetForegroundProcessId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetForegroundProcessId` instead
    ///
    pub const SuperGetForegroundProcessId = superGetForegroundProcessId;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superGetForegroundProcessId(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `changeDir` instead
    ///
    pub const ChangeDir = changeDir;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn changeDir(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_ChangeDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `onChangeDir` instead
    ///
    pub const OnChangeDir = onChangeDir;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, dir: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onChangeDir(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnChangeDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeDir` instead
    ///
    pub const SuperChangeDir = superChangeDir;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn superChangeDir(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SuperChangeDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `setTerminalFont` instead
    ///
    pub const SetTerminalFont = setTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setTerminalFont(self: QTermWidget, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTermWidget_SetTerminalFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `onSetTerminalFont` instead
    ///
    pub const OnSetTerminalFont = onSetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, font: QFont) callconv(.c) void `
    ///
    pub fn onSetTerminalFont(self: QTermWidget, callback: *const fn (QTermWidget, QFont) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTerminalFont` instead
    ///
    pub const SuperSetTerminalFont = superSetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn superSetTerminalFont(self: QTermWidget, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTermWidget_SuperSetTerminalFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `getTerminalFont` instead
    ///
    pub const GetTerminalFont = getTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn getTerminalFont(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QTermWidget_GetTerminalFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGetTerminalFont` instead
    ///
    pub const OnGetTerminalFont = onGetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QFont `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGetTerminalFont(self: QTermWidget, callback: *const fn () callconv(.c) QFont) void {
        qtc.QTermWidget_OnGetTerminalFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetTerminalFont` instead
    ///
    pub const SuperGetTerminalFont = superGetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superGetTerminalFont(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QTermWidget_SuperGetTerminalFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTerminalOpacity` instead
    ///
    pub const SetTerminalOpacity = setTerminalOpacity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn setTerminalOpacity(self: QTermWidget, level: f64) void {
        qtc.QTermWidget_SetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `onSetTerminalOpacity` instead
    ///
    pub const OnSetTerminalOpacity = onSetTerminalOpacity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, level: f64) callconv(.c) void `
    ///
    pub fn onSetTerminalOpacity(self: QTermWidget, callback: *const fn (QTermWidget, f64) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalOpacity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTerminalOpacity` instead
    ///
    pub const SuperSetTerminalOpacity = superSetTerminalOpacity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn superSetTerminalOpacity(self: QTermWidget, level: f64) void {
        qtc.QTermWidget_SuperSetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `setTerminalBackgroundImage` instead
    ///
    pub const SetTerminalBackgroundImage = setTerminalBackgroundImage;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` backgroundImage: []const u8 `
    ///
    pub fn setTerminalBackgroundImage(self: QTermWidget, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidget_SetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

    /// ### DEPRECATED: Use `onSetTerminalBackgroundImage` instead
    ///
    pub const OnSetTerminalBackgroundImage = onSetTerminalBackgroundImage;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, backgroundImage: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetTerminalBackgroundImage(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalBackgroundImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTerminalBackgroundImage` instead
    ///
    pub const SuperSetTerminalBackgroundImage = superSetTerminalBackgroundImage;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` backgroundImage: []const u8 `
    ///
    pub fn superSetTerminalBackgroundImage(self: QTermWidget, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidget_SuperSetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

    /// ### DEPRECATED: Use `setTerminalBackgroundMode` instead
    ///
    pub const SetTerminalBackgroundMode = setTerminalBackgroundMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` mode: i32 `
    ///
    pub fn setTerminalBackgroundMode(self: QTermWidget, mode: i32) void {
        qtc.QTermWidget_SetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetTerminalBackgroundMode` instead
    ///
    pub const OnSetTerminalBackgroundMode = onSetTerminalBackgroundMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, mode: i32) callconv(.c) void `
    ///
    pub fn onSetTerminalBackgroundMode(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTerminalBackgroundMode` instead
    ///
    pub const SuperSetTerminalBackgroundMode = superSetTerminalBackgroundMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` mode: i32 `
    ///
    pub fn superSetTerminalBackgroundMode(self: QTermWidget, mode: i32) void {
        qtc.QTermWidget_SuperSetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setEnvironment` instead
    ///
    pub const SetEnvironment = setEnvironment;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` environment: []const []const u8 `
    ///
    pub fn setEnvironment(self: QTermWidget, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("QTermWidget.setEnvironment: Memory allocation failed");
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
        qtc.QTermWidget_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### DEPRECATED: Use `onSetEnvironment` instead
    ///
    pub const OnSetEnvironment = onSetEnvironment;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, environment: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetEnvironment(self: QTermWidget, callback: *const fn (QTermWidget, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetEnvironment(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEnvironment` instead
    ///
    pub const SuperSetEnvironment = superSetEnvironment;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` environment: []const []const u8 `
    ///
    pub fn superSetEnvironment(self: QTermWidget, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("QTermWidget.setEnvironment: Memory allocation failed");
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
        qtc.QTermWidget_SuperSetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### DEPRECATED: Use `setShellProgram` instead
    ///
    pub const SetShellProgram = setShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` program: []const u8 `
    ///
    pub fn setShellProgram(self: QTermWidget, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidget_SetShellProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### DEPRECATED: Use `onSetShellProgram` instead
    ///
    pub const OnSetShellProgram = onSetShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, program: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetShellProgram(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetShellProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetShellProgram` instead
    ///
    pub const SuperSetShellProgram = superSetShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` program: []const u8 `
    ///
    pub fn superSetShellProgram(self: QTermWidget, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidget_SuperSetShellProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn setWorkingDirectory(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `onSetWorkingDirectory` instead
    ///
    pub const OnSetWorkingDirectory = onSetWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, dir: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetWorkingDirectory(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetWorkingDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWorkingDirectory` instead
    ///
    pub const SuperSetWorkingDirectory = superSetWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn superSetWorkingDirectory(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SuperSetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onWorkingDirectory` instead
    ///
    pub const OnWorkingDirectory = onWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWorkingDirectory(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnWorkingDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWorkingDirectory` instead
    ///
    pub const SuperWorkingDirectory = superWorkingDirectory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superWorkingDirectory(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperWorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.workingDirectory: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn setArgs(self: QTermWidget, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("QTermWidget.setArgs: Memory allocation failed");
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
        qtc.QTermWidget_SetArgs(@ptrCast(self.ptr), args_list);
    }

    /// ### DEPRECATED: Use `onSetArgs` instead
    ///
    pub const OnSetArgs = onSetArgs;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, args: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetArgs(self: QTermWidget, callback: *const fn (QTermWidget, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetArgs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetArgs` instead
    ///
    pub const SuperSetArgs = superSetArgs;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` args: []const []const u8 `
    ///
    pub fn superSetArgs(self: QTermWidget, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("QTermWidget.setArgs: Memory allocation failed");
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
        qtc.QTermWidget_SuperSetArgs(@ptrCast(self.ptr), args_list);
    }

    /// ### DEPRECATED: Use `setColorScheme` instead
    ///
    pub const SetColorScheme = setColorScheme;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setColorScheme(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidget_SetColorScheme(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSetColorScheme` instead
    ///
    pub const OnSetColorScheme = onSetColorScheme;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetColorScheme(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetColorScheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetColorScheme` instead
    ///
    pub const SuperSetColorScheme = superSetColorScheme;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superSetColorScheme(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidget_SuperSetColorScheme(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `getAvailableColorSchemes` instead
    ///
    pub const GetAvailableColorSchemes = getAvailableColorSchemes;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getAvailableColorSchemes(self: QTermWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_GetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTermWidget.getAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidget.getAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetAvailableColorSchemes` instead
    ///
    pub const OnGetAvailableColorSchemes = onGetAvailableColorSchemes;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onGetAvailableColorSchemes(self: QTermWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTermWidget_OnGetAvailableColorSchemes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetAvailableColorSchemes` instead
    ///
    pub const SuperGetAvailableColorSchemes = superGetAvailableColorSchemes;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superGetAvailableColorSchemes(self: QTermWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_SuperGetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTermWidget.getAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidget.getAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `availableColorSchemes` instead
    ///
    pub const AvailableColorSchemes = availableColorSchemes;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableColorSchemes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_AvailableColorSchemes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTermWidget.availableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidget.availableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `addCustomColorSchemeDir` instead
    ///
    pub const AddCustomColorSchemeDir = addCustomColorSchemeDir;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` custom_dir: []const u8 `
    ///
    pub fn addCustomColorSchemeDir(custom_dir: []const u8) void {
        const custom_dir_str = qtc.libqt_string{
            .len = custom_dir.len,
            .data = custom_dir.ptr,
        };
        qtc.QTermWidget_AddCustomColorSchemeDir(custom_dir_str);
    }

    /// ### DEPRECATED: Use `setHistorySize` instead
    ///
    pub const SetHistorySize = setHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` lines: i32 `
    ///
    pub fn setHistorySize(self: QTermWidget, lines: i32) void {
        qtc.QTermWidget_SetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

    /// ### DEPRECATED: Use `onSetHistorySize` instead
    ///
    pub const OnSetHistorySize = onSetHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, lines: i32) callconv(.c) void `
    ///
    pub fn onSetHistorySize(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetHistorySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHistorySize` instead
    ///
    pub const SuperSetHistorySize = superSetHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` lines: i32 `
    ///
    pub fn superSetHistorySize(self: QTermWidget, lines: i32) void {
        qtc.QTermWidget_SuperSetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

    /// ### DEPRECATED: Use `historySize` instead
    ///
    pub const HistorySize = historySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn historySize(self: QTermWidget) i32 {
        return qtc.QTermWidget_HistorySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHistorySize` instead
    ///
    pub const OnHistorySize = onHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHistorySize(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnHistorySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHistorySize` instead
    ///
    pub const SuperHistorySize = superHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superHistorySize(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperHistorySize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScrollBarPosition` instead
    ///
    pub const SetScrollBarPosition = setScrollBarPosition;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition `
    ///
    pub fn setScrollBarPosition(self: QTermWidget, scrollBarPosition: i32) void {
        qtc.QTermWidget_SetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

    /// ### DEPRECATED: Use `onSetScrollBarPosition` instead
    ///
    pub const OnSetScrollBarPosition = onSetScrollBarPosition;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition) callconv(.c) void `
    ///
    pub fn onSetScrollBarPosition(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetScrollBarPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetScrollBarPosition` instead
    ///
    pub const SuperSetScrollBarPosition = superSetScrollBarPosition;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition `
    ///
    pub fn superSetScrollBarPosition(self: QTermWidget, scrollBarPosition: i32) void {
        qtc.QTermWidget_SuperSetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

    /// ### DEPRECATED: Use `scrollToEnd` instead
    ///
    pub const ScrollToEnd = scrollToEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn scrollToEnd(self: QTermWidget) void {
        qtc.QTermWidget_ScrollToEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScrollToEnd` instead
    ///
    pub const OnScrollToEnd = onScrollToEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onScrollToEnd(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnScrollToEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScrollToEnd` instead
    ///
    pub const SuperScrollToEnd = superScrollToEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superScrollToEnd(self: QTermWidget) void {
        qtc.QTermWidget_SuperScrollToEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sendText` instead
    ///
    pub const SendText = sendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn sendText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SendText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSendText` instead
    ///
    pub const OnSendText = onSendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSendText(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSendText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendText` instead
    ///
    pub const SuperSendText = superSendText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superSendText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SuperSendText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `sendKeyEvent` instead
    ///
    pub const SendKeyEvent = sendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn sendKeyEvent(self: QTermWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidget_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onSendKeyEvent` instead
    ///
    pub const OnSendKeyEvent = onSendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onSendKeyEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnSendKeyEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSendKeyEvent` instead
    ///
    pub const SuperSendKeyEvent = superSendKeyEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superSendKeyEvent(self: QTermWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidget_SuperSendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `setFlowControlEnabled` instead
    ///
    pub const SetFlowControlEnabled = setFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlowControlEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onSetFlowControlEnabled` instead
    ///
    pub const OnSetFlowControlEnabled = onSetFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, enabled: bool) callconv(.c) void `
    ///
    pub fn onSetFlowControlEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetFlowControlEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFlowControlEnabled` instead
    ///
    pub const SuperSetFlowControlEnabled = superSetFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSetFlowControlEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `flowControlEnabled` instead
    ///
    pub const FlowControlEnabled = flowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn flowControlEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_FlowControlEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFlowControlEnabled` instead
    ///
    pub const OnFlowControlEnabled = onFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFlowControlEnabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFlowControlEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlowControlEnabled` instead
    ///
    pub const SuperFlowControlEnabled = superFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superFlowControlEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFlowControlEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlowControlWarningEnabled` instead
    ///
    pub const SetFlowControlWarningEnabled = setFlowControlWarningEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlowControlWarningEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onSetFlowControlWarningEnabled` instead
    ///
    pub const OnSetFlowControlWarningEnabled = onSetFlowControlWarningEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, enabled: bool) callconv(.c) void `
    ///
    pub fn onSetFlowControlWarningEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetFlowControlWarningEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFlowControlWarningEnabled` instead
    ///
    pub const SuperSetFlowControlWarningEnabled = superSetFlowControlWarningEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSetFlowControlWarningEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `availableKeyBindings` instead
    ///
    pub const AvailableKeyBindings = availableKeyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableKeyBindings(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_AvailableKeyBindings();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTermWidget.availableKeyBindings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidget.availableKeyBindings: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keyBindings` instead
    ///
    pub const KeyBindings = keyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyBindings(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.keyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onKeyBindings` instead
    ///
    pub const OnKeyBindings = onKeyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onKeyBindings(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnKeyBindings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyBindings` instead
    ///
    pub const SuperKeyBindings = superKeyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superKeyBindings(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperKeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.keyBindings: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` motionAfterPasting: i32 `
    ///
    pub fn setMotionAfterPasting(self: QTermWidget, motionAfterPasting: i32) void {
        qtc.QTermWidget_SetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

    /// ### DEPRECATED: Use `onSetMotionAfterPasting` instead
    ///
    pub const OnSetMotionAfterPasting = onSetMotionAfterPasting;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, motionAfterPasting: i32) callconv(.c) void `
    ///
    pub fn onSetMotionAfterPasting(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMotionAfterPasting` instead
    ///
    pub const SuperSetMotionAfterPasting = superSetMotionAfterPasting;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` motionAfterPasting: i32 `
    ///
    pub fn superSetMotionAfterPasting(self: QTermWidget, motionAfterPasting: i32) void {
        qtc.QTermWidget_SuperSetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

    /// ### DEPRECATED: Use `historyLinesCount` instead
    ///
    pub const HistoryLinesCount = historyLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn historyLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_HistoryLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHistoryLinesCount` instead
    ///
    pub const OnHistoryLinesCount = onHistoryLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHistoryLinesCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnHistoryLinesCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHistoryLinesCount` instead
    ///
    pub const SuperHistoryLinesCount = superHistoryLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superHistoryLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperHistoryLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenColumnsCount` instead
    ///
    pub const ScreenColumnsCount = screenColumnsCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn screenColumnsCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_ScreenColumnsCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScreenColumnsCount` instead
    ///
    pub const OnScreenColumnsCount = onScreenColumnsCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onScreenColumnsCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnScreenColumnsCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScreenColumnsCount` instead
    ///
    pub const SuperScreenColumnsCount = superScreenColumnsCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superScreenColumnsCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperScreenColumnsCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenLinesCount` instead
    ///
    pub const ScreenLinesCount = screenLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn screenLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_ScreenLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScreenLinesCount` instead
    ///
    pub const OnScreenLinesCount = onScreenLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onScreenLinesCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnScreenLinesCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScreenLinesCount` instead
    ///
    pub const SuperScreenLinesCount = superScreenLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superScreenLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperScreenLinesCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionStart` instead
    ///
    pub const SetSelectionStart = setSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn setSelectionStart(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSetSelectionStart` instead
    ///
    pub const OnSetSelectionStart = onSetSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onSetSelectionStart(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSelectionStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionStart` instead
    ///
    pub const SuperSetSelectionStart = superSetSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superSetSelectionStart(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SuperSetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `setSelectionEnd` instead
    ///
    pub const SetSelectionEnd = setSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn setSelectionEnd(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSetSelectionEnd` instead
    ///
    pub const OnSetSelectionEnd = onSetSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, row: i32, column: i32) callconv(.c) void `
    ///
    pub fn onSetSelectionEnd(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSelectionEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionEnd` instead
    ///
    pub const SuperSetSelectionEnd = superSetSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superSetSelectionEnd(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SuperSetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `getSelectionStart` instead
    ///
    pub const GetSelectionStart = getSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn getSelectionStart(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_GetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `onGetSelectionStart` instead
    ///
    pub const OnGetSelectionStart = onGetSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, row: *i32, column: *i32) callconv(.c) void `
    ///
    pub fn onGetSelectionStart(self: QTermWidget, callback: *const fn (QTermWidget, *i32, *i32) callconv(.c) void) void {
        qtc.QTermWidget_OnGetSelectionStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetSelectionStart` instead
    ///
    pub const SuperGetSelectionStart = superGetSelectionStart;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn superGetSelectionStart(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_SuperGetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `getSelectionEnd` instead
    ///
    pub const GetSelectionEnd = getSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn getSelectionEnd(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_GetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `onGetSelectionEnd` instead
    ///
    pub const OnGetSelectionEnd = onGetSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, row: *i32, column: *i32) callconv(.c) void `
    ///
    pub fn onGetSelectionEnd(self: QTermWidget, callback: *const fn (QTermWidget, *i32, *i32) callconv(.c) void) void {
        qtc.QTermWidget_OnGetSelectionEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetSelectionEnd` instead
    ///
    pub const SuperGetSelectionEnd = superGetSelectionEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: *i32 `
    ///
    /// ` column: *i32 `
    ///
    pub fn superGetSelectionEnd(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_SuperGetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` preserveLineBreaks: bool `
    ///
    pub fn selectedText(self: QTermWidget, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidget_SelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectedText` instead
    ///
    pub const OnSelectedText = onSelectedText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, preserveLineBreaks: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn onSelectedText(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectedText` instead
    ///
    pub const SuperSelectedText = superSelectedText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` preserveLineBreaks: bool `
    ///
    pub fn superSelectedText(self: QTermWidget, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidget_SuperSelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.selectedText: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` monitorActivity: bool `
    ///
    pub fn setMonitorActivity(self: QTermWidget, monitorActivity: bool) void {
        qtc.QTermWidget_SetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

    /// ### DEPRECATED: Use `onSetMonitorActivity` instead
    ///
    pub const OnSetMonitorActivity = onSetMonitorActivity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, monitorActivity: bool) callconv(.c) void `
    ///
    pub fn onSetMonitorActivity(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMonitorActivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMonitorActivity` instead
    ///
    pub const SuperSetMonitorActivity = superSetMonitorActivity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` monitorActivity: bool `
    ///
    pub fn superSetMonitorActivity(self: QTermWidget, monitorActivity: bool) void {
        qtc.QTermWidget_SuperSetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

    /// ### DEPRECATED: Use `setMonitorSilence` instead
    ///
    pub const SetMonitorSilence = setMonitorSilence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` monitorSilence: bool `
    ///
    pub fn setMonitorSilence(self: QTermWidget, monitorSilence: bool) void {
        qtc.QTermWidget_SetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

    /// ### DEPRECATED: Use `onSetMonitorSilence` instead
    ///
    pub const OnSetMonitorSilence = onSetMonitorSilence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, monitorSilence: bool) callconv(.c) void `
    ///
    pub fn onSetMonitorSilence(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMonitorSilence(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMonitorSilence` instead
    ///
    pub const SuperSetMonitorSilence = superSetMonitorSilence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` monitorSilence: bool `
    ///
    pub fn superSetMonitorSilence(self: QTermWidget, monitorSilence: bool) void {
        qtc.QTermWidget_SuperSetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

    /// ### DEPRECATED: Use `setSilenceTimeout` instead
    ///
    pub const SetSilenceTimeout = setSilenceTimeout;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` seconds: i32 `
    ///
    pub fn setSilenceTimeout(self: QTermWidget, seconds: i32) void {
        qtc.QTermWidget_SetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### DEPRECATED: Use `onSetSilenceTimeout` instead
    ///
    pub const OnSetSilenceTimeout = onSetSilenceTimeout;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, seconds: i32) callconv(.c) void `
    ///
    pub fn onSetSilenceTimeout(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSilenceTimeout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSilenceTimeout` instead
    ///
    pub const SuperSetSilenceTimeout = superSetSilenceTimeout;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` seconds: i32 `
    ///
    pub fn superSetSilenceTimeout(self: QTermWidget, seconds: i32) void {
        qtc.QTermWidget_SuperSetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### DEPRECATED: Use `getHotSpotAt` instead
    ///
    pub const GetHotSpotAt = getHotSpotAt;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn getHotSpotAt(self: QTermWidget, _pos: anytype) Konsole__Filter__HotSpot {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_GetHotSpotAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `getHotSpotAt2` instead
    ///
    pub const GetHotSpotAt2 = getHotSpotAt2;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn getHotSpotAt2(self: QTermWidget, row: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.QTermWidget_GetHotSpotAt2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `filterActions` instead
    ///
    pub const FilterActions = filterActions;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` position: QPoint `
    ///
    pub fn filterActions(self: QTermWidget, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidget_FilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTermWidget.filterActions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onFilterActions` instead
    ///
    pub const OnFilterActions = onFilterActions;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, position: QPoint) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QAction `
    ///
    pub fn onFilterActions(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) qtc.libqt_list) void {
        qtc.QTermWidget_OnFilterActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFilterActions` instead
    ///
    pub const SuperFilterActions = superFilterActions;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` position: QPoint `
    ///
    pub fn superFilterActions(self: QTermWidget, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidget_SuperFilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTermWidget.filterActions: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    pub fn getPtySlaveFd(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetPtySlaveFd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGetPtySlaveFd` instead
    ///
    pub const OnGetPtySlaveFd = onGetPtySlaveFd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onGetPtySlaveFd(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetPtySlaveFd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetPtySlaveFd` instead
    ///
    pub const SuperGetPtySlaveFd = superGetPtySlaveFd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superGetPtySlaveFd(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetPtySlaveFd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardCursorShape` instead
    ///
    pub const SetKeyboardCursorShape = setKeyboardCursorShape;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` shape: Emulation_enums.KeyboardCursorShape `
    ///
    pub fn setKeyboardCursorShape(self: QTermWidget, shape: i32) void {
        qtc.QTermWidget_SetKeyboardCursorShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### DEPRECATED: Use `setBlinkingCursor` instead
    ///
    pub const SetBlinkingCursor = setBlinkingCursor;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` blink: bool `
    ///
    pub fn setBlinkingCursor(self: QTermWidget, blink: bool) void {
        qtc.QTermWidget_SetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

    /// ### DEPRECATED: Use `onSetBlinkingCursor` instead
    ///
    pub const OnSetBlinkingCursor = onSetBlinkingCursor;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, blink: bool) callconv(.c) void `
    ///
    pub fn onSetBlinkingCursor(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBlinkingCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBlinkingCursor` instead
    ///
    pub const SuperSetBlinkingCursor = superSetBlinkingCursor;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` blink: bool `
    ///
    pub fn superSetBlinkingCursor(self: QTermWidget, blink: bool) void {
        qtc.QTermWidget_SuperSetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

    /// ### DEPRECATED: Use `setBidiEnabled` instead
    ///
    pub const SetBidiEnabled = setBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setBidiEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onSetBidiEnabled` instead
    ///
    pub const OnSetBidiEnabled = onSetBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, enabled: bool) callconv(.c) void `
    ///
    pub fn onSetBidiEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBidiEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBidiEnabled` instead
    ///
    pub const SuperSetBidiEnabled = superSetBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn superSetBidiEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isBidiEnabled` instead
    ///
    pub const IsBidiEnabled = isBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isBidiEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_IsBidiEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsBidiEnabled` instead
    ///
    pub const OnIsBidiEnabled = onIsBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsBidiEnabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnIsBidiEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsBidiEnabled` instead
    ///
    pub const SuperIsBidiEnabled = superIsBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superIsBidiEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperIsBidiEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoClose` instead
    ///
    pub const SetAutoClose = setAutoClose;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` autoClose: bool `
    ///
    pub fn setAutoClose(self: QTermWidget, autoClose: bool) void {
        qtc.QTermWidget_SetAutoClose(@ptrCast(self.ptr), autoClose);
    }

    /// ### DEPRECATED: Use `onSetAutoClose` instead
    ///
    pub const OnSetAutoClose = onSetAutoClose;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, autoClose: bool) callconv(.c) void `
    ///
    pub fn onSetAutoClose(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetAutoClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoClose` instead
    ///
    pub const SuperSetAutoClose = superSetAutoClose;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` autoClose: bool `
    ///
    pub fn superSetAutoClose(self: QTermWidget, autoClose: bool) void {
        qtc.QTermWidget_SuperSetAutoClose(@ptrCast(self.ptr), autoClose);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTitle` instead
    ///
    pub const OnTitle = onTitle;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onTitle(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnTitle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTitle` instead
    ///
    pub const SuperTitle = superTitle;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superTitle(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.title: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIcon` instead
    ///
    pub const OnIcon = onIcon;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIcon(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon` instead
    ///
    pub const SuperIcon = superIcon;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superIcon(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.icon: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    pub fn isTitleChanged(self: QTermWidget) bool {
        return qtc.QTermWidget_IsTitleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsTitleChanged` instead
    ///
    pub const OnIsTitleChanged = onIsTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsTitleChanged(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnIsTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsTitleChanged` instead
    ///
    pub const SuperIsTitleChanged = superIsTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superIsTitleChanged(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperIsTitleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bracketText` instead
    ///
    pub const BracketText = bracketText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn bracketText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_BracketText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onBracketText` instead
    ///
    pub const OnBracketText = onBracketText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onBracketText(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnBracketText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBracketText` instead
    ///
    pub const SuperBracketText = superBracketText;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superBracketText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SuperBracketText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `disableBracketedPasteMode` instead
    ///
    pub const DisableBracketedPasteMode = disableBracketedPasteMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` disable: bool `
    ///
    pub fn disableBracketedPasteMode(self: QTermWidget, disable: bool) void {
        qtc.QTermWidget_DisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

    /// ### DEPRECATED: Use `onDisableBracketedPasteMode` instead
    ///
    pub const OnDisableBracketedPasteMode = onDisableBracketedPasteMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, disable: bool) callconv(.c) void `
    ///
    pub fn onDisableBracketedPasteMode(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnDisableBracketedPasteMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisableBracketedPasteMode` instead
    ///
    pub const SuperDisableBracketedPasteMode = superDisableBracketedPasteMode;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` disable: bool `
    ///
    pub fn superDisableBracketedPasteMode(self: QTermWidget, disable: bool) void {
        qtc.QTermWidget_SuperDisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

    /// ### DEPRECATED: Use `bracketedPasteModeIsDisabled` instead
    ///
    pub const BracketedPasteModeIsDisabled = bracketedPasteModeIsDisabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn bracketedPasteModeIsDisabled(self: QTermWidget) bool {
        return qtc.QTermWidget_BracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBracketedPasteModeIsDisabled` instead
    ///
    pub const OnBracketedPasteModeIsDisabled = onBracketedPasteModeIsDisabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onBracketedPasteModeIsDisabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnBracketedPasteModeIsDisabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBracketedPasteModeIsDisabled` instead
    ///
    pub const SuperBracketedPasteModeIsDisabled = superBracketedPasteModeIsDisabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superBracketedPasteModeIsDisabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperBracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn setMargin(self: QTermWidget, margin: i32) void {
        qtc.QTermWidget_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `onSetMargin` instead
    ///
    pub const OnSetMargin = onSetMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, margin: i32) callconv(.c) void `
    ///
    pub fn onSetMargin(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMargin` instead
    ///
    pub const SuperSetMargin = superSetMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn superSetMargin(self: QTermWidget, margin: i32) void {
        qtc.QTermWidget_SuperSetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `getMargin` instead
    ///
    pub const GetMargin = getMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn getMargin(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGetMargin` instead
    ///
    pub const OnGetMargin = onGetMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onGetMargin(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetMargin` instead
    ///
    pub const SuperGetMargin = superGetMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superGetMargin(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDrawLineChars` instead
    ///
    pub const SetDrawLineChars = setDrawLineChars;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` drawLineChars: bool `
    ///
    pub fn setDrawLineChars(self: QTermWidget, drawLineChars: bool) void {
        qtc.QTermWidget_SetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

    /// ### DEPRECATED: Use `onSetDrawLineChars` instead
    ///
    pub const OnSetDrawLineChars = onSetDrawLineChars;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, drawLineChars: bool) callconv(.c) void `
    ///
    pub fn onSetDrawLineChars(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetDrawLineChars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDrawLineChars` instead
    ///
    pub const SuperSetDrawLineChars = superSetDrawLineChars;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` drawLineChars: bool `
    ///
    pub fn superSetDrawLineChars(self: QTermWidget, drawLineChars: bool) void {
        qtc.QTermWidget_SuperSetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

    /// ### DEPRECATED: Use `setBoldIntense` instead
    ///
    pub const SetBoldIntense = setBoldIntense;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` boldIntense: bool `
    ///
    pub fn setBoldIntense(self: QTermWidget, boldIntense: bool) void {
        qtc.QTermWidget_SetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

    /// ### DEPRECATED: Use `onSetBoldIntense` instead
    ///
    pub const OnSetBoldIntense = onSetBoldIntense;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, boldIntense: bool) callconv(.c) void `
    ///
    pub fn onSetBoldIntense(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBoldIntense(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBoldIntense` instead
    ///
    pub const SuperSetBoldIntense = superSetBoldIntense;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` boldIntense: bool `
    ///
    pub fn superSetBoldIntense(self: QTermWidget, boldIntense: bool) void {
        qtc.QTermWidget_SuperSetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

    /// ### DEPRECATED: Use `setConfirmMultilinePaste` instead
    ///
    pub const SetConfirmMultilinePaste = setConfirmMultilinePaste;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` confirmMultilinePaste: bool `
    ///
    pub fn setConfirmMultilinePaste(self: QTermWidget, confirmMultilinePaste: bool) void {
        qtc.QTermWidget_SetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

    /// ### DEPRECATED: Use `onSetConfirmMultilinePaste` instead
    ///
    pub const OnSetConfirmMultilinePaste = onSetConfirmMultilinePaste;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, confirmMultilinePaste: bool) callconv(.c) void `
    ///
    pub fn onSetConfirmMultilinePaste(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetConfirmMultilinePaste(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetConfirmMultilinePaste` instead
    ///
    pub const SuperSetConfirmMultilinePaste = superSetConfirmMultilinePaste;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` confirmMultilinePaste: bool `
    ///
    pub fn superSetConfirmMultilinePaste(self: QTermWidget, confirmMultilinePaste: bool) void {
        qtc.QTermWidget_SuperSetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

    /// ### DEPRECATED: Use `setTrimPastedTrailingNewlines` instead
    ///
    pub const SetTrimPastedTrailingNewlines = setTrimPastedTrailingNewlines;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` trimPastedTrailingNewlines: bool `
    ///
    pub fn setTrimPastedTrailingNewlines(self: QTermWidget, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidget_SetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

    /// ### DEPRECATED: Use `onSetTrimPastedTrailingNewlines` instead
    ///
    pub const OnSetTrimPastedTrailingNewlines = onSetTrimPastedTrailingNewlines;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, trimPastedTrailingNewlines: bool) callconv(.c) void `
    ///
    pub fn onSetTrimPastedTrailingNewlines(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTrimPastedTrailingNewlines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTrimPastedTrailingNewlines` instead
    ///
    pub const SuperSetTrimPastedTrailingNewlines = superSetTrimPastedTrailingNewlines;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` trimPastedTrailingNewlines: bool `
    ///
    pub fn superSetTrimPastedTrailingNewlines(self: QTermWidget, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidget_SuperSetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn wordCharacters(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_WordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.wordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onWordCharacters` instead
    ///
    pub const OnWordCharacters = onWordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWordCharacters(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWordCharacters` instead
    ///
    pub const SuperWordCharacters = superWordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superWordCharacters(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperWordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.wordCharacters: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` chars: []const u8 `
    ///
    pub fn setWordCharacters(self: QTermWidget, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidget_SetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

    /// ### DEPRECATED: Use `onSetWordCharacters` instead
    ///
    pub const OnSetWordCharacters = onSetWordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, chars: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetWordCharacters(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWordCharacters` instead
    ///
    pub const SuperSetWordCharacters = superSetWordCharacters;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` chars: []const u8 `
    ///
    pub fn superSetWordCharacters(self: QTermWidget, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidget_SuperSetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` startnow: i32 `
    ///
    pub fn createWidget(self: QTermWidget, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidget_CreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, startnow: i32) callconv(.c) QTermWidgetInterface `
    ///
    pub fn onCreateWidget(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) QTermWidgetInterface) void {
        qtc.QTermWidget_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` startnow: i32 `
    ///
    pub fn superCreateWidget(self: QTermWidget, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidget_SuperCreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn finished(self: QTermWidget) void {
        qtc.QTermWidget_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onFinished(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyAvailable` instead
    ///
    pub const CopyAvailable = copyAvailable;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: bool `
    ///
    pub fn copyAvailable(self: QTermWidget, param1: bool) void {
        qtc.QTermWidget_CopyAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onCopyAvailable` instead
    ///
    pub const OnCopyAvailable = onCopyAvailable;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: bool) callconv(.c) void `
    ///
    pub fn onCopyAvailable(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `termGetFocus` instead
    ///
    pub const TermGetFocus = termGetFocus;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn termGetFocus(self: QTermWidget) void {
        qtc.QTermWidget_TermGetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTermGetFocus` instead
    ///
    pub const OnTermGetFocus = onTermGetFocus;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onTermGetFocus(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermGetFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `termLostFocus` instead
    ///
    pub const TermLostFocus = termLostFocus;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn termLostFocus(self: QTermWidget) void {
        qtc.QTermWidget_TermLostFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTermLostFocus` instead
    ///
    pub const OnTermLostFocus = onTermLostFocus;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onTermLostFocus(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermLostFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `termKeyPressed` instead
    ///
    pub const TermKeyPressed = termKeyPressed;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn termKeyPressed(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QTermWidget_TermKeyPressed(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTermKeyPressed` instead
    ///
    pub const OnTermKeyPressed = onTermKeyPressed;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onTermKeyPressed(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermKeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urlActivated` instead
    ///
    pub const UrlActivated = urlActivated;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QUrl `
    ///
    /// ` fromContextMenu: bool `
    ///
    pub fn urlActivated(self: QTermWidget, param1: anytype, fromContextMenu: bool) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.QTermWidget_UrlActivated(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromContextMenu);
    }

    /// ### DEPRECATED: Use `onUrlActivated` instead
    ///
    pub const OnUrlActivated = onUrlActivated;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QUrl, fromContextMenu: bool) callconv(.c) void `
    ///
    pub fn onUrlActivated(self: QTermWidget, callback: *const fn (QTermWidget, QUrl, bool) callconv(.c) void) void {
        qtc.QTermWidget_Connect_UrlActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bell` instead
    ///
    pub const Bell = bell;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` message: []const u8 `
    ///
    pub fn bell(self: QTermWidget, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QTermWidget_Bell(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onBell` instead
    ///
    pub const OnBell = onBell;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onBell(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Bell(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activity` instead
    ///
    pub const Activity = activity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn activity(self: QTermWidget) void {
        qtc.QTermWidget_Activity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActivity` instead
    ///
    pub const OnActivity = onActivity;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onActivity(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Activity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `silence` instead
    ///
    pub const Silence = silence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn silence(self: QTermWidget) void {
        qtc.QTermWidget_Silence(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSilence` instead
    ///
    pub const OnSilence = onSilence;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onSilence(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Silence(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sendData` instead
    ///
    pub const SendData = sendData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: i32 `
    ///
    pub fn sendData(self: QTermWidget, param1: [:0]const u8, param2: i32) void {
        const param1_Cstring = param1.ptr;
        qtc.QTermWidget_SendData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onSendData` instead
    ///
    pub const OnSendData = onSendData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: [*:0]const u8, param2: i32) callconv(.c) void `
    ///
    pub fn onSendData(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QTermWidget_Connect_SendData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `profileChanged` instead
    ///
    pub const ProfileChanged = profileChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` profile: []const u8 `
    ///
    pub fn profileChanged(self: QTermWidget, profile: []const u8) void {
        const profile_str = qtc.libqt_string{
            .len = profile.len,
            .data = profile.ptr,
        };
        qtc.QTermWidget_ProfileChanged(@ptrCast(self.ptr), profile_str);
    }

    /// ### DEPRECATED: Use `onProfileChanged` instead
    ///
    pub const OnProfileChanged = onProfileChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, profile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onProfileChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_ProfileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn titleChanged(self: QTermWidget) void {
        qtc.QTermWidget_TitleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivedData` instead
    ///
    pub const ReceivedData = receivedData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn receivedData(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_ReceivedData(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onReceivedData` instead
    ///
    pub const OnReceivedData = onReceivedData;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onReceivedData(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_ReceivedData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyClipboard` instead
    ///
    pub const CopyClipboard = copyClipboard;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn copyClipboard(self: QTermWidget) void {
        qtc.QTermWidget_CopyClipboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pasteClipboard` instead
    ///
    pub const PasteClipboard = pasteClipboard;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn pasteClipboard(self: QTermWidget) void {
        qtc.QTermWidget_PasteClipboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pasteSelection` instead
    ///
    pub const PasteSelection = pasteSelection;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn pasteSelection(self: QTermWidget) void {
        qtc.QTermWidget_PasteSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn zoomIn(self: QTermWidget) void {
        qtc.QTermWidget_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn zoomOut(self: QTermWidget) void {
        qtc.QTermWidget_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSize(self: QTermWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QTermWidget_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setKeyBindings` instead
    ///
    pub const SetKeyBindings = setKeyBindings;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` kb: []const u8 `
    ///
    pub fn setKeyBindings(self: QTermWidget, kb: []const u8) void {
        const kb_str = qtc.libqt_string{
            .len = kb.len,
            .data = kb.ptr,
        };
        qtc.QTermWidget_SetKeyBindings(@ptrCast(self.ptr), kb_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn clear(self: QTermWidget) void {
        qtc.QTermWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toggleShowSearchBar` instead
    ///
    pub const ToggleShowSearchBar = toggleShowSearchBar;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn toggleShowSearchBar(self: QTermWidget) void {
        qtc.QTermWidget_ToggleShowSearchBar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveHistory` instead
    ///
    pub const SaveHistory = saveHistory;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` device: QIODevice `
    ///
    pub fn saveHistory(self: QTermWidget, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QTermWidget_SaveHistory(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn resizeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QTermWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QTermWidget, callback: *const fn (QTermWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QTermWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `sessionFinished` instead
    ///
    pub const SessionFinished = sessionFinished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn sessionFinished(self: QTermWidget) void {
        qtc.QTermWidget_SessionFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSessionFinished` instead
    ///
    pub const OnSessionFinished = onSessionFinished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSessionFinished(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnSessionFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSessionFinished` instead
    ///
    pub const SuperSessionFinished = superSessionFinished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superSessionFinished(self: QTermWidget) void {
        qtc.QTermWidget_SuperSessionFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` textSelected: bool `
    ///
    pub fn selectionChanged(self: QTermWidget, textSelected: bool) void {
        qtc.QTermWidget_SelectionChanged(@ptrCast(self.ptr), textSelected);
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, textSelected: bool) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectionChanged` instead
    ///
    pub const SuperSelectionChanged = superSelectionChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` textSelected: bool `
    ///
    pub fn superSelectionChanged(self: QTermWidget, textSelected: bool) void {
        qtc.QTermWidget_SuperSelectionChanged(@ptrCast(self.ptr), textSelected);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn winId(self: QTermWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createWinId` instead
    ///
    pub const CreateWinId = createWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn createWinId(self: QTermWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalWinId` instead
    ///
    pub const InternalWinId = internalWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn internalWinId(self: QTermWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveWinId` instead
    ///
    pub const EffectiveWinId = effectiveWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn effectiveWinId(self: QTermWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn style(self: QTermWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QTermWidget, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isTopLevel(self: QTermWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isWindow(self: QTermWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isModal(self: QTermWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowModality` instead
    ///
    pub const WindowModality = windowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QTermWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowModality` instead
    ///
    pub const SetWindowModality = setWindowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QTermWidget, _windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(_windowModality));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isEnabled(self: QTermWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabledTo` instead
    ///
    pub const IsEnabledTo = isEnabledTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QTermWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QTermWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### DEPRECATED: Use `setWindowModified` instead
    ///
    pub const SetWindowModified = setWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QTermWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn frameGeometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn geometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalGeometry` instead
    ///
    pub const NormalGeometry = normalGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn normalGeometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn x(self: QTermWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn y(self: QTermWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn pos(self: QTermWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn frameSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn size(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn width(self: QTermWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn height(self: QTermWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn rect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn childrenRect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRegion` instead
    ///
    pub const ChildrenRegion = childrenRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn childrenRegion(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn minimumSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn maximumSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn minimumWidth(self: QTermWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn minimumHeight(self: QTermWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn maximumWidth(self: QTermWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn maximumHeight(self: QTermWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QTermWidget, _minimumSize: anytype) void {
        comptime _ = @TypeOf(_minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_minimumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QTermWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QTermWidget, _maximumSize: anytype) void {
        comptime _ = @TypeOf(_maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_maximumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QTermWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QTermWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QTermWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QTermWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QTermWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn sizeIncrement(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QTermWidget, _sizeIncrement: anytype) void {
        comptime _ = @TypeOf(_sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_sizeIncrement.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement2` instead
    ///
    pub const SetSizeIncrement2 = setSizeIncrement2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn baseSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QTermWidget, _baseSize: anytype) void {
        comptime _ = @TypeOf(_baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_baseSize.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize2` instead
    ///
    pub const SetBaseSize2 = setBaseSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QTermWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// ### DEPRECATED: Use `setFixedSize` instead
    ///
    pub const SetFixedSize = setFixedSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QTermWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// ### DEPRECATED: Use `setFixedSize2` instead
    ///
    pub const SetFixedSize2 = setFixedSize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFixedWidth` instead
    ///
    pub const SetFixedWidth = setFixedWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QTermWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setFixedHeight` instead
    ///
    pub const SetFixedHeight = setFixedHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QTermWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent2` instead
    ///
    pub const MapToParent2 = mapToParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent2` instead
    ///
    pub const MapFromParent2 = mapFromParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo` instead
    ///
    pub const MapTo = mapTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QTermWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo2` instead
    ///
    pub const MapTo2 = mapTo2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QTermWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom` instead
    ///
    pub const MapFrom = mapFrom;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QTermWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom2` instead
    ///
    pub const MapFrom2 = mapFrom2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QTermWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn window(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nativeParentWidget` instead
    ///
    pub const NativeParentWidget = nativeParentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn nativeParentWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn topLevelWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn palette(self: QTermWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QTermWidget, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundRole` instead
    ///
    pub const SetBackgroundRole = setBackgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QTermWidget, _backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(_backgroundRole));
    }

    /// ### DEPRECATED: Use `backgroundRole` instead
    ///
    pub const BackgroundRole = backgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QTermWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForegroundRole` instead
    ///
    pub const SetForegroundRole = setForegroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QTermWidget, _foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(_foregroundRole));
    }

    /// ### DEPRECATED: Use `foregroundRole` instead
    ///
    pub const ForegroundRole = foregroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QTermWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn font(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTermWidget, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn fontMetrics(self: QTermWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn fontInfo(self: QTermWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn cursor(self: QTermWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QTermWidget, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn unsetCursor(self: QTermWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMouseTracking` instead
    ///
    pub const SetMouseTracking = setMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasMouseTracking` instead
    ///
    pub const HasMouseTracking = hasMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn hasMouseTracking(self: QTermWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underMouse` instead
    ///
    pub const UnderMouse = underMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn underMouse(self: QTermWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabletTracking` instead
    ///
    pub const SetTabletTracking = setTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasTabletTracking` instead
    ///
    pub const HasTabletTracking = hasTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn hasTabletTracking(self: QTermWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QTermWidget, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `setMask2` instead
    ///
    pub const SetMask2 = setMask2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QTermWidget, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn mask(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearMask` instead
    ///
    pub const ClearMask = clearMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn clearMask(self: QTermWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QTermWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `grab` instead
    ///
    pub const Grab = grab;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn grab(self: QTermWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn graphicsEffect(self: QTermWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QTermWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QTermWidget, _windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = _windowTitle.len,
            .data = _windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// ### DEPRECATED: Use `setStyleSheet` instead
    ///
    pub const SetStyleSheet = setStyleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QTermWidget, _styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = _styleSheet.len,
            .data = _styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// ### DEPRECATED: Use `styleSheet` instead
    ///
    pub const StyleSheet = styleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.styleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setWindowIcon(self: QTermWidget, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `windowIcon` instead
    ///
    pub const WindowIcon = windowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn windowIcon(self: QTermWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowIconText` instead
    ///
    pub const SetWindowIconText = setWindowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QTermWidget, _windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = _windowIconText.len,
            .data = _windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// ### DEPRECATED: Use `windowIconText` instead
    ///
    pub const WindowIconText = windowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.windowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowRole` instead
    ///
    pub const SetWindowRole = setWindowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QTermWidget, _windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = _windowRole.len,
            .data = _windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// ### DEPRECATED: Use `windowRole` instead
    ///
    pub const WindowRole = windowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.windowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowFilePath` instead
    ///
    pub const SetWindowFilePath = setWindowFilePath;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QTermWidget, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `windowFilePath` instead
    ///
    pub const WindowFilePath = windowFilePath;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.windowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowOpacity` instead
    ///
    pub const SetWindowOpacity = setWindowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QTermWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `windowOpacity` instead
    ///
    pub const WindowOpacity = windowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn windowOpacity(self: QTermWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowModified` instead
    ///
    pub const IsWindowModified = isWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isWindowModified(self: QTermWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QTermWidget, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipDuration` instead
    ///
    pub const SetToolTipDuration = setToolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QTermWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `toolTipDuration` instead
    ///
    pub const ToolTipDuration = toolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn toolTipDuration(self: QTermWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QTermWidget, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QTermWidget, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accessibleName` instead
    ///
    pub const AccessibleName = accessibleName;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.accessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleName` instead
    ///
    pub const SetAccessibleName = setAccessibleName;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `accessibleDescription` instead
    ///
    pub const AccessibleDescription = accessibleDescription;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.accessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleDescription` instead
    ///
    pub const SetAccessibleDescription = setAccessibleDescription;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QTermWidget, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTermWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTermWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn unsetLayoutDirection(self: QTermWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QTermWidget, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn locale(self: QTermWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `unsetLocale` instead
    ///
    pub const UnsetLocale = unsetLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn unsetLocale(self: QTermWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isRightToLeft(self: QTermWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isLeftToRight(self: QTermWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn setFocus(self: QTermWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isActiveWindow(self: QTermWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activateWindow` instead
    ///
    pub const ActivateWindow = activateWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn activateWindow(self: QTermWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn clearFocus(self: QTermWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QTermWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QTermWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QTermWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn hasFocus(self: QTermWidget) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QWidget `
    ///
    pub fn setTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QTermWidget, _focusProxy: anytype) void {
        comptime _ = @TypeOf(_focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(_focusProxy.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn focusProxy(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contextMenuPolicy` instead
    ///
    pub const ContextMenuPolicy = contextMenuPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QTermWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContextMenuPolicy` instead
    ///
    pub const SetContextMenuPolicy = setContextMenuPolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QTermWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn grabMouse(self: QTermWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse2` instead
    ///
    pub const GrabMouse2 = grabMouse2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `releaseMouse` instead
    ///
    pub const ReleaseMouse = releaseMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn releaseMouse(self: QTermWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn grabKeyboard(self: QTermWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `releaseKeyboard` instead
    ///
    pub const ReleaseKeyboard = releaseKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn releaseKeyboard(self: QTermWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QTermWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QTermWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QTermWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QTermWidget, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `mouseGrabber` instead
    ///
    pub const MouseGrabber = mouseGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn mouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// ### DEPRECATED: Use `keyboardGrabber` instead
    ///
    pub const KeyboardGrabber = keyboardGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn keyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// ### DEPRECATED: Use `updatesEnabled` instead
    ///
    pub const UpdatesEnabled = updatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn updatesEnabled(self: QTermWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpdatesEnabled` instead
    ///
    pub const SetUpdatesEnabled = setUpdatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `graphicsProxyWidget` instead
    ///
    pub const GraphicsProxyWidget = graphicsProxyWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn graphicsProxyWidget(self: QTermWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn update(self: QTermWidget) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaint` instead
    ///
    pub const Repaint = repaint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn repaint(self: QTermWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QTermWidget, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `update3` instead
    ///
    pub const Update3 = update3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `update4` instead
    ///
    pub const Update4 = update4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint2` instead
    ///
    pub const Repaint2 = repaint2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QTermWidget, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `repaint3` instead
    ///
    pub const Repaint3 = repaint3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint4` instead
    ///
    pub const Repaint4 = repaint4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QTermWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn show(self: QTermWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn hide(self: QTermWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn showMinimized(self: QTermWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn showMaximized(self: QTermWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn showFullScreen(self: QTermWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn showNormal(self: QTermWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn close(self: QTermWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn raise(self: QTermWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn lower(self: QTermWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stackUnder` instead
    ///
    pub const StackUnder = stackUnder;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QTermWidget, _x: i32, _y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QTermWidget, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QTermWidget, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `saveGeometry` instead
    ///
    pub const SaveGeometry = saveGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QTermWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QTermWidget.saveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreGeometry` instead
    ///
    pub const RestoreGeometry = restoreGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QTermWidget, _geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = _geometry.len,
            .data = _geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn adjustSize(self: QTermWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isVisible(self: QTermWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QTermWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isHidden(self: QTermWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMinimized` instead
    ///
    pub const IsMinimized = isMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isMinimized(self: QTermWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMaximized` instead
    ///
    pub const IsMaximized = isMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isMaximized(self: QTermWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFullScreen` instead
    ///
    pub const IsFullScreen = isFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn isFullScreen(self: QTermWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QTermWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QTermWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `overrideWindowState` instead
    ///
    pub const OverrideWindowState = overrideWindowState;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QTermWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn sizePolicy(self: QTermWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QTermWidget, _sizePolicy: anytype) void {
        comptime _ = @TypeOf(_sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(_sizePolicy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QTermWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `visibleRegion` instead
    ///
    pub const VisibleRegion = visibleRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn visibleRegion(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QTermWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QTermWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn contentsMargins(self: QTermWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn contentsRect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn layout(self: QTermWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QTermWidget, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn updateGeometry(self: QTermWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QTermWidget, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setParent2` instead
    ///
    pub const SetParent2 = setParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QTermWidget, _parent: anytype, f: i32) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QTermWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QTermWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn focusWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextInFocusChain` instead
    ///
    pub const NextInFocusChain = nextInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn nextInFocusChain(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousInFocusChain` instead
    ///
    pub const PreviousInFocusChain = previousInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn previousInFocusChain(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn acceptDrops(self: QTermWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QTermWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QTermWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QTermWidget, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QTermWidget, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QTermWidget, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QTermWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QTermWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QTermWidget.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: QTermWidget, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QTermWidget, _icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction4` instead
    ///
    pub const AddAction4 = addAction4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QTermWidget, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `addAction5` instead
    ///
    pub const AddAction5 = addAction5;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QTermWidget, _icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn parentWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QTermWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlag` instead
    ///
    pub const SetWindowFlag = setWindowFlag;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QTermWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `overrideWindowFlags` instead
    ///
    pub const OverrideWindowFlags = overrideWindowFlags;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QTermWidget) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QTermWidget, _x: i32, _y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `childAt2` instead
    ///
    pub const ChildAt2 = childAt2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QTermWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt3` instead
    ///
    pub const ChildAt3 = childAt3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QTermWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QTermWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QTermWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ensurePolished(self: QTermWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QTermWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn autoFillBackground(self: QTermWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QTermWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `backingStore` instead
    ///
    pub const BackingStore = backingStore;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn backingStore(self: QTermWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowHandle` instead
    ///
    pub const WindowHandle = windowHandle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn windowHandle(self: QTermWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn screen(self: QTermWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QTermWidget, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `createWindowContainer` instead
    ///
    pub const CreateWindowContainer = createWindowContainer;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn createWindowContainer(_window: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QTermWidget, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconChanged` instead
    ///
    pub const WindowIconChanged = windowIconChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn windowIconChanged(self: QTermWidget, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `onWindowIconChanged` instead
    ///
    pub const OnWindowIconChanged = onWindowIconChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QTermWidget, callback: *const fn (QTermWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconTextChanged` instead
    ///
    pub const WindowIconTextChanged = windowIconTextChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QTermWidget, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// ### DEPRECATED: Use `onWindowIconTextChanged` instead
    ///
    pub const OnWindowIconTextChanged = onWindowIconTextChanged;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customContextMenuRequested` instead
    ///
    pub const CustomContextMenuRequested = customContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QTermWidget, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onCustomContextMenuRequested` instead
    ///
    pub const OnCustomContextMenuRequested = onCustomContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QTermWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QTermWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `render22` instead
    ///
    pub const Render22 = render22;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QTermWidget, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QTermWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render4` instead
    ///
    pub const Render4 = render4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: QTermWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `render23` instead
    ///
    pub const Render23 = render23;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QTermWidget, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render32` instead
    ///
    pub const Render32 = render32;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QTermWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render42` instead
    ///
    pub const Render42 = render42;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: QTermWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `grab1` instead
    ///
    pub const Grab1 = grab1;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QTermWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QTermWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QTermWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QTermWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QTermWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setWindowFlag2` instead
    ///
    pub const SetWindowFlag2 = setWindowFlag2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QTermWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QTermWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `createWindowContainer2` instead
    ///
    pub const CreateWindowContainer2 = createWindowContainer2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWindowContainer2(_window: anytype, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(_window.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createWindowContainer3` instead
    ///
    pub const CreateWindowContainer3 = createWindowContainer3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createWindowContainer3(_window: anytype, _parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(_window.ptr), @ptrCast(_parent.ptr), @bitCast(flags)) };
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
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTermWidget.objectName: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTermWidget, name: []const u8) void {
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
    /// ` self: QTermWidget `
    ///
    pub fn isWidgetType(self: QTermWidget) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn isWindowType(self: QTermWidget) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn isQuickItemType(self: QTermWidget) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn signalsBlocked(self: QTermWidget) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTermWidget, b: bool) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn thread(self: QTermWidget) QThread {
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
    /// ` self: QTermWidget `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTermWidget, _thread: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTermWidget, interval: i32) i32 {
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
    /// ` self: QTermWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTermWidget, time: i64) i32 {
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
    /// ` self: QTermWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTermWidget, id: i32) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTermWidget, id: i32) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTermWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTermWidget.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
    /// ` self: QTermWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTermWidget, filterObj: anytype) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTermWidget, obj: anytype) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTermWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTermWidget `
    ///
    pub fn disconnect3(self: QTermWidget) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTermWidget, receiver: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn dumpObjectTree(self: QTermWidget) void {
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
    /// ` self: QTermWidget `
    ///
    pub fn dumpObjectInfo(self: QTermWidget) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTermWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTermWidget, name: [:0]const u8) QVariant {
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
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTermWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTermWidget.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTermWidget.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    pub fn bindingStorage(self: QTermWidget) QBindingStorage {
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
    /// ` self: QTermWidget `
    ///
    pub fn bindingStorage2(self: QTermWidget) QBindingStorage {
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
    /// ` self: QTermWidget `
    ///
    pub fn destroyed(self: QTermWidget) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
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
    /// ` self: QTermWidget `
    ///
    pub fn parent(self: QTermWidget) QObject {
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
    /// ` self: QTermWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTermWidget, classname: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn deleteLater(self: QTermWidget) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTermWidget, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTermWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTermWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTermWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTermWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTermWidget, signal: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTermWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTermWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTermWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTermWidget, param1: anytype) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTermWidget, callback: *const fn (QTermWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn paintingActive(self: QTermWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn widthMM(self: QTermWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn heightMM(self: QTermWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn logicalDpiX(self: QTermWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn logicalDpiY(self: QTermWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn physicalDpiX(self: QTermWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn physicalDpiY(self: QTermWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn devicePixelRatio(self: QTermWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn devicePixelRatioF(self: QTermWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn colorCount(self: QTermWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn depth(self: QTermWidget) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTermWidgetInterface
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QTermWidgetInterface `
    ///
    pub fn operatorAssign(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTermWidgetInterface;
        qtc.QTermWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn devType(self: QTermWidget) i32 {
        return qtc.QTermWidget_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superDevType(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QTermWidget, visible: bool) void {
        qtc.QTermWidget_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QTermWidget, visible: bool) void {
        qtc.QTermWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn minimumSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superMinimumSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTermWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) i32) void {
        qtc.QTermWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn hasHeightForWidth(self: QTermWidget) bool {
        return qtc.QTermWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superHasHeightForWidth(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn paintEngine(self: QTermWidget) QPaintEngine {
        return .{ .ptr = qtc.QTermWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superPaintEngine(self: QTermWidget) QPaintEngine {
        return .{ .ptr = qtc.QTermWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QTermWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTermWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTermWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTermWidget_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTermWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTermWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) bool) void {
        qtc.QTermWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QTermWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.QTermWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QTermWidget, callback: *const fn (QTermWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTermWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTermWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTermWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QTermWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTermWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTermWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QTermWidget, callback: *const fn (QTermWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTermWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QTermWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QTermWidget, callback: *const fn (QTermWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enterEvent` instead
    ///
    pub const EnterEvent = enterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTermWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEnterEvent` instead
    ///
    pub const SuperEnterEvent = superEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QTermWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEnterEvent` instead
    ///
    pub const OnEnterEvent = onEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `leaveEvent` instead
    ///
    pub const LeaveEvent = leaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTermWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superLeaveEvent` instead
    ///
    pub const SuperLeaveEvent = superLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTermWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveEvent` instead
    ///
    pub const OnLeaveEvent = onLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QTermWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.QTermWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QTermWidget, callback: *const fn (QTermWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTermWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QTermWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTermWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QTermWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.QTermWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.QTermWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QTermWidget, callback: *const fn (QTermWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTermWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QTermWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QTermWidget, callback: *const fn (QTermWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionEvent` instead
    ///
    pub const ActionEvent = actionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTermWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superActionEvent` instead
    ///
    pub const SuperActionEvent = superActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QTermWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onActionEvent` instead
    ///
    pub const OnActionEvent = onActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QTermWidget, callback: *const fn (QTermWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTermWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QTermWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTermWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.QTermWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTermWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.QTermWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTermWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QTermWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTermWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QTermWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QTermWidget, callback: *const fn (QTermWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTermWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QTermWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QTermWidget, callback: *const fn (QTermWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QTermWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTermWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QTermWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTermWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QTermWidget, callback: *const fn (QTermWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTermWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn changeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTermWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superChangeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTermWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) i32) void {
        qtc.QTermWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTermWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTermWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QTermWidget, callback: *const fn (QTermWidget, QPainter) callconv(.c) void) void {
        qtc.QTermWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QTermWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QTermWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTermWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn sharedPainter(self: QTermWidget) QPainter {
        return .{ .ptr = qtc.QTermWidget_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superSharedPainter(self: QTermWidget) QPainter {
        return .{ .ptr = qtc.QTermWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QTermWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTermWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTermWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTermWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QTermWidget, callback: *const fn (QTermWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QTermWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.QTermWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QTermWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.QTermWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) QVariant) void {
        qtc.QTermWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QTermWidget, next: bool) bool {
        return qtc.QTermWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QTermWidget, next: bool) bool {
        return qtc.QTermWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTermWidget, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTermWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTermWidget, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTermWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTermWidget, callback: *const fn (QTermWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTermWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTermWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTermWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTermWidget, callback: *const fn (QTermWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTermWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTermWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTermWidget, callback: *const fn (QTermWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTermWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTermWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTermWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTermWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTermWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn updateMicroFocus(self: QTermWidget) void {
        qtc.QTermWidget_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superUpdateMicroFocus(self: QTermWidget) void {
        qtc.QTermWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn create(self: QTermWidget) void {
        qtc.QTermWidget_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superCreate(self: QTermWidget) void {
        qtc.QTermWidget_SuperCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn destroy(self: QTermWidget) void {
        qtc.QTermWidget_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDestroy` instead
    ///
    pub const SuperDestroy = superDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superDestroy(self: QTermWidget) void {
        qtc.QTermWidget_SuperDestroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroy` instead
    ///
    pub const OnDestroy = onDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextChild` instead
    ///
    pub const FocusNextChild = focusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn focusNextChild(self: QTermWidget) bool {
        return qtc.QTermWidget_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusNextChild` instead
    ///
    pub const SuperFocusNextChild = superFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superFocusNextChild(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusNextChild` instead
    ///
    pub const OnFocusNextChild = onFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPreviousChild` instead
    ///
    pub const FocusPreviousChild = focusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn focusPreviousChild(self: QTermWidget) bool {
        return qtc.QTermWidget_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusPreviousChild` instead
    ///
    pub const SuperFocusPreviousChild = superFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn superFocusPreviousChild(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusPreviousChild` instead
    ///
    pub const OnFocusPreviousChild = onFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn sender(self: QTermWidget) QObject {
        return .{ .ptr = qtc.QTermWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTermWidget `
    ///
    pub fn superSender(self: QTermWidget) QObject {
        return .{ .ptr = qtc.QTermWidget_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTermWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTermWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn senderSignalIndex(self: QTermWidget) i32 {
        return qtc.QTermWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTermWidget `
    ///
    pub fn superSenderSignalIndex(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTermWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTermWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTermWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTermWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTermWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTermWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTermWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTermWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTermWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTermWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QTermWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTermWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QTermWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTermWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget`
    ///
    /// ` callback: *const fn (self: QTermWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTermWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn delete(self: QTermWidget) void {
        qtc.QTermWidget_Delete(@ptrCast(self.ptr));
    }
};
